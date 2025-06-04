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
    class ItemInfo;
	class 3AS_DWBlaster_F;

//Primary
	class 332nd_CIS_Wrist_Blaster: 3AS_DWBlaster_F
	{
		scope = 1;
		baseWeapon = "332nd_CIS_Wrist_Blaster";
		displayName = "[CIS] Wrist Blaster";
		magazines[] = {"332nd_CIS_Wrist_Blaster_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
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
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_CIS_Wrist_Blaster_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 10;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};
};