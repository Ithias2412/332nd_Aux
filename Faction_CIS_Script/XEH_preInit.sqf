aux332_uglAmmo = [
    "332nd_HE_UGLGrenade",
    "332nd_DroidPopper_UGLGrenade",
    "332nd_Westar_Rifle_Grenade"
];

// catch submunitions, since those are what reach HandleDamage if a round splits
{
    private _sub = getText (configFile >> "CfgAmmo" >> _x >> "submunitionAmmo");
    if (_sub != "") then { aux332_uglAmmo pushBackUnique _sub };
} forEach (+aux332_uglAmmo);