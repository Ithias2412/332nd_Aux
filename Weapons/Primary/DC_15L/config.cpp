class CfgPatches {
	class 332nd_DC15L {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15L",
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
class cfgWeapons 
{
	class 3AS_DC15L_F;
	class FullAuto;
//Primary
	class 332nd_DC15L: 3AS_DC15L_F
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Arrow";
		author="Ithias";
		displayName="[332nd] DC-15L (AR)";
		//recoil="3AS_recoil_DC15L";
		recoil="Old_IDA_recoil_Z6";
		reloadAction = "GestureReload_JLTS_DC15A";
		picture = "Indecisive_Armoury_Weapons_REPUBLIC\Data\DC15X\DC15X_ui.paa";
		baseWeapon = "332nd_DC15L";
		magazines[] =
		{
			"332nd_DC15L_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"FullAuto_15L",
			//"FastAuto_15L",
		};
		class OpticsModes
		{
			class Ironsights
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 1;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.375;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Raised_Forward",
					"332nd_Mode_B_Raised_Forward",
					"332nd_Mode_C_Raised_Forward",
					"332nd_Mode_D_Raised_Forward",
					"332nd_Mode_Seelig_Point_Raised_Forward",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"3AS_Bipod_DC15L_f",
				};
			};
		};
		class FullAuto_15L: FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.00174;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.12;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				soundSetShot[] = {""};
			};
			class StandardSound
			{
				soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			};
			soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			textureType = "fullAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";			
		};
		class FastAuto_15L: FullAuto_15L
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.00174;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.07500000002;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				soundSetShot[] = {""};
			};
			class StandardSound
			{
				soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			};
			soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			textureType = "fastAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";			
		};
	};
};