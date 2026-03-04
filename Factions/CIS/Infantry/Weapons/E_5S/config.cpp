class CfgPatches {
	class 332nd_CIS_E5S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_E5S",
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
	class JLTS_E5S;

//Primary
	class 332nd_CIS_E5S: JLTS_E5S
	{
		scope = 2;
		baseWeapon = "332nd_CIS_E5S";
		displayName = "[CIS] E-5S";
		magazines[] = {"332nd_CIS_E5S_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00073;
			maxRange = 450;
			maxRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			reloadTime = 0.6;
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
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_CIS_E5S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_CIS_E5S_Ammo";
		count = 20;
		displayName = "E-5S 20 Round Energy Cell";
		mass = 12.5;
		scope = 2;
		model = "\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\E5S\data\ui\E5S_mag_ui_ca.paa";
		initSpeed = 1200;
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_CIS_E5S_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 25;
		caliber = 2.4;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		typicalspeed = 1200;
	};
};