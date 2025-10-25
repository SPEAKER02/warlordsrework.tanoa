#include "includes.inc"
params ["_showWarning"];

private _asset = uiNamespace getVariable "WLM_asset";
private _display = findDisplay WLM_DISPLAY;

private _access = [_asset, player, "full"] call WL2_fnc_accessControl;
if !(_access # 0) exitWith {
    systemChat format ["Cannot apply loadout: %1", _access # 1];
    playSound "AddItemFailed";
    _display closeDisplay 1;
};

private _pylonConfig = configFile >> "CfgVehicles" >> typeOf _asset >> "Components" >> "TransportPylonsComponent";
private _pylonsInfo = configProperties [_pylonConfig >> "pylons"];

private _currentPylonInfo = getAllPylonsInfo _asset;
private _eligibleFreeRearm = [_asset, true] call WLM_fnc_calculateFreeRearmEligibility;

if (_showWarning && !_eligibleFreeRearm) exitWith {
    private _confirmDialog = _display createDisplay "WLM_Modal_Dialog";

    private _titleControl = _confirmDialog displayCtrl WLM_MODAL_TITLE;
    _titleControl ctrlSetText (localize "STR_WLM_PYLON_APPLY_WARNING");

    private _textControl = _confirmDialog displayCtrl WLM_MODAL_TEXT;
    _textControl ctrlSetText (localize "STR_WLM_APPLY_PYLONS_AMMO_WARNING");

    private _confirmButtonControl = _confirmDialog displayCtrl WLM_MODAL_CONFIRM_BUTTON;
    private _cancelButtonContrl = _confirmDialog displayCtrl WLM_MODAL_EXIT_BUTTON;

    _confirmButtonControl ctrlSetText (localize "STR_WLM_APPLY");
    _confirmButtonControl ctrlSetTooltip (localize "STR_WLM_APPLY_SELECTED_PYLONS");

    _cancelButtonContrl ctrlSetTooltip (localize "STR_WLM_RETURN_PREVIOUS_SCREEN");

    _cancelButtonContrl ctrlAddEventHandler ["ButtonClick", {
        (findDisplay WLM_MODAL) closeDisplay 1;
    }];
    _confirmButtonControl ctrlAddEventHandler ["ButtonClick", {
        (findDisplay WLM_MODAL) closeDisplay 1;
        [false] call WLM_fnc_applyLoadoutAircraft;
    }];
};

private _attachments = [];
{
    private _pylonCtrl = _display displayCtrl (WLM_PYLON_START + _forEachIndex);
    private _currentSelection = lbCurSel _pylonCtrl;

    private _pylonUserCtrl = _display displayCtrl (WLM_PYLON_USER_START + _forEachIndex);
    private _userIsPilot = ctrlTooltip _pylonUserCtrl == "Control: Pilot";
    private _turret = if (_userIsPilot) then {
        []
    } else {
        [0]
    };

    private _attachment = _pylonCtrl lbData _currentSelection;
    _attachments pushBack [_attachment, _turret];
} forEach _pylonsInfo;

_asset setVariable ["WLM_assetAttachments", _attachments, true];

[_asset, _attachments, _eligibleFreeRearm] remoteExec ["WLM_fnc_applyPylon", _asset];

[_attachments, _asset] spawn {
    params ["_attachments", "_asset"];
    {
        private _successSound = selectRandom ['FD_Target_PopDown_Large_F','FD_Target_PopDown_Small_F','FD_Target_PopUp_Small_F'];
        private _soundPath = getArray (configfile >> "CfgSounds" >> _successSound >> "sound");
        playSound3D [_soundPath # 0, _asset, false, getPosASL _asset, random [1.8, 2.0, 2.2], random [1.8, 2.0, 2.2], 50];
        sleep 0.1;
    } forEach _attachments;
};

if (_eligibleFreeRearm) then {
    playSound3D ["A3\Sounds_F\sfx\UI\vehicles\Vehicle_Rearm.wss", _asset, false, getPosASL _asset, 2, 1, 75];
    [toUpper localize "STR_A3_WL_popup_asset_rearmed"] spawn WL2_fnc_smoothText;
};