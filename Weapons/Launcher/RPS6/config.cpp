class CfgPatches {
	class 332nd_RPS6 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_RPS6",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_RPS6;

//Launcher
	class 332nd_RPS6: JLTS_RPS6
	{
		author="Ithias";
		displayName="[332nd] RPS-6 (AT)";
		magazines[] =
		{
			"332nd_RPS6_Mag",
			//"332nd_RPS6_NLAW_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Weapons\Launcher\RPS6\Tex\332nd_rps6.paa",
		};
		ace_reloadlaunchers_enabled = 1;
	};


};
