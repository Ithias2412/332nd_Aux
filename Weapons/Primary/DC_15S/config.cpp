class CfgPatches {
	class 332nd_DC15S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15S",
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
	class 3AS_DC15S_F;
	class IDA_DC15S;

//Primary
	class 332nd_DC15S_WIP: IDA_DC15S
	{
		author="Ithias";
		displayName="[332nd / WIP] DC-15S (RFL)";
		recoil = "3AS_recoil_DC15S";
		//reloadAction = "GestureReload_JLTS_DC15S";
		reloadAction = "GestureReload_IDAReload1";
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\DC15S_ui.paa";
		baseWeapon = "332nd_DC15S_WIP";
		magazines[] =
		{
			"332nd_DC15S_Mag",
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		class FullAuto: Mode_FullAuto
		{
			//reloadTime=0.085000001;
			reloadTime=0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion=0.00145;
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
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1,1,400};
				closure1[] = {};
				closure2[] = {};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				soundClosure[] = {};
				weaponSoundEffect = "";
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
			//reloadTime=0.1;
			reloadTime=0.09;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00145;
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
				"SilencedSound",
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15s\DC15s.wss",1,1,400};
				closure1[] = {};
				closure2[] = {};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"",
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_3AS_C_Reflex",
					"332nd_3AS_S_Holo",
					"332nd_Mode_A_Zoom_2",
					"332nd_Mode_B_Zoom_2",
					"332nd_Mode_C_Zoom_2",
					"332nd_Mode_D_Zoom_2",
					"332nd_Mode_Seelig_Point_Zoom_2",
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
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};


	class 332nd_DC15S: 3AS_DC15S_F
	{
		author="Ithias";
		displayName="[332nd] DC-15S (RFL)";
		recoil = "3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		magazines[] =
		{
			"332nd_DC15S_Mag",
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		class FullAuto: Mode_FullAuto
		{
			//reloadTime=0.085000001;
			reloadTime=0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion=0.00145;
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
					"3AS_DC15S_Shot_SoundSet"
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
			//reloadTime=0.1;
			reloadTime=0.09;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00145;
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
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_3AS_C_Reflex",
					"332nd_3AS_S_Holo",
					"332nd_Mode_A_Zoom_2",
					"332nd_Mode_B_Zoom_2",
					"332nd_Mode_C_Zoom_2",
					"332nd_Mode_D_Zoom_2",
					"332nd_Mode_Seelig_Point_Zoom_2",
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