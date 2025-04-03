class CfgPatches {
	class 332nd_Pylons_Dropcrate {
		units[] = 
        {
			"",
			"",
        };
		weapons[] = 
        {
            "332nd_Hammer_I",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"

class CfgAmmo
{
	class SensorTemplateLaser;
	class Bo_GBU12_LGB;
	class 332nd_Dropcrate_A: Bo_GBU12_LGB
	{
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		proxyshape = "Dropcrate_FC\Dropcrate_closed.p3d";
        hit = 0;
        indirectHit = 0;
        explosive = 0;
        whistleOnFire = 1;
        sideAirFriction = .1;
        laserLock = 1;
        missileLockCone = 180;
        missileKeepLockedCone = 90;
        autoSeekTarget = 0;
        artilleryLock = 0;
        trackOversteer = 1;
        trackLead = 0.95;
        maneuvrability = 16;
        maxSpeed = 600;
        initSpeed = 30
        whistleDist = 24;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
		class Eventhandlers
        {
            Init = "[_this select 0] execVM '332nd_Aux\Crates\grpl_fired.sqf';";
        };
        class Components
        {
                class SensorsManagerComponent
                {
                    class Components
                    {
                        class LaserSensorComponent: SensorTemplateLaser 
						{
                            class GroundTarget 
							{
                                minRange = 30000;
                                maxRange = 30000;
                                objectDistanceLimitCoef = -1;
                                viewDistanceLimitCoef = -1;
                            };
                            maxTrackableSpeed = 300;
                            angleRangeHorizontal = 180;
                            angleRangeVertical = 180;
                            componentType = "LaserSensorComponent";
                            typeRecognitionDistance = 0;
                            color[] = {1, 1, 1, 0};
                            allowsMarking = 1;
                            groundNoiseDistanceCoef = -1;
                            maxGroundNoiseDistance = -1;
                            minSpeedThreshold = 0;
                            maxSpeedThreshold = 0;
                            animDirection = "";
                            aimDown = 0;
                            minTrackableSpeed = -1e+010;
                            minTrackableATL = -1e+010;
                            maxTrackableATL = 1e+010;
                        };
                    };
                };
    	};
	};
};
class BaseSoundModeType;
class CfgMagazines
{
	class VehicleMagazine;
    class AnimationSources;
	class Pylon_332nd_Dropcrate_1rnd : VehicleMagazine
	{
		scope = 2;
		//model = "3as\3as_props\crates\models\supply_Large.p3d";
		model = "\TKE_Kuiper_Engagements\TKE_Props\TKE_SupplyCrate.p3d";
		hardpoints[] = {"332nd_Dropcrate_PW1"};
		pylonWeapon = "332nd_Dropcrate_PW1";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
        class AnimationSources: AnimationSources    /// custom made animation sources
        {
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "FC_Dropcrate_PW1";
            };                  
        };  
		displayName = "[332nd] Dropcrate";
		displayNameShort = "Drop Resupply Crate";
		descriptionShort = "332nd_Dropcrate";					
		ammo = "332nd_Dropcrate_A";
		initSpeed = 0;
		count = 1;
		maxLeadSpeed = 40;
		mass = 200;

	};
};
class CfgNonAIVehicles
{
    class ProxyWeapon;
    class ProxyPylon_332nd_Dropcrate_Proxy: ProxyWeapon
    {
        model = "3as\3as_props\crates\models\supply_Large.p3d";
        simulation = "maverickweapon";
    };
};
class CfgWeapons
{
	class RocketPods;
	class weapon_LGBLauncherBase: RocketPods
	{
		class LoalAltitude;
	};
	class 332nd_Dropcrate_PW1: weapon_LGBLauncherBase
	{
		scope = 2;
		displayName = "[332nd] Resupply Dropcrate";
		displayNameMagazine = "332ndDC";
		shortNameMagazine = "332DC";
		cursoraim = "bomb";
		cursor = "EmptyCursor";
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "FC_Release_crate", 1.5848932, 1.1, 2100 };
			soundBegin[] = { "begin1", 1 };
			weaponSoundEffect = "DefaultRifle";
		};
		magazines[] = { "Pylon_332nd_Dropcrate_1rnd" };		
		salvo = 1;
        canLock = 2;
		modes[] = {"LoalAltitude"};
		class EventHandlers
        {
            //fired = "hint 'Fired eventhandler called'";
            fired = "_this spawn 332nd_Dropcrate_A";
        };
	};
};