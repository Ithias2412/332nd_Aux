/*
class CfgPatches 
{
	class 332nd_DC19 
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC19",
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
	class IDA_DC15S;

	class 332nd_DC19: IDA_DC15S
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-19 (ARF)";
		recoil = "3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		baseWeapon = "332nd_DC19";
		weaponInfoType = "";
		IDA_StunWeapon = "";
		IDA_AltWeapon = "";
		scope=2;
		magazines[] =
		{
			//"332nd_DC15S_High_Mag",
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
				SoundSetShot[] = 
				{
					"332nd_DC15SA_Suppressed_Shot_SoundSet",
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
				SoundSetShot[] = 
				{
					"332nd_DC15SA_Suppressed_Shot_SoundSet",
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
					"DC15SA_Muzzle",
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