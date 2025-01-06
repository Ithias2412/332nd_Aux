class CfgPatches {
	class 332nd_DC15L {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15L",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15L_F;
	class FullAuto;
//Primary
	class 332nd_DC15L: 3AS_DC15L_F
	{
		author="Ithias";
		displayName="[332nd] DC-15L (AR)";
		recoil="3AS_recoil_DC15L";
		reloadAction = "GestureReload_JLTS_DC15A";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15X\DC15X_ui.paa";
		magazines[] =
		{
			"332nd_DC15L_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"FullAuto_15L",
			"FastAuto_15L",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"101st_Aux_Pistol_A",
					"DBA_MGO_A",
					"optic_Holosight_blk_F",
					"optic_Aco",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class FullAuto_15L: FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.00058;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.15;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				soundSetShot[] = {""};
			};
			class StandardSound
			{
				soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			};
			soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			textureType = "fullAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";			
		};
		class FastAuto_15L: FullAuto_15L
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.00058;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.07500000002;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				soundSetShot[] = {""};
			};
			class StandardSound
			{
				soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			};
			soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			textureType = "fastAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";			
		};
	};

};
class CfgAmmo
{
	class 332nd_Base_Ammo;
	class 332nd_DC15L_Ammo_762x51: 332nd_Base_Ammo
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
		hit = 11.6;
		caliber = 1.6;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DC15L_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15L_Ammo_762x51";
		count = 200;
		descriptionShort = "";
		displayname = "DC-15L 200 Round Energy Cell";
		displayNameShort = "";
		mass = 40;
		scope = 2;
	};
};