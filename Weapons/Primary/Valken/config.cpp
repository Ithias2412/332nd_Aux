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

class cfgWeapons 
{
    class ItemInfo;
	class 3AS_Valken38X_F;

//Primary
	class 332nd_Valken: 3AS_Valken38X_F
	{
		author="Ithias";
		displayName="[332nd] Valken (MRK)";
		recoil="3AS_recoil_DC15A";
		reloadAction = "3AS_GestureReload_DC17M";
		picture = "\MRC\JLTS\weapons\DW32S\data\ui\DW32S_ui_ca.paa"; 
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
			reloadTime=0.2;
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
	};

};