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
	class JLTS_DP23;
	class DBA_DP23_Shotgun;

//Primary

	class 332nd_DP23: JLTS_DP23
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "CursorAim";
		author="Ithias";
		displayName="[332nd] DP-23 (RFL)";
		reloadAction = "GestureReload_JLTS_DC15S";
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
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
		class EventHandlers
		{
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			delay = 0;
			handAction = "WBK_HaloShotgun_Pump";
			hasOptic = 1;
			onEmpty = 0;
			sound = "optre_shotgun_pump";
			soundEmpty = "";
			soundLocation = "LeftHandMiddle1";
			soundLocationEmpty = "";
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
			reloadTime=1.1;
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
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};
};

/*
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
	class 3AS_DP23_F;
	class UGL_F;

//Primary

	class 332nd_DP23: 3AS_DP23_F
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "CursorAim";
		author="Ithias";
		displayName="[332nd] DP-23 (RFL)";
		reloadAction = "GestureReload_JLTS_DC15S";
		baseWeapon = "332nd_DP23";
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
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
		class EventHandlers
		{
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			delay = 0;
			handAction = "WBK_HaloShotgun_Pump";
			hasOptic = 1;
			onEmpty = 0;
			sound = "optre_shotgun_pump";
			soundEmpty = "";
			soundLocation = "LeftHandMiddle1";
			soundLocationEmpty = "";
		};
		class GL_3GL_F: UGL_F
		{
			cameraDir = "OP_look";
			descriptionShort = "Grenade Launcher<br />Caliber: 40 mm";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			useExternalOptic = 0;
			useModelOptics = 0;
			magazines[]=
			{
				
			};
			magazineWell[] = 
			{
				"332nd_UGL_MagWell"	
			};
			displayName="Grenade Launcher";
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
			reloadTime=1.1;
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
					"332nd_Mode_A_Zoom_2_raised",
					"332nd_Mode_B_Zoom_2_raised",
					"332nd_Mode_C_Zoom_2_raised",
					"332nd_Mode_D_Zoom_2_raised",
					"332nd_Mode_Seelig_Point_Zoom_2_raised",
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
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};

	class 332nd_DP23_GL: 332nd_DP23
	{
		author="Ithias";
		displayName="[332nd] DP-23 GL (GRN)";
		baseWeapon = "332nd_DP23_GL";
		handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Republic\DP23\Data\Anim\New_DP23GL_handanim.rtm"};
		model = "\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_GL.p3d";
		muzzles[] = {"this", "GL_3GL_F"};
	};
};