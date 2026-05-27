class CfgPatches 
{
	class 332nd_KA_74
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_KA_74",
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
class WeaponSlotsInfo;
class GunParticles;
class cfgWeapons 
{
	class SFA_KA74_Sniper;
//Primary
	class 332nd_KA_74: SFA_KA74_Sniper
	{
		displayname = "[Butch Deloria] KA-74";
		modes[] = {"Single"};
		magazines[] = {"332nd_KA_74_Mag"};
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
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				soundSetShot[] = {"KA74_Shot_SoundSet"};
				weaponSoundEffect = "";
			};
		};
	};
};

class CfgMagazines
{
	class SFA_KA74_Sniper_mag;
	class 332nd_KA_74_Mag: SFA_KA74_Sniper_mag
	{
		ammo = "332nd_CIS_E5S_Ammo";
		displayname = "[Butch Deloria] KA-74 Energy Cell";
	};

};