class CfgPatches {
	class 332nd_Valken {
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

class cfgWeapons 
{
	class ls_weapon_valken38x;

//Primary
	class 332nd_Valken: ls_weapon_valken38x
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] Valken (MRK)";
		recoil = "3AS_recoil_DC15A";
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		picture = "\MRC\JLTS\weapons\DW32S\data\ui\DW32S_ui_ca.paa"; 
		scope = 2;
		weaponInfoType="RscOptics_nightstalker";
		baseWeapon = "332nd_Valken";
		magazines[] =
		{
			"332nd_Valken_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.4; // was 0.2
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Sniper_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Sniper_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_LS_VK38X",
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
				compatibleItems[]={};
			};
		};
	};
};