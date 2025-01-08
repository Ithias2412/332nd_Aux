class CfgPatches {
	class 332nd_Pylons {
		units[] = 
        {
			"",
			"",
        };
		weapons[] = 
        {
            "332nd_Hammer_I",
            "332nd_Hammer_II",
            "332nd_Anvil_I",
			"332nd_Anvil_III",
			"332nd_Forge_III",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"

class CfgMagazines
{
	class PylonMissile_1Rnd_AAA_missiles;
	class PylonRack_Missile_AGM_02_x1;
	class ace_missile_gbu_gbu12;
	class PylonMissile_1Rnd_GAA_missiles;
	class ace_maverick_L_magazine_x1;

	class 332nd_Hammer_I_Mag: PylonMissile_1Rnd_AAA_missiles
	{
		ammo = "M_Air_AA";
		author = "Ithias";
		count = 3;
		descriptionShort = "Short-range, infrared-guided, air-to-air missile with high-explosive warhead";
		displayName = "[332nd] Hammer I";
		displayNameShort = "IR AA";
		hardpoints[] = 
		{
			"332nd_Hammer_I",
		};
		mass = 90;
		maxLeadSpeed = 694.444;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		pylonWeapon = "332nd_Hammer_I";
		weight = 0;
	};
	
	class 332nd_Hammer_II_Mag: PylonMissile_1Rnd_GAA_missiles
	{
		ammo = "M_Zephyr";
		author = "Ithias";
		count = 2;
		descriptionShort = "Medium-range, radar-guided, air-to-air missile with high-explosive warhead";
		displayName = "[332nd] Hammer II";
		displayNameShort = "Radar AA";
		hardpoints[] = 
		{
			"332nd_Hammer_II",
		};
		mass = 152;
		maxLeadSpeed = 694.444;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		pylonWeapon = "332nd_Hammer_II";
		weight = 0;
	};

	class 332nd_Anvil_I_Mag: PylonRack_Missile_AGM_02_x1
	{
		ammo = "Missile_AGM_02_F";
		author = "Ithias";
		count = 2;
		descriptionShort = "Short-range, infrared-guided, air-to-surface missile with high-explosive anti-tank warhead";
		displayName = "[332nd] Anvil I";
		displayNameShort = "IR AG";
		hardpoints[] = 
		{
			"332nd_Anvil_I",
		};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		pylonWeapon = "332nd_Anvil_I";
		weight = 0;
	};
	
	class 332nd_Anvil_III_Mag: ace_maverick_L_magazine_x1
	{
		ammo = "ace_maverick_L";
		author = "Ithias";
		count = 1;
		descriptionShort = "Short-range, laser Guided, air-to-surface missile with high-explosive anti-tank warhead";
		displayName = "[332nd] Anvil III";
		displayNameShort = "LGM";
		hardpoints[] = 
		{
			"332nd_Anvil_III",
		};
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		pylonWeapon = "332nd_Anvil_III";
	};
	
	class 332nd_Forge_III_Mag: ace_missile_gbu_gbu12
	{
		ammo = "ace_missile_gbu_12";
		author = "Ithias";
		count = 2;
		descriptionShort = "500lb, high-explosive, laser-guided bomb";
		displayName = "[332nd] Forge III";
		displayNameShort = "LGB";
		hardpoints[] = 
		{
			"332nd_Forge_III",
		};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		pylonWeapon = "332nd_Forge_III";
		weight = 0;
	};


};

class CfgWeapons
{
	class missiles_ASRAAM;
	class weapon_AGM_65Launcher;
	class ace_missile_gbu_12;
	class missiles_Zephyr;
	class ace_maverick_L_Launcher;
	
	class 332nd_Hammer_I: missiles_ASRAAM
	{
		cmImmunity = 0.6;
		displayName = "[332nd] Hammer I";
		magazineReloadTime = 0.1;
		reloadTime = 0.1;
		weaponLockDelay = 3;
		weaponLockSystem = 2;
		magazines[] = 
		{
			"332nd_Hammer_I_Mag",
		};
	};
	class 332nd_Hammer_II: missiles_Zephyr //weapon_AMRAAMLauncher
	{
		displayName = "[332nd] Hammer II";
		magazines[] = 
		{
			"332nd_Hammer_II_Mag",
		};
	};
	class 332nd_Anvil_I: weapon_AGM_65Launcher
	{
		displayName = "[332nd] Anvil I";
		magazines[] = 
		{
			"332nd_Anvil_I_Mag",
		};
	};
	class 332nd_Anvil_III: ace_maverick_L_Launcher
	{
		displayName = "[332nd] Anvil III";
		magazines[] = 
		{
			"332nd_Anvil_III_Mag",
		};
	};
	class 332nd_Forge_III: ace_missile_gbu_12
	{
		displayName = "[332nd] Forge III";
		magazines[] = 
		{
			"332nd_Forge_III_Mag",
		};
	};

};

class CfgAmmo
{
	
};