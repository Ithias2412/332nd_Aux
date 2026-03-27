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
		magazines[]=
		{
			"332nd_Smoke_LauncherGrenade_3GL",
            "332nd_Smoke_LauncherGrenade",
            "332nd_SmokeRed_LauncherGrenade",
            "332nd_SmokeGreen_LauncherGrenade",
            "332nd_SmokeBlue_LauncherGrenade",
            "332nd_SmokePurple_LauncherGrenade",
			//"332nd_SmokeOrange_LauncherGrenade",
			//"332nd_SmokeYellow_LauncherGrenade",
			"ACE_HuntIR_M203",
			"UGL_FlareWhite_Illumination_F",
            "332nd_Smoke_LauncherGrenade_3GL_Red",
            "332nd_Smoke_LauncherGrenade_3GL_Green",
            "332nd_Smoke_LauncherGrenade_3GL_Blue",
            "332nd_Smoke_LauncherGrenade_3GL_Purple",
            //"332nd_Smoke_LauncherGrenade_3GL_Yellow",
            //"332nd_Smoke_LauncherGrenade_3GL_Orange",
		};
		magazineWell[]={};
	};
};