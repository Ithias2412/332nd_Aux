// _this is passed automatically and contains explosion details.
// Example: [ammo, position, radius, instigator, explosionType]
params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if (!alive _target) exitWith {};

private _ammoUsed = _ammo select 4;

// Ensure the position is an array and radius is a number.
if (!(_position isEqualType [] && {_radius isEqualType 0})) exitWith {
    diag_log "Invalid parameters passed to the script.";
};

// Ensure the position is a valid 3D coordinate.
if ((count _position) != 3) exitWith {
    diag_log "Invalid position passed to the script.";
};

if (getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "droidPopper") != 1) exitWith {};


private _classname = toLower (typeOf _target);

if (_classname find "droid" >= 0 || _classname find "b1" >= 0 || _classname find "b2" >= 0) then {
    _unit setDamage 1;
    _unit disableAI "AUTOCOMBAT"; // Prevents automatic combat reactions
    _unit disableAI "COVER"; // Stops AI from seeking cover
    _unit disableAI "SUPPRESSION"; // Stops AI from reacting to enemy fire
    _unit setUnitPos "UP"; // Forces standing position
    _target disableAI "all";

    // Re-enable AI after 4 seconds
    [{_target enableAI "all";}, 4] call CBA_fnc_waitAndExecute;
};


// Find all units within the explosion radius.
//private _affectedUnits = _position nearEntities [["Man"], _radius];

// Loop through the affected units.
/*{
    // Ensure the unit's classname contains "droid", "b1", or "b2" (case insensitive).
    private _classname = toLower (typeOf _x);
    if (_classname find "droid" >= 0 || _classname find "b1" >= 0 || _classname find "b2" >= 0) then {
        // Apply full damage to the unit to "kill" it.
        _x setDamage 1;
    };
} forEach _affectedUnits;
*/