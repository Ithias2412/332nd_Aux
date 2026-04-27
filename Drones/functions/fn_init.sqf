// ============================================================================
// fn_init.sqf - Initialise ACE self-interactions for deploying drones
// ============================================================================

if (!hasInterface) exitWith {};

private _registry = call 332nd_drone_fnc_settings;

private _parentAction = [
    "332nd_Drone_Menu",
    "Drones",
    "\A3\Drones_F\Weapons_F_Gamma\Data\UI\gear_UAV_01_F_CA.paa",
    {},
    { true },
    {},
    [],
    [0, 0, 0],
    5
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _parentAction] call ace_interact_menu_fnc_addActionToObject;

{
    private _itemClass    = _x select 0;
    private _vehicleClass = _x select 1;
    private _deployTime   = _x select 2;

    private _displayName = getText (configFile >> "CfgWeapons" >> _itemClass >> "displayName");
    if (_displayName isEqualTo "") then { _displayName = _itemClass; };

    private _deployAction = [
        format ["332nd_Deploy_%1", _itemClass],
        format ["Deploy %1", _displayName],
        "\A3\Drones_F\Weapons_F_Gamma\Data\UI\gear_UAV_01_F_CA.paa",
        {
            params ["_target", "_player", "_params"];
            _params params ["_itemCls", "_vehCls", "_dTime"];
            [_player, _itemCls, _vehCls, _dTime] call 332nd_drone_fnc_deployDrone;
        },
        {
            params ["_target", "_player", "_params"];
            _params params ["_itemCls"];
            [_player, _itemCls] call 332nd_drone_fnc_canDeploy
        },
        {},
        [_itemClass, _vehicleClass, _deployTime],
        [0, 0, 0],
        5
    ] call ace_interact_menu_fnc_createAction;

    [player, 1, ["ACE_SelfActions", "332nd_Drone_Menu"], _deployAction] call ace_interact_menu_fnc_addActionToObject;

} forEach _registry;

diag_log "[332nd] Deployable Drones: ACE self-interactions registered.";
