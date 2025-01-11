// _this is passed automatically and contains explosion details.
// Example: [ammo, position, radius, instigator, explosionType]
params [
    "_ammo",      // Ammo type (string).
    "_position",  // Explosion position (array).
    "_radius"     // Explosion radius (number).
];

// Ensure the position is an array and radius is a number.
if (!(_position isEqualType [] && {_radius isEqualType 0})) exitWith {
    diag_log "Invalid parameters passed to the script.";
};

// Ensure the position is a valid 3D coordinate.
if ((count _position) != 3) exitWith {
    diag_log "Invalid position passed to the script.";
};

// Find all units within the explosion radius.
private _affectedUnits = _position nearEntities [["Man"], _radius];

// Loop through the affected units.
{
    // Ensure the unit's classname contains "droid", "b1", or "b2" (case insensitive).
    private _classname = toLower (typeOf _x);
    if (_classname find "droid" >= 0 || _classname find "b1" >= 0 || _classname find "b2" >= 0) then {
        // Apply full damage to the unit to "kill" it.
        _x setDamage 1;
    };
} forEach _affectedUnits;
