if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil {!(isNull findDisplay 46)};
	WBK_WRS_WGP_ControlledUnits = [];
	findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", {
		if (count WBK_WRS_WGP_ControlledUnits > 0) then {
			{
				_this select 0 drawIcon [
					getText (configFile/"CfgVehicles"/typeOf (vehicle _x)/"Icon"),
					[1,1,1,1],
					getPosASLVisual _x,
					20,
					20,
					getDirVisual _x,
					name _x  + " INTEGRITY: " + str (_x getVariable "WBK_SynthHP") + " / AMMO: " + str (_x getVariable "WBK_WGP_Rounds") + "/" + str (_x getVariable "WBK_WGP_Mags"),
					2,
					0.05,
					"PuristaLight",
					"right"
				];
			} forEach WBK_WRS_WGP_ControlledUnits;
		};
	}];
	(findDisplay 12 displayCtrl 51) ctrlAddEventHandler ["Draw", toString {
		if (count WBK_WRS_WGP_ControlledUnits > 0) then {
			{
				if (!(isNil {_x getVariable 'WBK_WGP_MovePosition'})) then {
					(_this select 0) drawLine [
						_x,
						_x getVariable 'WBK_WGP_MovePosition',
						[1,1,1,1]
					];
				};
			} forEach WBK_WRS_WGP_ControlledUnits;
		};
	}];
	WBK_WGP_HudFrame = [{
		if !(isNull(findDisplay 312)) exitWith {};
		_array = _this select 0;
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		if !(_unit isKindOf "WBK_WRS_WGP1_Ver1") exitWith {};
		if (alive _unit) then {
			if (inputAction "lookAround" <= 0 && inputAction "lookAroundToggle" <= 0 && !freeLook && (isNull objectParent _unit)) then {
				drawIcon3D
				[
					"\a3\ui_f\data\IGUI\Cfg\WeaponCursors\throw_gs.paa",
					[1,1,1,1],
					_unit modelToWorld (_unit selectionPosition "Mech_Up_Body_Rot"),
					1,
					1,
					0,
					"",
					0,
					0.3,
					"PuristaMedium",
					"center",
					true
				];
				drawLine3D [_unit modelToWorld (_unit selectionPosition "Mech_Up_Body_Rot"), _unit modelToWorld [1.9,-1.8,2.4], [1,1,1,1]];
				drawIcon3D
				[
					"\a3\ui_f\data\IGUI\Cfg\WeaponCursors\throw_gs.paa",
					[1,1,1,1],
					_unit modelToWorld [1.93,-1.8,2.39],
					1,
					1,
					0,
					"INTEGRITY: " + str (_unit getVariable "WBK_SynthHP"),
					0,
					0.1,
					"PuristaLight",
					"center",
					true
				];
				switch (_unit getVariable "WBK_WGP_WeaponChoice") do {
					case 1: {
						drawIcon3D
						[
							"\a3\ui_f\data\IGUI\Cfg\WeaponCursors\throw_gs.paa",
							[1,1,1,1],
							_unit modelToWorld (_unit selectionPosition "Mech_Body_Rockets"),
							1,
							1,
							0,
							"AMMO: " + str (_unit getVariable "WBK_WGP_Missiles"),
							0,
							0.1,
							"PuristaLight",
							"center",
							true
						];
						_ins = lineIntersectsSurfaces [_unit modelToWorldVisualWorld (_unit selectionPosition "Mech_Fire_Pos_3"),((positionCameraToWorld [0,0,0]) vectorAdd (getCameraViewDirection _unit vectorMultiply (1000000))),_unit,objNull,true,1,"GEOM","NONE"];
						if (count _ins == 0) then {
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Targeting\Seeker_ca.paa",
								[1,1,1,1],
								((positionCameraToWorld [0,0,0]) vectorAdd (getCameraViewDirection _unit vectorMultiply (1000000))),
								3,
								3,
								0,
								"",
								0,
								0.3,
								"PuristaMedium",
								"center",
								true
							];
						}else{
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Targeting\Seeker_ca.paa",
								[1,1,1,1],
								ASLToAGL (_ins select 0 select 0),
								3,
								3,
								0,
								"",
								0,
								0.3,
								"PuristaMedium",
								"center",
								true
							];
						};
					};
					default {
						drawIcon3D
						[
							"\a3\ui_f\data\IGUI\Cfg\WeaponCursors\throw_gs.paa",
							[1,1,1,1],
							_unit modelToWorld (_unit selectionPosition "Mech_Gun_R"),
							1,
							1,
							0,
							"AMMO: " + str (_unit getVariable "WBK_WGP_Rounds") + "/" + str (_unit getVariable "WBK_WGP_Mags"),
							0,
							0.1,
							"PuristaLight",
							"center",
							true
						];
						_ins = lineIntersectsSurfaces [_unit modelToWorldVisualWorld (_unit selectionPosition "Mech_Fire_Pos_3"),((positionCameraToWorld [0,0,0]) vectorAdd (getCameraViewDirection _unit vectorMultiply (1000000))),_unit,objNull,true,1,"GEOM","NONE"];
						if (count _ins == 0) then {
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Radar\radar_ca.paa",
								[1,1,1,1],
								((positionCameraToWorld [0,0,0]) vectorAdd (getCameraViewDirection _unit vectorMultiply (1000000))),
								3,
								3,
								getDirVisual _unit,
								"",
								0,
								0.3,
								"PuristaMedium",
								"center",
								true
							];
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Targeting\ImpactPoint_ca.paa",
								[1,1,1,1],
								((positionCameraToWorld [0,0,0]) vectorAdd (getCameraViewDirection _unit vectorMultiply (1000000))),
								2.5,
								2.5,
								getDirVisual _unit,
								"",
								0,
								0.3,
								"PuristaMedium",
								"center",
								true
							];
						}else{
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Radar\radar_ca.paa",
								[1,1,1,1],
								ASLToAGL (_ins select 0 select 0),
								3,
								3,
								getDirVisual _unit,
								"",
								0,
								0.3,
								"PuristaMedium",
								"center",
								true
							];
							drawIcon3D
							[
								"\a3\ui_f\data\IGUI\Cfg\Targeting\ImpactPoint_ca.paa",
								[1,1,1,1],
								ASLToAGL (_ins select 0 select 0),
								2.5,
								2.5,
								getDirVisual _unit,
								"",
								0,
								0.3,
								"PuristaMedium",
								"right",
								true
							];
						};
					};
				};
				_msInput = inputMouse 0; 
				if (!(visibleMap) && !(dialog) && (_msInput in [1,2,3,4]) && (isNil "WBK_WRS_CanContinueFire") && (isNil "WBK_WGP1_Reloading") && !(animationState _unit in ["wrs_wgp1_melee","wrs_wgp1_death","wrs_wgp1_inair","wrs_wgp1_run","wrs_wgp1_hif_f","wrs_wgp1_hif_b"])) then {
					switch (_unit getVariable "WBK_WGP_WeaponChoice") do {
						case 1: {
							if ((_unit getVariable "WBK_WGP_Missiles") <= 0) exitWith {};
							WBK_WRS_CanContinueFire = false;
							(WBK_WRS_WGP1_Params # 0) spawn {uiSleep 0.5; WBK_WRS_CanContinueFire = nil;};
							{
								_dist = (positionCameraToWorld [0,0,0] distance _x);
								if ((alive _x) and (((positionCameraToWorld [0,0,_dist] distance _x)/_dist) < 0.05) and (!(vehicle _x isKindOf "Man") || (_x isKindOf "WBK_WRS_WGP1_Ver1")) and ((_unit getVariable "WBK_WGP_Missiles") > 0)) exitWith {
									_unit setVariable ["WBK_WGP_Missiles",(_unit getVariable "WBK_WGP_Missiles") - 1,true];
									[[_unit getVariable "WBK_WGP_SoundEmmiter",selectRandom ["WRS_WGP_1_missile_close_1","WRS_WGP_1_missile_close_2","WRS_WGP_1_missile_close_3"],selectRandom ["WRS_WGP_1_missile_far_1","WRS_WGP_1_missile_far_2"]],{
										params ["_unit","_closeSound","_distSound"];
										if (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 4000) exitWith {};
										switch true do {
											case (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 200): {_unit say3D [_distSound,4000];};
											default {_unit say3D [_closeSound,1000];};
										};
									}] remoteExec ["call", [0,-2] select isDedicated,false];
									_missile = createVehicle ["332nd_CIS_A2A_Missile_Ammo", _unit modelToWorld [0.4,-0.4,3.7], [], 0, "CAN_COLLIDE"];    
									_yaw = (getDir _unit) + 180; _pitch = 140; _roll = 0;   
									_missile setVectorDirAndUp [
										[sin _yaw * cos _pitch, cos _yaw * cos _pitch, sin _pitch],   
										[[sin _roll, -sin _pitch, cos _roll * cos _pitch], -_yaw] call BIS_fnc_rotateVector2D   
									];   
									_missile setShotParents [vehicle _unit, _unit]; 
									_missile setMissileTarget [(vehicle _x),true]; 
								};
							} forEach (allUnits - units (side _unit));
						};
						default {
							if ((_unit getVariable "WBK_WGP_Rounds") <= 0) exitWith {};
							addCamShake [0.5, 0.5, 5];
							_targetPos = _unit call WBK_CalculatePlayerCameraCrosshair;  
							_unit setVariable ["WBK_WGP_Rounds",(_unit getVariable "WBK_WGP_Rounds") - 1,true];
							WBK_WRS_CanContinueFire = false;
							(WBK_WRS_WGP1_Params # 0) spawn {uiSleep _this; WBK_WRS_CanContinueFire = nil;};
							[[_unit getVariable "WBK_WGP_SoundEmmiter",selectRandom ["WRS_WGP_1_40mm_close_1","WRS_WGP_1_40mm_close_2","WRS_WGP_1_40mm_close_3"],selectRandom ["WRS_WGP_1_40mm_far_1","WRS_WGP_1_40mm_far_2","WRS_WGP_1_40mm_far_3"]],{
								params ["_unit","_closeSound","_distSound"];
								if (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 4000) exitWith {};
								switch true do {
									case (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 200): {_unit say3D [_distSound,4000];};
									default {_unit say3D [_closeSound,1000];};
								};
							}] remoteExec ["call", [0,-2] select isDedicated,false];
							switch WBK_WRS_WGP1_CurrentGun do {
								case 3: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_4"));_lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_4")); _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_2", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_2", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 4; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_4"),"IDA_blasterbolt_Red", _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0], 5] spawn WBK_fnc_ProjectileCreate_WRS;};
								case 2: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_3")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_3"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_1", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_1", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 3; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_3"),"IDA_blasterbolt_Red", _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0], 5] spawn WBK_fnc_ProjectileCreate_WRS;};
								case 1: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_2")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_2"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_3", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_3", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 2; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_2"),"IDA_blasterbolt_Red", _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0], 5] spawn WBK_fnc_ProjectileCreate_WRS;};
								default {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_1")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_1"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_4", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_4", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 1; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_1"),"IDA_blasterbolt_Red", _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0], 5] spawn WBK_fnc_ProjectileCreate_WRS;};
							};
						};
					};
				};
				
			};
		};
	},0,[player]] call CBA_fnc_addPerFrameHandler;
	(findDisplay 46) displayAddEventHandler ["KeyDown",{
		_this spawn {
			_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
			if ((visibleMap) || (dialog) || !(isNull objectParent _unit) || !(alive _unit) || !(_unit isKindOf "WBK_WRS_WGP1_Ver1")) exitWith {};
			switch true do {
				case (((_this select 1) in (actionKeys "ReloadMagazine")) && (isNil "WBK_WGP1_Reloading")): {
					if (_unit getVariable "WBK_WGP_Mags" <= 0) exitWith {systemChat "No more magazines";};
					_unit setVariable ["WBK_WGP_Rounds",WBK_WRS_WGP1_Params # 2,true];
					_unit setVariable ["WBK_WGP_Mags",(_unit getVariable "WBK_WGP_Mags") - 1,true];
					[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Reload", 150] call CBA_fnc_GlobalSay3D;
					[_unit getVariable "WBK_WGP_SoundEmmiter", selectRandom ["WRS_WGP_1_Voice_Smoke_1","WRS_WGP_1_Voice_Smoke_2"], 300] call CBA_fnc_GlobalSay3D;
					WBK_WGP1_Reloading = true; [] spawn {uiSleep 2; WBK_WGP1_Reloading = nil;};
				};
				case ((_this select 1) in (actionKeys "nextWeapon")): {
					switch (_unit getVariable "WBK_WGP_WeaponChoice") do {
						case 1: {
							_unit setVariable ["WBK_WGP_WeaponChoice",0];
							[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Guns", 150] call CBA_fnc_GlobalSay3D;
						};
						default {
							[_unit getVariable "WBK_WGP_SoundEmmiter", "WRS_WGP_1_Missiles", 150] call CBA_fnc_GlobalSay3D;
							_unit setVariable ["WBK_WGP_WeaponChoice",1];
						};
					};
				};
				case (((_this select 1) in (actionKeys "LeanRight")) && !(animationState _unit in ["wrs_wgp1_melee","wrs_wgp1_death","wrs_wgp1_inair","wrs_wgp1_hif_f","wrs_wgp1_hif_b"])): {
					[_unit,["wrs_wgp1_melee", 0, 0.7, false]] remoteExec ["switchMove",0];
				};
				case (((_this select 1) in (actionKeys "deployWeaponAuto")) && (isNil "WBK_WGP1_SmokeReloading")): {
					WBK_WGP1_SmokeReloading = true; 
					_unit spawn {
						_unit = _this;
						[_unit getVariable "WBK_WGP_SoundEmmiter", selectRandom ["WRS_WGP_1_Voice_Smoke_1","WRS_WGP_1_Voice_Smoke_2"], 300] call CBA_fnc_GlobalSay3D;
						_veh = createVehicle ["WBK_WRS_WGP1_SmokeScreen", _unit modelToWorld [0.05,-0.4,3.8], [], 0, "CAN_COLLIDE"];    
						_veh setDir (getDir _unit);
						[_veh, selectRandom ["WRS_WGP_1_Smoke_1","WRS_WGP_1_Smoke_2","WRS_WGP_1_Smoke_3"], 100] call CBA_fnc_GlobalSay3D;
						_veh setVelocityModelSpace [0,12 + (velocityModelSpace _unit select 1),3.6];
						uiSleep 0.1;
						_veh1 = createVehicle ["WBK_WRS_WGP1_SmokeScreen", _unit modelToWorld [0.05,-0.4,3.8], [], 0, "CAN_COLLIDE"];    
						_veh1 setDir (getDir _unit);
						_veh1 setVelocityModelSpace [4,12 + (velocityModelSpace _unit select 1),3.6];
						[_veh1, selectRandom ["WRS_WGP_1_Smoke_1","WRS_WGP_1_Smoke_2","WRS_WGP_1_Smoke_3"], 100] call CBA_fnc_GlobalSay3D;
						uiSleep 0.1;
						_veh2 = createVehicle ["WBK_WRS_WGP1_SmokeScreen", _unit modelToWorld [0.05,-0.4,3.8], [], 0, "CAN_COLLIDE"];    
						_veh2 setDir (getDir _unit);
						_veh2 setVelocityModelSpace [-4,12 + (velocityModelSpace _unit select 1),3.6];
						[_veh2, selectRandom ["WRS_WGP_1_Smoke_1","WRS_WGP_1_Smoke_2","WRS_WGP_1_Smoke_3"], 100] call CBA_fnc_GlobalSay3D;
						uiSleep 1.5;
						{
							[[_x,"WRS_WGP_1_Smoke_1_close","WRS_WGP_1_Smoke_2_far"],{
								params ["_unit","_closeSound","_distSound"];
								if (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 1000) exitWith {};
								switch true do {
									case (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 150): {_unit say3D [_distSound,1000];};
									default {_unit say3D [_closeSound,200];};
								};
							}] remoteExec ["call", [0,-2] select isDedicated,false];
							uiSleep 0.2;
						} forEach [_veh,_veh1,_veh2];
						uiSleep 28; 
						WBK_WGP1_SmokeReloading = nil;
					};
				};
			};
		};
	}];
	if (isClass (configFile >> "CfgPatches" >> "zen_custom_modules")) then {
		["WRS Modules", "Disable/Enable automatic targeting", {
			params ["_pos","_unit"];
			if ((isNull _unit) || !(_unit isKindOf "WBK_WRS_WGP1_Ver1") || !(alive _unit)) exitWith {systemChat "Must be placed on the Walking Gun Platform";};
			if !(isNil {_unit getVariable "WGP_ForceHoldFire"}) exitWith {_unit setVariable ["WGP_ForceHoldFire",nil,true]; systemChat "Automatic mode: ENABLED";};
			_unit setVariable ["WGP_ForceHoldFire",true,true]; systemChat "Automatic mode: DISABLED";
		}] call zen_custom_modules_fnc_register;
		["WRS Modules", "Disable/Enable WGP", {
			params ["_pos","_unit"];
			if (animationState _unit == "WRS_WGP1_Disable") exitWith {
				[_unit,['WRS_WGP1_Enable', 0, 0.7, false]] remoteExec ['switchMove',0];
			};
			[_unit,['WRS_WGP1_Disable', 0, 0.7, false]] remoteExec ['switchMove',0];
		}] call zen_custom_modules_fnc_register;
	};
};
