class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_EWEB
	{
		units[] = 
        {
            "332nd_CIS_EWEB",
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
	class 101st_EWEB_base: StaticMGWeapon 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret {};
		};
	};
	class 101st_EWEB: 101st_EWEB_base 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret {};
		};
	};
	class 332nd_CIS_EWEB: 101st_EWEB
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="EWEB";
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
					"332nd_13mw_H92C_MG",
				};
				magazines[] = 
				{
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
				};
			};
		};
	};
};

class CfgWeapons
{
	class DBA_13mw_H92C_MG;
	class 332nd_13mw_H92C_MG: DBA_13mw_H92C_MG
	{
		magazines[] = 
		{
			"3AS_500Rnd_J10MG_Mag"
		};
	};
};