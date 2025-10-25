params ["_side"];

if !(_side in [west, east]) then {
	private _independentSectors = BIS_WL_allSectors select {
		(_x getVariable ["BIS_WL_owner", independent]) == independent
	};
	selectRandom _independentSectors;
} else {
	if ((WL2_base1 getVariable "BIS_WL_originalOwner") == _side) then {
		WL2_base1;
	} else {
		WL2_base2;
	};
};