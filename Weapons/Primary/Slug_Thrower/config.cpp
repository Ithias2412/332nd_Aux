class CfgPatches 
{
	class 332nd_Slug_Thrower 
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Slug_Thrower",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class Mode_SemiAuto;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons 
{
    class ItemInfo;
	class WeaponSlotsInfo;
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class AnimationSources;
	};
	//Given to by vipor
	class IDA_DL63: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=1;
		ace_overheating_barrelMass=1;
		ACE_barrelLength=457.20001;
		ACE_barrelTwist=228.60001;
		initSpeed=-1;
		IDA_StunWeapon="IDA_DL63_Stun";
		author="Indecisive Armoury Team";
		scope = 1;
		inertia=0;
		canShootInWater=1;
		displayName="DL-63 Blaster rifle";
		descriptionShort="Long range, high power.";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\DL63\DL63_ui.paa";
		model="\Indecisive_Armoury_Weapons_IMPERIAL\Data\DL63\Model\IDA_DL63.p3d";
		baseWeapon="IDA_DL63";
		deployedPivot="bipod";
		hasBipod=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Republic\DL63.rtm"
		};
		modelOptics="\Indecisive_Armoury_Weapons_IMPERIAL\Data\LowPower_Scope\IDA_LowPower_Scope_Red.p3d";
		class OpticsModes
		{
			class optic
			{
				cameraDir="";
				distanceZoomMax=200;
				distanceZoomMin=200;
				discreteDistance[]={100,200,300,400,500};
				discretefov[]={0.25};
				discreteDistanceInitIndex=0;
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				modelOptics[]=
				{
					"\Indecisive_Armoury_Weapons_IMPERIAL\Data\LowPower_Scope\IDA_LowPower_Scope_Red.p3d"
				};
				opticsDisablePeripherialVision=1;
				opticsDisplayName="WFOV";
				opticsFlare=1;
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomInit=0.25;
				opticsZoomMax=0.25;
				opticsZoomMin=0.25;
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
			};
			class Iron
			{
				distanceZoomMax=200;
				distanceZoomMin=200;
				memoryPointCamera="eye";
				opticsDisablePeripherialVision=0;
				opticsFlare=0;
				opticsID=2;
				opticsPPEffects="[""Default""]";
				opticsZoomInit=0.75;
				opticsZoomMax=1.25;
				opticsZoomMin=0.25;
				useModelOptics=0;
				visionMode="[]";
			};
		};
		magazines[]=
		{
			"IDA_blaster_cell_High_Red"
		};
		magazineWell[]={};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDAReload1";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\blaster_reload_1.ogg",
			1.5,
			1,
			100
		};
		recoil="IDA_recoil_dc15a";
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"Auto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
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
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
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
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
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
			reloadTime=0.1;
			dispersion=0.00145;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class Auto: Mode_FullAuto
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
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
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
					"\Indecisive_Armoury_Sounds\Republic\DC-15a\DC15a.wss",
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
			reloadTime=0.1;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]={};
			};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};

	class 332nd_Slug_Thrower: IDA_DL63
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		author = "Vipor + Ithias";
		IDA_StunWeapon = "";
		displayName="[332nd] MK I Slug Thrower (MRK)";
		descriptionShort="Suppressed Rifle.";
		modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
		reloadAction = "GestureReload_JLTS_DC15S";
		baseWeapon = "332nd_Slug_Thrower";
		scope=2;
		weaponInfoType="RscOptics_nightstalker";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0099999998;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=2;
				distanceZoomMin=300;
				distanceZoomMax=2400;
				discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
			class Iron
			{
				distanceZoomMax=200;
				distanceZoomMin=200;
				memoryPointCamera="eye";
				opticsDisablePeripherialVision=0;
				opticsFlare=0;
				opticsID=2;
				opticsPPEffects="[""Default""]";
				opticsZoomInit=0.75;
				opticsZoomMax=1.25;
				opticsZoomMin=0.25;
				useModelOptics=0;
				visionMode="[]";
			};
		};
		magazines[]=
		{
			"332nd_Slug_Thrower_Mag",
		};
		reloadMagazineSound[] = 
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			1,
			1,
			10,
		};
		recoil="3AS_recoil_DC15A";
		modes[]=
		{
			"Single",
		};
		drySound[] = 
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",
			0.562341,
			1,
			10,
		};
		class Single: Mode_SemiAuto
		{
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
				soundSetShot[] = 
				{
					"HunterShotgun_01_Shot_SoundSet",
					"HunterShotgun_01_Tail_SoundSet",
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = 
				{
					"DMR02_silencerShot_SoundSet",
					"DMR02_silencerTail_SoundSet",
					"DMR02_silencerInteriorTail_SoundSet",
				};
			};
			reloadTime = 0.1;
			dispersion = 0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
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
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]=
				{
					"Slug_Thrower_Muzzle",
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle 
			{
				item = "Slug_Thrower_Muzzle";
				slot = "MuzzleSlot";
			};
		};
	};
	class muzzle_snds_H_MG;
	class muzzle_snds_H: muzzle_snds_H_MG
	{
		class ItemInfo;
	};
	class Slug_Thrower_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Sound Suppressing Barrel Lining";
		model = "";
		picture = "";
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				airFriction = 1;
				audibleFire = 0;
				audibleFireTime = 0;
				cost = 1;
				hit = 1;
				typicalSpeed = 1;
				visibleFire = 0;
				visibleFireTime = 0;
			};
			class MuzzleCoef
			{
				artilleryDispersionCoef = "1.0f";
				dispersionCoef = "1.0f";
				fireLightCoef = "0";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
			};
		};
	};
};