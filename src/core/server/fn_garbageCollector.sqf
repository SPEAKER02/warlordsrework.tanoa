private _list = serverNamespace getVariable ["garbageCollector", createHashMap];
private _staticsList = serverNamespace getVariable ["WL2_staticsGarbageCollector", createHashMap];
while {!BIS_WL_missionEnd} do {

	private _collectables = (allMissionObjects "") select {
		private _isWreck = _x getEntityInfo 12;
		private _isDeadSet = _x getEntityInfo 2;
		private _isWeaponHolder = _x getEntityInfo 11;
		private _isInBasicList = _list getOrDefault [typeOf _x, false];
		private _assetActualType = _x getVariable ["WL2_orderedClass", typeOf _x];
		private _isInStaticsList = _staticsList getOrDefault [_assetActualType, false] && !(alive _x);
		_isWreck || _isDeadSet || _isWeaponHolder || _isInBasicList || _isInStaticsList;
	};

	{
		if (typeOf _x == "Steerable_Parachute_F") then {
			private _occupied = count (crew _x select {alive _x}) > 0;
			if (!_occupied) then {
				deleteVehicle _x;
			};
		} else {
			deleteVehicle _x;
		};
	} forEach _collectables;

	private _simpleObjects = allSimpleObjects [];
	{
		private _modelInfo = getModelInfo _x;
		private _modelName = _modelInfo # 0;
		if (_modelName == "b_ArundoD3s_F.p3d") then {
			private _placedTime = _x getVariable ["WL2_placedTime", 0];
			if ((serverTime - _placedTime) > 300) then {
				deleteVehicle _x;
			};
		};
	} forEach _simpleObjects;

	sleep 60;
};