// ============================================================================
// fn_packDrone.sqf
// Packs the drone: progress bar -> delete drone -> add item to inventory
// Params: [_drone, _player]
// ============================================================================

params ["_drone", "_player"];

_player setVariable ["trd_droneActionInProgress", true, true];

if (UAVControl _drone select 0 == _player) then {
    _player connectTerminalToUAV objNull;
};

[
    trd_drone_packTime,
    [_drone, _player],
    // --- ON SUCCESS ---
    {
        params ["_args"];
        _args params ["_drone", "_player"];

        {
            deleteVehicle _x;
        } forEach crew _drone;

        deleteVehicle _drone;

        _player addItem trd_drone_itemClass;

        _player setVariable ["trd_deployedDrone", objNull, true];
        _player setVariable ["trd_droneActionInProgress", false, true];

        ["Drone packed and returned to inventory."] call ace_common_fnc_displayTextStructured;

        if (trd_drone_debug) then {
            systemChat "[332nd Drones] Drone packed up successfully";
        };
    },
    // --- ON FAILURE ---
    {
        params ["_args"];
        _args params ["_drone", "_player"];
        _player setVariable ["trd_droneActionInProgress", false, true];
        ["Packing cancelled."] call ace_common_fnc_displayTextStructured;
    },
    "Packing Drone...",
    {
        params ["_args"];
        _args params ["_drone", "_player"];
        (alive _player)
        && {alive _drone}
        && {_player == vehicle _player}
        && {_player distance _drone < 6}
        && {(getPosATL _drone) select 2 < 2}
    },
    ["isNotInside", "isNotSwimming"]
] call ace_common_fnc_progressBar;

if (trd_drone_deployAnim != "") then {
    _player playMove trd_drone_deployAnim;
};
