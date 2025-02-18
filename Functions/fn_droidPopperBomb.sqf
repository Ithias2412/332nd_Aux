_bomb = "ace_missile_gbu_12";

_bomb addEventHandler ["Explode", {
    params ["_explosive", "_pos"];

    _radius = 200;
    _nearEntities = nearestObjects [_pos, [], _radius];

    {
        if (["droid", typeOf _x] call BIS_fnc_inString) then {
            _x setDamage 1;
        };
    } forEach _nearEntities;
}];

