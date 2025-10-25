
/*** Текст вiтання ***/ 
0 spawn { 
	sleep 60; 
	[  
	[  
	["Менi впадлу щось сюди придумувати", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
	["Тому включiть собi Смарагдове небо", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
	["Будьте чемними", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"]  
	]  
	] spawn BIS_fnc_typeText; 
	};

0 spawn {
    sleep 70;
    if (!isServer) exitWith {};
    
    private _fundsDatabase = serverNamespace getVariable ["fundsDatabase", createHashMap];
    private _processedPlayers = serverNamespace getVariable ["processedPlayers", createHashMap];
    
    private _sponsorList = [
        [["76561198038090048","76561198177462017"], 50000],
        [["76561199123672321", "76561198088869591"], 20000],
        [["76561198044973751", "76561198870551967", "76561198851811045", "76561199170309997", "76561198295589697", "76561198893851208","76561198177281379"], 10000],
        [["76561198157847482", "76561199583962314", "76561199047178259", "76561199679105583"], 5000],
        [["76561198119112806", "76561199059201175", "76561199390473523", "76561199047285672", "76561199163040194"], 3000]
    ];
    
    {
        private _ids = _x select 0;
        private _amount = _x select 1;
        {
            if (!(_x in _processedPlayers)) then {
                _fundsDatabase set [_x, _amount];
                _processedPlayers set [_x, true];
            };
        } forEach _ids;
    } forEach _sponsorList;
    
    serverNamespace setVariable ["fundsDatabase", _fundsDatabase];
    serverNamespace setVariable ["processedPlayers", _processedPlayers];
};

call WL2_fnc_initCommon;


