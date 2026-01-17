/*
 * Author: BiT
 * Adapted by Crimzonkat
 * Only works on Physx objects such as vehicles. 
 *
 * NOTES: Please provide proper credits to those who participate in development. This framework was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <OBJECT>: object that will be impulsing
 *
 * Example:
 * (Bob) spawn ls_vehicle_fnc_ImpulsorMonitor;
 *
 * Return Value:
 * None
 *
 */

#define SPEED_KPH(kph) (kph / 3.6)

params [
	"_vehicle"
];

// Define Config Variables...
_vehicleClassName = typeOf _vehicle; 
_level1_drain = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_fuelDrain_1", 0.0001] call BIS_fnc_returnConfigEntry;
_level2_drain = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_fuelDrain_2", 0.0003] call BIS_fnc_returnConfigEntry;
_level1_speed = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_boostSpeed_1", 400] call BIS_fnc_returnConfigEntry;
_level2_speed = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_boostSpeed_2", 600] call BIS_fnc_returnConfigEntry;
_impulseSoundOn = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_soundOn", "LS_Vic_ImpulseOn"] call BIS_fnc_returnConfigEntry;
_impulseSoundOff = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_impulsor_soundOff", "LS_Vic_ImpulseOff"] call BIS_fnc_returnConfigEntry;
_hasImpulse = [(configFile >> "CfgVehicles" >> _vehicleClassName), "ls_hasImpulse", 0] call BIS_fnc_returnConfigEntry;

// initialize state texts
_repulseStateText = "<t size=2 color='#ff0000'>Repulsor</t>";
_impulseText = "<t size=2>Impulsor: </t><t size=2 color='#427BF5'>On - " + str _level1_speed + " kph</t>";
_overchargeText = "<t size=2>Impulsor: </t><t size=2 color='#42AAF5'>On - " + str _level2_speed +" kph</t>";

// if (_hasImpulse != 1) exitWith {};

_vehicle setVariable ["ls_hasImpulse", true, true];
_vehicle setVariable ["ls_impulseSound_on", _impulseSoundOn, true];
_vehicle setVariable ["ls_impulseSound_off", _impulseSoundOff, true];

// waitUntil {isNil}
waitUntil {CBA_missionTime > 1};

while {true} do {

	if ( (_vehicle call ls_fnc_common_currentPilot) == player) then {
	
		_state = _vehicle getVariable ["impulsor", 0];
		_mass = getMass _vehicle;
		_velocity = velocity _vehicle;                                             
		_speed = (vectorDir _vehicle) vectorDotProduct (_velocity);
		_applyThrust = false;
		_applyCruise = false;
		_error = 0;
		_cruiseCheck = 0;
		_state_text = "==ERROR==";

		switch (_state) do {
			case -1: {
				_state_text = _repulseStateText;
				if( _speed > SPEED_KPH(50) ) then {
					// slow down to 50kph
					_error = SPEED_KPH(50) - _speed;
					_applyThrust = true;
				} else {
					// you're already at 50kph
					_vehicle setVariable ["impulsor", 0];
				};
			};
			case 1: {
				_state_text = _impulseText;
				// if you're going less than your assigned config speed, keep going
				if (_speed < SPEED_KPH(_level1_speed)) then {
					_error = SPEED_KPH(_level1_speed) - _speed;
					_applyThrust = true;
				};
			};
			case 2: {
				_state_text = _overChargeText;
				// if you're going less than your assigned config speed, keep going
				if (_speed < SPEED_KPH(_level2_speed)) then {
					_error = SPEED_KPH(_level2_speed) - _speed;
					_applyThrust = true;
				};
			};
			default { 
				_state_text = "<t size=2>Off</t>";
			};
		};		

		_error = [_error * 5, -30, 30] call BIS_fnc_clamp;
		// _error * 5, -30, 30
		// _error * 5, -6, 6
		// systemChat format ["Error: %1", _error];
		
		
		if (_applyThrust and fuel _vehicle != 0) then {
			if (_state == 1) then {_vehicle setFuel(fuel _vehicle - _level1_drain);};
			if (_state == 2) then {_vehicle setFuel(fuel _vehicle - _level2_drain);};
			_a = (vectorDir _vehicle) vectorMultiply (_error * 0.2);
			_vehicle setVelocity (_velocity vectorAdd _a);
			// _v = velocity _vehicle;
			// _a = (vectorDir _vehicle) vectorMultiply (_error * 0.2);
			// _vehicle setVelocity (_v vectorAdd _a);
			// if(_applyCruise) then {
			// 	_v = velocity _vehicle;
			// 	_a = (vectorDir _vehicle) vectorMultiply (_error * 0.2);
			// 	_vehicle setVelocity (_v vectorAdd _a);
			// } else {
			// 	// _vehicle addForce[_vehicle vectorModelToWorld [0,_error,0],[0,0,0]];
			// }
		};
		
		if (fuel _vehicle == 0 and (_state == 1 or _state == 2 or _state == -1)) then {
			[_vehicle, _impulseOffSound] remoteExec ["say3d", 0, false];
			_vehicle setVariable ["impulsor", 0];
		};

		// Check Global Impulse Value
			hintSilent parseText _state_text;
		
		
	};
	// if engine is off, set impulsor to 0
	if(!(isEngineOn _vehicle)) then {
		_vehicle setVariable ["impulsor", 0];
	};
	// If vehicle is destroyed or null (deleted), exit script
	if(isNull _vehicle or !alive _vehicle) exitWith {};

	sleep 0.1;
};