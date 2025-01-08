// _this is passed automatically and contains explosion details.
// Example: [ammo, position, radius, instigator, explosionType]
params [
    "_ammo",      // Ammo type (string).
    "_position",  // Explosion position (array).
    "_radius"     // Explosion radius (number).
];

// Ensure the position and radius are valid.
if (!(_position isEqualType [] && {_radius isEqualType 0})) exitWith {};

// Find all units within the explosion radius.
private _affectedUnits = nearestObjects [_position, ["Man"], _radius];

// Loop through the affected units.
{
    // Ensure the unit classname contains "droid", "b1", or "b2" (case insensitive).
    private _classname = toLower (typeOf _x);
    if (_classname find "droid" >= 0 || _classname find "b1" >= 0 || _classname find "b2" >= 0) then {
        // Apply full damage to the unit to "kill" it.
        _x setDamage 1;
    };
} forEach _affectedUnits;
