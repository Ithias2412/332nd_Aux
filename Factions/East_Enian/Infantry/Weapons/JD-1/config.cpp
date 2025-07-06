class CfgPatches 
{
	class 332nd_East_Enia_Faction_Infantry_AD4_M
	{
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            "332nd_AD4_M",
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
	class JMSLLTE_M45BlasterRifle;
	
// Gun
class 332nd_AD4_M: JMSLLTE_M45BlasterRifle
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] AD4-M Ion Blaster";
		baseWeapon="332nd_AD4_M";
		//reloadAction = "GestureReloadDMR02";
		recoil = "recoil_mx";
		reloadMagazineSound[] = 
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		magazines[]=
		{
			"332nd_AD4_M_Mag"
		};
		magazineWell[]={};
		modes[] = {"manual","close","short","medium", "far"};
		class manual: Mode_FullAuto
		{
			dispersion = 0.00102;
			maxRange = 10;
			maxRangeProbab = 0.04;
			midRange = 5;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.3;
			reloadTime = 0.075;
			showToPlayer = 1;
			soundBurst = 0;
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"JMSLLTE_M45_Shot_SoundSet",
					//"DMR06_tail_SoundSet",
					//"DMR06_InteriorTail_SoundSet"
				};
			};
		};
		class close: manual
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			burst = 20; //was 10
			maxRange = 50;
			maxRangeProbab = 0.04;
			midRange = 20;
			midRangeProbab = 0.7;
			minRange = 10;
			minRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class short: close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 16; //was 8
			maxRange = 300;
			maxRangeProbab = 0.04;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 50;
			minRangeProbab = 0.05;
		};
		class medium: short
		{
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			burst = 14; //was 7
			maxRange = 500;
			maxRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.7;
			minRange = 200;
			minRangeProbab = 0.05;
		};
		class far: medium
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
			burst = 6; //was 3
			maxRange = 900;
			maxRangeProbab = 0.01;
			midRange = 750;
			midRangeProbab = 0.7;
			minRange = 400;
			minRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"JMSLLTE_a280_holo_Scope",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"AD4_Muzzle",
				};
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
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JMSLLTE_a280_holo_Scope";
			};
			class LinkedItemsMuzzle 
			{
				item = "AD4_Muzzle";
				slot = "MuzzleSlot";
			};
		};
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_AD4_M_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_AD4_M_Ammo";
		count = 150;
		displayName = "AD4-M 150 Round Energy Cell";
		mass = 50;
		scope = 2;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "";
		//modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_AD4_M_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 15;
		effectfly = "IDA_BlasterBoltGlow_Green_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
	};
};