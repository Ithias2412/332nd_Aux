// ============================================================================
// fn_droneInit.sqf
// PostInit - Loads settings and registers ACE interactions.
// ============================================================================

if (!hasInterface) exitWith {};

// Load settings first
call trd_Drones_fnc_droneSettings;

// ============================================================================
// ACE Self-Interaction: Deploy Drone
// ============================================================================
private _deployAction = [
    "trd_DeployDrone",
    "Deploy Drone",
    "\A3\UAV_F\UAV_01\Data\UI\UAV_01_ca.paa",
    {
        [player] call trd_Drones_fnc_deployDrone;
    },
    {
        [player, trd_drone_itemClass] call trd_Drones_fnc_canDeploy
    },
    {},
    [],
    [0, 0, 0],
    4
] call ace_interact_menu_fnc_createAction;

[
    player,
    1,
    ["ACE_SelfActions"],
    _deployAction
] call ace_interact_menu_fnc_addActionToObject;

["332nd_Prowler_Drone", "Init", {_this call trd_Drones_fnc_droneCrewInit}, true, [], true] call CBA_fnc_addClassEventHandler;

if (trd_drone_debug) then {
    systemChat "[332nd Drones] ACE actions initialized";
};
