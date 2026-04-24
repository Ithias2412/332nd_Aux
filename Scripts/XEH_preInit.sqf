// ============================================================================
// 332nd Droid Fixes - preInit
// ----------------------------------------------------------------------------
// Registers CBA settings under the "332nd Droid Fixes" category:
//   - nd332_DroidNade_Cooldown       : seconds between throws per droid
//   - nd332_DroidNade_RequireLoadout : gate throws on magazine presence
// ============================================================================

[
    "nd332_DroidNade_Cooldown",
    "SLIDER",
    [
        "B1 Grenade Cooldown (s)",
        "Seconds between grenade throws, per droid. WBK default is 120. 332nd default is 600."
    ],
    "332nd Droid Fixes",
    [60, 1800, 600, 0],
    1
] call CBA_fnc_addSetting;

[
    "nd332_DroidNade_RequireLoadout",
    "CHECKBOX",
    [
        "Require Grenade in Loadout",
        "If enabled, a droid will only throw a grenade if it actually carries one. If disabled, preserves WBK's vanilla behavior of infinite scripted grenades."
    ],
    "332nd Droid Fixes",
    true,
    1
] call CBA_fnc_addSetting;