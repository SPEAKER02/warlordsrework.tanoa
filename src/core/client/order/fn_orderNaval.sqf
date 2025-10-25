#include "..\..\warlords_constants.inc"

params ["_class", "_cost"];

"Dropzone" call WL2_fnc_announcer;
[toUpper localize "STR_A3_WL_popup_airdrop_selection_water"] spawn WL2_fnc_smoothText;
if !(visibleMap) then {
	processDiaryLink createDiaryLink ["Map", player, ""];
	WL_CONTROL_MAP ctrlMapAnimAdd [0, 0.1, player];
	ctrlMapAnimCommit WL_CONTROL_MAP;
};
BIS_WL_waterDropPos = [];
private _selectionBefore = BIS_WL_currentSelection;
BIS_WL_currentSelection = WL_ID_SELECTION_ORDERING_NAVAL;
WL_MapBusy pushBack "orderNaval";
sleep WL_TIMEOUT_SHORT;

_mapClickEH = addMissionEventHandler ["MapSingleClick", {
	params ["_units", "_pos", "_alt", "_shift"];
	_thisArgs params ["_class"];

	private _cancel = false;
	switch (_class) do {
		case "B_Boat_Armed_01_autocannon_F";
		case "O_Boat_Armed_01_autocannon_F": {
			private _sectorsInRange = (BIS_WL_sectorsArray # 0) findIf {
				_pos distance _x < 4000 && "W" in (_x getVariable ["WL2_services", []]);
			};
			if (_sectorsInRange == -1) then {
				playSound "AddItemFailed";
				systemChat "Heavy attack boat must be within 4 km of an owned harbor.";
				_cancel = true;
			};
		};
		case "B_Boat_Transport_02_F";
		case "O_Boat_Transport_02_F": {
			private _sectorsInRange = (BIS_WL_sectorsArray # 0) findIf {
				_pos distance _x < 1500;
			};
			if (_sectorsInRange == -1) then {
				playSound "AddItemFailed";
				systemChat "Supply boat must be within 1.5 km of an owned harbor.";
				_cancel = true;
			};
		};
	};

	if (surfaceIsWater _pos && !_cancel) then {
		BIS_WL_waterDropPos = _pos;
	} else {
		playSound "AddItemFailed";
	};
}, [_class]];

waitUntil {
	sleep WL_TIMEOUT_MIN;
	count BIS_WL_waterDropPos > 0 || !visibleMap;
};

if (BIS_WL_currentSelection == WL_ID_SELECTION_ORDERING_NAVAL) then {
	BIS_WL_currentSelection = _selectionBefore;
};

removeMissionEventHandler ["MapSingleClick", _mapClickEH];

if (count BIS_WL_waterDropPos == 0) exitWith {
	"Canceled" call WL2_fnc_announcer;
	[toUpper localize "STR_A3_WL_airdrop_canceled"] spawn WL2_fnc_smoothText;

	sleep 1;
	WL_MapBusy = WL_MapBusy - ["orderNaval"];
};

if (BIS_WL_waterDropPos distance2D player <= 300) then {
	playSound3D ["A3\Data_F_Warlords\sfx\flyby.wss", objNull, false, [BIS_WL_waterDropPos # 0, BIS_WL_waterDropPos # 1, 100]];
};

BIS_WL_waterDropPos set [2, 0];
"Airdrop" call WL2_fnc_announcer;
[toUpper localize "STR_A3_WL_airdrop_underway"] spawn WL2_fnc_smoothText;
playSound "AddItemOK";

[player, "orderAsset", "naval", BIS_WL_waterDropPos, _class, false] remoteExec ["WL2_fnc_handleClientRequest", 2];

sleep 1;
WL_MapBusy = WL_MapBusy - ["orderNaval"];