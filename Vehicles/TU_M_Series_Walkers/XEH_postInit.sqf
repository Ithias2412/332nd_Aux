/*default {
							if ((_unit getVariable "WBK_WGP_Rounds") <= 0) exitWith {};
							addCamShake [0.5, 0.5, 5];
							_targetPos = _unit call WBK_CalculatePlayerCameraCrosshair;  
							_unit setVariable ["WBK_WGP_Rounds",(_unit getVariable "WBK_WGP_Rounds") - 1,true];
							WBK_WRS_CanContinueFire = false;
							(WBK_WRS_WGP1_Params # 0) spawn {uiSleep _this; WBK_WRS_CanContinueFire = nil;};
							[[_unit getVariable "WBK_WGP_SoundEmmiter",selectRandom ["TUM5_Main_Gun","TUM5_Main_Gun","TUM5_Main_Gun"],selectRandom ["TUM5_Main_Gun","TUM5_Main_Gun","TUM5_Main_Gun"]],{
								params ["_unit","_closeSound","_distSound"];
								if (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 4000) exitWith {};
								switch true do {
									case (((positionCameraToWorld [0,0,0]) distance (_this select 0)) > 200): {_unit say3D [_distSound,4000];};
									default {_unit say3D [_closeSound,1000];};
								};
							}] remoteExec ["call", [0,-2] select isDedicated,false];
							switch WBK_WRS_WGP1_CurrentGun do {
								case 3: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_4"));_lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_4")); _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_2", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_2", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 4; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_4"),WBK_WRS_WGP1_Params # 1, _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_WRS;};
								case 2: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_3")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_3"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_1", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_1", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 3; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_3"),WBK_WRS_WGP1_Params # 1, _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_WRS;};
								case 1: {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_2")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_2"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_3", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_3", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 2; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_2"),WBK_WRS_WGP1_Params # 1, _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_WRS;};
								default {[_unit,{if (isDedicated) exitWith {}; _lightSource = "Reflector_Cone_01_narrow_orange_F" createVehicleLocal (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_1")); _lightSource setPosATL (_this modelToWorld (_this selectionPosition "Mech_Fire_Pos_1"));  _lightSource setDir (getDir _this); _this setObjectTexture ["Muzzleflash_4", "wrs_mech\textures\muzzleflash\muzzleflash_ca.paa"]; uiSleep 0.07; _this setObjectTexture ["Muzzleflash_4", ""]; deleteVehicle _lightSource;}] remoteExec ["spawn",0]; WBK_WRS_WGP1_CurrentGun = 1; [_unit,_unit modelToWorld (_unit selectionPosition "Mech_Fire_Pos_1"),WBK_WRS_WGP1_Params # 1, _unit, _targetPos,WBK_WRS_WGP1_Params # 3, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_WRS;};
							};
						};