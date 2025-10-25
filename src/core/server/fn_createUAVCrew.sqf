params ["_pos", "_class", "_orderedClass", "_direction", "_exactPosition", "_sender"];

private _vehCfg = configFile >> "CfgVehicles" >> _class;
private _crewCount = {
	round getNumber (_x >> "dontCreateAI") < 1 &&
	((_x == _vehCfg && { round getNumber (_x >> "hasDriver") > 0 }) ||
	(_x != _vehCfg && { round getNumber (_x >> "hasGunner") > 0 }))
} count ([_class, configNull] call BIS_fnc_getTurrets);
private _myArray = [0];
_myArray resize _crewCount;

_asset = [_class, _orderedClass, _pos, _direction, _exactPosition] call WL2_fnc_createVehicleCorrectly;

private _side = if (isNull _sender) then {
	independent;
} else {
	side group _sender;
};
private _assetGrp = createGroup _side;

private _aiUnit = switch (_side) do {
	case west: {
		"B_UAV_AI"
	};
	case east: {
		"O_UAV_AI"
	};
	case independent: {
		"I_UAV_AI"
	};
};

{
	private _unit = _assetGrp createUnit [_aiUnit, _pos, [], 0, "NONE"];
	_unit moveInAny _asset;
	if (!isNull _sender) then {
		_unit setSkill 1;
		_unit setVariable ["BIS_WL_ownerAsset", getPlayerUID _sender, [2, clientOwner]];
	};
} forEach _myArray;
_assetGrp deleteGroupWhenEmpty true;

_asset;