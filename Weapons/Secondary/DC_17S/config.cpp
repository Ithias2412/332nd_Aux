class CfgPatches {
	class 332nd_DC17S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC17S",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC17S_F;
	class SWLW_DC17;
	
	class 332nd_DC17S: SWLW_DC17
	{
		author="Ithias";
		displayName="[332nd] DC-17S";
		magazines[] =
		{
			"332nd_DC17S_Mag",
			"332nd_DC17S_45ACP_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
	};
};