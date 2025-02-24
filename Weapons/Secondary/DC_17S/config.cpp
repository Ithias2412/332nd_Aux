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
class cfgWeapons 
{
	class 3AS_DC17S_F;
	class 3AS_DC17STest_F;
	class JLTS_stun_muzzle;
	class 332nd_DC17S: 3AS_DC17S_F
	{
		author="Ithias";
		displayName="[332nd] DC-17S";
		recoil = "IDA_recoil_dc17";
		magazines[] =
		{
			"332nd_DC17S_Mag",
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
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
	class 332nd_DC17S_Dual : 3AS_DC17STest_F
	{
		displayName = "[332nd] Dual DC-17S";
		recoil = "IDA_recoil_dc17";
		magazines[] = 
		{
			"332nd_DC17S_Mag_Dual",
		};
		magazineWell[]=
		{
			
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
};