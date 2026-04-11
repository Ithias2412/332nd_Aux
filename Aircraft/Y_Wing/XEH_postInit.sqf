["332nd_Y_Wing", "InitPost", {
    params ["_vehicle"];
    _vehicle addWeaponTurret ["Laserdesignator_pilotCamera", [0]];
    _vehicle addMagazineTurret ["Laserbatteries", [0]];
}, true, [], true] call CBA_fnc_addClassEventHandler;