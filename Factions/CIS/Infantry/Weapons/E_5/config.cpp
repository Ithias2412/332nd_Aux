class CfgPatches {
	class 332nd_CIS_E5 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_E5",
			"332nd_CIS_E5_Shield",
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
	class JLTS_E5;

//Primary
	class 332nd_CIS_E5: JLTS_E5
	{
		scope = 2;
		displayName = "[CIS] E-5";
		magazines[] = {"332nd_CIS_E5_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		modes[] = {"Single","FullAuto","fullauto_medium"};
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
				begin1[] = {"MRC\JLTS\weapons\E5\sounds\E5_fire",2.5,1,1800};
				beginwater1[] = {"MRC\JLTS\weapons\E5\sounds\E5_fire",1,1,400};
				soundBegin[] = {"begin1",1};
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
				begin1[] = {"MRC\JLTS\weapons\E5\sounds\E5_fire",2.5,1,1800};
				beginwater1[] = {"MRC\JLTS\weapons\E5\sounds\E5_fire",1,1,400};
				soundBegin[] = {"begin1",1};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
		};
	};
	class 332nd_CIS_E5_Shield: 332nd_CIS_E5
	{
		scope = 2;
		displayName = "[CIS] E-5 (shield)";
		baseWeapon = "332nd_CIS_E5_Shield";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
		inertia = 0.8;
		JLTS_isShielded = 1;
		JLTS_shieldedWeapon = "332nd_CIS_E5_Shield";
		hiddenSelections[] = {"camo1"};
		model = "\MRC\JLTS\weapons\E5\E5_shielded.p3d";
		recoil = "recoil_pdw";
		class LinkedItems
		{
			class LinkedItemsBipod
			{
				slot="UnderBarrelSlot";
				item="JLTS_riot_shield_droid_attachment";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
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
				compatibleItems[] = 
				{
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	class JLTS_riot_shield_attachment;
	class JLTS_riot_shield_droid_attachment: JLTS_riot_shield_attachment
	{
		scope = 2;
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_CIS_E5_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_CIS_E5_Ammo";
		count = 40;
		displayName = "E-5 40 Round Energy Cell";
		mass = 10;
		scope = 2;
		model = "\MRC\JLTS\weapons\E5\E5_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
	};
};


class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_CIS_E5_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 10;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};
	
};