
fnc_SB_Flak = {  
    params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];  
  
    private ["_range","_target","_id"];  
        _range = nil;  
        _target = 0;  
        _randomValue = 0;  
        _flakExplosion = "HelicopterExploBig";  
        if (_flakExplosion != "") then {      
            if (isPlayer _gunner) then {  
                    _range = _unit getVariable ["ML_700_flak_range",500];  
            } else {  
                _possTar = _gunner targets [true];  
                reverse _possTar;  
                _range = 8000;  
                if ((count _possTar) > 0) then {  
                    _i = 0;  
                    _hold = 100;  
                    {      
                        _i = vectorMagnitude ((_unit weaponDirection (Currentweapon _unit)) vectorDiff ((getPosASL _unit) vectorFromTo (getPosASL _x)));  
                        if (_i < _hold) then {  
                            _target = _x;  
                            _hold = _i;  
                        };  
                    } forEach _possTar;  
                };  
                  
                if (typeName _target == "OBJECT") then {  
                      
                    _range = _unit distance _target;   
                    _randomValue = (random (75 * 2)) - 75;  
                      
                    if (_range > 8000) then {  
                        _range = 8000;  
                    };  
                    if (_range < 50) then {  
                        _range = 50;  
                    };  
                };  
            };  
  
            if (!isNil "_range") then {  
                _id = format ["ML_700_flak_%1",_projectile];  
                [_id,"onEachFrame",{  
                    params ["_unit","_projectile","_range","_id","_target","_randomValue","_flakExplosion"];  
                      
                    private ["_done","_pos","_explosion"];  
                      
                    _done = true;  
                    if (!isNull _projectile) then {  
                        if (alive _projectile) then {  
                            if (typeName _target == "OBJECT") then {  
                                _range = (_unit distance _target) + _randomValue;  
                            };  
                            if ((_unit distance _projectile) >= _range) then {  
                                _pos = getPosATL _projectile;  
                                _explosion = createVehicle [_flakExplosion,_pos,[],0,"CAN_COLLIDE"];  
                                _explosion setPosATL _pos;  
                                deleteVehicle _projectile;  
                            } else {  
                                _done = false;  
                            };  
                        };  
                    };  
                      
                    if (_done) then {  
                        [_id,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;  
                    };  
                },[_unit,_projectile,_range,_id,_target,_randomValue,_flakExplosion]] call BIS_fnc_addStackedEventHandler;  
            };  
        };  
}; 
RC_lowLight_ForcedOff = false;
RC_LowLight = false;
RC_fnc_ToggleLowLight =
{
    if (RC_lowLight_ForcedOff) exitWith {};
    if (RC_LowLight) then {
        RC_LowLight = false; 
        [player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d; 
        setAperture 0;
    }
    else {
        RC_LowLight = true; 
        [player, "OPTRE_Sounds_HUD_Visor", 50] call CBA_fnc_globalSay3d; 
        _apature = player getVariable ["RC_LowLight_Apature", 50];
        private _Setaperture = apertureParams select 2;
        _Setaperture = ((_Setaperture - 0.1) * (1 - (_apature/100))) + 0.1;
        setAperture (_Setaperture);
    };
};

["332nd Aux", "RC_LowLight_Toggle", ["Toggle Low-Light", "Press to toggle Low-Light"], {
	_helmet = headgear player;
	_HelmetCompatible = getNumber (configFile >> "CfgWeapons" >> _helmet >> "332nd_Has_Lowlight");
	if (_helmetCompatible == 1) then {
		hint "Low Light Toggled";
		[] call RC_fnc_ToggleLowLight;
	};
}, {}, [DIK_L, [true, false, false]]] call CBA_fnc_addKeybind;

["332nd Aux", "RC_LowLight_Raise", ["Increase Low-Light Percentage", "Press to increase Low-Light Percentage"], {
	_helmet = headgear player;
	_HelmetCompatible = getNumber (configFile >> "CfgWeapons" >> _helmet >> "332nd_Has_Lowlight");
	if (_helmetCompatible == 1) then {
		_apature = player getVariable ["RC_LowLight_Apature", 50];
		if(_apature == 100) exitWith {};
		_apature = _apature + 5;
		player setVariable ["RC_LowLight_Apature", _apature];
		hint ((str _apature) + "%");
		if (RC_LowLight) then {
			private _Setaperture = apertureParams select 2;
			_Setaperture = ((_Setaperture - 0.1) * (1 - (_apature/100))) + 0.1;
			setAperture (_Setaperture);
		};
	};
}, {}, [DIK_ADD, [false, false, false]]] call CBA_fnc_addKeybind;

["332nd Aux", "RC_LowLight_Lower", ["Decrease Low-Light Percentage", "Press to decrease Low-Light Percentage"], {
	_helmet = headgear player;
	_HelmetCompatible = getNumber (configFile >> "CfgWeapons" >> _helmet >> "332nd_Has_Lowlight");
	if (_helmetCompatible == 1) then {
		_apature = player getVariable ["RC_LowLight_Apature", 50];
		if(_apature == 5) exitWith {};
		_apature = _apature - 5;
		hint ((str _apature) + "%");
		player setVariable ["RC_LowLight_Apature", _apature];
		if (RC_LowLight) then {
			private _Setaperture = apertureParams select 2;
			_Setaperture = ((_Setaperture - 0.1) * (1 - (_apature/100))) + 0.1;
			setAperture (_Setaperture);
		};
	};
}, {}, [DIK_SUBTRACT, [false, false, false]]] call CBA_fnc_addKeybind;

fnc_SB_DroidPopper = {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
    _projectile addEventHandler ["Explode", { 
        params ["_projectile", "_position", "_velocity"]; 
        _units = _position nearEntities [["332nd_Droid_B1_AT", "332nd_Droid_B1_Commander", "332nd_Droid_B1_Crewman", "332nd_Droid_B1_Grenadier", "332nd_Droid_B1_Pilot", "332nd_Droid_B1_Rifleman", "332nd_Droid_B1_Scatterblaster", "332nd_Droid_B1_Security", "332nd_Droid_B1_Shield", "332nd_Droid_B1_Sniper", "332nd_Droid_B1_Support"], 10];
        {
            _x setDamage 1;
        } forEach _units;
    }];
};