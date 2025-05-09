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
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-17S";
		baseWeapon = "332nd_DC17S";
		magazines[] =
		{
			"332nd_DC17S_Mag",
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			dispersion = 0.00174;
			displayName = "Semi";
			reloadTime = 0.1;
			maxRange = 50;
			maxRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			minRange = 5;
			minRangeProbab = 0.3;
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC17_Shot_SoundSet"};
			};
		};
		class FullAuto: Single
		{
			autoFire = 1;
			displayName = "Full";
			textureType = "fullAuto";
			reloadTime = 0.17142;
		};
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
		displayName = "[332nd] DC-17S Dual";
		baseWeapon = "332nd_DC17S_Dual";
		ls_isWeaponType = 1;
		muzzles[] = {"Right","Left"};
		class Right: 3AS_DC17S_Dual_F
		{
			displayName="Right Hand";
			magazines[]=
			{
				"332nd_DC17S_Mag_Dual",
				"332nd_DC17S_Stun_Mag"
			};
			magazineWell[]={};
			cursor = "332nd_Cursor_Circle";
			cursoraim = "332nd_Cursor_Dot";
			class Single: Mode_SemiAuto
			{
				aiRateOfFire = 2;
				aiRateOfFireDistance = 25;
				dispersion = 0.00348;
				displayName = "Semi";
				reloadTime = 0.1;
				maxRange = 50;
				maxRangeProbab = 0.1;
				midRange = 25;
				midRangeProbab = 0.6;
				minRange = 5;
				minRangeProbab = 0.3;
				recoil = "recoil_pistol_heavy";
				recoilProne = "recoil_prone_pistol_heavy";
				reloadTime = 0.1;
				sounds[] = {"StandardSound","SilencedSound"};
				class BaseSoundModeType
				{
					
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"3AS_DC17_Shot_SoundSet"};
				};
			};
		};
		class Left: Right
		{
			displayName="Left Hand";
		};
		class Stun: JLTS_stun_muzzle
		{
			magazines[] = 
			{
				"332nd_DC17S_Stun_Mag",
			};
		};
	};
};