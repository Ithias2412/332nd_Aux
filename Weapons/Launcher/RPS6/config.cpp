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
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Weapons\Launcher\RPS6\Tex\332nd_rps6.paa"
		};
	};


};
class CfgAmmo
{
	class 332nd_Base_Ammo;
	class R_PG32V_F;
	class 3AS_R_MK41_AT;
	
	class 332nd_RPS6_Ammo_AT: 3AS_R_MK41_AT
	{
		ExplosionEffects = "MortarExplosion";
		hit=300;
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
		mass = 11.1;
		scope = 2;
	};
};