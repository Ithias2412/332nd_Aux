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
			"332nd_DC17S_Mag"
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
	class 332nd_DC17S_Ammo_9x19: 332nd_Base_Ammo
	{
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
		hit=6;
		caliber=0.4;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DC17S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC17S_Ammo_9x19";
		count = 30;
		descriptionShort = "";
		displayname = "DC-17S 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};