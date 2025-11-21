class CfgPatches {
	class 332nd_DC15A {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15A",
			"332nd_DC15A_GL",
			"332nd_DC15A_LE",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class GunParticles;
class cfgWeapons 
{
	class 3AS_DC15A_F;
	class UGL_F;
//Primary
	class 332nd_DC15A: 3AS_DC15A_F
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15A (RFL)";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ui_ca.paa";
		recoil="3AS_recoil_DC15C";
		reloadAction="GestureReload_JLTS_DC15A";
		baseWeapon = "332nd_DC15A";
		scope = 2
		magazines[] =
		{
			"332nd_DC15A_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
			"FullAuto",
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
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
			reloadTime=0.18;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.00058;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
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
			//reloadTime=0.12;
			reloadTime = 0.17142;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Zoom_2_Raised_Forward_2",
					"332nd_Mode_B_Zoom_2_Raised_Forward_2",
					"332nd_Mode_C_Zoom_2_Raised_Forward_2",
					"332nd_Mode_D_Zoom_2_Raised_Forward_2",
					"332nd_Mode_Seelig_Point_Zoom_2_Raised_Forward_2",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class 332nd_DC15A_GL: 332nd_DC15A
	{
		author="Ithias";
		displayName="[332nd] DC-15A GL (GRN)";
		baseWeapon = "332nd_DC15A_GL";
		handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15aGL_Handanim.rtm"};
		model = "\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_GL.p3d";
		muzzles[] = {"this","GL_3GL_F"};
	};
	class 332nd_DC15A_LE: 332nd_DC15A
	{
		displayName="[332nd] DC-15LE (AR)";
		baseWeapon = "332nd_DC15A_LE";
		recoil="Old_IDA_recoil_Z6";
		magazines[] =
		{
			"332nd_DC15LE_Mag"
		};
		modes[]=
		{
			//"Single",
			"FullAuto",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_3AS_DC15LE",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"3AS_muzzle_DC15LE_F",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "3AS_muzzle_DC15LE_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "332nd_3AS_DC15LE";
				slot = "CowsSlot";
			};
		};
	};
};