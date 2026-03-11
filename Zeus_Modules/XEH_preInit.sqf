
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
        _units = _position nearEntities [["JLTS_Droid_B1_E5"], 15];
        {
			_x setDamage 1;
        } forEach _units;
    }];
};

WBK_ResetArmourHitPart = {
				_this removeAllEventHandlers "HitPart";
				_this addEventHandler [
					"HitPart",
					{
						(_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
						if !(alive _target) exitWith {};
						_new_vv = (_target getVariable "VPR_DroidHealth") - (_ammo select 0);
						if (_new_vv <= 0) exitWith {
							_target setDamage 1;
							_target removeAllEventHandlers "HitPart";
						};
						_target setVariable ["VPR_DroidHealth",_new_vv,true];
					}
				];
};

SB_fnc_Init_JumpPack = {
	params ["_unit", "_backpackStr", "_searchRange", "_target", "_cooldown", "_jumpDistMin", "_jumpDistMax", "_jumpTime", "_oldPos", "_posTargetNew", "_newPos", "_diffTime"];

	_unit = _this select 0;

	_searchRange = 500;
	_cooldown = 10;
	_cooldownMove = 2;


	_jumpDistMin = 1;
	_jumpDistMax = 500;

	_jumpTime = -10;
	_oldPos = "";



	if (!is3DEN) then {


		if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_searchRange"}) then {
			_searchRange = missionNamespace getVariable "TIOW40k_Ork_JumpPack_searchRange";
		};
		if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_cooldown"}) then {
			_cooldown = missionNamespace getVariable "TIOW40k_Ork_JumpPack_cooldown";
		};
		if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_minDist"}) then {
			_jumpDistMin = missionNamespace getVariable "TIOW40k_Ork_JumpPack_minDist";
		};
		if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_maxDist"}) then {
			_jumpDistMax = missionNamespace getVariable "TIOW40k_Ork_JumpPack_maxDist";
		};


		if (isPlayer _unit) then {

		} else {



				[_unit, false] remoteExec ["allowDamage", 0];
				_unit setVariable ["VPR_DroidHealth", 50, true];
                _unit remoteExecCall ["WBK_ResetArmourHitPart",0,true];


				while {alive _unit} do {
					if (isPlayer _unit) exitWith {

					};

					_target = _unit findNearestEnemy _unit;

					if ((_unit distance _target <= _searchRange) && (_unit knowsAbout _target > 0) && (alive _target)) then {

						_unit SetUnitPos "Up";
						_unit SetSpeedMode "Full";

						_posTargetNew = getPosATL _target;
						_newPos = ((_posTargetNew select 0) + (_posTargetNew select 1) + (_posTargetNew select 2)) toFixed 0;


						if (_newPos != _oldPos) then {
							_unit doMove getPos _target;
						};

						sleep 2;

						_diffTime = time - _jumpTime;

						if (_diffTime > _cooldown) then {
							if (_unit distance _target > _jumpDistMin && _unit distance _target < _jumpDistMax) then {
								if (_unit distance _target > 25) then {
									_jumpTime = [_unit, "", _cooldown] call SB_fnc_JumpPack;
								}
								else 
								{
									[_unit, "B1_Droid_Jetpack"] remoteExec ["switchMove",0];				
									_unit playActionNow "WBK_Droid_Disable_Gesture";
									_unit remoteExec ["WBK_Droids_B1_JetpackEffect",[0,-2] select isDedicated]; 
								};
								_jumpTime = time;
							};
						};

						_oldPos = _newPos;
					} else {
						sleep 2;
					};
			};
		};
	};
};

SB_fnc_JumpPack = {
    params ["_unit", "_id"];
    private ["_x", "_y", "_z", "_i", "_section", "_backpack", "_damage", "_height", "_damageNew", "_diffDmg", "_cooldown", "_explode", "_malfunction", "_ranDir", "_bomb", "_crazyVel", "_cooldown", "_explodeChance", "_malfunctionChance"];

    _cooldown = 10;
    _explodeChance = 0;
    _malfunctionChance = 0; 


    if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_cooldown"}) then {
        _cooldown = missionNamespace getVariable "TIOW40k_Ork_JumpPack_cooldown";
    };
    if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_explodeChance"}) then {
        _explodeChance = missionNamespace getVariable "TIOW40k_Ork_JumpPack_explodeChance";
    };
    if (!isNil {missionNamespace getVariable "TIOW40k_Ork_JumpPack_malfunctionChance"}) then {
        _malfunctionChance = missionNamespace getVariable "TIOW40k_Ork_JumpPack_malfunctionChance";
    };

    if (isPlayer _unit) then {
        _unit removeAction _id;
    };

    _x = selectRandom [-4,-3,-2,-1,0,1,2,3,4];
    _y = selectRandom [15,16,17,18,19,20,21,22,23,24,25];
    _z = selectRandom [15,16,17,18,19,20,21,22,23,24,25];

    _explode = 1;
    _malfunction = 1;


	[_unit, [_x,_y,_z]] remoteExec ["setVelocityModelSpace"];

    [_unit,unitBackpack _unit,40] spawn JLTS_fnc_jumpEffects;

    sleep 2;

    private _smokeEffects = _unit getVariable ["JLTS_jumppack_var_smokeSources",[]];
    {
        deleteVehicle _x;
    } forEach _smokeEffects;
    _damage = getDammage _unit;

    waitUntil {sleep 0.1; ((getPos _unit) select 2) < 4};




    if (isPlayer _unit) then {

        _i = _cooldown;
        while{_i > 0} do {
            if (isPlayer _unit) then {
                _cooldown = "Jump Pack ready in: " + str _i;
                systemChat _cooldown;
            };
            sleep 1;
            _i = _i - 1;
        };



    };


    time


};