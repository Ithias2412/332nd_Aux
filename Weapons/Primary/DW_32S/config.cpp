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
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="MrClock";
		scope=2;
		displayName="[332nd] DW-32S (MRK)";
		descriptionShort="$STR_JLTS_descs_BlasterRifleScoped";
		picture="\MRC\JLTS\weapons\DW32S\data\ui\DW32S_ui_ca.paa";
		model="\MRC\JLTS\weapons\DW32S\DW32S.p3d";
		reloadAction = "3AS_GestureReload_DC17M";
		recoil="3AS_recoil_DC15A";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DW32S\data\DW32S_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DW32S\anims\DW32S_handanim.rtm"
		};
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
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this",
			//"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
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
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
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
			dispersion=0.00035;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
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
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
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
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
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
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
		class OpticsModes
		{
			class NCTALKEP
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={};
				opticsZoomMin=0.03125;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				//discreteFov[]={0.0625,0.02};
				//discreteInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68;
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
};