class CfgPatches 
{
	class 332nd_CIS_Faction_Vehicles_OG9 
	{
		units[] = 
        {
			"332nd_CIS_OG9"
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
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 3AS_OG9Turret: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
			class Top_Turret: MainTurret
			{
				
			};
		};
	};

	
	class 332nd_CIS_OG9: 3AS_OG9Turret
	{
		faction="332nd_CIS_Faction";		
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="OG-9";
		//crew = "332nd_Droid_B1_Crewman";
		armor = 24; // was 24
		irTarget = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_ParticleBeamCannon_R"
				};
				magazines[] = 
				{
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F"
				};
			};
			class Top_Turret: Top_Turret
			{
				weapons[] = 
				{
					"332nd_ParticleBeamCannon_R"
				};
				magazines[] = 
				{
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F",
					"332nd_Laser_Battery_F"
				};
			};
		};
	};
};



class CfgWeapons
{
	class Mgun;
	class ParticleBeamCannon;
	class ParticleBeamCannon_R: ParticleBeamCannon
	{
		class manual: Mgun
		{
			
		};
	};
	class 332nd_ParticleBeamCannon_R: ParticleBeamCannon_R
	{
		magazines[] = 
		{
			"332nd_Laser_Battery_F"
		};
		class manual: manual
		{
			reloadTime = 0.0666666;
		};
	};
};

class CfgMagazines
{
	class Laser_Battery_F;
	class 332nd_Laser_Battery_F: Laser_Battery_F
	{
		ammo = "332nd_laserAmmo_F";
		model = "a3\weapons_f\data\bullettracer\tracer_green";
		initSpeed = 1035;
	};
};

class CfgAmmo
{
	class laserAmmo_F;
	class 332nd_laserAmmo_F: laserAmmo_F
	{
		hit = 130;
		indirectHit = 8;
		indirectHitRange = 3;
		explosive = 0;
		caliber = 1; // was 5.4
		typicalSpeed = 1035;
		submunitionAmmo = "";
		//submunitionAmmo = "ammo_Penetrator_120mm";
		model = "a3\weapons_f\data\bullettracer\tracer_green";
	};
};