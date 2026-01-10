#include "script_component.hpp"
#include "\z\ace\addons\arsenal\defines.hpp"
params ["_unit"];

_unit allowDamage false;

private _loadout = profileNamespace getVariable QGVAR(missionLastLoadout);

if (!isNil "_loadout") then {
    [_unit, _loadout] call CBA_fnc_setLoadout;
};


0 setOvercast 1;   
0 setRain 1;   
0 setFog 0.3;  
setHumidity 1;  
enableEnvironment [false, true];   
forceWeatherChange;   
setRain [   
 "a3\data_f\snowflake4_ca.paa",   
 1,   
 0.01,   
 15,    
 0.1,    
 2,    
 0.5,    
 0.5,    
 0.02,    
 0.02,    
 [0.1, 0.1, 0.1, 1],    
 0.1,    
 0.1,   
 5.5,   
 0.3,   
 true,  
 false   
];

player switchMove "Acts_AidlPercMstpSloWWpstDnon_warmup_1";
[{!isNull findDisplay IDD_MISSION}, {
    [_this, _this, true] call FUNC(openBox);
}, _unit] call CBA_fnc_waitUntilAndExecute;

fnc_dynamicFlyovers = {
	_target = selectRandom( allPlayers - entities "HeadlessClient_F");
	_radius = 4000;

	_randAngle = random 360;
	_randAngleOpposite = _randAngle - 180;
	_randomSquareRoot = sqrt random 1;
	_distance = _radius * _randomSquareRoot;
	_position = _target getPos [_distance, _randAngle];
	_positionOpposite = _target getPos [_distance, _randAngleOpposite];
    _vehicle = ["3AS_Gozanti_F", "345th_Laat_MK1", "3AS_BTLB_Bomber", "3AS_LAAT_Mk1Lights"] selectRandomWeighted [0.1,0.7,0.7,0.7];
	_height = random [100,150,200];

	[_position, _positionOpposite, _height, "NORMAL", _vehicle, west] call BIS_fnc_ambientFlyby;
};


[] spawn {
	while {true} do {
		call fnc_dynamicFlyovers;
		uiSleep (400 + random 200);
	};
};
sleep 1;
setTimeMultiplier 0.1;
setTimeMultiplier 0;
