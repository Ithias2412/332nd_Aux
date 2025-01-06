class CfgPatches {
	class 332nd_DC15C {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15C",
			"332nd_DC15C_GL",
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
class Mode_FullAuto;
class Mode_SemiAuto;

class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15C_F;
	class 3AS_DC15C_GL;
	
//Primary
	class 332nd_DC15C: 3AS_DC15C_F
	{
		author="Ithias";
		displayName="[332nd] DC-15C (RFL)";
		recoil="3AS_recoil_DC15S";
		reloadAction = "3AS_GestureReload_DC17M";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC23\DC23_ui.paa";
		magazines[] =
		{
			"332nd_DC15C_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"Single"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					//"3AS_optic_acog_DC15C",
					"3AS_optic_reflex_DC15C",
					"3AS_optic_holo_DC15S",
					"101st_Aux_Pistol_A",
					"DBA_MGO_A",
					"3AS_Imp_Optic_1",
					"SWLW_Westar35S_scope",
					"optic_Aco",
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
	class 332nd_DC15C_GL: 3AS_DC15C_GL
	{
		author="Ithias";
		displayName="[332nd] DC-15C GL (GRN)";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC23\DC23_ui.paa";
		magazines[] =
		{
			"332nd_DC15C_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"Single"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					//"3AS_optic_acog_DC15C",
					"3AS_optic_reflex_DC15C",
					"3AS_optic_holo_DC15S",
					"101st_Aux_Pistol_A",
					"DBA_MGO_A",
					"3AS_Imp_Optic_1",
					"SWLW_Westar35S_scope",
					"optic_Aco",
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
	class 332nd_Base_Ammo;
	class 332nd_DC15C_Ammo_556x45: 332nd_Base_Ammo
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DC15C_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15C_Ammo_556x45";
		count = 30;
		descriptionShort = "";
		displayname = "DC-15C 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8.3;
		scope = 2;
	};
};