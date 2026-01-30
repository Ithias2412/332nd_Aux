class CfgPatches {
	class 332nd_CIS_SBB3 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_SBB3",
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

class cfgWeapons 
{
	class JLTS_SBB3;

//Primary
	class 332nd_CIS_SBB3: JLTS_SBB3
	{
		scope = 2;
		baseWeapon = "332nd_CIS_SBB3";
		displayName = "[CIS] SB-B3";
		magazines[] = {"332nd_CIS_SBB3_Mag"};
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00073;
			maxRange = 60;
			maxRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.7;
			minRange = 1;
			minRangeProbab = 0.5;
			reloadTime = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
		};
	};
};

class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_CIS_SBB3_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_CIS_SBB3_Ammo";
		count = 20;
		displayName = "SB-B3 20 Round Energy Cell";
		mass = 15;
		scope = 2;
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_CIS_SBB3_Ammo_Sub: 332nd_Base_Ammo_IDA
	{
		hit = 7;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};

	class 332nd_CIS_SBB3_Ammo: 332nd_Base_Ammo_IDA
	{
		submunitionAmmo = "332nd_CIS_SBB3_Ammo_Sub";
		submunitionConeAngle = 0.50;
		submunitionConeType[] = {"random",8};
		triggerTime = 1e-09;
		effectfly = "IDA_BlasterBoltGlow_Red_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
	};
};