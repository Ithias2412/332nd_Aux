params ["_dir"];
private _r = ACE_player getVariable ["nd332_T41_range", 0];
if (ACE_player getVariable ["nd332_T41_lased", false] && {_r > 0}) then {
    private _o = ((ACE_player getVariable ["nd332_T41_offset", 0]) + _dir) max -10 min 10;
    ACE_player setVariable ["nd332_T41_offset", _o];
} else {
    _r = (_r + _dir * nd332_T41_step) max 0 min nd332_T41_max;
    if (_r > 0 && _r < nd332_T41_min) then { _r = [0, nd332_T41_min] select (_dir > 0) };
    ACE_player setVariable ["nd332_T41_range", _r];
    ACE_player setVariable ["nd332_T41_offset", 0];
};
true
