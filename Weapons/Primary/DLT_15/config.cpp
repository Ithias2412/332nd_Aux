class CfgPatches {
	class 332nd_DLT15 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DLT15",
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
	class IDA_DLT19;
	class FullAuto;
//Primary
	class 332nd_DLT15: IDA_DLT19
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Arrow";
		scope=2;
		baseWeapon="332nd_DLT15";
		displayName="[332nd] DLT-15 (AR)";
		descriptionShort="A large and fast automatic rifle.";
		//reloadAction="GestureReloadM200"; // !!!!!!
		reloadAction="GestureReload_JLTS_DC15S";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\blaster_reload_1.ogg",
			1.5,
			1,
			100
		};
		recoil="recoil_mk200";
		magazines[]=
		{
			"332nd_DLT15_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"FullAuto",
			//"SlowAuto"
		};
		muzzles[]=
		{
			"this"
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
				begin1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.025,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.95,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.05,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.9,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
			};
			reloadTime=0.06;
			dispersion = 0.0045;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
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
					"332nd_Mode_A_Raised_2",
					"332nd_Mode_B_Raised_2",
					"332nd_Mode_C_Raised_2",
					"332nd_Mode_D_Raised_2",
					"332nd_Mode_Seelig_Point_Raised_2",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"DLT15_Muzzle",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					//"3AS_Bipod_VK38X_f"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle 
			{
				item = "DLT15_Muzzle";
				slot = "MuzzleSlot";
			};
		};
	};
	class muzzle_snds_H;
	class DLT15_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "Heavy Flash Hider";
		model = "";
		picture = "";
	};
};