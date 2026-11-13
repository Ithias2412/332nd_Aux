class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_J10
	{
		units[] = 
        {
            "332nd_CIS_J10",
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
	class All {};
	class AllVehicles: All 
	{
		class NewTurret {};
	};
	class Land: AllVehicles 
	{
		class NewTurret: NewTurret {};
	};
	class LandVehicle: Land 
	{
		class NewTurret: NewTurret {};
	};
	class StaticWeapon: LandVehicle 
	{
		class Turrets 
		{
			class MainTurret: NewTurret {};
		};
	};
	class StaticMGWeapon: StaticWeapon 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret {};
		};
	};
	class 3AS_J10s_Base_F: StaticMGWeapon 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret {};
		};
	};
	class 3AS_J10s_F: 3AS_J10s_Base_F
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret {};
		};
	};
	class 332nd_CIS_J10: 3AS_J10s_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="J10";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
		crewVulnerable = 1;
		crewExplosionProtection = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_J10_Turret_MG",
				};
				magazines[] = 
				{
					"332nd_500Rnd_J10MG_Mag",
					"332nd_500Rnd_J10MG_Mag",
					"332nd_500Rnd_J10MG_Mag",
				};
			};
		};
	};
};

class CfgWeapons
{
	class 3AS_J10_Turret_MG;
	class 332nd_J10_Turret_MG: 3AS_J10_Turret_MG
	{
		magazines[] = 
		{
			"332nd_500Rnd_J10MG_Mag"
		};
	};
};

class CfgMagazines
{
	class 3AS_500Rnd_J10MG_Mag;
	class 332nd_500Rnd_J10MG_Mag: 3AS_500Rnd_J10MG_Mag
	{
		ammo = "332nd_CIS_E5C_Ammo";
	};
};