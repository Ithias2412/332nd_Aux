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
	"332nd_Hammer_I",
	"332nd_Hammer_II",
	"332nd_Anvil_I",
	"332nd_Anvil_III",
	"332nd_Anvil_IV",
	"332nd_Anvil_V",
	"332nd_Anvil_X_S",
	"332nd_Anvil_X_K",
	"332nd_Forge_III",
	"332nd_Forge_III_Y",
	"332nd_Forge_I",
	"332nd_Forge_X_N",
	"332nd_Forge_X_C",
	"332nd_CIS_A2A_Missile",
	"332nd_CIS_ATG_Missile",
	"332nd_Mass_Driver_Shell",
	"332nd_Mortar_Ammo",
	"332nd_Sabre_Missile_Ammo",
	"332nd_Sabre_AP_Ammo",
	"332nd_LAAT_Cannon_Ammo",
	"332nd_Y_Wing_Cannon_Ammo",
	"332nd_Z95_Cannon_Ammo",
	"332nd_ARC_Cannon_Ammo",
	"332nd_Rho_Cannon_Ammo",
    "332nd_Westar_Rifle_Grenade"
];

// catch submunitions, since those are what reach HandleDamage if a round splits
{
    private _sub = getText (configFile >> "CfgAmmo" >> _x >> "submunitionAmmo");
    if (_sub != "") then { aux332_uglAmmo pushBackUnique _sub };
} forEach (+aux332_uglAmmo);