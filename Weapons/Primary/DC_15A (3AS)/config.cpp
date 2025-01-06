/*
class CfgPatches {
	class 332nd_DC15A {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_DC15A",
			"332nd_DC15A_GL",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15A_F;
	class 3AS_DC15A_GL;
	class 3AS_GL_F;

//Primary
	class 332nd_DC15A: 3AS_DC15A_F
	{
		author="Ithias";
		displayName="[332nd] DC-15A (RFL)";
		magazines[] =
		{
			"332nd_DC15A_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
	};
	class 332nd_DC15A_GL: 3AS_DC15A_GL
	{
		author="Ithias";
		displayName="[332nd] DC-15A GL (GRN)";
		magazines[] =
		{
			"332nd_DC15A_Mag"
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
	class 332nd_DC15A_Ammo_762x39: 332nd_Base_Ammo
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
        ACE_caliber = 7.823;
		hit=11;
		caliber=1.2;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_DC15A_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15A_Ammo_762x39";
		count = 30;
		descriptionShort = "";
		displayname = "DC-15A 30 Round Energy Cell";
		displayNameShort = "";
		mass = 10;
		scope = 2;
	};
};