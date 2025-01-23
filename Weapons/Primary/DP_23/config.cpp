class CfgPatches {
	class 332nd_DP23 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DP23",
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
class Mode_SemiAuto;
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_DP23;
	class DBA_DP23_Shotgun;

//Primary

	class 332nd_DP23: JLTS_DP23
	{
		author="Ithias";
		displayName="[332nd] DP-23 (RFL)";
		reloadAction = "GestureReload_IDAReload1";
		magazines[] =
		{
			"332nd_DP23_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00073;
			minRange=1;
			minRangeProbab=0.5;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Zoom_2",
					"332nd_Mode_B_Zoom_2",
					"332nd_Mode_C_Zoom_2",
					"332nd_Mode_D_Zoom_2",
					"332nd_Mode_Seelig_Point_Zoom_2",
					"332nd_3AS_C_Reflex",
					"332nd_3AS_S_Holo",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};
};
class CfgAmmo
{
	class 332nd_Base_Shotgun_Ammo;
	class 3AS_EY30_Pellets_Submunition;
	class 332nd_DP23_Ammo_12g: 3AS_EY30_Pellets_Submunition
	{
		//ACE_bulletLength = 28.956;
		//ACE_bulletMass = 7.9704;
		//ACE_caliber = 7.823;
		hit=10;
		caliber=1;
		typicalspeed=800;
		//submunitionAmmo = "CUP_12Gauge_Pellets_Submunition_No00_Buck_Deploy";
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DP23_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DP23_Ammo_12g";
		count = 10;
		descriptionShort = "";
		displayname = "DP-23 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};