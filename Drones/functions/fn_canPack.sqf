// ============================================================================
// fn_canPack.sqf
// Condition check: can the player pack up this drone?
// Params: [_target, _player]
// Returns: BOOL
// ============================================================================

params ["_target", "_player"];

if (!alive _player) exitWith { false };

if (_player != vehicle _player) exitWith { false };

if (!alive _target) exitWith { false };

if ((getPosATL _target) select 2 > 2) exitWith { false };

if (speed _target > 2) exitWith { false };

if (_player getVariable ["trd_droneActionInProgress", false]) exitWith { false };

// Uncomment to restrict packing to deployer only:
// private _owner = _target getVariable ["trd_droneOwner", objNull];
// if (_player != _owner) exitWith { false };

true
