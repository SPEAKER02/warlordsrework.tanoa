#include "..\..\warlords_constants.inc"

private _mostVotedVar = format ["BIS_WL_mostVoted_%1", BIS_WL_playerSide];
private _voteTallyDisplayVar = format ["BIS_WL_sectorVoteTallyDisplay_%1", BIS_WL_playerSide];

private _voteDisplay = uiNamespace getVariable ["RscWLVoteDisplay", objNull];
if (isNull _voteDisplay) then {
    "VoteDisplay" cutRsc ["RscWLVoteDisplay", "PLAIN", -1, true, false];
    _voteDisplay = uiNamespace getVariable "RscWLVoteDisplay";
};

private _indicator = _voteDisplay displayCtrl 7002;
private _indicatorBackground = _voteDisplay displayCtrl 7003;

private _sortedVoteList = missionNamespace getVariable [_voteTallyDisplayVar, []];
private _mostVoted = missionNamespace getVariable [_mostVotedVar, []];
private _eta = if (count _mostVoted > 0) then {
    round (_mostVoted # 1 - serverTime);
} else {
    -1;
};
private _etaDisplay = if (_eta >= 0) then {
    format ["<t size='2' align='center'>%1s</t>", _eta];
} else {
    "Waiting...";
};

private _displayText = format ["<t size='1.8' align='center'>%1</t><br/>%2<br/>", localize "STR_WL2_VOTE_IN_PROGRESS", _etaDisplay];

{
    private _vote = _x # 0;
    private _voteCount = _x # 1;

    private _sectorName = _vote getVariable ["WL2_name", "???"];
    private _isSectorRevealed = BIS_WL_playerSide in (_vote getVariable ["BIS_WL_revealedBy", []]);

    private _color = if (_isSectorRevealed) then {
        private _sectorOwner = _vote getVariable ["BIS_WL_owner", independent];
        ['#004d99', '#7f0400', '#007f04'] # ([west, east, independent] find _sectorOwner);
    } else {
        '#ffff00';
    };

    _voteCount = if (_voteCount < 1000) then {
        _voteCount;
    } else {
        if (_voteCount < 9500) then {
            format ["%1K", (_voteCount / 1000) toFixed 1];
        } else {
            format ["%1K", round (_voteCount / 1000)];
        };
    };
    _displayText = _displayText + format [
        "<t size='1.2' align='center' color='%1' shadow='2'>%2: %3 pts</t><br/>",
        _color, _vote getVariable ["WL2_name", "Sector"], _voteCount
    ];
} forEach _sortedVoteList;

_indicator ctrlSetStructuredText (parseText _displayText);

private _indicatorHeight = (0.15 + (count _sortedVoteList) * 0.04) min 0.33;
_indicatorBackground ctrlSetPositionH _indicatorHeight;
_indicatorBackground ctrlSetBackgroundColor [0, 0, 0, 0.7];
_indicatorBackground ctrlCommit 0;

private _settingsMap = profileNamespace getVariable ["WL2_settings", createHashMap];
private _voteVolume = _settingsMap getOrDefault ["voteVolume", 1];
if (_voteVolume > 0) then {
    if (_eta <= 10 && _eta >= 0) then {
        private _volume = 6 - (_eta / 2);
        playSoundUI ["a3\ui_f\data\sound\readout\readouthideclick1.wss", _volume * _voteVolume];
    };
};