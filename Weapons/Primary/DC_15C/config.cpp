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
class Mode_Burst;

class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15C_F;
	class 3AS_DC15C_GL;
	class UGL_F;
	
//Primary
	class 332nd_DC15C: 3AS_DC15C_F
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15C (RFL)";
		recoil="3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC23\DC23_ui.paa";
		baseWeapon = "332nd_DC15C";
		magazines[] =
		{
			"332nd_DC15C_Mag",
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"Single",
			//"Burst"
		};
		class OpticsModes
		{
			class Ironsights
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.375;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class Burst: Mode_Burst
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
					"332nd_Mode_A_Zoom_2_Raised",
					"332nd_Mode_B_Zoom_2_Raised",
					"332nd_Mode_C_Zoom_2_Raised",
					"332nd_Mode_D_Zoom_2_Raised",
					"332nd_Mode_Seelig_Point_Zoom_2_Raised",
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
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15C GL (GRN)";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC23\DC23_ui.paa";
		reloadAction = "GestureReload_JLTS_DC15S";
		baseWeapon = "332nd_DC15C_GL";
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
		muzzles[] = 
		{
			"this",
			"GL_3GL_F"
		};
		class GL_3GL_F: UGL_F
		{
			cameraDir = "OP_look";
			magazines[]=
			{
				"332nd_HE_LGrenade_Mag",
				"332nd_Smoke_LauncherGrenade",
				"332nd_SmokeRed_LauncherGrenade",
				"332nd_SmokeGreen_LauncherGrenade",
				"332nd_SmokeBlue_LauncherGrenade",
				"332nd_SmokePurple_LauncherGrenade",
				"ACE_HuntIR_M203"
			};
			magazineWell[]={};
			descriptionShort = "DC15CGL";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			displayName = "DC15C GL";
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			useExternalOptic = 0;
			useModelOptics = 0;
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
					"332nd_Mode_A_Zoom_2_Raised",
					"332nd_Mode_B_Zoom_2_Raised",
					"332nd_Mode_C_Zoom_2_Raised",
					"332nd_Mode_D_Zoom_2_Raised",
					"332nd_Mode_Seelig_Point_Zoom_2_Raised",
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

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Weapons_DC15C_Extended
        {
            label = "DC-15C";
            author = "Ithias";
			options[] = { "DC15C", };
            class DC15C
            {
                label = "DC-15C";
				values[] = { "RFL", "GRN",};
                changeingame = 0;
                alwaysSelectable = 1;
                class RFL
                {
                    label = "RFL";
                    description = "For normal people";
                    //image = "xxx";
                };
				class GRN
                {
                    label = "GRN";
                    description = "For the other people";
                    //image = "xxx";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_DC15C
        {
            model = "332nd_Weapons_DC15C_Extended";
            DC15C = "RFL";
        };
        class 332nd_DC15C_GL
        {
            model = "332nd_Weapons_DC15C_Extended";
            DC15C = "GRN";
        };
	};
};