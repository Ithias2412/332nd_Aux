private _vehicle = objectParent player;
if (isTouchingGround _vehicle) exitWith {};

if ((getConnectedUAV player != objNull) AND (player == [getConnectedUAV player] call ls_fnc_common_currentPilot)) then {
	_vehicle = getConnectedUAV player;
};

_state = _vehicle getVariable["impulsor", 0];
_hasImpulse = _vehicle getVariable ["ls_hasImpulse", false];

if (!_hasImpulse) exitWith {};

if (_state == 1 or _state == 2) then {
	[_vehicle, (_vehicle getVariable "ls_impulseSound_off")] remoteExec ["say3d", 0, false];
};

if ( isEngineOn _vehicle ) then {
	if (_state == 0) then {
		// If we are current doing nothing, start braking
		_state = -1;
	} else 	{
	// otherwise do nothing
	_state = 0;
	};
} else {
	_state = 0;
};

if (ls_setting_impulseHintDisplay == 1) then {
	switch (_state) do {
		case -1: {
			systemChat str "Repulse";
		};
		case 0: {
			systemChat str "Off";
		};
	};
};

_vehicle setVariable["impulsor", _state];