class CfgPatches {
	class 332nd_DCFG {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DCFG",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
	class IDA_DCFG;
	
	class 332nd_DCFG: IDA_DCFG
	{
		author="Ithias";
		displayName="[332nd] DC-FG (RTO)";
		baseWeapon = "332nd_DCFG";
		magazines[]={};
		magazineWell[]=
		{
			"332nd_UGL_MagWell",
		};
	};
};