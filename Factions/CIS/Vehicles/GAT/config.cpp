class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_GAT
	{
		units[] = 
        {
            "332nd_CIS_GAT_Light",
            "332nd_CIS_GAT_Heavy",
            "332nd_CIS_GAT_SPAAG",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CannonCore;

class CfgVehicles
{
	class All 
	{
		
	};
	class AllVehicles: All 
	{
		class NewTurret 
		{
			
		};
	};
	class Land: AllVehicles 
	{
		class NewTurret: NewTurret 
		{
			
		};
	};
	class LandVehicle: Land 
	{
		class NewTurret: NewTurret 
		{
			
		};
	};
	class Tank: LandVehicle 
	{
		class NewTurret: NewTurret 
		{
			
		};
	};
	class Tank_F: Tank 
	{
		class Turrets 
		{
			class MainTurret: NewTurret 
			{
				
			};
		};
	};
	class 3AS_GAT_base_F: Tank_F 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class 3AS_GAT_Light_Base: 3AS_GAT_base_F 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class 3AS_GAT_Light_base_F: 3AS_GAT_Light_Base 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class 3AS_GAT_Light: 3AS_GAT_Light_base_F 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class 3AS_CIS_GAT_base_F: 3AS_GAT_base_F 
	{
		
	};
	class 3AS_GAT: 3AS_CIS_GAT_base_F 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class 332nd_CIS_GAT_Light: 3AS_GAT_Light
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="GAT";
		armor = 50;
		editorPreview = "";
	};
	class 332nd_CIS_GAT_Heavy: 3AS_GAT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="GAT (Cannon)";
		armor = 50;
		editorPreview = "";
	};
	class 332nd_CIS_GAT_SPAAG: 332nd_CIS_GAT_Light
	{
		displayName="GAT (AA)";
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				weapons[] = 
				{
					"332nd_GAT_autocannon",
					"SmokeLauncher"
				};
				magazines[] = 
				{
					"332nd_GAT_autocannon_Mag",
					"332nd_GAT_autocannon_Mag",
					"332nd_GAT_autocannon_Mag",
					"SmokeLauncherMag"
				};
			};
		};
	};
};

class CfgWeapons
{
	class autocannon_35mm;
	class 3AS_GATRepeater;
	class 332nd_GAT_autocannon: autocannon_35mm
	{
		magazines[] = 
		{
			"332nd_GAT_autocannon_Mag",
		};
	};
};

class CfgMagazines
{
	class 680Rnd_35mm_AA_shells;
	class 3AS_500Rnd_GAT_redPlasma;
	class 332nd_GAT_autocannon_Mag: 3AS_500Rnd_GAT_redPlasma
	{
		displayName = "[332nd] SPAAG";
		ammo = "332nd_GAT_autocannon_Ammo";
		count = 680;		
	};
};

class CfgAmmo
{
	class B_35mm_AA;
	class 3AS_GAT_redPlasma;
	class 332nd_GAT_autocannon_Ammo: 3AS_GAT_redPlasma
	{
		caliber = 3;
		aiAmmoUsageFlags = "64 + 128 + 256";
		airLock = 1;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		explosive = 0.6;
		hit = 100; // WAS 60
		indirectHit = 25;
		indirectHitRange = 2.4;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		//typicalSpeed = 960;
	};
};