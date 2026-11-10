private _path = "\332nd_Aux\Weapons\Primary\T41\functions\";
{
    missionNamespace setVariable [format ["nd332_T41_fnc_%1", _x], compile preprocessFileLineNumbers (_path + "fn_" + _x + ".sqf")];
} forEach ["fired", "adjust", "lase", "show", "hud"];

nd332_T41_min = 10;
nd332_T41_max = 500;

["nd332_T41_step", "SLIDER", ["Manual range step (m)", "Range change per keypress when nothing is lased"], "[332nd] T-41 Airburst", [1, 50, 5, 0]] call CBA_fnc_addSetting;
["nd332_T41_defOffset", "SLIDER", ["Default burst offset (m)", "Offset applied after lasing, +1 = 1 m beyond the lased point"], "[332nd] T-41 Airburst", [-10, 10, 1, 0]] call CBA_fnc_addSetting;

// DIK: 0xC9 PgUp, 0xD1 PgDn, 0x0F Tab, 0xCF End
["[332nd] T-41 Airburst", "nd332_T41_inc", ["Offset + / range +", "After lasing: burst 1 m further. Otherwise raises range."], { [1] call nd332_T41_fnc_adjust }, {}, [0xC9, [false, false, true]]] call CBA_fnc_addKeybind;
["[332nd] T-41 Airburst", "nd332_T41_dec", ["Offset - / range -", "After lasing: burst 1 m closer. Otherwise lowers range."], { [-1] call nd332_T41_fnc_adjust }, {}, [0xD1, [false, false, true]]] call CBA_fnc_addKeybind;
["[332nd] T-41 Airburst", "nd332_T41_lase", ["Lase / program fuze", ""], { call nd332_T41_fnc_lase }, {}, [0x0F, [true, false, false]]] call CBA_fnc_addKeybind;
["[332nd] T-41 Airburst", "nd332_T41_reset", ["Reset to impact fuze", ""], {
    ACE_player setVariable ["nd332_T41_range", 0];
    ACE_player setVariable ["nd332_T41_offset", 0];
    ACE_player setVariable ["nd332_T41_lased", false];
    true
}, {}, [0xCF, [false, false, false]]] call CBA_fnc_addKeybind;
