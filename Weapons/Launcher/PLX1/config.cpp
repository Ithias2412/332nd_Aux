class CfgPatches {
	class 332nd_PLX1 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_PLX1",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_PLX1_AT;

//Launcher
	class 332nd_PLX1: JLTS_PLX1_AT
	{
		author="Ithias";
		displayName="[332nd] PLX-1 (AT)";
		magazines[] =
		{
			"332nd_PLX1_Mag"
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