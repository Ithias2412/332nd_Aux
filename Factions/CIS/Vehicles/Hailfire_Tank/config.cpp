class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Hailfire_Tank
	{
		units[] = 
        {
            "332nd_CIS_Hailfire_Tank",
			"332nd_CIS_Hailfire_Tank_AA",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_Hailfire",
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class 3AS_Hailfire_Base: Tank_F
	{
		class Turrets;
	};
	class 3AS_Hailfire_Rocket: 3AS_Hailfire_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_Hailfire_SAM;
	class 332nd_CIS_Hailfire_Tank: 3AS_Hailfire_Rocket
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Hailfire Tank";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_Hailfire_Rocket_Arty",
					"SmokeLauncher",
				};
				magazines[] = 
				{
					"332nd_15Rnd_230mm_rockets",
					"332nd_15Rnd_230mm_rockets",
					"SmokeLauncherMag",
				};
			};
		};
	};
	class 332nd_CIS_Hailfire_Tank_AA: 3AS_Hailfire_SAM
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Hailfire Tank (AA)";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};

class CfgWeapons
{
	class 3AS_Hailfire_Rocket_Arty;
	class 332nd_Hailfire_Rocket_Arty: 3AS_Hailfire_Rocket_Arty
	{
		magazines[] = 
		{
			"332nd_15Rnd_230mm_rockets"
		};
	};
};

class CfgMagazines
{
	class 3AS_15Rnd_230mm_rockets;
	class 332nd_15Rnd_230mm_rockets: 3AS_15Rnd_230mm_rockets
	{
		ammo = "332nd_230mm_fly";
	};
};

class CfgAmmo
{
	class 3AS_230mm_fly;
	class 332nd_230mm_fly: 3AS_230mm_fly
	{
		hit = 600;
		indirectHit = 400;
		indirectHitRange = 15;
		caliber = 1;
		typicalSpeed = 900;
		submunitionAmmo = "";
	};
};