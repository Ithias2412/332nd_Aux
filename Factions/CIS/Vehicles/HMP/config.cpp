class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_HMP
	{
		units[] = 
        {
            "332nd_CIS_HMP_Gunship",
			"332nd_CIS_HMP_Transport",
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
	class Air: AllVehicles
	{
		
	};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				
			};
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Components;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 3AS_HMP_Base: Heli_Attack_01_base_F
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				
			};
			class LeftGun: MainTurret
			{
				
			};
			class RightDoorGun: MainTurret
			{
				
			};
		};
	};
	class 3AS_HMP_Gunship: 3AS_HMP_Base
	{
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				
			};
		};
	};
	class 3AS_HMP_Transport: 3AS_HMP_Base
	{
		
	};
	class 332nd_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Helicopters";
		displayName="HMP Gunship";
		editorPreview = "";
		crew = "332nd_Droid_B1_Pilot";
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_CIS_A2A_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_A2A_Missile",
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_CIS_A2A_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_A2A_Missile",
						};
						turret[]={0};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_CIS_ATG_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_ATG_Missile",
						};
						turret[]={0};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
			};
		};
		weapons[] = 
		{
			"332nd_HMP_Autocannon",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"332nd_HMP_Cannon_Mag",
			"332nd_HMP_Cannon_Mag",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class Copilot: Copilot
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
			class LeftGun: LeftGun
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
		};
	};
	class 332nd_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Helicopters";
		displayName="HMP Transport";
		editorPreview = "";
		crew = "332nd_Droid_B1_Pilot";
		weapons[] = 
		{
			"332nd_HMP_Autocannon",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"332nd_HMP_Cannon_Mag",
			"332nd_HMP_Cannon_Mag",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class Copilot: Copilot
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
			class LeftGun: LeftGun
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[] = 
				{
					"332nd_HMP_Autocannon",
				};
				magazines[] = 
				{
					"332nd_HMP_Cannon_Mag",
					"332nd_HMP_Cannon_Mag",
				};
			};
		};
	};
};

class CfgWeapons
{
	class HMP_Autocannon;
	class 332nd_HMP_Autocannon: HMP_Autocannon
	{
		magazines[] = {"332nd_HMP_Cannon_Mag"};
	};
};

class CfgMagazines
{
	class HMP_Cannon_Mag;
	class 332nd_HMP_Cannon_Mag: HMP_Cannon_Mag
	{
		ammo = "332nd_HMP_laserAmmo";
	};
};

class CfgAmmo
{
	class HMP_laserAmmo;
	class 332nd_HMP_laserAmmo: HMP_laserAmmo
	{
		hit = 35; // was 75
		indirecthit = 5;
		caliber = 1.6;
	};
};