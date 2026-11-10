private _msg = ACE_player getVariable ["nd332_T41_msg", ["", 0]];
if (time < (_msg select 1)) exitWith { _msg select 0 };
private _r = ACE_player getVariable ["nd332_T41_range", 0];
private _o = ACE_player getVariable ["nd332_T41_offset", 0];
if (_r <= 0) exitWith { "FUZE  IMPACT" };
format ["RNG %1m   ADJ %2%3m   BURST %4m", _r, ["", "+"] select (_o >= 0), _o, (_r + _o) max nd332_T41_min]
