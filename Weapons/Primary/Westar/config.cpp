/*
class CfgPatches {
	class 332nd_Westar {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Westar",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class ls_weapon_westar35s_primary;

//Primary

	class 332nd_Westar: ls_weapon_westar35s_primary
	{
		author="Ithias";
		displayName="[332nd] Westar (TESTBED / BANNED)";
		muzzles[] = {"this"};
		magazines[] =
		{
			"332nd_Westar_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"Single",
			"close",
			"short",
			"medium",
			"FullAuto"
		};
	};
};