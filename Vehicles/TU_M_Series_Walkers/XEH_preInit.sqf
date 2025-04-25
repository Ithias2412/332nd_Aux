WBK_WRS_CreateSound = {
	if ((isNull (_this # 0)) || ((_this # 1) == "")) exitWith {};
	[_this,{
		params [
			["_source", objNull],
			["_sound", ""],
			["_distance",100],
			["_volume", 2]
		];
		switch true do {
			case (isDedicated): {};
			default {playSound3D [_sound, _source, false, getPosASL _source, _volume, 1, (_distance) + 15, 0, true];};
		};
	}] remoteExec ["call",[0,-2] select isDedicated,false];
};

WBK_WRS_StryderInit = {
	_this allowDamage false;
	_this setVariable ["WBK_WGP_Rounds",WBK_WRS_WGP1_Params # 2,true];
	_this setVariable ["WBK_WGP_Mags",WBK_WRS_WGP1_Params # 4,true];
	_this setVariable ["WBK_WGP_Missiles",WBK_WRS_WGP1_Params # 5,true];
	_this setVariable ["WBK_WGP_WeaponChoice",0,true];
	_this setVariable ["WBK_SynthHP",100,true];
	[_this,getText (configfile >> "CfgVehicles" >> typeOf _this >> "displayName")] remoteExecCall ["setName",0];
	if !(isPlayer _this) then {
		_this execVM "WRS_Mech\ai\WGP1.sqf";
	};
	_this addEventHandler ["AnimStateChanged", { 
		_this spawn {
			 params ["_unit", "_anim"]; 
			 switch _anim do {
					case "wrs_wgp1_melee": {
						uiSleep 0.2;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_melee")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_1.ogg",100] call WBK_WRS_CreateSound;
						uiSleep 0.6;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_melee")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_2.ogg",100] call WBK_WRS_CreateSound;
						[_unit,_anim,5] call WRS_WGP1_Melee_func;
					};
					case "wrs_wgp1_disable": {
						uiSleep 0.2;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_disable")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_1.ogg",100] call WBK_WRS_CreateSound;
						uiSleep 1.1;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_disable")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_2.ogg",100] call WBK_WRS_CreateSound;
						[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Voice_Smoke_1", 300] call CBA_fnc_GlobalSay3D;
					};
					case "wrs_wgp1_enable": {
						uiSleep 0.2;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_enable")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_3.ogg",100] call WBK_WRS_CreateSound;
						uiSleep 1.1;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_enable")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_2.ogg",100] call WBK_WRS_CreateSound;
						[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Voice_Smoke_2", 300] call CBA_fnc_GlobalSay3D;
					};
					case "wrs_wgp1_hif_f": {
						uiSleep 0.2;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_hif_f")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_3.ogg",100] call WBK_WRS_CreateSound;
						uiSleep 1.1;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_hif_f")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_2.ogg",100] call WBK_WRS_CreateSound;
						[_unit,selectRandom ["WRS_WGP_1_Voice_Target_1","WRS_WGP_1_Voice_Target_2","WRS_WGP_1_Voice_Target_3","WRS_WGP_1_Voice_Target_4","WRS_WGP_1_Voice_Target_5","WRS_WGP_1_Voice_Target_6","WRS_WGP_1_Voice_Target_7","WRS_WGP_1_Voice_Target_8"],350] call CBA_fnc_GlobalSay3D;
					};
					case "wrs_wgp1_hif_b": {
						uiSleep 0.2;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_hif_b")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_1.ogg",100] call WBK_WRS_CreateSound;
						uiSleep 1.1;
						if (!(alive _unit) or !(animationState _unit == "wrs_wgp1_hif_b")) exitWith {}; 
						[_unit,"WRS_Mech\sounds\hydralics_2.ogg",100] call WBK_WRS_CreateSound;
						[_unit,selectRandom ["WRS_WGP_1_Voice_Target_1","WRS_WGP_1_Voice_Target_2","WRS_WGP_1_Voice_Target_3","WRS_WGP_1_Voice_Target_4","WRS_WGP_1_Voice_Target_5","WRS_WGP_1_Voice_Target_6","WRS_WGP_1_Voice_Target_7","WRS_WGP_1_Voice_Target_8"],350] call CBA_fnc_GlobalSay3D;
					};
			 };
		};
	}];
	[_this,{
		if (isDedicated) exitWith {};
		_ps1 = "#particlesource" createVehicleLocal getPos _this; 
		_ps1 attachTo [_this,[0.5,-1.1,0.35],"pilot",true];   
		_ps1 setParticleClass "Refract"; 
		_ps2 = "#particlesource" createVehicleLocal getPos _this; 
		_ps2 attachTo [_this,[0.5,-1.1,0.35],"pilot",true];   
		_ps2 setParticleClass "ExhaustSmokeOnWater"; 
		waitUntil {
			sleep 1;
			if (isNull _this) exitWith { true };
			!alive _this;
		};
		{deleteVehicle _x;} forEach [_ps1,_ps2];
	}] remoteExec ["spawn", [0,-2] select isDedicated,false];
	_this spawn {
		_soundEmmiter = createSoundSource ["WRS_WGP_1_Engine_Sound", position _this, [], 0];
		_soundEmmiter attachTo [_this,[0,0,0.5],"aimPoint"];
		_this setVariable ["WBK_WGP_SoundEmmiter",_soundEmmiter,true];
		_hitbox = "WBK_WRS_WGP1_Hitbox" createVehicle (getPos _this);
		_hitbox attachTo [_this,[0.3,-0.6,-0.2],"pilot",true];
		_hitbox setDir -27;
		_hitbox setVariable ["WBK_WGP_Parent",_this,true];
		[_hitbox, {
			_this removeAllEventHandlers "HitPart";
			_this addEventHandler [
				"HitPart",
				{
					(_this select 0) params ["_hitbox","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
					_target = _hitbox getVariable "WBK_WGP_Parent";
					if !(alive _target) exitWith {};
					_isEnoughDamage = ((_ammo select 0) / WBK_WGP_DamageResist_Value);
					if (_isEnoughDamage <= 1) exitWith {};
					_new_vv = (_target getVariable "WBK_SynthHP") - _isEnoughDamage;
					if (_new_vv <= 0) exitWith {
						_target setVariable ["WBK_SynthHP",0,true];
						[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
					};
					_target reveal [_shooter,4];
					_target setVariable ["WBK_SynthHP",_new_vv,true];
					if ((_isEnoughDamage >= 4) and (isNil {_target getVariable "CanBeStunned"})) then {
						_target setVariable ["CanBeStunned",1,true]; 
						_target spawn {uisleep 30; _this setVariable ["CanBeStunned",nil,true];};
						if (((_target worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0) then {
							[_target,["WRS_WGP1_HIF_B", 0, 0.2, false]] remoteExec ["switchMove",0];
							[_target, "WRS_WGP1_Walk"] remoteExec ["playMove", _target];
						}else{
							[_target,["WRS_WGP1_HIF_F", 0, 0.2, false]] remoteExec ["switchMove",0];
							[_target, "WRS_WGP1_Walk_B"] remoteExec ["playMove", _target];
						};
					};
				}
			];
		}] remoteExec ["spawn", [0,-2] select isDedicated,true];
		while {alive _this} do {
			if (_this getVariable "WBK_SynthHP" <= 30) then {
				[_this,{
					if (isDedicated) exitWith {};
					_ps2 = "#particlesource" createVehicleLocal getPos _this;
					_ps2 attachTo [_this,[0,-0.4,0.1],"Mech_Up_Body"];
					_ps2 setParticleClass "MediumSmoke";
					_smlfirelight1 = "#lightpoint" createVehicleLocal (getpos _this);
					_smlfirelight1 attachTo [_this,[-0.3,-0.1,-0.1],"Mech_Up_Body"];
					_smlfirelight1 setLightAmbient [1,1,1];   
					_smlfirelight1 setLightColor [1,1,1];    
					_smlfirelight1 setLightBrightness 0.3;
					_smlfirelight1 setLightUseFlare true;
					_smlfirelight1 setLightFlareSize 1;
					_smlfirelight1 setLightDayLight true;
					_smlfirelight1 setLightFlareMaxDistance 250;
					_scantei_spark = "#particlesource" createVehicleLocal (getPosATL _this);
					_scantei_spark attachTo [_this,[-0.3,-0.1,-0.1],"Mech_Up_Body"];
					_scantei_spark setParticleCircle [0, [0, 0, 0]];
					_scantei_spark setParticleRandom [1, [0.05, 0.05, 0.1], [5, 5, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0];
					_scantei_spark setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1+(random 2), [0,0,0], [0, 0, 0], 0, 20, 7.9, 0, [0.3,0.3,0.05], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.26], 1, 0, "", "", _scantei_spark,0,true,0.3,[[0,0,0,0]]];
					_scantei_spark setDropInterval 0.001;
					_ps2 say3D [selectRandom ["WRS_WGP_Sparks_1","WRS_WGP_Sparks_2","WRS_WGP_Sparks_3"],40];
					uiSleep 0.1;
					{deleteVehicle _x;} forEach [_smlfirelight1,_scantei_spark];
					uiSleep (random 5);
					_smlfirelight1 = "#lightpoint" createVehicleLocal (getpos _this);
					_smlfirelight1 attachTo [_this,[0.3,-0.9,-0.8],"Mech_Up_Body"];
					_smlfirelight1 setLightAmbient [1,1,1];   
					_smlfirelight1 setLightColor [1,1,1];    
					_smlfirelight1 setLightBrightness 0.3;
					_smlfirelight1 setLightUseFlare true;
					_smlfirelight1 setLightFlareSize 1;
					_smlfirelight1 setLightDayLight true;
					_smlfirelight1 setLightFlareMaxDistance 250;
					_scantei_spark = "#particlesource" createVehicleLocal (getPosATL _this);
					_scantei_spark attachTo [_this,[0.3,-0.9,-0.8],"Mech_Up_Body"];
					_scantei_spark setParticleCircle [0, [0, 0, 0]];
					_scantei_spark setParticleRandom [1, [0.05, 0.05, 0.1], [5, 5, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0];
					_scantei_spark setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1+(random 2), [0,0,0], [0, 0, 0], 0, 20, 7.9, 0, [0.3,0.3,0.05], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.26], 1, 0, "", "", _scantei_spark,0,true,0.3,[[0,0,0,0]]];
					_scantei_spark setDropInterval 0.001;
					_ps2 say3D [selectRandom ["WRS_WGP_Sparks_1","WRS_WGP_Sparks_2","WRS_WGP_Sparks_3"],40];
					uiSleep 0.1;
					{deleteVehicle _x;} forEach [_smlfirelight1,_scantei_spark];
					uiSleep 7;
					deleteVehicle _ps2;
				}] remoteExec ["spawn", [0,-2] select isDedicated,false];
				uiSleep 7.5;
			}else{
				uiSleep 1;
			};
		};
		{deleteVehicle _x;} forEach [_hitbox,_soundEmmiter];
	};
};

WBK_fnc_ProjectileCreate_WRS = {
	params   
	[   
	["_shooter", objNull, [objNull]],   
	["_startPos", [0.0 , 0.0, 0.0], [[]]],   
	["_class", "M_Titan_AT", ["", objNull]],   
	["_target", objNull, [objNull]],   
	["_tgtPos", [0.0 , 0.0, 0.0], [[]]],   
	["_speed", 100.0, [0.0]],   
	["_destroyTarget", true, [true]],   
	["_localOffset", [0.0, 0.0, 0.0], [[]]],   
	["_minDistanceToTarget", 8.0, [0.0]],   
	["_function", "", [""]],   
	["_isGlobalFunction", false, [true]]   
	];   
	switch true do {
		case (count _startPos != 3 || {{typeName _x != typeName 0} count _startPos > 0}): {};
		case (_startPos isEqualTo [0,0,0]): {};
		case (typeName _class == typeName "" && {_class == ""}): {};
		case (typeName _class == typeName objNull && {isNull _class}): {};
		case (isNull _target): {};
		default {
			private _rocket = createVehicle [_class,_startPos, [], 0, "CAN_COLLIDE"];
			_rocket setDir (getDir _shooter);
			_rocket setShotParents [vehicle _shooter, _shooter];  
			private _currentPos = getPosASLVisual _rocket;   
			private _targetPos = _tgtPos;   
			private _forwardVector = vectorNormalized (_targetPos vectorDiff _currentPos);   
			private _rightVector = (_forwardVector vectorCrossProduct [0,0,1]) vectorMultiply -1;   
			private _upVector = _forwardVector vectorCrossProduct _rightVector;   
			private _targetVelocity = _forwardVector vectorMultiply _speed;   
			[_rocket,[_forwardVector, _upVector]] remoteExecCall ["setVectorDirAndUp",0];   
			[_rocket,_targetVelocity] remoteExecCall ["setVelocity",0];
			uisleep 20;   
			deleteVehicle _rocket;
		};
	};
};

WBK_CalculatePlayerCameraCrosshair = {
	_posStart = positionCameraToWorld [0,0,0];
	_endV = (_posStart vectorAdd (getCameraViewDirection _this vectorMultiply (1000000)));   
	_endV 
};  

WBK_WRS_WGP1_Params = [0.15,"IDA_blasterbolt_Red",100,600,4,8,"332nd_CIS_A2A_Missile_Ammo"];
WBK_WRS_WGP1_CurrentGun = 0;

WRS_WGP1_Death_Func = {
	if (local _this && _this in WBK_WRS_WGP_ControlledUnits) then {
		WBK_WRS_WGP_ControlledUnits deleteAt (WBK_WRS_WGP_ControlledUnits find _this);
	};
	_this setDamage 1;
	_sound = "#particlesource" createVehicle (_this modelToWorldVisual [0,0,2.5]);
	_sound attachTo [_this,[-0.3,-0.1,-0.1],"Mech_Up_Body"];
	[_sound, selectRandom ["WRS_WGP_1_Death_1","WRS_WGP_1_Death_2"], 300] call CBA_fnc_GlobalSay3D;
	[_sound, "WRS_WGP_1_Death_noise", 280] call CBA_fnc_GlobalSay3D;
	[_sound,{
		_this setParticleCircle [0, [0, 0, 0]];
		_this setParticleRandom [1, [0.05, 0.05, 0.1], [7, 7, 4], 0, 0.0025, [0, 0, 0, 0], 0, 0];
		_this setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1+(random 2), [0,0,0], [0, 0, 0], 0, 20, 7.9, 0, [0.6,0.6,0.05], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.3], 1, 0, "", "",_this,0,true,0.3,[[0,0,0,0]]];
		_this setDropInterval 0.01;
	}] remoteExec ["call",[0,-2] select isDedicated,false];
	uiSleep (random 2.8);
	deleteVehicle _sound;
	if (isNull _this) exitWith {};
	[_this,"WRS_Mech\sounds\groundPound.ogg",300, 4] call WBK_WRS_CreateSound;
	_wreck_1 = "WBK_WRS_WGP1_Ver1_Wreck_MainBody" createVehicle (_this modelToWorldVisual [0,0,2.5]);
	_wreck_1 setPosATL (_this modelToWorldVisual [0,0,2.5]);
	_wreck_1 setDir 180;
	_wreck_1 setVelocityModelSpace [0,-6,4];
	_charge = createMine [if !(isNil {_this getVariable "WGP_SelfDestruct"}) then {"DemoCharge_F"}else{"IEDUrbanSmall_F"}, (_this modelToWorldVisual (_this selectionPosition "Mech_Up_Body")), [], 0];
	_this addOwnedMine _charge;
	_charge setPosATL (_this modelToWorldVisual (_this selectionPosition "Mech_Up_Body"));
	_charge setDamage 1;
	uiSleep 0.1;
	_wreck_2 = "WBK_WRS_WGP1_Ver1_Wreck_Leg" createVehicle (_this modelToWorldVisual [1,-0.1,0.05]);
	_wreck_2 setPosATL (_this modelToWorldVisual [1,-0.1,0.05]);
	_wreck_2 setDir ((getDir _this) - 180);
	_wreck_2 setVelocityModelSpace [-7,0,0];
	_wreck_3 = "WBK_WRS_WGP1_Ver1_Wreck_Leg" createVehicle (_this modelToWorldVisual [-1,-0.1,0.05]);
	_wreck_3 setPosATL (_this modelToWorldVisual [-1,-0.1,0.05]);
	_wreck_3 setDir ((getDir _this) - 180);
	_wreck_3 setVelocityModelSpace [7,0,0];
	[[_wreck_1,_wreck_2,_wreck_3,_this],{
		if (isDedicated) exitWith {};
		params ["_wreck1","_wreck2","_wreck3","_robot"];
		_ps1 = "#particlesource" createVehicleLocal getPos _wreck1;
		_ps1 attachTo [_wreck1,[0,0,1]];
		_ps1 setParticleClass "MediumSmoke";
		_ps2 = "#particlesource" createVehicleLocal getPos _wreck2;
		_ps2 attachTo [_wreck2,[0,0,1]];
		_ps2 setParticleClass "MediumSmoke";
		_ps3 = "#particlesource" createVehicleLocal getPos _wreck3;
		_ps3 attachTo [_wreck3,[0,0,1]];
		_ps3 setParticleClass "MediumSmoke";
		_robot hideObject true;
		_parca = "#particlesource" createVehicleLocal (getposATL _robot);
		_parca setParticleParams             
			[             
				["\A3\data_f\ParticleEffects\Shard\shard3", 1, 0, 1], //shape name             
				"", //animation name             
				"SpaceObject", //type             
				1, 2 + random 5, //timer period & life time             
				[0, 0, 0], //position             
				[3 + random -6, 3 + random -6,1 + random 6], //moveVeocity             
				1 + random 4, 1, 0.1, 0, //rotation velocity, weight, volume, rubbing             
				[0.4 + random 0.8], //size             
				[[1,1,1,1]], //color             
				[0.1], //animationPhase (animation speed in config)             
				0.1, //randomdirection period             
				0.05, //random direction intensity             
				"", //onTimer             
				"", //before destroy             
				"", //object             
				0, //angle             
				false, //on surface             
				0.3 //bounce on surface             
			];             
		_parca setParticleRandom [0, [0, 0, 0], [10, 10, 1], 0, 0.1, [0, 0, 0, 0], 0, 0];             
		_parca setDropInterval 0.01;             
		_parca attachTo [_robot,[0,-0.05,0.18],"Mech_Up_Body"]; 
		_sparls = "#particlesource" createVehicle (getposATL _robot);
		_sparls attachTo [_robot,[0,-0.05,0.18],"Mech_Up_Body"]; 
		_sparls setParticleCircle [0, [0, 0, 0]];
		_sparls setParticleRandom [1, [0.05, 0.05, 0.1], [12, 12, 5], 0, 0.0025, [0, 0, 0, 0], 0, 0];
		_sparls setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1+(random 2), [0,0,0], [0, 0, 0], 0, 20, 7.9, 0, [0.9,0.9,0.1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.3], 1, 0, "", "",_sparls,0,true,0.5,[[0,0,0,0]]];
		_sparls setDropInterval 0.001;
		uisleep 0.1;
		deleteVehicle _sparls;
		uisleep 0.1;
		deleteVehicle _parca;
		uiSleep 120;
		{deleteVehicle _x;} forEach [_ps1,_ps2,_ps3];
	}] remoteExec ["spawn",[0,-2] select isDedicated,false];
	[[_wreck_1,_wreck_2,_wreck_3],{
		{ 
		_x addCuratorEditableObjects [_this,true]; 
		} forEach allCurators;
	}] remoteExec ["call",2];
	uiSleep 2;
	deleteVehicle _this;
};

WRS_WGP1_Melee_func = {
	params ["_goliaph","_anim","_AttackDist"];
	if (!(alive _goliaph) || (animationState _goliaph != _anim)) exitWith {};
	[_goliaph,"WRS_Mech\sounds\groundPound.ogg",190, 5] call WBK_WRS_CreateSound;
	{
		switch true do {
			case (side _x == side _goliaph): {};
			case ((((_goliaph worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0) || !(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) || (_x == _goliaph) || !(alive _goliaph) || !(alive _x) || (side _x == side _goliaph) || (typeOf _x isKindOf "WBK_Goliaph_1") || (typeOf _x isKindOf "WBK_SpecialZombie_Smasher_1")): {};
			default {
				[_goliaph, _x] spawn {
					params ["_zombie","_enemy"];
					[_enemy,"WRS_Mech\sounds\hit_man.ogg",230, 5] call WBK_WRS_CreateSound;
					_enemy setDamage 1;
					uisleep 0.05;
					[_enemy, [_zombie vectorModelToWorld [0,1000,800], _enemy selectionPosition "head", false]] remoteExec ["addForce", _enemy];
				};
			};
		};
	} forEach nearestObjects [_goliaph,["MAN"],_AttackDist];
	{
		[_x,"WRS_Mech\sounds\hit_car.ogg",230, 5] call WBK_WRS_CreateSound;
		_x setDamage ((damage _x) + 0.2);
		_dir = getDirVisual _goliaph;
		_vel = velocity _x;
		[_x, [(_vel select 0)+(sin _dir*10),(_vel select 1)+(cos _dir*10),4]] remoteExec ["setVelocity", _x];
	} forEach nearestObjects [_goliaph,["CAR","AIR","StaticWeapon"],_AttackDist + 1];
	{
		_x setDamage 1;
	} forEach nearestTerrainObjects [_goliaph,["WALL","SMALL TREE","BUSH","FENCE"],_AttackDist + 1];
};

WRS_WGP_ForceAiToFire = {
	params ["_unit","_targetPos"];
	_unit setVariable ["WBK_WRS_ShotAtWGP",true];
	_unit setVariable ["WBK_DAH_DisableAnim_Hit",true];
	_unit commandTarget _targetPos;
	_unit selectWeapon (secondaryWeapon _unit);
	_magazineClass = currentMagazine _unit;
	_ammo = getText (configfile >> "CfgMagazines" >> _magazineClass >> "ammo");
	_unit playMoveNow "AmovPercMstpSrasWlnrDnon";
	waitUntil {
		if (isNull _unit) exitWith { true };
		(animationState _unit == "amovpercmstpsraswlnrdnon") || (lifeState _unit == "INCAPACITATED") || !(alive _unit)
	};
	if (!(alive _unit) || !(alive _targetPos) || (isNull _unit) || (isNull _targetPos) || (lifeState _unit == "INCAPACITATED")) exitWith {};
	[_unit,selectRandom ["A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_closeShot_01.wss","A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_closeShot_02.wss","A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_closeShot_03.wss"],700, 4] call WBK_WRS_CreateSound;
	[_unit,selectRandom ["A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_distShot_01.wss","A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_distShot_02.wss","A3\Sounds_F_Tank\arsenal\weapons\Launchers\MRAWS\MRAWS_distShot_03.wss"],6000, 4] call WBK_WRS_CreateSound;
	[_unit,_unit modelToWorld (_unit selectionPosition "leftHand"),_ammo,_targetPos,aimPos _targetPos,300, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_WRS;
	uiSleep 30;
	if (isNull _unit) exitWith {};
	_unit setVariable ["WBK_WRS_ShotAtWGP",nil];
};

WRS_WGP_Refil = {
	params ["_unit","_refilVic"];
	switch true do {
		case ((getAmmoCargo _refilVic) > 0): {
			_unit setVariable ["WBK_WGP_Rounds",WBK_WRS_WGP1_Params # 2,true];
			_unit setVariable ["WBK_WGP_Mags",WBK_WRS_WGP1_Params # 4,true];
			_unit setVariable ["WBK_WGP_Missiles",WBK_WRS_WGP1_Params # 5,true];
			[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Reload", 150] call CBA_fnc_GlobalSay3D;
			[_unit getVariable "WBK_WGP_SoundEmmiter", selectRandom ["WRS_WGP_1_Voice_Smoke_1","WRS_WGP_1_Voice_Smoke_2"], 300] call CBA_fnc_GlobalSay3D;
		};
		case ((getRepairCargo _refilVic) > 0): {
			_unit setVariable ["WBK_SynthHP",100,true];
			[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Repair", 150] call CBA_fnc_GlobalSay3D;
			[_unit getVariable "WBK_WGP_SoundEmmiter", selectRandom ["WRS_WGP_1_Voice_Smoke_1","WRS_WGP_1_Voice_Smoke_2"], 300] call CBA_fnc_GlobalSay3D;
		};
		default {};
	};
};

WBK_WRS_FindTarget = {
	_targets = _this targets [true, 500];
	if (count _targets == 0) exitWith {
		objNull
	};
	_tarArr = _this findNearestEnemy _this;
	{
		_ins = [_x, "VIEW", _this] checkVisibility [eyePos _this, eyePos _x];
		if (_ins >= 0.6) exitWith {
			_tarArr = _x;
		};
	} forEach _targets;
	_tarArr
};

WBK_WRS_WGP_Controlls = {
	params ["_target", "_caller", "_func"];
	switch _func do {
		case "Combat": {
			if !(isNil {_target getVariable "WGP_ForceHoldFire"}) exitWith {_target sideChat "This platform do not support automatic targeting systems.";};
			if !(isNil {_target getVariable "WGP_HoldFire"}) exitWith {
				_target sideChat "Automatic targeting systems enabled. Engaging hostiles."; 
				_target setVariable ["WGP_HoldFire",nil];
				((findDisplay 8213) displayCtrl 1000) ctrlSetStructuredText parseText format ["<t color='#fcffee' align='center' size='2.5' font = 'PuristaLight'>INTEGRITY: %1<br/>AMMO: %2/%3<br/>MISSILES: %4<br/>%5</t>",_target getVariable "WBK_SynthHP",_target getVariable "WBK_WGP_Rounds",_target getVariable "WBK_WGP_Mags",_target getVariable "WBK_WGP_Missiles","ENGAGING AT WILL"];
			};
			_target sideChat "Automatic targeting systems disabled. Holding fire.";
			_target setVariable ["WGP_HoldFire",true];
			((findDisplay 8213) displayCtrl 1000) ctrlSetStructuredText parseText format ["<t color='#fcffee' align='center' size='2.5' font = 'PuristaLight'>INTEGRITY: %1<br/>AMMO: %2/%3<br/>MISSILES: %4<br/>%5</t>",_target getVariable "WBK_SynthHP",_target getVariable "WBK_WGP_Rounds",_target getVariable "WBK_WGP_Mags",_target getVariable "WBK_WGP_Missiles","HOLDING FIRE"];
		};
		case "Connect": {
			_target setVariable ['WGP_Connected',true,true];
			[_target,{
				{
					[_x] call CBA_fnc_removePerFrameHandler;
				} forEach (_this getVariable "WBK_AI_AttachedHandlers");
				{
					_this removeAllEventHandlers _x;
				} forEach ["Deleted","Killed","Suppressed","FiredNear"];
			}] remoteExecCall ["call",_target];
			uiSleep 0.3;
			[(group _target),clientOwner] remoteExecCall ['setGroupOwner',2];
			waitUntil {local _target};
			WBK_WRS_WGP_ControlledUnits pushBack _target; 
			_target execVM "WRS_Mech\ai\WGP1.sqf";
			_target sideChat format ["Transfership completed. Greetings, %1. All systems online.",name _caller];
		};
		case "Disable": {
			if (animationState _target == "WRS_WGP1_Enable") exitWith {};
			if (animationState _target == "WRS_WGP1_Disable") exitWith {
				[_target,['WRS_WGP1_Enable', 0, 0.7, false]] remoteExec ['switchMove',0];
				_target sideChat "Enable systems";
				uiSleep 2.4;
				_target sideChat "All systems online";
			};
			[_target,['WRS_WGP1_Disable', 0, 0.7, false]] remoteExec ['switchMove',0];
			_target sideChat "Disabling...";
			_target setVariable ['WGP_Controlled',nil];
			_target setVariable ['WGP_Controlled_Following',nil];
		};
		case "Disconnect": {
			_target sideChat format ["Disconnected from %1",name _caller];
			_target setVariable ['WGP_Connected',nil,true];
			_target setVariable ['WGP_Controlled',nil];
			_target setVariable ['WGP_Controlled_Following',nil];
			_target setVariable ['WBK_WGP_MovePosition',nil];
			WBK_WRS_WGP_ControlledUnits deleteAt (WBK_WRS_WGP_ControlledUnits find _target);
		};
		case "RemoteControll": {
			if (isNil "WBK_WGP_DisplayTutorial") then {
				WBK_WGP_DisplayTutorial = true;
				[["WBK_WGP_ControllScheme", "WBK_WGP_WGP_1_Controlls"], 15,"",35,"",true,true,false,true] call BIS_fnc_advHint;
			};
			call BIS_fnc_VRFadeIn;
			_target setVariable ['WGP_Controlled',true];
			missionNamespace setVariable["bis_fnc_moduleRemoteControl_unit", _target];
			_caller remoteControl _target;
			_target switchCamera "internal";
			_target sideChat "Switching to MANUAL controlls";
			if (animationState _target == "WRS_WGP1_Disable") then {
				[_target,['WRS_WGP1_Enable', 0, 0.7, false]] remoteExec ['switchMove',0];
			};
			waitUntil { !(alive _target) || !(alive player) || (isNil {_target getVariable "WGP_Controlled"}) || !(isRemoteControlling player)};
			missionNamespace setVariable["bis_fnc_moduleRemoteControl_unit", nil];
			_target setVariable ['WGP_Controlled',nil];
			if (alive _target && alive _caller) then {
				_target sideChat "Switching to AUTOMATIC mode";
			};
			objNull remoteControl _target;
			player switchCamera "internal";	
			if (alive player) then {
				createDialog 'WBK_WRS_WGP_HUD';
				call BIS_fnc_VRFadeIn;
			};
		};
		case "MoveSomeWhere": {
			 openMap true;  
			 hint "Click on map to make WGP move there.";  
			 onMapSingleClick "WBK_WRS_WGP_Current setVariable ['WGP_Controlled_Following',nil]; WBK_WRS_WGP_Current setVariable ['WBK_WGP_MovePosition',_pos]; WBK_WRS_WGP_Current doMove _pos; onMapSingleClick ''; openMap false; hintSilent ''; WBK_WRS_WGP_Current sideChat 'Moving to designated coordinates'; true;";  
			 waitUntil{!(visibleMap)}; 
			 onMapSingleClick ""; 
			 hintSilent ''; 
			 createDialog 'WBK_WRS_WGP_HUD';
		};
		case "Follow": {
			if !(isNil {_target getVariable 'WGP_Controlled_Following'}) exitWith {_target setVariable ['WBK_WGP_MovePosition',nil]; _target setVariable ['WGP_Controlled_Following',nil]; _target sideChat "Holding position"; _target doMove (getPos _target);};
			_target sideChat format ["Following you, %1",name _caller];
			_target setVariable ['WGP_Controlled_Following',true];
			_target setVariable ['WBK_WGP_MovePosition',nil];
			[_target,_caller] spawn {
				while {alive (_this select 1) && alive (_this select 0) && !(isNil {(_this select 0) getVariable "WGP_Controlled_Following"})} do {
					(_this select 0) doMove (getPos (_this select 1));
					(group (_this select 0)) setFormDir (getDir (_this select 1));
					uiSleep 4;
				};
			};
		};
		default {};
	};
};


[ 
    "WBK_WGP_DamageResist", 
    "EDITBOX", 
    ["Damage resistance","Defines how much incoming damage will be suppresed, raising the value will make the WGP to be able to take more damage, lowering the value will make regular 7.62,6.5,5.56 rifles to be able to damage it."],
    ["Weapon Research and Security","Walking Gun Platform"],
    "20",
    1,
    {  
        params ["_value"];  
		WBK_WGP_DamageResist_Value = (parseNumber _value);
    }
] call CBA_fnc_addSetting;