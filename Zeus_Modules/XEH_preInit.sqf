
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