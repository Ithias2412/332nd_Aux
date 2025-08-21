class CfgPatches
{
	class 332nd_TX130
	{
		requiredAddons[] = {"3AS_SaberTank"};
		units[] = {"332nd_Saber_Tank"};
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
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret{};
			class Mainturret_top: MainTurret_bottom {};
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
		author = "Cherryy & 3AS";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		side=1;
        faction="332nd_Faction";
		displayname = "[332nd] TX-130";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		model="3AS\3AS_Saber\model\tcw_tx130";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\TX-130_Series\tex\332nd_Saber_Tank.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
		crew = "JLTS_Clone_P2_DC15S";
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
				weapons[] = {"3AS_Sabre_Cannons","SmokeLauncher","332nd_Saber_Missile_Launcher"};
				magazines[] = {"3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","332nd_Saber_Missile_Pack"};
				
			};
			class Mainturret_top: Mainturret_top
			{
			};
		};
	};
};
class CfgAmmo 
{
	class M_PG_AT;
    class 332nd_Saber_Missile: M_PG_AT
    {
        airLock=1;
        fuseDistance=1;
		thrustTime=200;
		effectsMissile = "332nd_Effect_Hammer";
    };
    class CMflare_Chaff_Ammo;
	class 3AS_Saber_CMFlare_Chaff_Ammo: CMflare_Chaff_Ammo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8+ 16";
	};
}; 
class CfgMagazines
{
	class 60Rnd_CMFlare_Chaff_Magazine;
	class 12Rnd_PG_Missiles;
	class 3AS_60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		ammo = "3AS_Saber_CMFlare_Chaff_Ammo";
	};
    class 332nd_Saber_Missile_Pack: 12Rnd_PG_Missiles
    {
		ammo = "332nd_Saber_Missile";
        count = 12;
	};
}; 
class CfgWeapons
{
	class CMFlareLauncher;
	class 3AS_CMFlareLauncher: CMFlareLauncher
	{
		magazines[] = {"3AS_60Rnd_CMFlare_Chaff_Magazine"};
	};
	class RocketPods;
	class Missiles_DAGR: RocketPods
	{
		class Burst: RocketPods {};
	};
    class 332nd_Saber_Missile_Launcher: Missiles_DAGR
    {
		magazines[] = {"332nd_Saber_Missile_Pack"};
		reloadTime = 1.5;
		class Burst: Burst 
		{
			reloadTime = 1.5;
		};
	};
}; 
