class CfgPatches {
	class 332nd_Firepuncher {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Valken",
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
    class ItemInfo;
	class arifle_MX_Base_F;

//Primary
	class 332nd_Firepuncher: arifle_MX_Base_F
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=1;
		ace_overheating_barrelMass=1;
		ACE_barrelLength=457.20001;
		ACE_barrelTwist=228.60001;
		initSpeed=-1;
		IDA_StunWeapon="IDA_773Firepuncher_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		displayName="[332nd] Firepuncher (MRK)";
		descriptionShort="Long range, high power.";
		picture="Indecisive_Armoury_Weapons_REPUBLIC\Data\773Firepuncher\773_ui.paa";
		model="\Indecisive_Armoury_Weapons_REPUBLIC\Data\773Firepuncher\Model\IDA_773Firepuncher.p3d";
		baseWeapon="332nd_Firepuncher";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21G.rtm"
		};
		magazines[]=
		{
			"332nd_Firepuncher_Mag"
		};
		magazineWell[]={};
		ace_clearJamAction="";
		reloadAction="GestureReloadTrgUGL";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\blaster_reload_6.ogg",
			1.5,
			1,
			100
		};
		recoil="3AS_recoil_DC15A";
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={0.1,0.25,1};
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
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
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
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
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
			reloadTime=0.2;
			dispersion=0.00035;
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
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					"",
					1.5,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
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
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
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
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1,
					1000
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1.015,
					1000
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					0.98500001,
					1000
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					1.01,
					1000
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
					1.5,
					0.995,
					1000
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
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher\773Firepuncher.ogg",
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
			reloadTime=0.2;
			dispersion=0.00035;
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
				compatibleItems[]=
				{
					"332nd_IDA_773_scope"
				};
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
					"3AS_Bipod_VK38X_f"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="332nd_IDA_773_scope";
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
};