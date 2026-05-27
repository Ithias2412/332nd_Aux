class CfgPatches 
{
	class 332nd_R_10
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_R_10",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class WeaponSlotsInfo;
class GunParticles;
class cfgWeapons 
{
	class SFA_R10;
//Primary
	class 332nd_R_10: SFA_R10
	{
		displayname = "[Butch Deloria] R-10";
		modes[] = {"Single","Burst","close","short","medium"};
		magazines[] = {"332nd_R_10_Mag"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.12;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			soundContinuous=0;
			soundBurst=0;
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
				begin1[] = {"\SFA_Main\SFA_Weapons_R\Ossan_Elim\data\SFX\ossan_elim.wav",1,1,1800};
				beginwater1[] = {"\SFA_Main\SFA_Weapons_R\Ossan_Elim\data\SFX\ossan_elim.wav",1,1,1800};
				soundBegin[] = {"begin1",0.33};
				soundBeginwater[] = {"beginwater1",0.33};
				weaponSoundEffect = "";
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.12;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00087;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			soundContinuous=0;
			soundBurst=0;
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
				begin1[] = {"\SFA_Main\SFA_Weapons_R\Ossan_Elim\data\SFX\ossan_elim.wav",1,1,1800};
				beginwater1[] = {"\SFA_Main\SFA_Weapons_R\Ossan_Elim\data\SFX\ossan_elim.wav",1,1,1800};
				soundBegin[] = {"begin1",0.33};
				soundBeginwater[] = {"beginwater1",0.33};
				weaponSoundEffect = "";
			};
		};
	};
};

class CfgMagazines
{
	class SFA_R10_mag;
	class 332nd_R_10_Mag: SFA_R10_mag
	{
		ammo = "332nd_CIS_E5_Ammo";
		displayname = "[Butch Deloria] R-10 Energy Cell";
	};

};