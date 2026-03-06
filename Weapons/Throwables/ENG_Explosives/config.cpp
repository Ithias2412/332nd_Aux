class CfgPatches 
{
	class 332nd_ENG_Throwables 
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"A3_Weapons_F"
		};
        magazines[] =
        {
            "332nd_Remote_Charge_Throwable",
			"332nd_Detonation_pack_Throwable",
        };
	};
};

class CfgAmmo
{
	class ACE_DemoCharge_Remote_Ammo_Thrown;
	class 332nd_Remote_Charge_Ammo_Thrown: ACE_DemoCharge_Remote_Ammo_Thrown
	{
		CraterEffects = "MineNondirectionalCraterSmall";
		defaultMagazine = "332nd_Remote_Charge_Mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		hit = 2500;
		indirectHit = 2500;
		indirectHitRange = 5;
		mineModelDisabled = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack.p3d";
		model = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack.p3d";
		explosionTime = 7;
	};
	class 332nd_Detonation_pack_Ammo_Thrown: ACE_DemoCharge_Remote_Ammo_Thrown
	{
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "332nd_Detonation_pack_Mag";
		ExplosionEffects = "MineNondirectionalExplosion";
		hit = 5000;
		indirectHit = 5000;
		indirectHitRange = 10;
		mineModelDisabled = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
		model = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
		explosionType = "bomb";
		explosionTime = 7;
	};

};

class CfgMagazines
{
	class 3AS_ThermalDetonator;
	class 332nd_Remote_Charge_Throwable: 3AS_ThermalDetonator
	{
		ammo = "332nd_Remote_Charge_Ammo_Thrown";
		displayName = "[332nd] Throwable Remote Charge";
		displayNameShort = "Remote Charge";
		picture = "\OPTRE_weapons\charges\icons\c12.paa";
		mass = 15;
	};
	class 332nd_Detonation_pack_Throwable: 3AS_ThermalDetonator
	{
		ammo = "332nd_Detonation_pack_Ammo_Thrown";
		displayName = "[332nd] Throwable Detonation Pack";
		displayNameShort = "Detonation Pack";
		picture = "\LF_Weapon_Unit_Explosives\typeabc\ui\type_icon.paa";
		mass = 30;
	};
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] +=
        {
            "332nd_Remote_Charge_Muzzle",
			"332nd_Detonation_pack_Muzzle",
        };
        class ThrowMuzzle;
        class 332nd_Remote_Charge_Muzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_Remote_Charge_Throwable",
            };
        };
        class 332nd_Detonation_pack_Muzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_Detonation_pack_Throwable",
            };
        };
    };
};