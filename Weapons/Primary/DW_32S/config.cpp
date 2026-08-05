class CfgPatches {
	class 332nd_DW_32S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DW_32S",
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
class GunParticles;

class cfgWeapons 
{
	class JLTS_DW32S;
	class JLTS_stun_muzzle;

//Primary
	class 332nd_DW_32S: JLTS_DW32S
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="Ithias";
		scope=2;
		displayName="[332nd] DW-32S (ENG) (WIP)";
		reloadAction = "3AS_GestureReload_DC17M";
		recoil="3AS_recoil_DC15A";
		magazines[]=
		{
			"332nd_DW_32S_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		muzzles[]=
		{
			"this",
			"332nd_Arc_Muzzle",
			//"Stun"
		};
		class 332nd_Arc_Muzzle: JLTS_DW32S
		{
			cursor = "332nd_Cursor_Block";
			cursoraim = "332nd_Cursor_Dot";
			displayName="[332nd] Arc Rounds";
			reloadAction = "3AS_GestureReload_DC17M";
			recoil="3AS_recoil_DC15A";
			magazines[]=
			{
				"332nd_DW_32S_Arc_Mag"
			};
			magazineWell[]={};
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
					/*
					weaponSoundEffect="";
					closure1[]={};
					closure2[]={};
					soundClosure[]={};
					*/
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = 
					{
						"JMSLLTE_ArcCast_Shot_SoundSet",
						//"SDAR_Tail_SoundSet",
						//"SDAR_InteriorTail_SoundSet"
					};
					/*
					weaponSoundEffect="";
					begin1[]=
					{
						"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
						1,
						1.1,
						1800
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
					*/
				};
				reloadTime = 0.17142;
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
			weaponInfoType="RscOptics_nightstalker";
			modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
			class OpticsModes
			{
				class NCTALKEP
				{
					opticsPPEffects[]={};
					opticsID=1
					discreteDistanceInitIndex=1;
					discreteInitIndex = 0;
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
					opticsDisablePeripherialVision=1;
					opticsFlare=1;
					opticsZoomInit = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomMin = 0.125;
					useModelOptics=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
					};
				};
			};
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
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.17142;
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
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
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
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
		class OpticsModes
		{
			class NCTALKEP
			{
				opticsPPEffects[]={};
				opticsID=1
				discreteDistanceInitIndex=1;
				discreteInitIndex = 0;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "opticView";
				modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
				opticsDisablePeripherialVision=1;
				opticsFlare=1;
				opticsZoomInit = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.125;
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
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
};