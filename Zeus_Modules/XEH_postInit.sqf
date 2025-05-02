
[] spawn {

uiSleep 2;
kickButt = {
_unit = _this select 0;
if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {};
if (!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") and !(stance _unit == "PRONE") and !(animationState _unit == "starWars_lightsaber_hit_1") and !(animationState _unit == "starWars_lightsaber_hit_2") and !(currentWeapon _unit == "") and !(currentMagazine _unit in lightSaberEnergy) and (alive _unit) and (_unit getVariable "canMakeAttack" == 0) and !(animationState _unit == "starWars_force_landRoll") and !(animationState _unit == "starWars_force_landRoll_b") and !(animationState _unit == "push_backwards")) then {
if (_unit getVariable "WBK_CombineType" == " assasin_") exitWith {
_unit spawn legPunchVertuha_Assasin;
};
if (_unit isKindOf "TIOWSpaceMarine_Base") exitWith {
_unit spawn SpaceMarine_Punch_WithRifle;
};
if (("WBK_KatarnCloneKnife" in items _unit) and (currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {
_unit spawn Katarn_Punch;
};
_unit setVariable ["canMakeAttack",1, true]; 
_unit setVariable ["actualSwordBlock",0, true]; 
_IMS_playerTargetTrigger = createTrigger ["EmptyDetector", getPosATL _unit]; 
_IMS_playerTargetTrigger setTriggerArea [0.65, 6, 0, true]; 
_IMS_playerTargetTrigger attachTo [_unit, [0,1.2,0]];
[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
if (currentWeapon _unit == primaryWeapon _unit) then {
if (
(animationState _unit == "AmovPercMevaSlowWrflDfl") or 
(animationState _unit == "AmovPercMevaSlowWrflDfr") or 
(animationState _unit == "AmovPercMevaSlowWrflDf") or 
(animationState _unit == "AmovPercMevaSrasWrflDf") or 
(animationState _unit == "AmovPercMevaSrasWrflDfl") or 
(animationState _unit == "AmovPercMevaSrasWrflDfr") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_up") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_up") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_up")
) then {
[_unit, "IMS_ButtStock_onRun"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_onRun"] remoteExec ["playMoveNow", 0];
}else{
[_unit, "IMS_ButtStock_1"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_1"] remoteExec ["playMoveNow", 0];
};
}else{
if (currentWeapon _unit == handgunWeapon _unit) then {
[_unit, "IMS_ButtStock_Pistol"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_Pistol"] remoteExec ["playMoveNow", 0];
};
};
sleep 0.2;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
_rndSnd = ["kick_butt_1","kick_butt_2","kick_butt_3"] call BIS_fnc_SelectRandom;
[_unit, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
if (animationState _unit == "IMS_ButtStock_onRun") then {
[_unit, [9 * (sin (getdir _unit )), 9 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
}else{
[_unit, [5 * (sin (getdir _unit )), 5 * (cos (getdir _unit)), 1]] remoteExec ["setvelocity", _unit];
};
sleep 0.1;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
if (!(currentWeapon _unit == "") and !(currentMagazine _unit in lightSaberEnergy) and (alive _unit) and !(animationState _unit == "starWars_force_landRoll") and !(animationState _unit == "starWars_force_landRoll_b") and !(animationState _unit == "starWars_force_landRoll_b_weapon") and !(animationState _unit == "starWars_force_landRoll_weapon") and !(animationState _unit == "push_backwards") and !(animationState _unit == "starWars_lightsaber_hit_1") and !(animationState _unit == "starWars_lightsaber_hit_2") and !(animationState _unit == "starWars_lightsaber_hit_rifle_2") and !(animationState _unit == "starWars_lightsaber_hit_rifle_1") and !(animationState _unit == "starWars_lightsaber_hit_rifle_b")) then {

{ 
_inTrigger = [_IMS_playerTargetTrigger, _x] call BIS_fnc_inTrigger;
if ((_inTrigger) and (alive _x) and !(_x == _unit) and (isNil {_x getVariable "IMS_IsUnitInvicibleScripted"})) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
};
[[_x, _unit], kickButtKill] remoteExec ["spawn", _x]; 
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN"], 2.8];
};
sleep 0.8;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
_unit setVariable ["canMakeAttack",0, true];
_unit setVariable ["actualSwordBlock",0, true]; 
deleteVehicle _IMS_playerTargetTrigger;
};
};
};

fnc_SpawnVehicle = { 
params ["_vehicle", "_pad", "_console"]; 
_name = getText (configFile >> "CfgVehicles" >> _vehicle >> "displayName");
_actionName = "Spawn "  + _name;
_spawner = _this select 0;
_test = (_this select 1);
_console addAction [_actionName, {
params ["_target", "_caller", "_actionId", "_arguments"];
_pad = _this select 3 select 1;
_spawner = _this select 3 select 0;
if (surfaceIsWater position _pad) then            
{ 
	_pos = getPosASL _pad;  
	_dir = getdir _pad; 
	_vehicle = _spawner createVehicle [0,0,0];
	_vehicle setPosASL _pos; 
	_vehicle setDir _dir;   
}
else {
	_pos = getposATL _pad; 
	_dir = getdir _pad; 
	_vehicle = _spawner createVehicle [0,0,0];
	_vehicle setPosATL _pos; 
	_vehicle setDir _dir; 
};

},
    [_vehicle, _pad, _console],
    1.5,
    true,
    true,
    "",
    "true", 
    50,
    false,
    "",
    ""];
}; 

			["[332nd] Droid Modules", "HMP Infantry drop",
		{
			params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

			_options = ["Specialist", "AT Team", "RIfle Team", "B2 Team", "Commandos"];

			["spawn HMP Infantry drop",
				[
					
					["COMBO", ["Choose Aircraft", "The aircraft that will deploy the Infantry"], [SB_332nd_CIS_HMP_Transport_list, SB_332nd_CIS_HMP_Transport_listDISPLAY]],
					["toOLBOX", ["Type select", "What type of Droids to spawn."], [3, 2, 3, _options, nil]],
					["sideS", ["Side select (ONLY ONE!)", "The side the spawned dropped units will be on."], [east]],
					["SLIDER",["Insert Distance","How far away the aircraft start it's flight path"],[500,5000,2000,0]],
					["toOLBOX", "Insert Direction", [0, 1, 8, ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]]]
				],
				{ 
					_this spawn {
					params["_values", "_arguments"];

						_Aircraft = _values # 0;
						_selection=_values # 1;
						_side =_values # 2;
						_InsertDistance = _values # 3;
						_direction = _values # 4;

						_Ship_direction = [0, 45, 90, 135, 180, 225, 270, 315] # _direction;
												
						_position=_arguments select 0;
							
						[_position,_Aircraft,_side,_selection,_InsertDistance,_Ship_direction] call SB_ScifiSupportPlus_fnc_SW_HMPInfDrop;
					};
				},
				{},
				[_pos]] call zen_dialog_fnc_create;
		},
		"\PHAN_ScifiSupportPlus\data\HMP.paa"] call zen_custom_modules_fnc_register;

		SB_ScifiSupportPlus_fnc_SW_HMPInfDrop = {
		params ["_position", "_Aircraft", "_side", "_selection", "_insertdistance", "_Ship_direction"];

						_logic = createVehicle ["land_AirHorn_01_F",ASLToATL _position,[],0,"CAN_COLLIDE"];
						
							
							hideObjectGlobal _logic;
							_logic setDir _Ship_direction;
							_logic setPosATL (getPosATL _logic);

							_position = (getPosATL _logic);
									
							_craterposNew = _logic getRelPos  [(_InsertDistance), (_direction)];
							_craterposdrop = _logic getRelPos  [-100, - (_direction)];
							_craterposOut = _logic getRelPos  [-5000, - (_direction)];
							_hpad = "Land_HelipadEmpty_F" createVehicle [0,0,0];
							_hpad setPosASL _craterposdrop;
							
							_dropperAircraft = createvehicle [_Aircraft, _craterposNew, [], 0, "FLY"];
							createvehiclecrew _dropperAircraft;
							_dropperAircraft flyinHeight 15;
							_dropperAircraft limitSpeed 100;


							sleep 0.1;


							_dropperAircraft setCombatBehaviour "CARELESS";
							_dropperAircraft doMove (_craterposdrop);

							{
								[_x, [[_dropperAircraft], false]] remoteExec ["addCuratorEditableObjects", 0];
							} forEach allCurators;

							_dropperAircraft landAt [_hpad, "LAND"];
							waitUntil {((_dropperAircraft distance2D _craterposdrop) < 20) || (!alive _dropperAircraft)};
							if (!alive _dropperAircraft) exitwith {};
							waitUntil {sleep 1; (getPosATL _dropperAircraft) select 2 < 10};
							
							_list = [
								["332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_AT",
									"332nd_Droid_B1_Commander",
									"332nd_Droid_B1_Sniper"],
								["332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_AT",
									"332nd_Droid_B1_AT",
									"332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman"],
								["332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman",
									"332nd_Droid_B1_Rifleman"],			
								["332nd_Droid_B2",
									"332nd_Droid_B2",
									"332nd_Droid_B2",
									"332nd_Droid_B2_Rockets"],
								["332nd_Droid_BX_Range",
									"332nd_Droid_BX_Range",
								"332nd_Droid_BX_Range"]
							] # _selection;
							
							_listout=[];
							for "_i" from 1 to ((random 6)+3) do {
								_listout pushBack (selectRandom _list);
							};
								_side = (_side select 0);
								_position = getPosATL _dropperAircraft;
								_position set [2,0];
								[_craterposdrop, _side, _listout] call BIS_fnc_spawngroup;
								_dropperAircraft landAt [_hpad, "None"];
								_dropperAircraft doMove (_craterposOut);
								_dropperAircraft flyinHeight 100;
								_dropperAircraft limitSpeed 300;

							waitUntil {((_dropperAircraft distance2D _craterposOut) < 250) || (!alive _dropperAircraft)};
							if (!alive _dropperAircraft) exitwith {};

								{deleteVehicle _x} forEach (crew _dropperAircraft);
								deleteVehicle _dropperAircraft;
								deleteVehicle _logic;
		};
		
player addEventHandler ["Fired",{if (missionNamespace getVariable "WBK_ZeroGEnabled" && (_this select 1 != "Throw")) exitWith {playSoundUI ["vacuum_fire", 1, 1];};}];

player addAction
[
	"<t color='#0CD61A' size='1.45' font = 'PuristaSemibold'>Jump up</t>",
	{
		player setVelocityModelSpace [0,6,6];
		movez = 3; 
		sleep 0.5;
		movez = 2;
		sleep 0.5;
		movez = 1;
		sleep 0.5;
		movez = 0;
		sleep 0.5;
		movez = -1;
	},
	nil,
	1.5,
	true,
	true,
	"",
	"isTouchingGround _this && missionNamespace getVariable 'WBK_ZeroGEnabled'", 
	5,
	false,
	"",
	""
];
player addMPEventHandler ["MPRespawn", {  
params ["_unit", "_corpse"];
player addAction
[
	"<t color='#0CD61A' size='1.45' font = 'PuristaSemibold'>Jump up</t>",
	{
		player setVelocityModelSpace [0,6,6];
		movez = 3; 
		sleep 0.5;
		movez = 2;
		sleep 0.5;
		movez = 1;
		sleep 0.5;
		movez = 0;
		sleep 0.5;
		movez = -1;
	},
	nil,
	1.5,
	true,
	true,
	"",
	"isTouchingGround _this && missionNamespace getVariable 'WBK_ZeroGEnabled'", 
	5,
	false,
	"",
	""
];

player addEventHandler ["Fired",{if (missionNamespace getVariable "WBK_ZeroGEnabled" && (_this select 1 != "Throw")) exitWith {playSoundUI ["vacuum_fire", 1, 1];};}];
player spawn {
	while {alive _this} do {
		waitUntil {sleep 1; missionNamespace getVariable ["WBK_ZeroGEnabled", false] || !alive _this};
		if !(alive _this) exitWith {};
		1 fadeSound 0;
		1 fadeRadio 0;
		1 fadeSpeech 0;
		playSoundUI ["vacum_enter", 2, 1];
		_V_Phase3_pietre = "#particlesource" createVehicleLocal (getposasl _this);
		_V_Phase3_pietre attachto [_this];
		_V_Phase3_pietre setParticleCircle [20, [0, 0, 0]];
		_V_Phase3_pietre setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_V_Phase3_pietre setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 10, [0, 0, 0], [0, 0, 4], 1, 1.2, 1, 0.0001, [0.1, 0.1, 0.1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _this];
		_V_Phase3_pietre setDropInterval 0.01;
		[_this,{  
				if (isDedicated) exitWith {};  
				_this setAnimSpeedCoef 0.85;
				_object = _this;   
				_1_fum = "#particlesource" createVehicleLocal (getPosATL _object);   
				_1_fum setDropInterval 0.007;   
				_1_fum setParticleCircle [0, [0, 0, 0]];   
				_1_fum setParticleRandom [0.5,[0,0,0],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];   
				_1_fum spawn {uisleep 0.9; deleteVehicle _this};   
				_1_fum attachTo [_this,[-0.1,-0.3,0.2],"head"];    
				_1_fum setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1],   
				 "",   
				 "Billboard",   
				 1,   
				 0.5,   
				 [0, 0, 0],   
				 (vectorDir _this) vectorMultiply (-1),   
				 1,   
				 9,   
				 7.9,   
				 0.035,   
				 [0.01, 0.2],   
				 [[1, 1, 1, 1], [1, 1, 1, 0.5], [1, 1, 1, 0]],   
				 [0.01],   
				 1,   
				 0,   
				 "",   
				 "",   
				 _1_fum,   
				 0,   
				 false,   
				 0   
				];   
		}] remoteExec ["spawn",0,false];
		_this spawn {
			while {alive _this && missionNamespace getVariable ["WBK_ZeroGEnabled", false]} do {
				playSoundUI ["vacuum_breathing", 1.2, 1];
				uiSleep 13.2;
			};
		};
		_this spawn {
		_unit = _this;
		while {
				alive _unit && missionNamespace getVariable ["WBK_ZeroGEnabled", false]
			}
			do {
				if (isNull _unit) exitWith {};
				if ((speed _unit) != 0 && isTouchingGround _unit) then {
					switch (true) do {
						case (
							(animationState _unit == "ARMA_AlternativeRun_WW2Style") or(animationState _unit == "ARMA_AlternativePistol") or(animationState _unit == "ARMA_AlternativeRunLowered") or(animationState _unit == "ARMA_AlternativeRunLowered") or(animationState _unit == "ARMA_AlternativeRun") or(animationState _unit == "melee_sprintf") or(animationState _unit == "melee_sprintfl") or(animationState _unit == "melee_sprintfr") or(animationState _unit == "AmovPercMevaSnonWnonDf") or(animationState _unit == "AmovPercMevaSnonWnonDfl") or(animationState _unit == "AmovPercMevaSnonWnonDfr") or(animationState _unit == "AmovPknlMevaSnonWnonDf") or(animationState _unit == "AmovPknlMevaSnonWnonDfl") or(animationState _unit == "AmovPknlMevaSnonWnonDfr") or(animationState _unit == "AmovPknlMevaSlowWrflDf") or(animationState _unit == "AmovPknlMevaSlowWrflDfl") or(animationState _unit == "AmovPknlMevaSlowWrflDfr") or(animationState _unit == "AmovPknlMevaSrasWrflDf") or(animationState _unit == "AmovPknlMevaSrasWrflDfl") or(animationState _unit == "AmovPknlMevaSrasWrflDfr") or(animationState _unit == "AmovPknlMevaSrasWpstDf") or(animationState _unit == "AmovPknlMevaSrasWpstDfl") or(animationState _unit == "AmovPknlMevaSrasWpstDfr") or(animationState _unit == "AmovPknlMevaSnonWbinDf") or(animationState _unit == "AmovPknlMevaSnonWbinDfl") or(animationState _unit == "AmovPknlMevaSnonWbinDfr") or(animationState _unit == "AmovPercMevaSlowWrflDf") or(animationState _unit == "AmovPercMevaSlowWrflDfl") or(animationState _unit == "AmovPercMevaSlowWrflDfr") or(animationState _unit == "AmovPercMevaSrasWrflDf") or(animationState _unit == "AmovPercMevaSrasWrflDfl") or(animationState _unit == "AmovPercMevaSrasWrflDfr") or(animationState _unit == "AmovPercMevaSrasWpstDf") or(animationState _unit == "AmovPercMevaSrasWpstDfl") or(animationState _unit == "AmovPercMevaSrasWpstDfr") or(animationState _unit == "AmovPercMevaSlowWpstDf") or(animationState _unit == "AmovPercMevaSlowWpstDfr") or(animationState _unit == "AmovPercMevaSlowWpstDfl") or(animationState _unit == "AmovPercMevaSlowWlnrDf") or(animationState _unit == "AmovPercMevaSlowWlnrDfl") or(animationState _unit == "AmovPercMevaSlowWlnrDfr") or(animationState _unit == "AmovPercMevaSnonWbinDf") or(animationState _unit == "AmovPercMevaSnonWbinDfl") or(animationState _unit == "AmovPercMevaSnonWbinDfr")
						):{
							   playSoundUI [selectRandom ["vacuum_movement_1","vacuum_movement_2","vacuum_movement_3","vacuum_movement_4"], 0.5, 1];
							   playSoundUI [selectRandom ["vacuum_step_1","vacuum_step_2","vacuum_step_3","vacuum_step_4"], 1, 1];
								UiSleep 0.1;
							};
						case (stance _unit != "STAND"): {playSoundUI [selectRandom ["vacuum_movement_1","vacuum_movement_2","vacuum_movement_3","vacuum_movement_4"], 1, 1]; UiSleep 0.6;};
						case ((((speed _unit) > 8) and((speed _unit) < 16.5)) or (((speed _unit) < (6 * (-1))) and((speed _unit) > (13 * (-1))))):{
								playSoundUI [selectRandom ["vacuum_movement_1","vacuum_movement_2","vacuum_movement_3","vacuum_movement_4"], 0.8, 1];
								playSoundUI [selectRandom ["vacuum_step_1","vacuum_step_2","vacuum_step_3","vacuum_step_4"], 1, 1];
								UiSleep 0.215;
							};
						case ((((speed _unit) > 0) and((speed _unit) < 8)) or(((speed _unit) < 0) and((speed _unit) > (6 * (-1))))):{
								playSoundUI [selectRandom ["vacuum_movement_1","vacuum_movement_2","vacuum_movement_3","vacuum_movement_4"], 0.5, 1]; 
								playSoundUI [selectRandom ["vacuum_step_1","vacuum_step_2","vacuum_step_3","vacuum_step_4"], 0.7, 1];
								UiSleep 0.38;
							};
					};
				};
				UiSleep 0.25;
			};
		};
		waitUntil {sleep 1; !(missionNamespace getVariable ["WBK_ZeroGEnabled", false]) || !(alive _this)};
		deleteVehicle _V_Phase3_pietre;
		if !(alive _this) exitWith {};
		playSoundUI ["vacum_exit", 2, 1];
		1 fadeSound 1;
		1 fadeRadio 1;
		1 fadeSpeech 1;
		[_this, 1] remoteExec ["setAnimSpeedCoef",0];
		uiSleep 1;
	};
};

}];






	["[332nd] Misc Modules", "Fling unit", 
	{
	
		params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
			_logic spawn {
            _random = floor (random 9);
			_velocity = [];
			switch _random do {
				case 1: {_velocity = [0,5000,0]};
				case 2: {_velocity = [0,-5000,0]};
				case 3: {_velocity = [-5000,0,0]};
				case 4: {_velocity = [5000,0,0]};
				case 5: {_velocity = [5000,5000,0]};
				case 6: {_velocity = [5000,-5000,0]};
				case 7: {_velocity = [-5000,5000,0]};
				case 8: {_velocity = [5000,5000,0]};
				default {_velocity = [0,5000,0]};
			};




            _this addForce [_this vectorModelToWorld _velocity, [1,0,0], false];
			};

	}, ""] call zen_custom_modules_fnc_register;	


missionNamespace setVariable ["impactDisabledOn_332nd_B1_Leader", true];
missionNamespace setVariable ["impactDisabledOn_332nd_B1", true];
missionNamespace setVariable ["impactDisabledOn_332nd_B1_Heavy", true];
missionNamespace setVariable ["impactDisabledOn_332nd_B1_Specialist", true];
missionNamespace setVariable ["impactDisabledOn_332nd_B1_Sniper", true];
missionNamespace setVariable ["impactDisabledOn_332nd_B2", true];
missionNamespace setVariable ["impactDisabledOn_332nd_BX", true];


SB_Muni_QRF = {
    params ["_position", "_Ship_direction", "_dropside", "_LightPodselection", "_AmountofLightPods", "_Amountofbanshees", "_EndwithJumpOut"];

_position = (ASLtoATL _position);

_Ship = "ls_munificent";
_Altitude = 1000;

_ReturnShip = [_position, _Ship_direction, _altitude, _Ship] call ScifiSupportPLUS_fnc_JumpShipin;
        {
            _x addcuratorEditableObjects [[_ReturnShip], true];
        } count allCurators;


[_ReturnShip, _position, _Ship_direction, _dropside, _LightPodselection, _AmountofLightPods, _Amountofbanshees, _EndwithJumpOut] spawn {
    params ["_ReturnShip", "_position", "_Ship_direction", "_dropside", "_LightPodselection", "_AmountofLightPods", "_Amountofbanshees", "_EndwithJumpOut"];
    
    sleep 6;
    

    _PodLocation1 = [-91.0906, -138.962, -85.8101];
    _PodLocation2 = [-113.646, -117.652, -85.8101];
    _PodLocation3 = [-133.903, -90.3648, -77.8682];
    _PodLocation4 = [-148.957, -65.3472, -77.8682];
    _PodLocation5 = [-159.711, -36.3179, -77.8682];
    _PodLocation6 = [-155.961, -3.71545, -70.0168];
    _PodLocation7 = [-145.633, 28.281, -68.8412];
    _PodLocation8 = [-130.069, 59.0685, -68.8412];
    _PodLocation9 = [129.246, 58.6028, -68.8412];
    _PodLocation10 = [142.613, 28.0892, -68.8412];
    _PodLocation11 = [152.942, -3.1897, -68.8412];
    _PodLocation12 = [155.081, -33.0161, -68.8412];
    _PodLocation13 = [145.772, -62.1978, -71.7255];
    _PodLocation14 = [130.444, -89.9124, -76.1941];
    _PodLocation15 = [112.639, -116.906, -81.5128];
    _PodLocation16 = [90.1954, -138.096, -86.6667];
    

    _PodArray = [];
    
    createandAttachParticleSource = {
        params ["_podobject", "_location"];
        
        _modelData = _podobject modeltoWorld _location;
        _particleSource = "#particleSource" createvehicle _modelData;
        _particleSource attachto [_podobject, _location];
        
        _particleSource
    };
    
    _podLocations = [_PodLocation1, _PodLocation2, _PodLocation3, _PodLocation4, _PodLocation5, _PodLocation6, _PodLocation7, _PodLocation8, _PodLocation9, _PodLocation10, _PodLocation11, _PodLocation12, _PodLocation13, _PodLocation14, _PodLocation15, _PodLocation16];

    {
        _PodArray pushBack ([_ReturnShip, _x] call createandAttachParticleSource);
    } forEach _podLocations;

    [_ReturnShip, _PodArray] spawn {
        params ["_ReturnShip", "_PodArray"];
        
        waitUntil {
            sleep 1;
            ((!alive _ReturnShip) || (isNull _ReturnShip))
        }; 
            {
                deletevehicle _x;
                sleep 0.01;
            } forEach _PodArray;

    };

    
    if (_AmountofLightPods > 0) then {
        for "_LightPoddropper" from 1 to (_AmountofLightPods) do {
            _randomIndex = floor (random (count _PodArray));
            _randomPodLocation = _PodArray select _randomIndex;
            _PodArray deleteAt _randomIndex;

            _currentposition = [((getPosATL _randomPodLocation) # 0), ((getPosATL _randomPodLocation) # 1), 0];
            _RLightPodposition = _currentposition;

            [_RLightPodposition,_dropside,_LightPodselection,true] call SB_Droid_Dispenser;

            sleep 1;
        };
    };
    
    if (_Amountofbanshees > 0) then {
        for "_Bansheedropper" from 1 to (_Amountofbanshees) do {
            [_ReturnShip, _dropside] spawn {
                params ["_ReturnShip", "_dropside"];

            _currentposition = [((getPosATL _ReturnShip) select 0), ((getPosATL _ReturnShip) select 1), (((getPosATL _ReturnShip) select 2))];

            _Banshee = createVehicle ["332nd_CIS_Vulture", _currentposition, [], 0, "CAN_COLLIDE"];
            (_dropside select 0) createvehiclecrew _Banshee;
            _Banshee engineOn true;

            };

            sleep 5;
        };
    };
    
    sleep ((_AmountofLightPods * 1) + (_Amountofbanshees * 5) + 1);
    
    if (_EndwithJumpOut) then {
        [objNull, "CIS Forces have been deployed, the ship is leaving!"] call BIS_fnc_showCuratorFeedbackMessage;
        [_ReturnShip] call ScifiSupportPLUS_fnc_JumpOut;
    } else {
        [objNull, "CIS Forces have been deployed!"] call BIS_fnc_showCuratorFeedbackMessage;
    };
};

};

						SB_Droid_Dispenser =  {
					params ["_position","_dropside","_selection","_linger"];
					
					_position= (ASLtoATL _position);
										
										_spawnpos = _position vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 1500];
										
										_mainprojectile = createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
					
										_mainprojectile setShotParents [player, player];
										
										_angle = [(_position vectorFromTo _spawnpos)#0, (_position vectorFromTo _spawnpos)#1, ((_position vectorFromTo _spawnpos)#2)];
					
										_projectile = createvehicle ["ls_ground_droidDispenser", [0, 0, 0], [], 0, "NONE"];
										[_projectile, 0, 0] call BIS_fnc_setPitchBank;
										_projectile setPosATL (getPosATL _mainprojectile);
										[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
										_projectile allowdamage false;
										
										[_mainprojectile, _position,_projectile] spawn {
											params ["_mainprojectile", "_position","_projectile"];
											while {alive _mainprojectile} do {
												_mainprojectile setvelocity ((_position vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
											};
										};
										
										[[_projectile], {
											params ["_projectile"];
											_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
											_FloodLight attachto [_projectile, [0, 0, 1]];
											_FloodLight setLightColor [1, 0.8, 0.25];
											_FloodLight setLightAmbient [1, 0.8, 0.25];
											_FloodLight setLightBrightness 0.75;
											_FloodLight setLightDayLight true;
											
											waitUntil {
												!alive _projectile
											};
											deletevehicle _floodLight;
										}] remoteExec ["spawn"];
										
										
										[_mainprojectile, _position, _dropside, _projectile, _selection,_linger] spawn {
											params ["_mainprojectile", "_position", "_dropside", "_projectile", "_selection","_linger"];
											
											_positionATL=_position;
					
											waitUntil {
												if (alive _mainprojectile) then {
													_positionATL=getPosATL _mainprojectile;
												};
												!alive _mainprojectile;
											};
											
											[[_positionATL], {
												params ['_position'];
												_positionATL = _position;
												_positionATL set [2, 2];
												
												private _ps1 = "#particlesource" createvehiclelocal _positionATL;
												_ps1 setParticleParams [
													"\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject",
													1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [1, 1],
													[[1, 1, 1, 1]],
												[0, 1], 1, 0, "", "", _ps1];
												_ps1 setParticleRandom [0, [10, 10, 0], [5, 5, 10], 0, 1.5, [0, 0, 0, 0], 0, 0];
												_ps1 setParticleCircle [10, [0, 10, 10]];
												_ps1 setDropInterval 0.01;
												
												_ps1 spawn {
													sleep 1;
													deletevehicle _this;
												};
											}] remoteExec ["spawn"];
											
											_craterpos = _positionATL;
											_craterpos set [2, 0];
											_DroidPodCrater = createvehicle ["land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"];
											
											deletevehicle _projectile;
											_projectile = createvehicle ["ls_ground_droidDispenser", [0,0,0], [], 0, "NONE"];
											_projectile enableSimulation false;
											_projectile allowdamage false;
					
											_projectile disableCollisionWith _DroidPodCrater;
											_DroidPodCrater disableCollisionWith _projectile;
					
											_projectile setVectorUp surfaceNormal position _projectile;
					
											_projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0];
					
											_DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)]; 
											_DroidPodCrater setPosWorld getPosWorld _DroidPodCrater;
											_projectile setVectorDir [(random 1), (random 1), (random 1)]; 
											_projectile setPosWorld getPosWorld _projectile;
					
											_RotationNumber = (random 5);
											[_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
											[_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
					
											_position = _CraterPos;
											
											_spawn = _position;
											_side = (_dropside select 0);
											_list = [
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_AT",
													"332nd_Droid_B1_Commander",
													"332nd_Droid_B1_Sniper"],
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_AT",
													"332nd_Droid_B1_AT",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman"],
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman"],			
												["332nd_Droid_B2",
													"332nd_Droid_B2",
													"332nd_Droid_B2",
													"332nd_Droid_B2_Rockets"],
												["332nd_Droid_BX_Range",
													"332nd_Droid_BX_Range",
												"332nd_Droid_BX_Range"]
											] # _selection;
											
											_listout=[];
											for "_i" from 1 to ((random 3)+3) do {
												_listout pushBack (selectRandom _list);
											};
											
											
											[_spawn, _side, _listout, _DroidPodCrater] spawn {
												params ["_spawn", "_side", "_listout", "_DroidPodCrater"];
												sleep 0.1;
												_FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup;
					
											};
					
											if (_linger) then {
												sleep 1;
												_projectile allowdamage true;
												while {alive _projectile} do {
													_time = time;
													waitUntil {
														(time-_time)>20 or !(alive _projectile)
													};
													if (alive _projectile) then {
														_DroidgroupLinger = [_spawn, _side, [selectRandom _listout]] call BIS_fnc_spawngroup;
													} else {
														sleep 1;
														_munition = createVehicle ["M_Mo_82mm_AT_LG",_craterpos,[],0,"CAN_COLLIDE"];
														_munition setShotParents [player, player];
														_munition setVectorDirAndUp ([[vectordir _munition,vectorup _munition], 0, -90, 0] call BIS_fnc_transformVectorDirAndUp);   
														_munition setVelocity [0,0,-10];
														sleep 1;
														deletevehicle _projectile;
													};
												};
											};
					
											sleep 1;
											_projectile allowdamage true;
											sleep 1;
											deletevehicle _projectile;
					
										};
					};

   ["[332nd] Droid Modules", "Municifent QRF Deployment",
        {
            params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];      
            
           _options = ["Specialist", "AT Team", "RIfle Team", "B2 Team", "Commandos"];

            ["Quick Reaction Force Deployment (Munificent)", [
                ["toOLBOX", "direction", [0, 1, 8, ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]]],
                ["sideS", ["Side select (ONLY ONE!)", "The side the spawned dropped units will be on."], [east]],
                ["toOLBOX", ["Type select", "What type of Droids to spawn."], [3, 2, 3, _options, nil]],
                ["SLIDER",["Drop pod Amount", "How many drop pods will be Deployed"],[0, 24, 8, 0]], 
                ["SLIDER",["Amount of Vultures", "How many Vultures will be Deployed"],[0, 16, 2, 0]], 
                ["CHECKBOX",["Jump Ship Out Afterwards?","The ship will leave after it has deployed the troops"],[true]]
                ], {
                    params["_values", "_arguments"];
                    _direction = _values # 0;
					_Ship_direction = [0, 45, 90, 135, 180, 225, 270, 315] # _direction;
                    _dropside = _values select 1;
                    _LightPodSelection =_values select 2;
                    _AmountofLightPods =_values select 3;
                    _AmountofBanshees =_values select 4;
                    _EndWithJumpOut =_values select 5;

                    _position = _arguments select 0;

					[_position, _Ship_direction, _dropside, _LightPodselection, _AmountofLightPods, _Amountofbanshees, _EndwithJumpOut] call SB_Muni_QRF;
				
				}, {}, [_pos, _logic]] call zen_dialog_fnc_create;
			}, "\PHAN_ScifiSupportPlus\data\COV_SDV.paa"] call zen_custom_modules_fnc_register;






		["[332nd] Droid Modules", "Droid Dispenser",
			{
				params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];
				
				_options = ["B1 Rifle Squad", "B1 Fireteam", "B1 AT Team", "B2 Fireteam", "BX Team", "BX Team (Melee)" ];
				
				["spawn Droid Dispenser", [
					["sideS", ["Side select (ONLY ONE!)", "The side the spawned dropped units will be on."], [east]],
					["toOLBOX", ["Type select", "What type of Droids to spawn."], [3, 2, 3, _options, nil]],
					["CHECKBOX", ["Linger", "Stays at the landing zone and spawns Droids unless destroyed."], [True]]
					], {
						params["_values", "_arguments"];
						_dropside=_values # 0;
						_selection=_values # 1;
						_linger=_values # 2;
						
						_position=_arguments select 0;

						[_position,_dropside,_selection,_linger] spawn {
					params ["_position","_dropside","_selection","_linger"];
					
					_position= (ASLtoATL _position);
										
										_spawnpos = _position vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 1500];
										
										_mainprojectile = createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];
					
										_mainprojectile setShotParents [player, player];
										
										_angle = [(_position vectorFromTo _spawnpos)#0, (_position vectorFromTo _spawnpos)#1, ((_position vectorFromTo _spawnpos)#2)];
					
										_projectile = createvehicle ["ls_ground_droidDispenser", [0, 0, 0], [], 0, "NONE"];
										[_projectile, 0, 0] call BIS_fnc_setPitchBank;
										_projectile setPosATL (getPosATL _mainprojectile);
										[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
										_projectile allowdamage false;
										
										[_mainprojectile, _position,_projectile] spawn {
											params ["_mainprojectile", "_position","_projectile"];
											while {alive _mainprojectile} do {
												_mainprojectile setvelocity ((_position vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
											};
										};
										
										[[_projectile], {
											params ["_projectile"];
											_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
											_FloodLight attachto [_projectile, [0, 0, 1]];
											_FloodLight setLightColor [1, 0.8, 0.25];
											_FloodLight setLightAmbient [1, 0.8, 0.25];
											_FloodLight setLightBrightness 0.75;
											_FloodLight setLightDayLight true;
											
											waitUntil {
												!alive _projectile
											};
											deletevehicle _floodLight;
										}] remoteExec ["spawn"];
										
										
										[_mainprojectile, _position, _dropside, _projectile, _selection,_linger] spawn {
											params ["_mainprojectile", "_position", "_dropside", "_projectile", "_selection","_linger"];
											
											_positionATL=_position;
					
											waitUntil {
												if (alive _mainprojectile) then {
													_positionATL=getPosATL _mainprojectile;
												};
												!alive _mainprojectile;
											};
											
											[[_positionATL], {
												params ['_position'];
												_positionATL = _position;
												_positionATL set [2, 2];
												
												private _ps1 = "#particlesource" createvehiclelocal _positionATL;
												_ps1 setParticleParams [
													"\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject",
													1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [1, 1],
													[[1, 1, 1, 1]],
												[0, 1], 1, 0, "", "", _ps1];
												_ps1 setParticleRandom [0, [10, 10, 0], [5, 5, 10], 0, 1.5, [0, 0, 0, 0], 0, 0];
												_ps1 setParticleCircle [10, [0, 10, 10]];
												_ps1 setDropInterval 0.01;
												
												_ps1 spawn {
													sleep 1;
													deletevehicle _this;
												};
											}] remoteExec ["spawn"];
											
											_craterpos = _positionATL;
											_craterpos set [2, 0];
											_DroidPodCrater = createvehicle ["land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"];
											
											deletevehicle _projectile;
											_projectile = createvehicle ["ls_ground_droidDispenser", [0,0,0], [], 0, "NONE"];
											_projectile enableSimulation false;
											_projectile allowdamage false;
					
											_projectile disableCollisionWith _DroidPodCrater;
											_DroidPodCrater disableCollisionWith _projectile;
					
											_projectile setVectorUp surfaceNormal position _projectile;
					
											_projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0];
					
											_DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)]; 
											_DroidPodCrater setPosWorld getPosWorld _DroidPodCrater;
											_projectile setVectorDir [(random 1), (random 1), (random 1)]; 
											_projectile setPosWorld getPosWorld _projectile;
					
											_RotationNumber = (random 5);
											[_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
											[_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
					
											_position = _CraterPos;
											
											_spawn = _position;
											_side = (_dropside select 0);
											_list = [
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Support",
													"332nd_Droid_B1_Support"],
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Support"],
												["332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_Rifleman",
													"332nd_Droid_B1_AT",
													"332nd_Droid_B1_AT"],
												["332nd_Droid_B2",
													"332nd_Droid_B2",
													"332nd_Droid_B2",
													"332nd_Droid_B2"],
												["332nd_Droid_BX_Range",
													"332nd_Droid_BX_Range",
													"332nd_Droid_BX_Range"],
												["332nd_Droid_BX_Melee",
													"332nd_Droid_BX_Melee",
													"332nd_Droid_BX_Melee"]
											] # _selection;
											
											_listout=[];
											for "_i" from 1 to ((random 3)+3) do {
												_listout pushBack (selectRandom _list);
											};
											
											
											[_spawn, _side, _listout, _DroidPodCrater] spawn {
												params ["_spawn", "_side", "_listout", "_DroidPodCrater"];
												sleep 0.1;
												_FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup;
					
											};
					
											if (_linger) then {
												sleep 1;
												_projectile allowdamage true;
												while {alive _projectile} do {
													_time = time;
													waitUntil {
														(time-_time)>20 or !(alive _projectile)
													};
													if (alive _projectile) then {
														_DroidgroupLinger = [_spawn, _side, [selectRandom _listout]] call BIS_fnc_spawngroup;
													} else {
														sleep 1;
														_munition = createVehicle ["M_Mo_82mm_AT_LG",_craterpos,[],0,"CAN_COLLIDE"];
														_munition setShotParents [player, player];
														_munition setVectorDirAndUp ([[vectordir _munition,vectorup _munition], 0, -90, 0] call BIS_fnc_transformVectorDirAndUp);   
														_munition setVelocity [0,0,-10];
														sleep 1;
														deletevehicle _projectile;
													};
												};
											};
					
											sleep 1;
											_projectile allowdamage true;
											sleep 1;
											deletevehicle _projectile;
					
										};
					};
						
					}, {}, [_pos]] call zen_dialog_fnc_create;
				}, "\PHAN_ScifiSupportPlus\data\Droid.paa"] call zen_custom_modules_fnc_register;



		["[332nd] Droid Modules", "Orbital Vehicle Drop",
			{
				params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];
				
				_options = ["AAT", "AAT (heavy)", "Advanced DSD", "MTT", "Assault Craft", "Crab Droid", "Dwarf Spider Droid MK3", "GAT", "GAT (Canon)", "Hailfire Tank", "Dwarf Spider Droid", "Raptor Light UGV", "HAG-M", "Droideka", "Droideka (Sniper)"];
				
				["Standby for Deployment", [
					["sideS", ["Side select (ONLY ONE!)", "The side the spawned dropped units will be on."], [east]],
					["toOLBOX", ["Type select", "What type of vehicle to drop in."], [3, 5, 3, _options, nil]]
					], {
						params["_values", "_arguments"];
						_dropside=_values # 0;
						_selection=_values # 1;
						_linger=_values # 2;
						
						_pos=_arguments select 0;
						
						_pos= (ASLtoATL _pos);
						
						_spawnpos = _pos vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 550];
						
						_mainprojectile = createvehicle ["R_MRAAWS_HEAT55_F", _spawnpos, [], 0, "NONE"];

						_mainprojectile setShotParents [player, player];
						
						_angle = [(_pos vectorFromTo _spawnpos)#0, (_pos vectorFromTo _spawnpos)#1, ((_pos vectorFromTo _spawnpos)#2)];
						
						_grp = createGroup civilian;
						_projectile = createvehicle ["Land_FoodContainer_01_F", [0, 0, 0], [], 0, "NONE"];
						[_projectile, 0, 0] call BIS_fnc_setPitchBank;
						_projectile setPosATL (getPosATL _mainprojectile);
						[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
						_projectile allowdamage false;
						while {alive _projectile} do {
							_projectile setObjectScale 9;
							};
						[_mainprojectile, _pos,_projectile] spawn {
							params ["_mainprojectile", "_pos","_projectile"];
							while {alive _mainprojectile} do {
								_mainprojectile setvelocity ((_pos vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
							};
						};
						[[_mainprojectile],{
				params ['_mainprojectile'];
					_ray = "#particlesource" createVehicleLocal (getpos _mainprojectile);
					_ray setParticleCircle [0, [0, 0, -3]];
					_ray setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [5, 5, 5, 0], 0, 0];
					_ray setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, [0, 0, 0], [0, 0, 0], 13, 10, 3, 0, [20,44,28,14], [[235, 81, 17, 1]], [0.08], 1, 0, "", "", _ray];
					_ray setDropInterval 0.01;
					_ray attachTo [_mainprojectile, [0,0,0]];
					
					[_ray,_mainprojectile] spawn {
						params ["_ray","_mainprojectile"];
						sleep 4;
						deleteVehicle _ray;
					};			
				}] remoteExec ["spawn"];
						[[_projectile], {
							params ["_projectile"];
							_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
							_FloodLight attachto [_projectile, [0, 0, 1]];
							_FloodLight setLightColor [1, 0.8, 0.25];
							_FloodLight setLightAmbient [1, 0.8, 0.25];
							_FloodLight setLightBrightness 0.75;
							_FloodLight setLightDayLight true;
							
							waitUntil {
								!alive _projectile
							};
							deletevehicle _floodLight;
						}] remoteExec ["spawn"];
						
						
						[_mainprojectile, _pos, _dropside, _projectile, _selection,_linger] spawn {
							params ["_mainprojectile", "_pos", "_dropside", "_projectile", "_selection","_linger"];
							
							_posATL=_pos;

							waitUntil {
								if (alive _mainprojectile) then {
									_posATL=getPosATL _mainprojectile;
								};
								!alive _mainprojectile;
							};
							
							
							_craterpos = _posATL;
							_craterpos set [2, 0];
							_DroidPodCrater = createvehicle ["Land_ClutterCutter_large_F", _craterpos, [], 0, "CAN_COLLIDE"];
							
							deletevehicle _projectile;
							_projectile = createvehicle ["Land_ClutterCutter_large_F", [0,0,0], [], 0, "NONE"];
							_projectile enableSimulation false;
							_projectile allowdamage false;

							_projectile disableCollisionWith _DroidPodCrater;
							_DroidPodCrater disableCollisionWith _projectile;

							_projectile setVectorUp surfaceNormal position _projectile;

							_projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0];

							_DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)]; 
							_DroidPodCrater setPosWorld getPosWorld _DroidPodCrater;
							_projectile setVectorDir [(random 1), (random 1), (random 1)]; 
							_projectile setPosWorld getPosWorld _projectile;

							_RotationNumber = (random 5);
							[_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
							[_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;

							_pos = _CraterPos;
							
							_spawn = _pos;
							_side = (_dropside select 0);
							_list = [
								["332nd_CIS_AAT"],
								["332nd_CIS_AAT_Heavy"],
								["332nd_CIS_Advanced_DSD"],
								["332nd_CIS_MTT"],
								["332nd_CIS_Assault_Craft"],
								["332nd_CIS_Crab_Droid"],
								["332nd_CIS_Dwarf_Spider_Droid_MK3"],
								["332nd_CIS_GAT_Light"],
								["332nd_CIS_GAT_Heavy"],
								["332nd_CIS_Hailfire_Tank"],
								["332nd_CIS_Dwarf_Spider_Droid"],
								["332nd_CIS_Raptor"],
								["332nd_CIS_HAGM"],
								["332nd_CIS_Deka"],
								["332nd_CIS_Deka_Sniper"]
							] # _selection;
							
							_listout=[];
							for "_i" from 1 to 1 do{
								_listout pushBack (selectRandom _list);
							};
							
							
							[_spawn, _side, _listout, _DroidPodCrater] spawn {
								params ["_spawn", "_side", "_listout", "_DroidPodCrater"];
								_FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup;

							};
	

							sleep 1;
							_projectile allowdamage true;
							sleep 1;
							deletevehicle _projectile;

						};
					}, {}, [_pos]] call zen_dialog_fnc_create;
				}, "\titanfall_script\images\titanfall.paa"] call zen_custom_modules_fnc_register;
			["[332nd] Republic Modules", "Orbital Vehicle Drop",
			{
				params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];
				
				_options = ["AT-TE", "PX-10"];
				
				["Standby for Deployment", [
					["sideS", ["Side select (ONLY ONE!)", "The side the spawned dropped units will be on."], [east]],
					["toOLBOX", ["Type select", "What type of vehicle to drop in."], [2, 1, 2, _options, nil]]
					], {
						params["_values", "_arguments"];
						_dropside=_values # 0;
						_selection=_values # 1;
						_linger=_values # 2;
						
						_pos=_arguments select 0;
						
						_pos= (ASLtoATL _pos);
						
						_spawnpos = _pos vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 550];
						
						_mainprojectile = createvehicle ["R_MRAAWS_HEAT55_F", _spawnpos, [], 0, "NONE"];

						_mainprojectile setShotParents [player, player];
						
						_angle = [(_pos vectorFromTo _spawnpos)#0, (_pos vectorFromTo _spawnpos)#1, ((_pos vectorFromTo _spawnpos)#2)];
						
						_grp = createGroup civilian;
						_projectile = createvehicle ["Land_FoodContainer_01_F", [0, 0, 0], [], 0, "NONE"];
						[_projectile, 0, 0] call BIS_fnc_setPitchBank;
						_projectile setPosATL (getPosATL _mainprojectile);
						[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
						_projectile allowdamage false;
						while {alive _projectile} do {
							_projectile setObjectScale 9;
							};
						[_mainprojectile, _pos,_projectile] spawn {
							params ["_mainprojectile", "_pos","_projectile"];
							while {alive _mainprojectile} do {
								_mainprojectile setvelocity ((_pos vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
							};
						};
						[[_mainprojectile],{
				params ['_mainprojectile'];
					_ray = "#particlesource" createVehicleLocal (getpos _mainprojectile);
					_ray setParticleCircle [0, [0, 0, -3]];
					_ray setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [5, 5, 5, 0], 0, 0];
					_ray setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, [0, 0, 0], [0, 0, 0], 13, 10, 3, 0, [20,44,28,14], [[235, 81, 17, 1]], [0.08], 1, 0, "", "", _ray];
					_ray setDropInterval 0.01;
					_ray attachTo [_mainprojectile, [0,0,0]];
					
					[_ray,_mainprojectile] spawn {
						params ["_ray","_mainprojectile"];
						sleep 4;
						deleteVehicle _ray;
					};			
				}] remoteExec ["spawn"];
						[[_projectile], {
							params ["_projectile"];
							_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
							_FloodLight attachto [_projectile, [0, 0, 1]];
							_FloodLight setLightColor [1, 0.8, 0.25];
							_FloodLight setLightAmbient [1, 0.8, 0.25];
							_FloodLight setLightBrightness 0.75;
							_FloodLight setLightDayLight true;
							
							waitUntil {
								!alive _projectile
							};
							deletevehicle _floodLight;
						}] remoteExec ["spawn"];
						
						
						[_mainprojectile, _pos, _dropside, _projectile, _selection,_linger] spawn {
							params ["_mainprojectile", "_pos", "_dropside", "_projectile", "_selection","_linger"];
							
							_posATL=_pos;

							waitUntil {
								if (alive _mainprojectile) then {
									_posATL=getPosATL _mainprojectile;
								};
								!alive _mainprojectile;
							};
							
							
							_craterpos = _posATL;
							_craterpos set [2, 0];
							_DroidPodCrater = createvehicle ["Land_ClutterCutter_large_F", _craterpos, [], 0, "CAN_COLLIDE"];
							
							deletevehicle _projectile;
							_projectile = createvehicle ["Land_ClutterCutter_large_F", [0,0,0], [], 0, "NONE"];
							_projectile enableSimulation false;
							_projectile allowdamage false;

							_projectile disableCollisionWith _DroidPodCrater;
							_DroidPodCrater disableCollisionWith _projectile;

							_projectile setVectorUp surfaceNormal position _projectile;

							_projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0];

							_DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)]; 
							_DroidPodCrater setPosWorld getPosWorld _DroidPodCrater;
							_projectile setVectorDir [(random 1), (random 1), (random 1)]; 
							_projectile setPosWorld getPosWorld _projectile;

							_RotationNumber = (random 5);
							[_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
							[_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;

							_pos = _CraterPos;
							_spawn = _pos;
							_side = (_dropside select 0);
							_list = [
								["332nd_ATTE"],
								["332nd_PX10_F"]
							] # _selection;
							
							_listout=[];
							for "_i" from 1 to 1 do{
								_listout pushBack (selectRandom _list);
							};
							
							
							[_spawn, _side, _listout, _DroidPodCrater] spawn {
								params ["_spawn", "_side", "_listout", "_DroidPodCrater"];
								_FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup;

							};
	

							sleep 1;
							_projectile allowdamage true;
							sleep 1;
							deletevehicle _projectile;

						};
					}, {}, [_pos]] call zen_dialog_fnc_create;
				}, "\titanfall_script\images\titanfall.paa"] call zen_custom_modules_fnc_register;

			["[332nd] Droid Modules", "HMP vehicle drop",
		{
			params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

			["spawn HMP vehicle drop",
				[
					["COMBO", ["Choose Aircraft", "The aircraft that will deploy the vehicle"], [SB_332nd_CIS_HMP_Transport_list, SB_332nd_CIS_HMP_Transport_listDISPLAY]],
					["COMBO", ["Choose vehicle", "The vehicle that will be deployed"], [SB_332nd_CIS_HMP_Transport_GV_list, SB_332nd_CIS_HMP_Transport_GV_listDISPLAY]],
					["CHECKBOX",["Add Crew","Add crew to deployed vehicle"],[false]],
					["SLIDER",["Insert Distance","How far away the aircraft start it's flight path"],[1000,5000,2000,0]],
					["toOLBOX", "Insert Direction", [0, 1, 8, ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]]]
				],
				{ 
					_this spawn {
					params["_values", "_arguments"];

						_Aircraft = _values # 0;
						_dropvehicle = _values # 1;
						_addcrew = _values # 2;
						_InsertDistance = _values # 3;
						_direction = _values # 4;

						_Ship_direction = [0, 45, 90, 135, 180, 225, 270, 315] # _direction;
												
						_position=_arguments select 0;
							
						[_position,_Aircraft,_dropvehicle,_addcrew,_InsertDistance,_Ship_direction] call SB_ScifiSupportPlus_fnc_SW_HMPVehicleDrop;
					};
				},
				{},
				[_pos]] call zen_dialog_fnc_create;
		},
		"\PHAN_ScifiSupportPlus\data\HMP.paa"] call zen_custom_modules_fnc_register;

		SB_ScifiSupportPlus_fnc_SW_HMPVehicleDrop = {
		params ["_position", "_Aircraft", "_dropvehicle", "_addcrew", "_insertdistance", "_Ship_direction"];

		_logic = createVehicle ["land_AirHorn_01_F",ASLToATL _position,[],0,"CAN_COLLIDE"];
							hideObjectGlobal _logic;
							_logic setDir _Ship_direction;
							_logic setPosATL (getPosATL _logic);

							_position = (getPosATL _logic);
									
							_craterposNew = _logic getRelPos  [(_InsertDistance), (_direction)];
							_craterposdrop = _logic getRelPos  [-100, - (_direction)];
							_craterposOut = _logic getRelPos  [-5000, - (_direction)];

							_dropperAircraft = createvehicle [_Aircraft, _craterposNew, [], 0, "FLY"];
							createvehiclecrew _dropperAircraft;
							_dropperAircraft flyinHeight 15;
							_dropperAircraft limitSpeed 200;

							_droppervehicle = createvehicle [_dropvehicle, [0, 0, 15], [], 0, "CAN_COLLIDE"];

							sleep 0.1;

							if (_addcrew) then {
								createvehiclecrew _droppervehicle;
							};

							_droppervehicle attachto [_dropperAircraft, [0,-2,-((boundingBox _droppervehicle)#1#1)]];

							_droppervehicle disableCollisionWith _dropperAircraft;
							_dropperAircraft disableCollisionWith _droppervehicle;

							_dropperAircraft setCombatBehaviour "CARELESS";
							_dropperAircraft doMove (_craterposdrop);

							{
								[_x, [[_dropperAircraft], false]] remoteExec ["addCuratorEditableObjects", 0];
								[_x, [[_droppervehicle], false]] remoteExec ["addCuratorEditableObjects", 0];
							} forEach allCurators;


							waitUntil {((_dropperAircraft distance2D _craterposdrop) < 200) || (!alive _dropperAircraft)};
							if (!alive _dropperAircraft) exitwith {detach _droppervehicle;};

								_dropperAircraft spawn {_this allowdamage false; sleep 2; _this allowDamage true;};
								detach _droppervehicle;
								_dropperAircraft doMove (_craterposOut);
								_dropperAircraft flyinHeight 100;
								_dropperAircraft limitSpeed 300;

							waitUntil {((_dropperAircraft distance2D _craterposOut) < 250) || (!alive _dropperAircraft)};
							if (!alive _dropperAircraft) exitwith {};

								{deleteVehicle _x} forEach (crew _dropperAircraft);
								deleteVehicle _dropperAircraft;
								deleteVehicle _logic;
		};

		SB_332nd_CIS_HMP_Transport_list_insert = [
		"332nd_CIS_HMP_Transport", 
		"332nd_CIS_MAF_Transport"
		];

		SB_332nd_CIS_HMP_Transport_list=[];
		{
			if (_x!="" && (gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")) != "") then {
				SB_332nd_CIS_HMP_Transport_list pushBack _x;
			}
		}forEach SB_332nd_CIS_HMP_Transport_list_insert;
		SB_332nd_CIS_HMP_Transport_list;

		SB_332nd_CIS_HMP_Transport_listDISPLAY=[];
		{
		if (_x!="" && (gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")) != "") then {
			_colour=switch ((getNumber (configFile >> "Cfgvehicles" >> _x >> "side"))) do {
				case 0: {
					[255, 0, 0, 255]
				};
				case 1: {
					[0, 0, 255, 255]
				};
				case 2: {
					[0, 255, 0, 255]
				};
				case 3: {
					[255, 0, 255, 255]
				};
				default {
					[0, 0, 0, 255]
				};
			};
			SB_332nd_CIS_HMP_Transport_listDISPLAY pushBack [(gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")), "", (gettext (configFile >> "Cfgvehicles" >> _x >> "editorPreview")), _colour];
		}
		}forEach SB_332nd_CIS_HMP_Transport_list;
		SB_332nd_CIS_HMP_Transport_listDISPLAY;


		SB_332nd_CIS_HMP_Transport_GV_list_insert = [
		"332nd_CIS_AAT", 
		"332nd_CIS_AAT_Heavy", 
		"332nd_CIS_Advanced_DSD", 
		"332nd_CIS_MTT", 
		"332nd_CIS_Assault_Craft", 
		"332nd_CIS_Crab_Droid", 
		"332nd_CIS_Dwarf_Spider_Droid_MK3", 
		"332nd_CIS_GAT_Light",
		"332nd_CIS_GAT_Heavy",
		"332nd_CIS_Hailfire_Tank",
		"332nd_CIS_Dwarf_Spider_Droid",
		"332nd_CIS_Raptor",
		"332nd_CIS_HAGM",
		"332nd_CIS_Deka",
		"332nd_CIS_Deka_Sniper"
		];

		SB_332nd_CIS_HMP_Transport_GV_list=[];
		{
		if (_x!="" && (gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")) != "") then {
			SB_332nd_CIS_HMP_Transport_GV_list pushBack _x;
		}
		}forEach SB_332nd_CIS_HMP_Transport_GV_list_insert;
		SB_332nd_CIS_HMP_Transport_GV_list;

		SB_332nd_CIS_HMP_Transport_GV_listDISPLAY=[];
		{
		if (_x!="" && (gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")) != "") then {
			_colour=switch ((getNumber (configFile >> "Cfgvehicles" >> _x >> "side"))) do {
				case 0: {
					[255, 0, 0, 255]
				};
				case 1: {
					[0, 0, 255, 255]
				};
				case 2: {
					[0, 255, 0, 255]
				};
				case 3: {
					[255, 0, 255, 255]
				};
				default {
					[0, 0, 0, 255]
				};
			};
			SB_332nd_CIS_HMP_Transport_GV_listDISPLAY pushBack [(gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")), "", (gettext (configFile >> "Cfgvehicles" >> _x >> "editorPreview")), _colour];
		}
		}forEach SB_332nd_CIS_HMP_Transport_GV_list;
		SB_332nd_CIS_HMP_Transport_GV_listDISPLAY;





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