class CfgPatches {
	class 332nd_DC15SA {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15SA",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class Mode_SemiAuto;

class cfgWeapons 
{
	class 3AS_pistol_DC15SA_F;
	class JLTS_stun_muzzle;

//Primary
	class 332nd_DC15SA: 3AS_pistol_DC15SA_F
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-15SA";
		magazines[] =
		{
			"332nd_DC15SA_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		recoil = "3as_recoil_med";
		//recoil = "3as_recoil_heavy";
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00174;
			displayName = "Semi";
			reloadTime = 0.25;
			maxRange = 500;
			maxRangeProbab = 0.04;
			midRange = 150;
			midRangeProbab = 0.58;
			minRange = 1;
			minRangeProbab = 0.3;
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15SA_Shot_SoundSet"};
				//soundSetShot[] = {"3AS_Arkanian_SoundSet"};
			};
		};
		class FullAuto: Single
		{
			autoFire = 1;
			displayName = "Full";
			textureType = "fullAuto";
			reloadTime = 0.17142;
		};
		class OpticsModes
		{
			class Ironsights
			{
				distanceZoomMax = 400;
				distanceZoomMin = 400;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.25;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		muzzles[] = { "this", "Stun" };
		class Stun: JLTS_stun_muzzle
		{
			magazines[] = 
			{
				"332nd_Sidearm_Stun_Mag",
			};
		};
	};
};