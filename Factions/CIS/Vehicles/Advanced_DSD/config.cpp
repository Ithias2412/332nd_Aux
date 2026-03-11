class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Advanced_DSD
	{
		units[] = 
        {
            "332nd_CIS_Advanced_DSD",
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
	
	class All;
	class AllVehicles: All
	{
		class NewTurret;
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
	class 3AS_AAT_Base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 3AS_Advanced_DSD_Base: 3AS_AAT_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 3AS_Advanced_DSD: 3AS_Advanced_DSD_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	
	class 3AS_Advanced_DSD;
	class 332nd_CIS_Advanced_DSD: 3AS_Advanced_DSD
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Advanced DSD (Walking)";
		armor = 800;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_ADSD_Cannon",
					"3AS_ADSD_Repeater"
				};
				magazines[] = 
				{
					"332nd_24rnd_125mm_ADSD",
					"332nd_24rnd_125mm_ADSD",
					"332nd_24rnd_125mm_ADSD",
					"332nd_24rnd_125mm_ADSD",
					"3AS_500Rnd_ATT_RedPlasma",
					"3AS_500Rnd_ATT_RedPlasma"
				};
			};
		};
	};
};

class CfgWeapons
{
	class 3AS_ADSD_Cannon;
	class 332nd_ADSD_Cannon: 3AS_ADSD_Cannon
	{
		magazines[] = 
		{
			"332nd_24rnd_125mm_ADSD"
		};
	};
};

class CfgMagazines
{
	class 3AS_24rnd_125mm_ADSD;
	class 332nd_24rnd_125mm_ADSD: 3AS_24rnd_125mm_ADSD
	{
		ammo = "332nd_ADSD_redPlasma_AT";
	};
};

class CfgAmmo
{
	class 3AS_ADSD_redPlasma_AT;
	class 332nd_ADSD_redPlasma_AT: 3AS_ADSD_redPlasma_AT
	{
		hit = 400;
		indirectHit = 30;
		indirectHitRange = 5;
		caliber = 34;
		//typicalSpeed = 900;
		submunitionAmmo = "ammo_Penetrator_AAT";
	};
};