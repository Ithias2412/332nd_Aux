class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_GIT
	{
		units[] = 
        {
            "332nd_CIS_GIT",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
		class UserActions;
		class EventHandlers;
	};
    class 3AS_DF9_Base: StaticMGWeapon
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
            };
        };
    };
    class 3AS_DF9_Rocket: 3AS_DF9_Base
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
            };
        };
    };
    class 332nd_CIS_GIT: 3AS_DF9_Rocket
    {
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="GIT";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"3AS\3as_static\DF9\Data\DF9_RK_CO.paa"
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"332nd_Git_Missile_Launcher"
				};
				magazines[]=
				{
					"332nd_GIT_Missile_Pack",
                    "332nd_GIT_Missile_Pack",
				};
            };
        };
    };

 

};
class CfgAmmo 
{
	class 332nd_CIS_A2A_Missile_Ammo;
    class 332nd_GIT_Missile: 332nd_CIS_A2A_Missile_Ammo
    {
		effectsMissile = "332nd_Effect_CIS_A2A";
    };
}; 
class CfgMagazines
{

	class 332nd_CIS_A2A_Missile_Mag;
    class 332nd_GIT_Missile_Pack: 332nd_CIS_A2A_Missile_Mag
    {
		ammo = "332nd_GIT_Missile";
        count = 12;
	};
}; 
class CfgWeapons 
{ 
	class 332nd_CIS_A2A_Missile;
    class 332nd_Git_Missile_Launcher: 332nd_CIS_A2A_Missile
    {
		magazines[] = {"332nd_Git_Missile_Pack"};
		reloadTime = 1.5;
	};
};