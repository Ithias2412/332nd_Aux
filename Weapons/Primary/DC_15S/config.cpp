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
class CfgRecoils
{
	class recoil_default;
	class Old_IDA_recoil_DC23: recoil_default
	{
		muzzleOuter[]={0,6,0.80000001,0.40000001};
		kickBack[]={0.039999999,0.059999999};
		temporary=0.0080000004;
	};

};
class cfgWeapons 
{
	class 3AS_DC15S_F;
	class IDA_DC15S;
	class UGL_F;

//Primary
	class 332nd_DC15S: IDA_DC15S
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15S (RFL)";
		recoil = "3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		baseWeapon = "332nd_DC15S";
		weaponInfoType="";
		IDA_StunWeapon = "";
		IDA_AltWeapon="";
		scope=2;
		magazines[] =
		{
			"332nd_DC15S_High_Mag",
			"332nd_DC15S_Low_Mag",
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
			reloadTime=0.0857;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion=0.00262;
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
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
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
			reloadTime=0.0857;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00262;
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
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
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
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};
	class 332nd_DC15S_Shield: 332nd_DC15S
	{
		cursor = "";
		cursoraim = "CursorAim";
		baseWeapon = "332nd_DC15S_Shield";
		displayName = "[332nd] DC-15S + Shield (ENG)";
		handAnim[] = {"OFP2_ManSkeleton","Indecisive_Armoury_Anims\Republic\Shield_Rep.rtm"};
		model = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\Model\IDA_DC15S_Shield.p3d";
		reloadAction = "GestureReload_IDA_Reload_Blaster";
		magazines[] =
		{
			"332nd_DC15S_High_Mag",
			"332nd_DC15S_Low_Mag",
		};
		scope=2;
	};
	class 332nd_DC15S_GL_Old: 332nd_DC15S
	{
		baseWeapon="332nd_DC15S_GL";
		recoil = "3AS_recoil_DC15S";
		displayName="[332nd] DC-15S GL (GRN)";
		scope=1;
		model="Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\Model\IDA_DC15S_UGL.p3d";
		reloadAction = "GestureReload_JLTS_DC15S";
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class EGLM: UGL_F
		{
			displayName="UGL";
			descriptionShort="IDA UGL";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			magazines[]=
			{
				
			};
			magazineWell[] = 
			{
				"332nd_UGL_MagWell"
			};
			recoil="Old_IDA_recoil_DC23";
			reloadAction = "GestureReloadMXUGL";
		};
		fireLightDiffuse[]={0.1,0.25,1};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: CowsSlot
			{
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
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};

	class 3AS_DC15S_F;
	class 332nd_DC15S_3AS: 3AS_DC15S_F
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15S (RFL)";
		recoil = "3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		baseWeapon = "332nd_DC15S_New";
		weaponInfoType="";
		//IDA_StunWeapon = "";
		//IDA_AltWeapon="";
		scope=1;
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15S_Handanim.rtm"
		};
		magazines[] =
		{
			"332nd_DC15S_High_Mag",
			"332nd_DC15S_Low_Mag",
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
			reloadTime=0.0857;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion=0.00262;
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
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
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
			reloadTime=0.0857;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00262;
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
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
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

	class 332nd_DC15S_GL: 332nd_DC15S_3AS
	{
		baseWeapon = "332nd_DC15S_GL_New";
		displayName = "[3AS] DC-15S GL";
		handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15SGL_Handanim.rtm"};
		model = "\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_GL.p3d";
		muzzles[] = {"this","GL_1GL_F"};
		scope=2;
		class GL_1GL_F: UGL_F
		{
			cameraDir = "OP_look";
			descriptionShort = "Grenade Launcher<br />Caliber: 40 mm";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			displayName = "GL";
			magazines[]=
			{
				
			};
			magazineWell[] = 
			{
				"332nd_UGL_MagWell"
			};
			reloadAction = "GestureReloadMXUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			useExternalOptic = 0;
			useModelOptics = 0;
		};
	};
};