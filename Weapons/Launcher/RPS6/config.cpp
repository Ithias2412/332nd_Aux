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
			"332nd_RPS6_Mag"
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
class CfgAmmo
{
	class 332nd_Base_Ammo;
	class R_PG32V_F;
	class 332nd_RPS6_Ammo_AT: R_PG32V_F
	{
		ExplosionEffects = "MortarExplosion";
	};


};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class JLTS_RPS6_mag;
	class 332nd_RPS6_Mag: JLTS_RPS6_mag
	{
		ammo = "332nd_RPS6_Ammo_AT";
		count = 1;
		descriptionShort = "";
		displayname = "RPS-6 AT Rocket";
		displayNameShort = "AT";
		mass = 33.3;
		scope = 2;
	};
};