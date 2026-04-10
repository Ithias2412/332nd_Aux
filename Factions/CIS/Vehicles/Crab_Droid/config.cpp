class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Crab_Droid
	{
		units[] = 
        {
            "332nd_CIS_Crab_Droid",
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
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class 101st_Crab_Droid: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 332nd_CIS_Crab_Droid: 101st_Crab_Droid
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Crab Droid";
		armor = 50;
		editorPreview = "";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"3AS_J10_Turret_MG"
				};
				magazines[] = 
				{
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
					"3AS_500Rnd_J10MG_Mag",
				};
			};
		};
		/*
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_25mw_H96C_AC"
				};
				magazines[] = 
				{
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
					"332nd_25mm_UB5_x50_mag",
				};
			};
		};
		*/
	};
};

class CfgWeapons
{
	class LMG_RCWS;
	class DBA_25mw_H96C_AC: LMG_RCWS
	{
		class manual;
	};
	class 332nd_25mw_H96C_AC: DBA_25mw_H96C_AC
	{
		magazines[] = 
		{
			"332nd_25mm_UB5_x50_mag"
		};
		class manual: manual
		{
			reloadTime = 0.26; // 0.136364
		};
	};
};

class CfgMagazines
{
	class DBA_25mm_UB5_x50_mag;
	class 332nd_25mm_UB5_x50_mag: DBA_25mm_UB5_x50_mag
	{
		ammo = "332nd_25mm_UB5_HEI";
	};
};

class CfgAmmo
{
	class DBA_25mm_UB5_HEI;
	class 332nd_25mm_UB5_HEI: DBA_25mm_UB5_HEI
	{
		hit = 10;
		indirectHit = 15;
		indirectHitRange = 4;
		caliber = 1;
		typicalSpeed = 900;
		submunitionAmmo = "";
	};
};