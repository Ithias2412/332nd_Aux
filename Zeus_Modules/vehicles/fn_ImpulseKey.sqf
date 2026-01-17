private _vehicle = objectParent player;
if (isTouchingGround _vehicle) exitWith {};

if ((getConnectedUAV player != objNull) AND (player == [getConnectedUAV player] call ls_fnc_common_currentPilot)) then {
	_vehicle = getConnectedUAV player;
};

_state = _vehicle getVariable["impulsor", 0];
_hasImpulse = _vehicle getVariable ["ls_hasImpulse", false];
_hintState = 2;

if (!_hasImpulse) exitWith {};

if (_state == 0 and isEngineOn _vehicle and _hasImpulse) then {
	[_vehicle, (_vehicle getVariable "ls_impulseSound_on")] remoteExec ["say3d", 0, false];
};

if (isEngineOn _vehicle and _hasImpulse) then {

	if (_state == 1) then {
		// If we are current going slowly go faster
		_state = 2;
	} else {
		// otherwise go slow
		_state = 1;
	};
} else {
	_state = 0;
};

if (ls_setting_impulseHintDisplay == 1) then {
	switch (_state) do {
		case 2: {
			systemChat str "Impulse - OverCharge";
		};
		case 1: {
			systemChat str "Impulse - On";
		};
		case 0: {
			systemChat str "Off";
		};
	};
};


_vehicle setVariable["impulsor", _state];