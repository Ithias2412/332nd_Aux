class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_MTT
	{
		units[] = 
        {
            "332nd_CIS_MTT",
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
		class Turrets;
	};
	class 3AS_MTT_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret1: NewTurret
			{
				
			};
			class MainTurret2: NewTurret
			{
				
			};
		};
	};
	class 3AS_MTT_01_Base: 3AS_MTT_Base
	{
		
	};
	class 3AS_MTT: 3AS_MTT_01_Base
	{
		
	};

	class 332nd_CIS_MTT: 3AS_MTT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="MTT";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class Turrets: Turrets
		{
			class MainTurret1: MainTurret1
			{
				weapons[] = 
				{
					"332nd_MTTCannon"
				};
				magazines[] = 
				{
					"332nd_40Rnd_MTT_HEAT",
					"332nd_40Rnd_MTT_HEAT",
					"332nd_40Rnd_MTT_HEAT"
				};
			};
			class MainTurret2: MainTurret2
			{
				weapons[] = 
				{
					"332nd_MTTCannon"
				};
				magazines[] = 
				{
					"332nd_40Rnd_MTT_HEAT",
					"332nd_40Rnd_MTT_HEAT",
					"332nd_40Rnd_MTT_HEAT"
				};
			};
		};
	};
};

class CfgWeapons
{
	class 3AS_MTTCannon;
	class 332nd_MTTCannon: 3AS_MTTCannon
	{
		magazines[] = 
		{
			"332nd_40Rnd_MTT_HEAT"
		};
	};
};

class CfgMagazines
{
	class 3AS_40Rnd_MTT_HEAT;
	class 332nd_40Rnd_MTT_HEAT: 3AS_40Rnd_MTT_HEAT
	{
		ammo = "332nd_MTT_redplasma_HEAT";
	};
};

class CfgAmmo
{
	class 3AS_MTT_redplasma_HEAT;
	class 332nd_MTT_redplasma_HEAT: 3AS_MTT_redplasma_HEAT
	{
		caliber = 28;
		hit = 240; // was 480
		indirectHit = 30;
		indirectHitRange = 5;
		submunitionAmmo = "ammo_Penetrator_AAT";
	};
};

// 3AS_ATT_redPlasma_AT