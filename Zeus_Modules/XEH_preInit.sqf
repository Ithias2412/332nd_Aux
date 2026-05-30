
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
        _units = _position nearEntities [["JLTS_Droid_B1_E5"], 30];
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

WBK_Droids_LoadHitReactions = {
	_this removeAllEventHandlers "HitPart";
	_this addEventHandler [
		"HitPart",
		{
			(_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
			if (!(alive _target) || (animationState _target in ["b2_droid_die","b1_droid_die_1","b1_droid_die_2","b1_droid_die_3","b1_droid_die_4","b1_droid_die_5","b1_droid_die_6","b1_droid_die_7"])) exitWith {};
			// Indirect/splash: no flinch or voice — base ArmA already applied damage.
			if !(_direct) exitWith {};
			switch true do {
				case (stance _target != "STAND"): {
					[_target,selectRandom ["WBK_Droids_Flinch_1","WBK_Droids_Flinch_2","WBK_Droids_Flinch_3"]] remoteExecCall ["playActionNow",_target];
				};
				case (gestureState _target in ["wbk_droids_b1_grenade","wbk_droids_b1_danger"]): {};
				case (animationState _target in ["bx_droid_sword_pre","bx_droid_hit_1","bx_droid_hit_2","bx_droid_kick","bx_droid_roll_1","bx_droid_roll_2","bx_droid_sword","acts_treatingwounded_out","acts_treatingwounded_in","b1_droid_jetpack","b1_droid_hit_1","b1_droid_hit_2","b1_droid_cover_1","b1_droid_cover_2"]): {};
				case (_target isKindOf "WBK_LS_BX_Baseclass"): {
					switch true do {
						case (((_target worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0): {[_target, "bx_droid_hit_2"] remoteExec ["switchMove",0];};
						default {[_target, "bx_droid_hit_1"] remoteExec ["switchMove",0];};
					};
					[_target, "WBK_Droid_Disable_Gesture"] remoteExecCall ["playActionNow",_target];
					[_target,((_target getVariable "WBK_Droids_VoiceType") + (selectRandom ["act_hit_1.ogg","act_hit_2.ogg","act_hit_3.ogg","act_hit_4.ogg","act_hit_5.ogg"])),70] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
				};
				default {
					[_target,[selectRandom ["B1_Droid_hit_1","B1_Droid_hit_2"], 0, 0.2, false]] remoteExec ["switchMove",0];
					[_target, "WBK_Droid_Disable_Gesture"] remoteExecCall ["playActionNow",_target];
					[_target,((_target getVariable "WBK_Droids_VoiceType") + (selectRandom ["act_hit_1.ogg","act_hit_2.ogg","act_hit_3.ogg","act_hit_4.ogg","act_hit_5.ogg"])),70] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
				};
			};
		}
	];
};

WBK_Droid_VoiceLines = {
	if (isDedicated) exitWith {};
	params ["_unit",["_sound","",[""]],["_distance",150],["_volume",5]];
	if (isNull _unit || _sound == "") exitWith {};
	if !(isNil {_unit getVariable "WBK_Droid_SoundID"}) then {
		stopSound (_unit getVariable "WBK_Droid_SoundID");
	};
	_id = playSound3D [_sound,_unit, false,eyePos _unit,_volume,1,_distance,0,true];
	_unit setVariable ["WBK_Droid_SoundID",_id];
};

WBK_Droid_GrenadeThrow = {
	_zombie = _this select 0;
	if (!(isNil {_zombie getVariable "B1CanThrowNade"}) or (gestureState _zombie == "WBK_Droids_B1_Grenade")) exitWith {};
	_zombie setVariable ["B1CanThrowNade",false];
	_zombie spawn {uiSleep 120; _this setVariable ["B1CanThrowNade",nil];};
	_enemy = _this select 1;
	[_zombie, "WBK_Droids_B1_Grenade"] remoteExec ["playActionNow", 0];
	_throwableItem = WBK_b1_DroidNade createVehicle [0,0,6000];
	_throwableItem setVariable ["B1ItsOwnNade",true];
	_throwableItem attachTo [_zombie,[0,0,0],"rightHand",true];
	uisleep 0.02;
	detach _throwableItem;
	_dir = (_zombie getDir _enemy);
	_vel = velocity _zombie;
	_distance = (_zombie distance _enemy) * 0.6;
	_pos = (getPosASL _enemy) select 2;
	_pos1 = (getPosASL _zombie) select 2;
	_actPos = _pos - _pos1;
	switch (true) do {
		case (_actPos < 0): {[_throwableItem,[(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 5.2]] remoteExec ["setVelocity",0];};
		case (_actPos > 4): {[_throwableItem,[(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 2]] remoteExec ["setVelocity",0];};
		default {_distance = (_zombie distance _enemy) * 0.86;[_throwableItem,[(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 3.6]] remoteExec ["setVelocity",0];};
	};
	uiSleep 2;
	_throwableItem setVariable ["B1ItsOwnNade",nil];
};

WBK_Droid_B1_Load = {
	if (isPlayer _this) exitWith {};
	_this setSpeaker "NoVoice";
	_this allowDamage true;
	_this playActionNow "WBK_Droids_B1_Idle";
	_this setUnitPos "UP";
	_this setAmmo [currentWeapon _this, 10];
	if (isNil {_this getVariable "WBK_Droids_Initialized"}) then {
		if !(isNil "WBK_LambsPresent") then {
			(group _this) setVariable ["lambs_danger_disableGroupAI", true];
			_this setVariable ["lambs_danger_disableAI", true];
		};
		_this setVariable ["WBK_Droids_VoiceType","WBK_Droids\sounds\b1\"];
		_this setVariable ["disableUnitSFX",true];
		_this setVariable ["WBK_DAH_DisableAnim_Death",true];
		_this setVariable ["WBK_DAH_DisableAnim_Hit",true];
		_this setVariable ["WBK_BloodMod_Disable",true];
		_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
		_this setVariable ["WBK_AmountOfAmmunition",(_value) + 1];
		if (_this isKindOf "WBK_3AS_B1_Rocket") then {
			_this setVariable ["WBK_Droids_CanFly",true];
		};
		if (_this isKindOf "WBK_3AS_B1_UAV") then {
			_this setVariable ["WBK_Droids_CanDeployDrone",true];
		};
		if !(isNil "WBK_3ASPresent") then {
			[_this, primaryWeapon _this] call WBK_3AS_SwapWeapons;
		};
		_this setVariable ["WBK_Droids_Initialized", true, true];
	};
	if ((_this == leader group _this) && (count units group _this >= 3)) then {
		[{(!isNull (_this findNearestEnemy _this)) || !(alive _this) || (isNull _this)}, {
			if (!(alive _this) || (isNull _this)) exitWith {};
			_this playActionNow "WBK_Droids_B1_Danger";
			[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["danger_1.ogg","danger_2.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		},_this, -1, {}] call CBA_fnc_waitUntilAndExecute;
	};
	_this removeAllEventHandlers "Killed";
	_this addEventHandler ["Killed", {
		_killed = _this select 0;
		_killed removeAllEventHandlers "HitPart";
		_killed removeAllEventHandlers "Killed";
		_killed removeAllEventHandlers "Fired";
		_killed removeAllEventHandlers "Suppressed";
		_killed removeAllEventHandlers "AnimStateChanged";
		_killer = _this select 1;
		_killed setDamage 1; // Redundant with base ArmA damage; remove if ACE Medical conflicts arise.
		[_killed,((_killed getVariable "WBK_Droids_VoiceType") + (selectRandom ["death_1.ogg","death_2.ogg","death_3.ogg","death_4.ogg","death_5.ogg","death_6.ogg","death_7.ogg","death_8.ogg"])),200] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		_killed spawn {
			uiSleep 0.3;
			{
				if ((side _x == side (group _this)) && (alive _x) && (_x != _this) && !(isNil {_x getVariable "WBK_Droids_Initialized"}) && (behaviour _x == "COMBAT")) exitWith {
					[_x,((_x getVariable "WBK_Droids_VoiceType") + (selectRandom ["friendly_kia_1.ogg","friendly_kia_2.ogg","friendly_kia_3.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
				};
			} forEach nearestObjects [_this,["MAN"],10];
			waituntil {
				sleep 0.1;
				if (isNull _this) exitWith {true};
				(animationState _this == "deadstate")
			};
			if (isNull _this) exitWith {};
			[_this,selectRandom ["WBK_Droids\sounds\b1\bodyfall_1.ogg","WBK_Droids\sounds\b1\bodyfall_2.ogg","WBK_Droids\sounds\b1\bodyfall_3.ogg"],45] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		};
		switch true do {
			case ((animationState _killed in ["acts_treatingwounded_out","acts_treatingwounded_in","b1_droid_jetpack","b1_droid_cover_1","b1_droid_cover_2"]) || (stance _killed == "PRONE")): {_killed addForce [_killer vectorModelToWorld [0,200,50], _killed selectionPosition "head", false];};
			case (((_killed worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0): {[_killed,[selectRandom ["B1_Droid_die_6","B1_Droid_die_7"], 0, 0.2, false]] remoteExec ["switchMove",0];};
			default {[_killed,[selectRandom ["B1_Droid_die_1","B1_Droid_die_2","B1_Droid_die_3","B1_Droid_die_4","B1_Droid_die_5"], 0, 0.2, false]] remoteExec ["switchMove",0];};
		};
		_killed playActionNow "WBK_Droid_Disable_Gesture";
	}];
	_this addEventHandler ["AnimStateChanged", {
		_this spawn {
			params ["_unit", "_anim"];
			switch _anim do {
				case "amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "amovpercmstpsraswrfldnon_amovpercmstpsraswpstdnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "amovpercmstpsraswrfldnon_awoppercmstpsoptwbindnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "acts_treatingwounded_in": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
					uiSleep 3;
					if (!(alive _unit) || (animationState _unit != "acts_treatingwounded_in")) exitWith {};
					removeBackpack _unit;
					_veh = createVehicle [WBK_Droid_Drone, _unit modelToWorldVisual [0,0,9000], [], 0, "NONE"];
					_veh engineOn true;
					_veh attachTo [_unit,[1,1,0]];
					(group _unit) createVehicleCrew _veh;
					{
						[_x,[[_veh], true]] remoteExec ["addCuratorEditableObjects",2];
					} forEach allCurators;
					_veh doMove (_unit modelToWorldVisual [0,40,10]);
					[_unit,["Acts_TreatingWounded_out", 0, 0.2, false]] remoteExec ["switchMove",0];
					detach _veh;
				};
			}
		};
	}];
	_this addEventHandler ["Fired", {
		_obj = _this select 0;
		if (currentWeapon _obj != primaryWeapon _obj) exitWith {};
		_obj setAmmo [currentWeapon _obj, 10];
		_obj spawn {
			_val = _this getVariable "WBK_AmountOfAmmunition";
			_val = _val - 1;
			if (_val > 0) then {
				_en = getAttackTarget _this;
				_this setVariable ["WBK_AmountOfAmmunition",_val];
				switch true do {
					case (((((_this worldToModel (_en modelToWorld [0, 0, 0])) select 0) > (-10))) and ((((_this worldToModel (_en modelToWorld [0, 0, 0])) select 0) < 10)) and (((_this worldToModel (_en modelToWorld [0, 0, 0])) select 1) > 1) and (_this == leader group _this) and (isNull objectParent _this) and (isNil {_this getVariable "B1CanThrowNade"}) and ((_en distance _this) > 7) and ((_en distance _this) <= 60) && (count units group _this >= 2)): {
						[_this, _en] spawn WBK_Droid_GrenadeThrow;
					};
					case ((_this == leader group _this) && (count units group _this >= 3) && (isNil {_this getVariable "B1CanCommand"})): {
						_this playActionNow "WBK_Droids_B1_Attack";
						[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["command1.ogg","command2.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
						_this setVariable ["B1CanCommand",false];
						uisleep (random 60);
						_this setVariable ["B1CanCommand",nil];
					};
					case (isNil {_this getVariable "B1Speak"}): {
						[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["shoot_1.ogg","shoot_2.ogg","shoot_3.ogg","shoot_4.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
						_this setVariable ["B1Speak",false];
						uisleep (random 15);
						_this setVariable ["B1Speak",nil];
					};
					default {};
				};
			}else{
				_this playActionNow "WBK_Droids_B1_Reload";
				_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
				_this setVariable ["WBK_AmountOfAmmunition",_value];
			};
		};
	}];
	_this addEventHandler ["Suppressed", {
		params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
		if (!(isNil {_unit getVariable "B1CanTakeCover"}) || (_unit == _instigator) || (_distance > 4) || (animationState _unit in ["b1_droid_jetpack","b1_droid_hit_1","b1_droid_hit_2","b1_droid_cover_1","b1_droid_cover_2"])) exitWith {};
		{_x reveal [_shooter,4];} forEach units group _unit;
		[_unit,_instigator] spawn {
			params ["_unit","_instigator"];
			[_unit,((_unit getVariable "WBK_Droids_VoiceType") + (selectRandom ["hit_1.ogg","hit_2.ogg","hit_3.ogg","hit_4.ogg","hit_5.ogg","hit_6.ogg"])),70] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
			_unit setVariable ["B1CanTakeCover",false];
			switch true do {
				case ((count (lineIntersectsSurfaces [_unit modelToWorldVisualWorld [0,0.1,0.6],_unit modelToWorldVisualWorld [0,2.7,0.6],_unit,_instigator,true,1,"FIRE","VIEW"]) > 0) && (count (lineIntersectsSurfaces [_unit modelToWorldVisualWorld [0,0.1,1.2],_instigator modelToWorldVisualWorld [0,0.1,2],_unit,_instigator,true,1,"FIRE","VIEW"]) == 0)): {
					[_unit,[selectRandom ["B1_Droid_Cover_1","B1_Droid_Cover_2"], 0, 0.2, false]] remoteExec ["switchMove",0];
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case ((isNil {_unit getVariable "B1CanCreateSmoke"}) and (_unit == leader group _unit) and (count units group _unit >= 3)): {
					_unit playActionNow "WBK_Droids_B1_Grenade";
					{_x setVariable ["B1CanCreateSmoke",1];} forEach units group _unit;
					_veh = WBK_b1_DroidSmoke createVehicle (_unit modelToWorld [-0.3,2,1]);
				};
				case !(isNil {_unit getVariable "WBK_Droids_CanFly"}): {
					[_unit, "B1_Droid_Jetpack"] remoteExec ["switchMove",0];
					_unit playActionNow "WBK_Droid_Disable_Gesture";
					_unit remoteExec ["WBK_Droids_B1_JetpackEffect",[0,-2] select isDedicated];
				};
				case !(isNil {_unit getVariable "WBK_Droids_CanDeployDrone"}): {
					_unit setVariable ["WBK_Droids_CanDeployDrone",nil];
					[_unit,["acts_treatingwounded_in", 0, 0.2, false]] remoteExec ["switchMove",0];
				};
				default {};
			};
			uiSleep (5 + random 5);
			_unit setVariable ["B1CanTakeCover",nil];
		};
	}];
	_this remoteExecCall ["WBK_Droids_LoadHitReactions",0,true];
	[{((({(getNumber (configfile >> "CfgAmmo" >> typeOf _x >> "hit") > 1) && (isNil {_x getVariable "B1ItsOwnNade"})} count (_this nearObjects ["Grenade", 8])) >= 1) || !(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"}))}, {
		if (!(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"})) exitWith {};
		_this playActionNow "WBK_Droids_B1_GrenadeWarning";
		[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["inc_grenade_1.ogg","inc_grenade_2.ogg","inc_grenade_3.ogg","inc_grenade_4.ogg"])),300] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		{
			_x setVariable ["B1CanSayNade",false];
			_x spawn {
				_this setUnitPos "DOWN";
				uiSleep 7;
				_this setUnitPos "UP";
			};
		} forEach nearestObjects [_this,["MAN"],15];
	}, _this, -1] call CBA_fnc_waitUntilAndExecute;
	while {alive _this} do {
		if (alive _this != isAwake _this) exitWith {_this setDamage 1;};
		switch true do {
			case ((gestureState _this in ["gesturethrowgrenade","gesturethrowgrenadepistol","gesturethrowgrenadeuna"]) || !(alive _this) || (animationState _this in ["b1_droid_die_1","b1_droid_die_2","b1_droid_die_3","b1_droid_die_4","b1_droid_die_5","b1_droid_die_6","b1_droid_die_7"]) || !(isNull attachedTo _this) || (currentWeapon _this != primaryWeapon _this) || (gestureState _this == (getText (configfile >> "CfgWeapons" >> currentWeapon _this >> "reloadAction")))): {};
			case ((animationState _this in ["b1_droid_hit_1","b1_droid_hit_2","b1_droid_cover_1","b1_droid_cover_2","b1_droid_jetpack"]) && ((getUnitMovesInfo _this # 0) < 0.9)): {};
			case ((gestureState _this in ["wbk_droids_b1_reload","wbk_droids_b1_attack","wbk_droids_b1_grenade","wbk_droids_b1_grenadewarning","wbk_droids_b1_danger"]) && ((getUnitMovesInfo _this # 5) < 0.9)): {};
			case (animationState _this in ["amovpercmevasraswrfldf","amovpercmevasraswrfldfl","amovpercmevasraswrfldfr","amovpercmevaslowwrfldf","amovpercmevaslowwrfldfl","amovpercmevaslowwrfldfr"]): {_this playActionNow "WBK_Droids_B1_Run";};
			case (!(isNull objectParent _this) || (stance _this == "PRONE") || (stance _this == "CROUCH") || (getNumber (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "weaponLowered") == 1)): {_this playActionNow "WBK_Droid_Disable_Gesture";};
			default {_this playActionNow "WBK_Droids_B1_Idle";};
		};
		uiSleep 0.2;
	};
};

WBK_Droid_B2_Load = {
	if (isPlayer _this) exitWith {};
	_this setSkill 1;
	_this setSpeaker "NoVoice";
	_this allowDamage true;
	_this playActionNow "WBK_Droids_B2_Idle";
	_this setUnitPos "UP";
	_this setAmmo [currentWeapon _this, 10];
	_this allowSprint false;
	if (isNil {_this getVariable "WBK_Droids_Initialized"}) then {
		if !(isNil "WBK_LambsPresent") then {
			(group _this) setVariable ["lambs_danger_disableGroupAI", true];
			_this setVariable ["lambs_danger_disableAI", true];
		};
		_this setVariable ["WBK_Droids_VoiceType","WBK_Droids\sounds\b2\"];
		_this setVariable ["disableUnitSFX",true];
		_this setVariable ["WBK_DAH_DisableAnim_Death",true];
		_this setVariable ["WBK_DAH_DisableAnim_Hit",true];
		_this setVariable ["WBK_BloodMod_Disable",true];
		_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
		_this setVariable ["WBK_AmountOfAmmunition",(_value) + 1];
		if !(isNil "WBK_3ASPresent") then {
			[_this, primaryWeapon _this] call WBK_3AS_SwapWeapons;
		};
		_this setVariable ["WBK_Droids_Initialized", true, true];
	};
	_this removeAllEventHandlers "Killed";
	_this addEventHandler ["Killed", {
		_killed = _this select 0;
		removeAllWeapons _killed;
		_killed removeAllEventHandlers "HitPart";
		_killed removeAllEventHandlers "Killed";
		_killed removeAllEventHandlers "Fired";
		_killed removeAllEventHandlers "Suppressed";
		_killed removeAllEventHandlers "AnimStateChanged";
		_killer = _this select 1;
		_killed setDamage 1; // Redundant with base ArmA damage; remove if ACE Medical conflicts arise.
		[_killed,((_killed getVariable "WBK_Droids_VoiceType") + (selectRandom ["death_1.ogg"])),200] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		_killed spawn {
			uiSleep 0.3;
			{
				if ((side _x == side (group _this)) && (alive _x) && (_x != _this) && !(isNil {_x getVariable "WBK_Droids_Initialized"}) && (behaviour _x == "COMBAT")) exitWith {
					[_x,((_x getVariable "WBK_Droids_VoiceType") + (selectRandom ["friendly_kia_1.ogg","friendly_kia_2.ogg","friendly_kia_3.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
				};
			} forEach nearestObjects [_this,["MAN"],10];
			waituntil {
				sleep 0.1;
				if (isNull _this) exitWith {true};
				(animationState _this == "deadstate")
			};
			if (isNull _this) exitWith {};
			[_this,selectRandom ["WBK_Droids\sounds\b1\bodyfall_1.ogg","WBK_Droids\sounds\b1\bodyfall_2.ogg","WBK_Droids\sounds\b1\bodyfall_3.ogg"],45] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		};
		switch true do {
			case (stance _killed == "PRONE"): {_killed addForce [_killer vectorModelToWorld [0,200,50], _killed selectionPosition "head", false];};
			default {[_killed,["B2_Droid_die", 0, 0.2, false]] remoteExec ["switchMove",0];};
		};
		_killed playActionNow "WBK_Droid_Disable_Gesture";
	}];
	_this addEventHandler ["Suppressed", {
		params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
		if ((_unit == _instigator) || (_distance > 10)) exitWith {};
		{_x reveal [_shooter,4];} forEach units group _unit;
	}];
	_this addEventHandler ["Fired", {
		_obj = _this select 0;
		if (currentWeapon _obj != primaryWeapon _obj) exitWith {};
		_obj setAmmo [currentWeapon _obj, 10];
		_obj spawn {
			_val = _this getVariable "WBK_AmountOfAmmunition";
			_val = _val - 1;
			if (_val > 0) then {
				_en = getAttackTarget _this;
				_this setVariable ["WBK_AmountOfAmmunition",_val];
				switch true do {
					case (isNil {_this getVariable "B1Speak"}): {
						[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["shoot_1.ogg","shoot_2.ogg","shoot_3.ogg","shoot_4.ogg","shoot_5.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
						_this setVariable ["B1Speak",false];
						uisleep (random 25);
						_this setVariable ["B1Speak",nil];
					};
					default {};
				};
			}else{
				_this playActionNow "WBK_Droids_B2_Run";
				_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
				_this setVariable ["WBK_AmountOfAmmunition",_value];
			};
		};
	}];
	_this remoteExecCall ["WBK_Droids_LoadHitReactions",0,true];
	[{((({(getNumber (configfile >> "CfgAmmo" >> typeOf _x >> "hit") > 1) && (isNil {_x getVariable "B1ItsOwnNade"})} count (_this nearObjects ["Grenade", 8])) >= 1) || !(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"}))}, {
		if (!(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"})) exitWith {};
		_this setVariable ["B1CanSayNade",false];
		[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["inc_grenade_1.ogg","inc_grenade_2.ogg"])),300] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
	}, _this, -1] call CBA_fnc_waitUntilAndExecute;
	while {alive _this} do {
		if (alive _this != isAwake _this) exitWith {_this setDamage 1;};
		switch true do {
			case ((gestureState _this in ["gesturethrowgrenade","gesturethrowgrenadepistol","gesturethrowgrenadeuna","gesturereloadmxugl"]) || !(alive _this) || (animationState _this in ["b2_droid_die_1"]) || !(isNull attachedTo _this) || (currentWeapon _this != primaryWeapon _this) || (gestureState _this == (getText (configfile >> "CfgWeapons" >> currentWeapon _this >> "reloadAction")))): {};
			case ((((velocity _this) # 0) > 2) || (((velocity _this) # 0) < (-2)) || (((velocity _this) # 1) > 2) || (((velocity _this) # 1) < (-2))): {_this playActionNow "WBK_Droids_B2_Run";};
			case (!(isNull objectParent _this) || (stance _this == "PRONE") || (getNumber (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "weaponLowered") == 1)): {_this playActionNow "WBK_Droid_Disable_Gesture";};
			default {_this playActionNow "WBK_Droids_B2_Idle";};
		};
		uiSleep 0.2;
	};
};

WBK_Droid_BX_Load = {
	if (isPlayer _this) exitWith {};
	_this setSkill 1;
	_this setSpeaker "NoVoice";
	_this allowDamage true;
	_this setUnitPos "UP";
	_this setAmmo [currentWeapon _this, 10];
	if (isNil {_this getVariable "WBK_Droids_Initialized"}) then {
		_this setVariable ["WBK_Droids_VoiceType","WBK_Droids\sounds\bx\"];
		_this setVariable ["disableUnitSFX",true];
		_this setVariable ["WBK_DAH_DisableAnim_Death",true];
		_this setVariable ["WBK_DAH_DisableAnim_Hit",true];
		_this setVariable ["WBK_BloodMod_Disable",true];
		_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
		_this setVariable ["WBK_AmountOfAmmunition",(_value) + 1];
		if !(isNil "WBK_3ASPresent") then {
			[_this, primaryWeapon _this] call WBK_3AS_SwapWeapons;
		};
		_this setVariable ["WBK_Droids_Initialized", true, true];
	};
	if ((_this == leader group _this) && (count units group _this >= 2)) then {
		[{(!isNull (_this findNearestEnemy _this)) || !(alive _this) || (isNull _this)}, {
			if (!(alive _this) || (isNull _this)) exitWith {};
			_this playActionNow "HandSignalHold";
			[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["danger_1.ogg","danger_2.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
			if !(isNil "WBK_LambsPresent") then {
				[_this, 500] spawn lambs_wp_fnc_taskRush;
			};
		},_this, -1, {}] call CBA_fnc_waitUntilAndExecute;
	};
	_this removeAllEventHandlers "Killed";
	_this addEventHandler ["Killed", {
		_killed = _this select 0;
		_killed removeAllEventHandlers "HitPart";
		_killed removeAllEventHandlers "Killed";
		_killed removeAllEventHandlers "Fired";
		_killed removeAllEventHandlers "Suppressed";
		_killed removeAllEventHandlers "AnimStateChanged";
		_killer = _this select 1;
		_killed setDamage 1; // Redundant with base ArmA damage; remove if ACE Medical conflicts arise.
		[_killed,((_killed getVariable "WBK_Droids_VoiceType") + (selectRandom ["death_1.ogg","death_2.ogg","death_3.ogg","death_4.ogg","death_5.ogg","death_6.ogg","death_7.ogg","death_8.ogg"])),100] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		_killed spawn {
			uiSleep 0.3;
			{
				if ((side _x == side (group _this)) && (alive _x) && (_x != _this) && !(isNil {_x getVariable "WBK_Droids_Initialized"}) && (behaviour _x == "COMBAT")) exitWith {
					[_x,((_x getVariable "WBK_Droids_VoiceType") + (selectRandom ["friendly_kia_1.ogg","friendly_kia_2.ogg","friendly_kia_3.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
				};
			} forEach nearestObjects [_this,["MAN"],10];
			waituntil {
				sleep 0.1;
				if (isNull _this) exitWith {true};
				(animationState _this == "deadstate")
			};
			if (isNull _this) exitWith {};
			[_this,selectRandom ["WBK_Droids\sounds\b1\bodyfall_1.ogg","WBK_Droids\sounds\b1\bodyfall_2.ogg","WBK_Droids\sounds\b1\bodyfall_3.ogg"],45] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		};
		switch true do {
			case ((animationState _killed in ["bx_droid_kick","bx_droid_roll_1","bx_droid_roll_2","bx_droid_sword"]) || (stance _killed == "PRONE")): {_killed addForce [_killer vectorModelToWorld [0,200,50], _killed selectionPosition "head", false];};
			case (((_killed worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0): {[_killed,[selectRandom ["B1_Droid_die_6","B1_Droid_die_7"], 0, 0.2, false]] remoteExec ["switchMove",0];};
			default {[_killed,[selectRandom ["B1_Droid_die_1","B1_Droid_die_2","B1_Droid_die_3","B1_Droid_die_4","B1_Droid_die_5"], 0, 0.2, false]] remoteExec ["switchMove",0];};
		};
		_killed playActionNow "WBK_Droid_Disable_Gesture";
	}];
	_this addEventHandler ["AnimStateChanged", {
		_this spawn {
			params ["_unit", "_anim"];
			switch _anim do {
				case "amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "amovpercmstpsraswrfldnon_amovpercmstpsraswpstdnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "amovpercmstpsraswrfldnon_awoppercmstpsoptwbindnon": {
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case "bx_droid_kick": {
					uiSleep 0.66;
					if (!(alive _unit) || (animationState _unit != "bx_droid_kick")) exitWith {};
					{
						if (
							(_x != _unit) &&
							(alive _x) &&
							(((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) > 0) &&
							(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) &&
							!(isObjectHidden _x) &&
							(side group _x != side group _unit) &&
							(([_x, "FIRE", _unit] checkVisibility [aimPos _unit, eyePos _x]) >= 0.7)
						) then {
							[_x,"WBK_Droids\sounds\bx\legKick.ogg",50] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
							[_x, [_unit vectorModelToWorld [0,400,50], _x selectionPosition "head", false]] remoteExec ["addForce", _x];
						};
					} forEach nearestObjects [_unit,["MAN"],4];
				};
				case "bx_droid_sword": {
					uiSleep 0.26;
					if (!(alive _unit) || (animationState _unit != "bx_droid_sword")) exitWith {};
					[_unit,"WBK_Droids\sounds\bx\sword.ogg",50] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
					{
						if (
							(_x != _unit) &&
							(alive _x) &&
							(((_unit worldToModel (_x modelToWorld [0, 0, 0])) select 1) > 0) &&
							(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) &&
							!(isObjectHidden _x) &&
							(side group _x != side group _unit) &&
							(([_x, "FIRE", _unit] checkVisibility [aimPos _unit, eyePos _x]) >= 0.7)
						) then {
							[_x,"WBK_Droids\sounds\bx\swordHit.ogg",50] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
							[_x, [_unit vectorModelToWorld [0,400,50], _x selectionPosition "head", false]] remoteExec ["addForce", _x];
						};
					} forEach nearestObjects [_unit,["MAN"],5];
				};
			}
		};
	}];
	_this addEventHandler ["Fired", {
		_obj = _this select 0;
		if (currentWeapon _obj != primaryWeapon _obj) exitWith {};
		_obj setAmmo [currentWeapon _obj, 10];
		_obj spawn {
			_val = _this getVariable "WBK_AmountOfAmmunition";
			_val = _val - 1;
			if (_val > 0) then {
				_en = getAttackTarget _this;
				_this setVariable ["WBK_AmountOfAmmunition",_val];
				switch true do {
					case (((((_this worldToModel (_en modelToWorld [0, 0, 0])) select 0) > (-10))) and ((((_this worldToModel (_en modelToWorld [0, 0, 0])) select 0) < 10)) and (((_this worldToModel (_en modelToWorld [0, 0, 0])) select 1) > 1) and (_this == leader group _this) and (isNull objectParent _this) and (isNil {_this getVariable "B1CanThrowNade"}) and ((_en distance _this) > 7) and ((_en distance _this) <= 60) && (count units group _this >= 2)): {
						[_this, _en] spawn WBK_Droid_GrenadeThrow;
					};
					case ((_this == leader group _this) && (count units group _this >= 2) && (isNil {_this getVariable "B1CanCommand"})): {
						if !(isNil "WBK_LambsPresent") then {
							[group _this, 500] spawn lambs_wp_fnc_taskRush;
						};
						_this playActionNow "HandSignalPoint";
						[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["command1.ogg","command2.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
						_this setVariable ["B1CanCommand",false];
						uisleep (20 + random 60);
						_this setVariable ["B1CanCommand",nil];
					};
					case (isNil {_this getVariable "B1Speak"}): {
						[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["shoot_1.ogg","shoot_2.ogg","shoot_3.ogg","shoot_4.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
						_this setVariable ["B1Speak",false];
						uisleep (20 + random 20);
						_this setVariable ["B1Speak",nil];
					};
					default {};
				};
			}else{
				_this playActionNow "ReloadMagazine";
				_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
				_this setVariable ["WBK_AmountOfAmmunition",_value];
			};
		};
	}];
	_this addEventHandler ["Suppressed", {
		params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
		if ((stance _unit != "STAND") || !(isNil {_unit getVariable "B1CanTakeCover"}) || (_unit == _instigator) || (_distance > 4) || (animationState _unit in ["bx_droid_hit_1","bx_droid_hit_2","bx_droid_kick","bx_droid_roll_1","bx_droid_roll_2","bx_droid_sword","bx_droid_sword_pre","bx_droid_sword_post","b1_droid_cover_1","b1_droid_cover_2"])) exitWith {};
		{_x reveal [_shooter,4];} forEach units group _unit;
		[_unit,_instigator] spawn {
			params ["_unit","_instigator"];
			[_unit,((_unit getVariable "WBK_Droids_VoiceType") + (selectRandom ["hit_1.ogg","hit_2.ogg","hit_3.ogg","hit_4.ogg","hit_5.ogg","hit_6.ogg"])),70] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
			_unit setVariable ["B1CanTakeCover",false];
			switch true do {
				case ((count (lineIntersectsSurfaces [_unit modelToWorldVisualWorld [0,0.1,0.6],_unit modelToWorldVisualWorld [0,2.7,0.6],_unit,_instigator,true,1,"FIRE","VIEW"]) > 0) && (count (lineIntersectsSurfaces [_unit modelToWorldVisualWorld [0,0.1,1.2],_instigator modelToWorldVisualWorld [0,0.1,2],_unit,_instigator,true,1,"FIRE","VIEW"]) == 0)): {
					[_unit,[selectRandom ["B1_Droid_Cover_1","B1_Droid_Cover_2"], 0, 0.2, false]] remoteExec ["switchMove",0];
					_unit playActionNow "WBK_Droid_Disable_Gesture";
				};
				case ((isNil {_unit getVariable "B1CanCreateSmoke"}) and (_unit == leader group _unit) and (count units group _unit >= 2)): {
					_unit playActionNow "WBK_Droids_B1_Grenade";
					{_x setVariable ["B1CanCreateSmoke",1];} forEach units group _unit;
					_veh = WBK_b1_DroidSmoke createVehicle (_unit modelToWorld [-0.3,2,1]);
				};
				default {
					[_unit, selectRandom ["BX_Droid_Roll_1","BX_Droid_Roll_2"]] remoteExec ["switchMove",0];
					_unit setUnitPos "MIDDLE";
					_unit playActionNow "WBK_Droid_Disable_Gesture";
					_unit spawn {uiSleep 2.7; if (!(alive _this) || (isNull _this)) exitWith {}; [_this,1.35] remoteExecCall ["setAnimSpeedCoef",0]; uiSleep 10; if (!(alive _this) || (isNull _this)) exitWith {}; [_this,1] remoteExecCall ["setAnimSpeedCoef",0]; _this setUnitPos "UP";};
				};
			};
			uiSleep 5;
			_unit setVariable ["B1CanTakeCover",nil];
		};
	}];
	_this remoteExecCall ["WBK_Droids_LoadHitReactions",0,true];
	[{((({(getNumber (configfile >> "CfgAmmo" >> typeOf _x >> "hit") > 1) && (isNil {_x getVariable "B1ItsOwnNade"})} count (_this nearObjects ["Grenade", 8])) >= 1) || !(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"}))}, {
		if (!(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"})) exitWith {};
		_this playActionNow "HandSignalGetDown";
		[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["inc_grenade_1.ogg","inc_grenade_2.ogg","inc_grenade_3.ogg","inc_grenade_4.ogg"])),300] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
		{
			_x setVariable ["B1CanSayNade",false];
			_x spawn {
				_this setUnitPos "DOWN";
				uiSleep 7;
				_this setUnitPos "UP";
			};
		} forEach nearestObjects [_this,["MAN"],15];
	}, _this, -1] call CBA_fnc_waitUntilAndExecute;
	[{(((({(side group _x != side _this) && (alive _x) && (((_this worldToModel (_x modelToWorld [0, 0, 0])) select 1) > 0) && (([_x, "FIRE", _this] checkVisibility [aimPos _this, eyePos _x]) >= 0.7)} count (nearestObjects [_this,["MAN"], 3])) >= 1) && (!isNull (_this findNearestEnemy _this))) || !(alive _this) || (isNull _this))}, {
		if (!(alive _this) || (isNull _this)) exitWith {};
		if (handGunWeapon _this != "") then {
			[_this,["BX_Droid_Sword_Pre", 0, 0.2, false]] remoteExec ["switchMove",0];
		}else{
			[_this,["BX_Droid_Kick", 0, 0.2, false]] remoteExec ["switchMove",0];
		};
		_this playActionNow "WBK_Droid_Disable_Gesture";
	}, _this, -1] call CBA_fnc_waitUntilAndExecute;
	// BX while loop removed — it only called allowDamage false every 5 s, which is no
	// longer needed. Base ArmA damage handles lethality. If a zombie-state guard
	// (alive != isAwake) is ever needed for BX, add it here.
};