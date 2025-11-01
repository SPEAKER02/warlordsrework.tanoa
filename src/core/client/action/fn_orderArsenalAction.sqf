#include "..\..\warlords_constants.inc"
params ["_asset"];

private _index = _asset addAction [
  "",	// title
	{
    params ["_asset", "_caller"];    
    //0 remoteExec ["WL2_fnc_orderArsenal", player];
    _caller remoteExec ["WL2_fnc_orderArsenal", _caller];
	},
	[],		// arguments
	15,		// priority
	true,		// showWindow
	true,		// hideOnUse
	"",			// shortcut
	"alive _target",		// condition
	50,			// radius
	true		// unconscious
];

_asset setUserActionText [_index, "<t color = '#4bff58'>Acces Arsenal</t>"];
