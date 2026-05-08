class CfgPatches 
{
	class 332nd_Mando_Rifle
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Mando_Rifle",
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
	class SFA_Mando_Arkanian_rifle;
//Primary
	class 332nd_Mando_Rifle: SFA_Mando_Arkanian_rifle
	{
		displayname = "[Butch Deloria] Mandalorian Assault Rifle";
		modes[] = {"Single","Burst","close","short","medium"};
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
				begin1[] = {"\SFA_Main\SFA_Weapons_R\Arkanian\data\SFX\arkanian_blaster.wav",1,1,1800};
				beginwater1[] = {"\SFA_Main\SFA_Weapons_R\Arkanian\data\SFX\arkanian_blaster.wav",1,1,1800};
				soundBegin[] = {"begin1",0.33};
				soundBeginwater[] = {"beginwater1",0.33};
				weaponSoundEffect = "";
			};
		};
	};
};