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
class WeaponSlotsInfo;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;

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
			sounds[] = 
			{
				"StandardSound",
				"SilencedSound",
			};
			class BaseSoundModeType
			{
				
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15SA_Shot_SoundSet"};
				//soundSetShot[] = {"3AS_Arkanian_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = 
				{
					"332nd_DC15SA_Suppressed_Shot_SoundSet",
				};
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"DC15SA_Muzzle",
				};
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
		class Stun: JLTS_stun_muzzle
		{
			magazines[] = 
			{
				"332nd_Sidearm_Stun_Mag",
			};
		};
	};
	class muzzle_snds_H_MG;
	class muzzle_snds_H: muzzle_snds_H_MG
	{
		class ItemInfo;
	};
	class DC15SA_Muzzle: muzzle_snds_H
	{
		author = "Ithias";
		displayName = "NFA/Cali Compliant Suppressor";
		model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acca_DC17S_Muzzle_F";
		picture = "";
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				airFriction = 1;
				audibleFire = 0;
				audibleFireTime = 0;
				cost = 1;
				hit = 0.5;
				typicalSpeed = 1;
				visibleFire = 0;
				visibleFireTime = 0;
			};
			class MuzzleCoef
			{
				artilleryDispersionCoef = "1.0f";
				dispersionCoef = "1.0f";
				fireLightCoef = "0";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
			};
		};
	};
};

class CfgSoundSets
{
	class 332nd_DC15SA_Suppressed_Shot_SoundSet
	{
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		doppler = 0;
		loop = 0;
		obstructionFactor = 0.3;
		occlusionFactor = 0.5;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		soundShaders[] = {"3AS_DC15SA_Shot_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		//volumeFactor = 1;
		volumeFactor = 0.20;
	};
};