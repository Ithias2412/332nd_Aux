class CfgPatches {
	class 332nd_C_24 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_C_24",
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
	class IDA_E11D;

//Primary
	class 332nd_C_24: IDA_E11D
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="IDA_E11D_Stun";
		author="Thatcher";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="332nd_C_24";
		displayName="[332nd] C-24 Flame Carbine (ENG)";
		descriptionShort="TBD.";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11D\E11D_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11D\Model\IDA_E11D.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\E11D.rtm"
		};
		ace_clearJamAction="";
		reloadAction="3AS_GestureReloadE11";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\blaster_reload_5.ogg",
			5,
			1,
			10
		};
		recoil="IDA_recoil_E11D";
		magazines[]=
		{
			"332nd_C_24_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this",
			"Flamer",
		};
		class Flamer: IDA_E11D //Flame weapon
		{
			displayName="Flame Launcher";
			reloadAction = "GestureReloadMXUGL";
			magazines[]=
			{
				"332nd_C_24_Flamer_Mag",
			};
			modes[]=
			{
				"Single_Flamer"
			};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.562341,1,10};
			reloadSound[] = {"",1,1};
			class Single_Flamer: Mode_FullAuto
			{
				reloadTime = 0.096;
				dispersion = 0.00073;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {};
					weaponSoundEffect = "";
				};
				class StandardSound
				{
					begin1[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					begin2[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					begin3[] = {"3AS\3AS_Weapons\X42\SFX\flamer.ogg",1,1,1800};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
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
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					0.995,
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
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
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
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
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
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
					1.25,
					0.995,
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
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D\E11D.ogg",
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
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\Indecisive_Armoury_Weapons_Imperial\Data\LowPower_Scope\IDA_LowPower_Scope_Red.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Zoom_2_Raised_2",
					"332nd_Mode_B_Zoom_2_Raised_2",
					"332nd_Mode_C_Zoom_2_Raised_2",
					"332nd_Mode_D_Zoom_2_Raised_2",
					"332nd_Mode_Seelig_Point_Zoom_2_Raised_2",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"C_24_Muzzle",
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle 
			{
				item = "C_24_Muzzle";
				slot = "MuzzleSlot";
			};
		};
	};
	class muzzle_snds_H;
	class C_24_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Heat Sink Barrel Insert";
		model = "";
		picture = "";
	};
};