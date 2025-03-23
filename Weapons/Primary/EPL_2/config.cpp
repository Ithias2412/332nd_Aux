class CfgPatches {
	class 332nd_EPL_2 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_EPL_2",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class WeaponSlotsInfo;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class GunParticles;

class cfgWeapons 
{
    class ItemInfo;
	class JLTS_EPL2;

//Primary
	class 332nd_EPL_2: JLTS_EPL2
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="MrClock";
		scope=2;
		displayName="[332nd] EPL-2 (GRN)";
		descriptionShort="$STR_JLTS_descs_EMPL";
		picture="\MRC\JLTS\weapons\EPL2\data\ui\EPL2_ui_ca.paa";
		model="\MRC\JLTS\weapons\EPL2\EPL2.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\EPL2\data\EPL2_co.paa",
			"\MRC\JLTS\weapons\EPL2\data\EPL2_mag_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\EPL2\anims\EPL2_handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"UGL"
		};
		class UGL: JLTS_EPL2
		{
			displayName="Integrated GL";
			magazines[]=
			{
				"332nd_HE_EPL_Mag",
			};
			modes[]=
			{
				"UGL_Single"
			};
			class UGL_Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
					soundClosure[] = {"closure1",1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
					begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
					soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
				};
				reloadTime=1;
				recoil="recoil_single_mx";
				recoilProne="recoil_single_prone_mx";
				dispersion=0.00086999999;
				minRange=2;
				minRangeProbab=0.5;
				midRange=200;
				midRangeProbab=0.69999999;
				maxRange=400;
				maxRangeProbab=0.30000001;
			};
		};
		magazines[]=
		{
			"332nd_EPL_2_Mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		memoryPointCamera="eye";
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
				begin1[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\INDEP\FA11\FA11.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
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
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
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
			reloadTime=0.096000001;
			dispersion=0.00086999999;
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
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
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
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
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
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
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
		class GunParticles: GunParticles
		{
			delete SecondEffect;
		};
	};
};