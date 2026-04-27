// ============================================================================
// fn_droneSettings.sqf
// Central settings for the deployable drone system.
// Change the drone type, timers, and item class here.
// ============================================================================

// --- Drone Vehicle Class ---
// Must be a UAV class for cTAB compatibility.
// Examples:
//   "B_UAV_01_F"           - AR-2 Darter (small quad rotor, BLUFOR)
//   "B_UAV_05_F"           - UCAV Sentinel (large fixed wing, BLUFOR)
//   "B_T_UAV_03_dynamicLoadout_F" - Mini UAV
//   Or any custom/modded UAV classname
trd_drone_vehicleClass = "332nd_Prowler_Drone";

// --- Inventory Item Classname ---
// Must match the CfgWeapons class in config.cpp
// Config-side names starting with numbers are fine — only SQF variables can't.
trd_drone_itemClass = "332nd_Drone_Item";

// --- Deploy Timer (seconds) ---
trd_drone_deployTime = 5;

// --- Pack Timer (seconds) ---
trd_drone_packTime = 5;

// --- Spawn Distance (meters) ---
trd_drone_spawnDistance = 3;

// --- Allow Multiple Drones ---
// true  = one per item in inventory
// false = only one active drone at a time
trd_drone_allowMultiple = false;

// --- Deploy Animation ---
// "" for no animation
trd_drone_deployAnim = "AinvPknlMstpSnonWnonDnon_medic_1";

// --- Debug Mode ---
trd_drone_debug = false;

if (trd_drone_debug) then {
    systemChat format ["[332nd Drones] Settings loaded | Vehicle: %1 | Item: %2", trd_drone_vehicleClass, trd_drone_itemClass];
};
