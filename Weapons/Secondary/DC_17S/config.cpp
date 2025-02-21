class CfgPatches {
	class 332nd_DC17S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC17S",
			"33nd_DC17S_Dual",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class ItemInfo;
class 3AS_DC17S_F;
class SWLW_DC17;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
	class 3AS_DC17S_F;
	class 3AS_DC17STest_F;
	class 332nd_DC17S: 3AS_DC17S_F
	{
		author="Ithias";
		displayName="[332nd] DC-17S";
		magazines[] =
		{
			"332nd_DC17S_Mag",
			"332nd_DC17S_45ACP_Mag",
			"ls_mag_stunLow_2Rnd"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
	};
	class 33nd_DC17S_Dual : 3AS_DC17STest_F
	{
		displayName = "[332] Dual DC-17S Sidearm";
		magazines[] = {"3AS_60Rnd_Test_mag","ls_mag_stunLow_2Rnd"};
		recoil = "3as_recoil_light";

	};
};