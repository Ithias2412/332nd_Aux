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
class CfgAmmo
{
	class 332nd_Base_Ammo;
	class M_Titan_AT;
	class 3AS_M_MK43_AT;
	
	class 332nd_PLX1_Ammo_AT: 3AS_M_MK43_AT
	{
		ExplosionEffects = "MortarExplosion";
		hit=300;
	};


};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class JLTS_PLX1_AP_mag;
	class 332nd_PLX1_Mag: JLTS_PLX1_AP_mag
	{
		ammo = "332nd_PLX1_Ammo_AT";
		count = 2;
		descriptionShort = "";
		displayname = "PLX-1 AT Rocket";
		displayNameShort = "AT";
		mass = 50;
		scope = 2;
	};
};