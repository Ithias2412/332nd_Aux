private _from = AGLToASL positionCameraToWorld [0, 0, 0];
private _to = AGLToASL positionCameraToWorld [0, 0, nd332_T41_max + 50];
private _hit = lineIntersectsSurfaces [_from, _to, ACE_player, vehicle ACE_player, true, 1, "FIRE", "GEOM"];
if (_hit isEqualTo []) exitWith {
    ACE_player setVariable ["nd332_T41_msg", ["<t color='#ff5050'>RNG ----  NO RETURN</t>", time + 1.5]];
    playSound "addItemFailed";
    true
};
private _d = round (eyePos ACE_player vectorDistance ((_hit select 0) select 0));
ACE_player setVariable ["nd332_T41_range", (_d max nd332_T41_min) min nd332_T41_max];
ACE_player setVariable ["nd332_T41_offset", nd332_T41_defOffset];
ACE_player setVariable ["nd332_T41_lased", true];
playSound "Hint3";
true
