_vehicle = _this;
if (isTouchingGround _vehicle) exitWith {};

_state = _vehicle getVariable["impulsor", 0];

if (_state == 1 or _state == 2) then {
	[_vehicle, "LS_Vic_ImpulseOff"] remoteExec ["say3d",0,false];
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

_vehicle setVariable["impulsor", _state];