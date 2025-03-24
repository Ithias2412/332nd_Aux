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
	class UGL_F;

//Primary
	class 332nd_DC15S: IDA_DC15S
	{
		author="Ithias";
		displayName="[332nd] DC-15S (RFL)";
		recoil = "3AS_recoil_DC15S";
		//reloadAction = "GestureReload_JLTS_DC15S";
		reloadAction = "GestureReload_IDAReload1";
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\DC15S_ui.paa";
		baseWeapon = "332nd_DC15S_WIP";
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
			reloadTime=0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion=0.00174;
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
			reloadTime=0.09;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00174;
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
		baseWeapon = "332nd_DC15S_Shield";
		displayName = "[332nd] DC-15S + Shield (ENG)";
		handAnim[] = {"OFP2_ManSkeleton","Indecisive_Armoury_Anims\Republic\Shield_Rep.rtm"};
		model = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\Model\IDA_DC15S_Shield.p3d";
		magazines[] =
		{
			"332nd_DC15S_Low_Mag",
		};
	};
	class 332nd_DC15S_GL: 332nd_DC15S
	{
		baseWeapon="332nd_DC15S_GL";
		recoil = "3AS_recoil_DC15S";
		displayName="[332nd] DC-15S GL (GRN)";
		scope=2;
		picture="Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\DC15S_UGL_ui.paa";
		model="Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15S\Model\IDA_DC15S_UGL.p3d";
		muzzles[]=
		{
			"This",
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
				"332nd_HE_LGrenade_Mag",
				"332nd_Smoke_LauncherGrenade",
				"332nd_SmokeRed_LauncherGrenade",
				"332nd_SmokeGreen_LauncherGrenade",
				"332nd_SmokeBlue_LauncherGrenade",
				"332nd_SmokePurple_LauncherGrenade"
			};
			recoil="IDA_recoil_DC23";
			reloadAction="GestureReloadMXUGL";
			magazineWell[]={};
		};
		fireLightDiffuse[]={0.1,0.25,1};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadAction="GestureReload_IDAReload1";
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
};