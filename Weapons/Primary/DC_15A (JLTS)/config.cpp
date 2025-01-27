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
    class ItemInfo;
	class 3AS_DC15A_F;
	class 3AS_DC15A_GL;
	class 3AS_GL_F;
	class UGL_F;
	class JLTS_stun_muzzle;
	class arifle_MX_Base_F;	

//Primary
	class 332nd_DC15A: arifle_MX_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_DC15A_fried";
		JLTS_repairTime=33;
		author="Ithias";
		scope=2;
		displayName="[332nd] DC-15A (RFL)";
		descriptionShort="$STR_JLTS_descs_BlasterRifle";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A.p3d";
		recoil="3AS_recoil_DC15C";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_plastic_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15A\anims\DC15A_handanim.rtm"
		};
		reloadAction="GestureReload_JLTS_DC15A";
		magazines[]=
		{
			"332nd_DC15A_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Burst",
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
			reloadTime=0.096000001;
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
		class Burst: Single
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
			reloadTime=0.096000001;
			burst = 3;
			textureType = "burst";
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0.00073000003;
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
			reloadTime=0.096000001;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0.00073000003;
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
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
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
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
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
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
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
	class 332nd_DC15A_GL: 332nd_DC15A
	{
		JLTS_friedItem="JLTS_DC15A_UGL_fried";
		JLTS_repairTime=35;
		displayName="[332nd] DC-15A GL (GRN)";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ugl_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_plastic_co.paa",
			"\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName="$STR_JLTS_names_GL";
			descriptionShort="$STR_JLTS_names_UGL";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
		};
		irLaserPos="";
		irLaserEnd="";
		irDistance=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
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
	class 332nd_DC15A_Wood: 332nd_DC15A
	{
		displayName="[332nd] DC-15A Wood (RFL)";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"
		};
	};
	class 332nd_DC15A_GL_Wood: 332nd_DC15A_GL
	{
		displayName="[332nd] DC-15A GL Wood (GRN)";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"
		};
	};
	
	
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Weapons_DC15A_Extended
        {
            label = "DC-15A";
            author = "Ithias";
			options[] = { "Stock", };
            class Stock
            {
                label = "Stock";
				values[] = { "Default", "Wood",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Default
                {
                    label = "Default";
                    description = "For normal people";
                    //image = "xxx";
                };
				class Wood
                {
                    label = "Wood";
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
        class 332nd_DC15A
        {
            model = "332nd_Weapons_DC15A_Extended";
            Stock = "Default";
        };
        class 332nd_DC15A_Wood
        {
            model = "332nd_Weapons_DC15A_Extended";
            Stock = "Wood";
        };
	};
};