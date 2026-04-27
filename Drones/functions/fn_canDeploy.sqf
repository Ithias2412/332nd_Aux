// ============================================================================
// fn_canDeploy.sqf
// Condition check: can the player deploy a drone?
// Returns: BOOL
// ============================================================================

params ["_player", "_itemClass"];

if (!alive _player) exitWith { false };

if (_player != vehicle _player) exitWith { false };

if !(_itemClass in (items _player)) exitWith { false };

if (!trd_drone_allowMultiple) then {
    private _existing = _player getVariable ["trd_deployedDrone", objNull];
    if (!isNull _existing) exitWith { false };
};

if (_player getVariable ["trd_droneActionInProgress", false]) exitWith { false };

true
