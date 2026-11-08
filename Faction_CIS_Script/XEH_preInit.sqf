aux332_uglAmmo = [
    "332nd_HE_UGLGrenade",
    "332nd_DroidPopper_UGLGrenade",
    "332nd_Detonation_pack_Ammo",
    "332nd_Detonation_pack_Ammo_Thrown",
    "332nd_DroidPopper_ammo",
    "332nd_Flame_Grenade_Ammo",
    "332nd_Flame_UGLGrenade",
    "332nd_Mine_Dispenser_Ammo",
    "332nd_Mine_Dispenser_Ammo_Deploy",
    "332nd_Mine_Dispenser_Ammo_Deploy_Mine",
    "332nd_Remote_Charge_Ammo",
    "332nd_Remote_Charge_Ammo_Thrown",
    "332nd_Sabre_HE_Ammo",
    "332nd_Thermal_Detonator_Ammo",
    "332nd_Westar_Rifle_Grenade"
];

// catch submunitions, since those are what reach HandleDamage if a round splits
{
    private _sub = getText (configFile >> "CfgAmmo" >> _x >> "submunitionAmmo");
    if (_sub != "") then { aux332_uglAmmo pushBackUnique _sub };
} forEach (+aux332_uglAmmo);