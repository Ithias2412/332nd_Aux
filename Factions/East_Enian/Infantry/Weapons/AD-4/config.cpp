class CfgPatches 
{
	class 332nd_East_Enia_Faction_Infantry_AD4
	{
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            "332nd_AD4",
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
	class IDA_A260;
	
// Gun
class 332nd_AD4: IDA_A260
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] AD4";
		baseWeapon="332nd_AD4";
		reloadAction = "GestureReloadDMR02";
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
			"332nd_AD4_Mag"
		};
		magazineWell[]={};
		modes[] = {"FullAuto","Single","close","short","medium", "far"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 1e-06;
			dispersion = 0.002;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			reloadTime = 0.15;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
		};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.002;
			maxRange = 400;
			maxRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
		};
		class close: Single
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			burst = 3;
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
			burst = 2;
			maxRange = 300;
			maxRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 50;
			minRangeProbab = 0.5;
		};
		class medium: short
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
			burst = 1;
			maxRange = 500;
			maxRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			minRange = 200;
			minRangeProbab = 0.2;
		};
		class far: medium
		{
			aiRateOfFire = 8;
			aiRateOfFireDistance = 900;
			burst = 1;
			maxRange = 900;
			maxRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.6;
			minRange = 400;
			minRangeProbab = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
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
			class LinkedItemsMuzzle 
			{
				item = "AD4_Muzzle";
				slot = "MuzzleSlot";
			};
		};
	};

	class muzzle_snds_H_MG;
	class muzzle_snds_H: muzzle_snds_H_MG
	{
		class ItemInfo;
	};
	class AD4_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Enian Gas Adapter";
		model = "";
		picture = "";
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				airFriction = 1;
				audibleFire = 1;
				audibleFireTime = 1;
				cost = 1;
				hit = 1;
				typicalSpeed = 1;
				visibleFire = 1;
				visibleFireTime = 1;
			};
			class MuzzleCoef
			{
				artilleryDispersionCoef = "1.0f";
				dispersionCoef = "1.0f";
				fireLightCoef = "0";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
			};
		};
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_AD4_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_AD4_Ammo";
		count = 40;
		displayName = "AD-4 40 Round Energy Cell";
		mass = 10;
		scope = 2;
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
	};
};


class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_AD4_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 10;
		effectfly = "IDA_BlasterBoltGlow_Green_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
	};
};