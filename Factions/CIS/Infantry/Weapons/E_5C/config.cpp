class CfgPatches {
	class 332nd_CIS_E5C {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_E5C",
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
    class ItemInfo;
	class JLTS_E5C_stock;

//Primary
	class 332nd_CIS_E5C: JLTS_E5C_stock
	{
		scope = 2;
		baseWeapon = "332nd_CIS_E5C";
		displayName = "[CIS] E-5C";
		magazines[] = {"332nd_CIS_E5C_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
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
	class 332nd_CIS_E5C_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_CIS_E5C_Ammo";
		count = 150;
		displayName = "E-5C 150 Round Energy Cell";
		mass = 50;
		scope = 2;
		model = "\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_CIS_E5C_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 15;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};
};