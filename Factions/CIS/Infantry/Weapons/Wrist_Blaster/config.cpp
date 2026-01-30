class CfgPatches {
	class 332nd_CIS_Wrist_Blaster {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_Wrist_Blaster",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class Mode_SemiAuto;
class WeaponSlotsInfo;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_FullAuto;

class cfgWeapons 
{
	class 3AS_DWBlaster_F;
	class UGL_F;

//Primary
	class 332nd_CIS_Wrist_Blaster: 3AS_DWBlaster_F
	{
		scope = 2;
		baseWeapon = "332nd_CIS_Wrist_Blaster";
		displayName = "[CIS] Wrist Blaster";
		magazines[] = {"332nd_CIS_Wrist_Blaster_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		muzzles[] = 
		{
			"this",
			"3AS_DWRocket_F"
		};
		class 3AS_DWRocket_F: UGL_F
		{
			cameraDir = "";
			descriptionShort = "DWRockets";
			discreteDistance[] = {};
			discreteDistanceCameraPoint[] = {};
			discreteDistanceInitIndex = 0;
			displayName = "[332nd] Dual Wrist Rocket Launcher";
			magazines[] = 
			{
				"332nd_DWRockets_AT",
			};
			magazineWell[] = {};
			picture = "\3AS\3AS_Weapons\DWBlaster\Data\UI\3as_b2arm.paa";
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			useExternalOptic = 0;
			useModelOptics = 0;
		};
	};
	class 332nd_CIS_Wrist_Blaster_Flame: 332nd_CIS_Wrist_Blaster
	{
		displayName = "[CIS] Wrist Blaster (Flame Thrower)";
		baseWeapon = "332nd_CIS_Wrist_Blaster_Flame";
		muzzles[] = {"this","332nd_B2_Flamer"};
		class 332nd_B2_Flamer: UGL_F
		{
			cameraDir = "";
			descriptionShort = "DWFlamer";
			discreteDistance[] = {};
			discreteDistanceCameraPoint[] = {};
			discreteDistanceInitIndex = 0;
			displayName = "[3AS] Dual Wrist Flame Launcher";
			magazines[] = {"332nd_FlamerFuel_B2"};
			magazineWell[] = {};
			picture = "\3AS\3AS_Weapons\DWBlaster\Data\UI\3as_b2arm.paa";
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			useExternalOptic = 0;
			useModelOptics = 0;
			class Single: Mode_SemiAuto
			{
				maxRange = 400;
				maxRangeProbab = 0.05;
				midRange = 200;
				midRangeProbab = 0.7;
				minRange = 30;
				minRangeProbab = 0.1;
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				class BaseSoundModeType
				{
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {};
					weaponSoundEffect = "";
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					begin2[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					begin3[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					weaponSoundEffect = "";
				};
			};
		};
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 3AS_FlamerFuel;
	class 3AS_DWRockets_AT;
	
	class 332nd_CIS_Wrist_Blaster_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_CIS_Wrist_Blaster_Ammo";
		count = 500;
		displayName = "Wrist Blaster 500 Round Energy Cell";
		mass = 52.5;
		scope = 2;
		modelSpecial = "";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
	};
	class 332nd_FlamerFuel_B2: 3AS_FlamerFuel
	{
		count = 5;
		displayName = "B2 Flamer Fuel";
	};
	class 332nd_DWRockets_AT: 3AS_DWRockets_AT
	{
		ammo = "332nd_DWRockets_AT_Ammo";
		displayName = "[332nd] 3 Rnd AT DW Rockets";
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 3AS_R_DWRockets_AT;
	
	class 332nd_CIS_Wrist_Blaster_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 10;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};
	class 332nd_DWRockets_AT_Ammo: 3AS_R_DWRockets_AT
	{
		indirectHit = 15;
		indirectHitRange = 4;
	};
};