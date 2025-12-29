class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Snail_Tank
	{
		units[] = 
        {
            "332nd_CIS_Snail_Tank",
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
	class Tank;
	class Tank_F: Tank
	{
		class Turrets;
	};
	class 3AS_N99_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_CIS_N99_base_F: 3AS_N99_base_F
	{
		
	};
	class 3AS_CIS_N99_F: 3AS_CIS_N99_base_F
	{
		
	};
	class 3AS_N99: 3AS_CIS_N99_F
	{
		
	};
	class 332nd_CIS_Snail_Tank: 3AS_N99
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Snail Tank";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_N99Cannon",
					"SmokeLauncher",
				};	
				magazines[] = 
				{
					"332nd_48Rnd_N99_HEAT",
					"332nd_48Rnd_N99_HEAT",
					"SmokeLauncherMag",
				};
			};
		};
	};
};

class CfgWeapons
{
	class 3AS_N99Cannon;
	class 332nd_N99Cannon: 3AS_N99Cannon
	{
		magazines[] = 
		{
			"332nd_48Rnd_N99_HEAT"
		};
	};
};

class CfgMagazines
{
	class 3AS_48Rnd_N99_HEAT;
	class 332nd_48Rnd_N99_HEAT: 3AS_48Rnd_N99_HEAT
	{
		ammo = "332nd_N99_redplasma_HEAT";
	};
};

class CfgAmmo
{
	class 3AS_N99_redplasma_HEAT;
	class 332nd_N99_redplasma_HEAT: 3AS_N99_redplasma_HEAT
	{
		hit = 250;
		indirectHit = 15;
		indirectHitRange = 3;
		caliber = 1;
		typicalSpeed = 900;
		submunitionAmmo = "";
	};
};