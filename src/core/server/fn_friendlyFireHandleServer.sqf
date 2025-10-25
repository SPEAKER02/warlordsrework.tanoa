params ["_unit", "_responsibleLeader"];

private _uid = _unit getVariable ["BIS_WL_ownerAsset", "123"];
if (_uid == "123" || {_uid == (getPlayerUID _responsibleLeader)}) exitWith {};
private _victim = _uid call BIS_fnc_getUnitByUid;
private _owner = owner _victim;
if (_owner <= 2) exitWith {};

if (_unit isKindOf "Man") then {
	if ((group _unit) != (group _responsibleLeader)) then {
		if (side (group _unit) == side (group _responsibleLeader)) then {
			[_responsibleLeader, _unit] remoteExec ["WL2_fnc_askForgiveness", _owner];
		};
	};
} else {
	private _typeSide = switch (getNumber (configFile >> "CfgVehicles" >> typeOf _unit >> "side")) do {
		case 0: { east };
		case 1: { west };
		case 2: { independent };
		default { independent };
	};
	private _sideOwner = _unit getVariable ["BIS_WL_ownerAssetSide", _typeSide];

	private _crew = (crew _unit) select { alive _x };
	private _sideCrew = (if ((count _crew) > 0) then {side (group (_crew # 0))} else {_sideOwner});

	if (_sideOwner == side (group _responsibleLeader) && {_sideOwner == _sideCrew}) then {
		[_responsibleLeader, _unit] remoteExec ["WL2_fnc_askForgiveness", _owner];
	};
};