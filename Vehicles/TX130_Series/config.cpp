class CfgPatches
{
	class 332nd_TX130
	{
		requiredAddons[] = {"3AS_SaberTank"};
		units[] = 
		{
			"332nd_Saber_Tank",
			"332nd_Saber_Tank_But_Can_Die",
		};
		weapons[] = {};
		author = "Viper";
		magazines[] = {};
		ammo[] = {};
	};
};

class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class cfgvehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class ACE_SelfActions: ACE_SelfActions
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3AS_Saber_01_Base: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				
			};
			class HitEngine: HitEngine
			{
				
			};
			class HitLTrack: HitLTrack
			{
				
			};
			class HitRTrack: HitRTrack
			{
				
			};
			class HitFuel: HitFuel
			{
				
			};
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
				class HitPoints
				{
					class HitGun {};
					class HitTurret {};
				};
			};
			class Mainturret_top: MainTurret_bottom 
			{
				class HitPoints
				{
					class HitGun {};
					class HitTurret {};
				};
			};
			class CargoTurret_01: CargoTurret {};
			class CargoTurret_02: CargoTurret_01 {};
			class CargoTurret_03: CargoTurret_02 {};
			class CargoTurret_04: CargoTurret_01 {};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
					class ManSensorComponent: SensorTemplateMan
					{
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
						};
						class GroundTarget
						{
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
						};
						class GroundTarget
						{
						};
					};
				};
			};
		};
	};
	class 332nd_Saber_Tank: 3AS_Saber_01_Base
	{
		author = "Ithias & 3AS";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		side=1;
		ace_repair_spareTracks = 4;
		ace_cargo_space = 10;
        faction="332nd_Faction";
		displayname = "[332nd] TX-130";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		model="3AS\3AS_Saber\model\tcw_tx130";
		terrainCoef = 0;
		fuelCapacity = 12;
		fuelConsumptionRate = 0.01;
		transportSoldier = 5;
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_apc_generic02","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_generic01_leanright"};
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vehicles\TX130_Series\tex\332nd_Saber_Tank_Test.paa",
			"332nd_Aux\Vehicles\TX130_Series\tex\332nd_Saber_Tank_Guns.paa"
		};
		crew = "332nd_Rilfeman_DC15C";
		armor = 200;
		armorStructural = 10;
		hullDamageCauseExplosion = 0;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1; // was 4.5
				passThrough = 0; // 1
			};
			class HitEngine: HitEngine
			{
				armor = 0.5; // was 0.6
				passThrough = 0; // 0.2
			};
			class HitLTrack: HitLTrack
			{
				armor = 1; // was -650
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				armor = 1; // was -650
				passThrough = 0;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5; //was 0.5
				passThrough = 0; // 0.1
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerAction="passenger_bench_1";
				canHideGunner=0;
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=1;
				soundAttenuationTurret="HeliAttenuationGunner";
				isPersonTurret=1;
				ejectDeadGunner=1;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=2;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				proxyIndex=3;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
			};
			class CargoTurret_04: CargoTurret_04
			{
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				proxyIndex=4;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};
			class MainTurret_bottom: MainTurret_bottom
			{
				class HitPoints: HitPoints
				{
					class HitGun: HitGun
					{
						armor = 0.5; // was 1.2
						passThrough = 0;
					};
					class HitTurret: HitTurret
					{
						armor = 0.5; // was 1.2
						passThrough = 0;
					};
				};
				weapons[] = 
				{
					"332nd_Sabre_Cannons", // Bushmaster
					"SmokeLauncher",
					"332nd_Saber_Missile_Launcher" // Missiles
				};
				magazines[] = 
				{
					"332nd_40Rnd_Sabre_AP_mag",
					"332nd_40Rnd_Sabre_AP_mag",
					"332nd_40Rnd_Sabre_AP_mag",
					"332nd_60Rnd_Sabre_HE_mag",
					"332nd_60Rnd_Sabre_HE_mag",
					"332nd_60Rnd_Sabre_HE_mag",
					"332nd_Saber_Missile_Pack"
				};
				
			};
			class Mainturret_top: Mainturret_top
			{
				gunnerOpticsShowCursor = 1; // was 0
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				class HitPoints: HitPoints
				{
					class HitGun: HitGun
					{
						armor = 1000;
						passThrough = 0;
					};
					class HitTurret: HitTurret
					{
						armor = 1000;
						passThrough = 0;
					};
				};
				magazines[] = 
				{
					"332nd_Sabre_MG_Mag",
					"332nd_Sabre_MG_Mag",
					"332nd_Sabre_MG_Mag",
					"SmokeLauncherMag"
				};
				weapons[] = 
				{
					"332nd_Sabre_MG",
					"SmokeLauncher"
				};
			};
		};
	};

	class 332nd_Saber_Tank_But_Can_Die: 332nd_Saber_Tank
	{
		displayname = "[332nd] TX-130 (But Can Die)";
		armor = 500;
		armorStructural = 5;
		hullDamageCauseExplosion = 1;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 4.5; // was 4.5
				passThrough = 1; // 1
			};
			class HitEngine: HitEngine
			{
				armor = 0.6; // was 0.6
				passThrough = 0.2; // 0.2
			};
			class HitLTrack: HitLTrack
			{
				armor = -650; // was -650
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				armor = -650; // was -650
				passThrough = 0;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5; //was 0.5
				passThrough = 0.1; // 0.1
			};
		};
	};
};

class CfgWeapons
{
	// Missiles
	class RocketPods;
	class Missiles_DAGR: RocketPods
	{
		class Burst: RocketPods {};
	};
    class 332nd_Saber_Missile_Launcher: Missiles_DAGR
    {
		displayName = "Missiles";
		magazines[] = {"332nd_Saber_Missile_Pack"};
		reloadTime = 1.5;
		class Burst: Burst 
		{
			reloadTime = 1.5;
		};
	};
	
	// 40mm Cannons
	class Mgun;
	class 3AS_Sabre_Cannons: Mgun
	{
		class manual: Mgun
		{
			
		};
	};
	class 332nd_Sabre_Cannons_Base: 3AS_Sabre_Cannons
	{
		cursor = "";
		cursoraim = "332nd_Cursor_Cannon";
		class manual: manual
		{
			dispersion = 0.0015;
			reloadTime = 0.3;
		};
	};
	class 332nd_Sabre_Cannons: 332nd_Sabre_Cannons_Base
	{
		muzzles[] = {"HE","AP"};
		class AP: 332nd_Sabre_Cannons_Base
		{
			displayName = "Condensed Rounds";
			magazines[] = {"332nd_40Rnd_Sabre_AP_mag"};
		};
		class HE: 332nd_Sabre_Cannons_Base
		{
			displayName = "Unstable Rounds";
			magazines[] = {"332nd_60Rnd_Sabre_HE_mag"};
		};
	};
	
	// Top MG
	class 3AS_Sabre_MG: Mgun
	{
		class manual: Mgun
		{
			
		};
	};
	class 332nd_Sabre_MG: 3AS_Sabre_MG
	{
		//cursor = "332nd_Cursor_Tri";
		cursor = "";
		cursoraim = "332nd_Cursor_Tri";
		//cursoraim = "332nd_Cursor_Arrow";
		magazines[] = {"332nd_Sabre_MG_Mag"};
		class manual: manual
		{
			dispersion = 0.00087;
			reloadTime = 0.075;
		};
	};
}; 

class CfgMagazines
{
	class 12Rnd_PG_Missiles;
    class 332nd_Saber_Missile_Pack: 12Rnd_PG_Missiles
    {
		displayName = "Missiles";
		displayNameShort = "Wire Guided";
		ammo = "332nd_Sabre_Missile_Ammo";
        count = 4;
	};
	// 40mm Cannon
	class 3AS_50Rnd_Sabre_mag;
	class 332nd_40Rnd_Sabre_AP_mag: 3AS_50Rnd_Sabre_mag
	{
		displayName = "40Rnd Sabre Magazine (AP)";
		displayNameShort = "AP";
		ammo="332nd_Sabre_AP_Ammo";
		count = 40;
		initSpeed = 1600;
	};
	class 332nd_60Rnd_Sabre_HE_mag: 3AS_50Rnd_Sabre_mag
	{
		displayName = "40Rnd Sabre Magazine (HE)";
		displayNameShort = "HE";
		ammo="332nd_Sabre_HE_Ammo";
		count = 60;
		initSpeed = 1000;
	};
	// Top MG
	class 3AS_300Rnd_SabreMG_Mag;
	class 332nd_Sabre_MG_Mag: 3AS_300Rnd_SabreMG_Mag
	{
		displayName = "Z-6 400 Round Energy Cell";
		count = 400;
		ammo="332nd_Gas_Level_M3";
		initSpeed = 800;
	};
}; 

class CfgAmmo 
{
	class M_PG_AT;
	class 332nd_Anvil_IV_Ammo;
	class 332nd_Sabre_Missile_Ammo: M_PG_AT
	{
		effectsMissile = "332nd_Effect_Anvil";
		submunitionAmmo = "332nd_Anvil_I_Ammo_Penetrator";
		hit = 800; // was 400
		fuseDistance = 5;
		manualControl = 1;
		maxControlRange = 2000;
		weaponLockSystem = "0";
		//maneuvrability = 27;
		////maneuvrability = 30;
		//sideAirFriction = 0.15;
		////sideAirFriction = 0.5;
	};
	class 3AS_Sabre_HE;
	class 332nd_Sabre_AP_Ammo: 3AS_Sabre_HE
	{
		caliber = 8;
		hit = 225; // 150
		indirectHit = 8;
		indirectHitRange = 0.2;
		craterEffects = "ImpactEffectsMedium";
		//explosionEffects = "ExplosionEffects";
		ExplosionEffects = "3AS_ImpactPlasma";
		explosionSoundEffect = "";
		
		typicalSpeed = 1600;
	};
	class 332nd_Sabre_HE_Ammo: 3AS_Sabre_HE
	{
		caliber = 4.6;
		hit = 70;
		indirectHit = 8;
		indirectHitRange = 4;
		
		typicalSpeed = 1000;
	};
}; 


//autocannon_40mm_CTWS

//40Rnd_40mm_APFSDS_shells 
	// initSpeed = 1600;
	// 40 rounds
	// caliber = 8;
	// hit = 150;
	// indirectHit = 8;
	// indirectHitRange = 0.2;

//60Rnd_40mm_GPR_shells
	// initSpeed = 1035;
	// 60 rounds
	// caliber = 4.6;
	// hit = 70;
	// indirectHit = 8;
	// indirectHitRange = 4;
	