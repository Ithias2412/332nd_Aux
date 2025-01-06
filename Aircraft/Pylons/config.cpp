class CfgPatches {
	class 332nd_Pylons {
		units[] = 
        {
			"",
			"",
        };
		weapons[] = 
        {
            "332nd_Missile_AA",
            "332nd_Missile_AGM",
            "332nd_Bomb_LGB",
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
	class PylonMissile_Bomb_GBU12_x1;
	
	class 332nd_Missile_AA_Mag: PylonMissile_1Rnd_AAA_missiles
	{
		ammo = "M_Air_AA";
		author = "Ithias";
		count = 4;
		descriptionShort = "Short-range, infrared-guided, air-to-air missile with high-explosive warhead";
		displayName = "[332nd] AA Missile";
		displayNameShort = "AA";
		hardpoints[] = 
		{
			"332nd_AA",
		};
		mass = 90;
		maxLeadSpeed = 694.444;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		pylonWeapon = "332nd_Missile_AA";
		weight = 0;
	};
	
	class 332nd_Missile_AGM_Mag: PylonRack_Missile_AGM_02_x1
	{
		ammo = "Missile_AGM_02_F";
		author = "Ithias";
		count = 2;
		descriptionShort = "Short-range, infrared-guided, air-to-surface missile with high-explosive anti-tank warhead";
		displayName = "[332nd] AG Missile";
		displayNameShort = "AG";
		hardpoints[] = 
		{
			"332nd_AGM",
		};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		pylonWeapon = "332nd_Missile_AGM";
		weight = 0;
	};
	
	class 332nd_Bomb_LGB_Mag: PylonMissile_Bomb_GBU12_x1
	{
		ammo = "Bomb_04_F";
		author = "Ithias";
		count = 2;
		descriptionShort = "500lb, high-explosive, laser-guided bomb";
		displayName = "[332nd] Laser Guided Bomb";
		displayNameShort = "LGB";
		hardpoints[] = 
		{
			"332nd_LGB",
		};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		pylonWeapon = "332nd_Bomb_LGB";
		weight = 0;
	};


};

class CfgWeapons
{
	class missiles_ASRAAM;
	class weapon_AGM_65Launcher;
	class weapon_GBU12Launcher;
	
	class 332nd_Missile_AA: missiles_ASRAAM
	{
		cmImmunity = 0.6;
		displayName = "[332nd] AA Missile";
		magazineReloadTime = 0.1;
		reloadTime = 0.1;
		weaponLockDelay = 3;
		weaponLockSystem = 2;
		magazines[] = 
		{
			"332nd_Missile_AA_Mag",
		};
	};
	class 332nd_Missile_AGM: weapon_AGM_65Launcher
	{
		displayName = "[332nd] AGM Missile";
		magazines[] = 
		{
			"332nd_Missile_AGM_Mag",
		};
	};
	class 332nd_Bomb_LGB: weapon_GBU12Launcher
	{
		displayName = "[332nd] Laser Guided Bomb";
		magazines[] = 
		{
			"332nd_Bomb_LGB_Mag",
		};
	};

};

class CfgAmmo
{
	
};