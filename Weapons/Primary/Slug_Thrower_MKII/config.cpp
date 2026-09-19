class CfgPatches
{
	class 332nd_Slug_Thrower_MKII
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			"332nd_Slug_Thrower_MKII",
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class GunParticles;

class CfgWeapons 
{
	class JLTS_DC15X;
	class 332nd_Slug_Thrower_MKII: JLTS_DC15X
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		JLTS_hasEMPProtection=0;
		author="Ithias";
		scope=2;
		baseWeapon="332nd_Slug_Thrower_MKII";
		displayName="[332nd] MK II Slug Thrower (MRK)";
		reloadAction = "3AS_GestureReloadOverHeat";
		weaponInfoType="RscOptics_nightstalker";
		magazines[]=
		{
			"332nd_Slug_Thrower_MKII_Mag",
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",3.16228,1,1400};
				beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
				beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
				beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
				SoundSetShot[] = {"SDAR_Shot_SoundSet","SDAR_Tail_SoundSet","SDAR_InteriorTail_SoundSet"};
			};
			reloadTime=0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00018;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_JLTS_DC15X_scope",
				};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"332nd_Slug_Thrower_MKII_Muzzle",
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
				item = "332nd_Slug_Thrower_MKII_Muzzle";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="332nd_JLTS_DC15X_scope";
			};
		};
	};
	
	class muzzle_snds_H_MG;
	class muzzle_snds_H: muzzle_snds_H_MG
	{
		class ItemInfo;
	};
	class 332nd_Slug_Thrower_MKII_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Barrel Rifling";
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

class CfgVehicles 
{
	
};