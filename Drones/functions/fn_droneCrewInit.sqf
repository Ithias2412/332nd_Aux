// ============================================================================
// fn_droneCrewInit.sqf
// Called on drone init. Ensures crew exists and is on the deployer's side
// so cTAB and UAV Terminal work properly.
// Params: [_drone]
// ============================================================================

params ["_drone"];

if (!isServer) exitWith {};

// Small delay to let SCH finish spawning
[{
    params ["_drone"];

    // Ensure crew exists
    private _crew = crew _drone;
    if (count _crew == 0) then {
        createVehicleCrew _drone;
        _crew = crew _drone;
    };

    // Find the nearest player (the one who deployed it)
    private _players = (nearestObjects [_drone, ["CAManBase"], 15]) select {isPlayer _x};

    if (count _players > 0) then {
        private _owner = _players select 0;
        private _grp = createGroup [side _owner, true];
        {
            [_x] joinSilent _grp;
        } forEach _crew;

        // Auto-connect deployer's UAV terminal
        _owner connectTerminalToUAV _drone;
    };
}, [_drone], 1] call CBA_fnc_waitAndExecute;
