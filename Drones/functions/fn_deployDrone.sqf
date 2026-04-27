// ============================================================================
// fn_deployDrone.sqf
// Deploys the drone: progress bar -> remove item -> spawn UAV -> ACE pack action
// Params: [_player]
// ============================================================================

params ["_player"];

_player setVariable ["trd_droneActionInProgress", true, true];

[
    trd_drone_deployTime,
    [_player],
    // --- ON SUCCESS ---
    {
        params ["_args"];
        _args params ["_player"];

        _player removeItem trd_drone_itemClass;

        private _dir = getDir _player;
        private _pos = _player getRelPos [trd_drone_spawnDistance, 0];
        _pos set [2, 0];

        private _drone = createVehicle [trd_drone_vehicleClass, _pos, [], 0, "NONE"];
        _drone setDir _dir;
        _drone setPosATL _pos;

        createVehicleCrew _drone;

        private _grp = createGroup [side _player, true];
        {
            [_x] joinSilent _grp;
        } forEach crew _drone;

        _player connectTerminalToUAV _drone;

        _drone setVariable ["trd_droneOwner", _player, true];
        _player setVariable ["trd_deployedDrone", _drone, true];

        // --- Add ACE Pack action to the drone object ---
        private _packAction = [
            "trd_PackDrone",
            "Pack Drone",
            "\A3\UAV_F\UAV_01\Data\UI\UAV_01_ca.paa",
            {
                params ["_target", "_caller"];
                [_target, _caller] call trd_Drones_fnc_packDrone;
            },
            {
                params ["_target", "_player"];
                [_target, _player] call trd_Drones_fnc_canPack
            },
            {},
            [],
            [0, 0, 0],
            4
        ] call ace_interact_menu_fnc_createAction;

        [
            _drone,
            0,
            ["ACE_MainActions"],
            _packAction
        ] call ace_interact_menu_fnc_addActionToObject;

        // --- Destruction handler ---
        _drone addEventHandler ["Killed", {
            params ["_unit"];
            private _owner = _unit getVariable ["trd_droneOwner", objNull];
            if (!isNull _owner) then {
                _owner setVariable ["trd_deployedDrone", objNull, true];
                if (trd_drone_debug) then {
                    systemChat "[332nd Drones] Drone destroyed - item lost";
                };
            };
        }];

        _player setVariable ["trd_droneActionInProgress", false, true];

        ["Drone deployed. Connect via UAV Terminal or cTAB."] call ace_common_fnc_displayTextStructured;

        if (trd_drone_debug) then {
            systemChat format ["[332nd Drones] Deployed %1 at %2", trd_drone_vehicleClass, _pos];
        };
    },
    // --- ON FAILURE ---
    {
        params ["_args"];
        _args params ["_player"];
        _player setVariable ["trd_droneActionInProgress", false, true];
        ["Drone deployment cancelled."] call ace_common_fnc_displayTextStructured;
    },
    "Deploying Drone...",
    {
        params ["_args"];
        _args params ["_player"];
        (alive _player)
        && {_player == vehicle _player}
        && {trd_drone_itemClass in (items _player)}
    },
    ["isNotInside", "isNotSwimming"]
] call ace_common_fnc_progressBar;

if (trd_drone_deployAnim != "") then {
    _player playMove trd_drone_deployAnim;
};
