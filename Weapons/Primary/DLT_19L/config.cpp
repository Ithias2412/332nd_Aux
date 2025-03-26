/*
class CfgPatches {
	class 332nd_DLT19L {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DLT19L",
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
class cfgWeapons 
{
    class ItemInfo;
	class arifle_MX_Base_F;
	class FullAuto;
//Primary
	class 332nd_DLT19L: arifle_MX_Base_F
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Arrow";
		author="Ithias";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="332nd_DLT19L";
		deployedPivot="bipod";
		hasBipod=1;
		displayName="[332nd] DLT-19L (AR)";
		descriptionShort="A large and fast automatic rifle.";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19\DLT19_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19\Model\IDA_DLT19.p3d";
		autoReload = "0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\DLT19.rtm"
		};
		ace_clearJamAction="";
		reloadAction = "GestureReload_IDAReload1";
		reloadMagazineSound[] = 
		{
			"\Indecisive_Armoury_Sounds\blaster_reload_1.ogg",
			1.5,
			1,
			100
		};
		recoil="IDA_recoil_Z6";
		magazines[]=
		{
			"332nd_DLT19L_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
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
		muzzles[]=
		{
			"this"
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
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
					1,
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
					"\Indecisive_Armoury_Sounds\Imperial\DLT19\DLT19.ogg",
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
			reloadTime=0.06;
			//dispersion = 0.0049999999;
			dispersion = 0.0045;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Zoom_2_Raised_Forward",
					"332nd_Mode_B_Zoom_2_Raised_Forward",
					"332nd_Mode_C_Zoom_2_Raised_Forward",
					"332nd_Mode_D_Zoom_2_Raised_Forward",
					"332nd_Mode_Seelig_Point_Raised_Forward",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"DLT19L_Muzzle",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]={};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle 
			{
				item = "DLT19L_Muzzle";
				slot = "MuzzleSlot";
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
	class muzzle_snds_H;
	class DLT19L_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Heavy Flash Hider";
		model = "";
		picture = "";
	};
};