class CfgPatches {
	class 332nd_DC17S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC17S",
			"332nd_DC17S_Dual",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class ItemInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class Single;
class Left;
class Right;

class cfgWeapons 
{
	class 3AS_DC17S_F;
	class 3AS_DC17S_Dual_F;
	class JLTS_stun_muzzle;
	class SWLW_DC17;
	class ls_weapon_dualDC17_secondary;
	class SWLW_DC17_ARC;
	
	class 332nd_DC17S: 3AS_DC17S_F
	{
		author="Ithias";
		displayName="[332nd] DC-17S";
		baseWeapon = "332nd_DC17S";
		magazines[] =
		{
			"332nd_DC17S_Mag",
		};
		magazineWell[]={};
		muzzles[] = { "this", "Stun" };
		class Stun: JLTS_stun_muzzle
		{
			magazines[] = 
			{
				"332nd_DC17S_Stun_Mag",
			};
		};
	};
	class 332nd_DC17S_Dual : 3AS_DC17S_Dual_F
	{
		displayName = "[332nd] Dual DC-17S";
		baseWeapon = "332nd_DC17S_Dual";
		magazines[] =
		{
			"332nd_DC17S_Mag_Dual",
		};
		magazineWell[]={};
		muzzles[] = { "this", "Stun" };
		class Stun: JLTS_stun_muzzle
		{
			magazines[] = 
			{
				"332nd_DC17S_Stun_Mag",
			};
		};
	};
};
/*
		class Right: SWLW_DC17_ARC
		{
			displayName="Right Hand";
			magazines[]=
			{
				"332nd_DC17S_Mag"
			};
			reloadAction="ls_dualPistol_reload";
			reloadMagazineSound[]=
			{
				"\swlb_core\data\sounds\weapons\_reload\dual_reload.ogg",
				3.5481339,
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
						"SWLW_clones\pistols\dc17\sounds\DC17_1",
						1,
						1,
						1800
					};
					begin2[]=
					{
						"SWLW_clones\pistols\dc17\sounds\DC17_1",
						1,
						1,
						1800
					};
					begin3[]=
					{
						"SWLW_clones\pistols\dc17\sounds\DC17_1",
						1,
						1,
						1800
					};
					begin4[]=
					{
						"SWLW_clones\pistols\dc17\sounds\DC17_1",
						1,
						1,
						1800
					};
					soundBegin[]=
					{
						"begin1",
						0.25,
						"begin2",
						0.25,
						"begin3",
						0.25,
						"begin4",
						0.25
					};
					closure1[]={};
					closure2[]={};
					soundClosure[]={};
				};
				recoil="recoil_pistol_heavy";
				recoilProne="recoil_prone_pistol_heavy";
				dispersion = 0.00087;
				reloadTime = 0.1;
				minRange=5;
				minRangeProbab=0.30000001;
				midRange=25;
				midRangeProbab=0.60000002;
				maxRange=50;
				maxRangeProbab=0.1;
				aiRateOfFire=2;
				aiRateOfFireDistance=25;
			};
		};
		class Left: Right
		{
			displayName="Left Hand";
			muzzlePos="usti hlavne left";
			muzzleEnd="konec hlavne left";
		};
