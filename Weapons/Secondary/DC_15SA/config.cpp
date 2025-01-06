/*
class CfgPatches {
	class 332nd_DC15SA {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15SA",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_pistol_DC15SA_F;
	class SWLW_DC15SA;

//Primary
	class 332nd_DC15SA: 3AS_pistol_DC15SA_F
	{
		author="Ithias";
		displayName="[332nd] DC-15SA";
		magazines[] =
		{
			"332nd_DC15SA_Mag"
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
	class 332nd_DC15SA_Ammo_45ACP: 332nd_Base_Ammo
	{
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
        ACE_caliber = 11.481;
		hit=5;
		caliber=1.4;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DC15SA_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15SA_Ammo_45ACP";
		count = 15;
		descriptionShort = "";
		displayname = "DC-15SA 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};