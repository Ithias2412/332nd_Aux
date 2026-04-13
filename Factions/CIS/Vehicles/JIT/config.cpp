class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_JIT
	{
		units[] = 
        {
			"332nd_CIS_JIT",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
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
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
		class UserActions;
		class EventHandlers;
	};
    class 3AS_DF9_Base: StaticMGWeapon
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components;
            };
        };
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
    };
    class 3AS_DF9_Rocket: 3AS_DF9_Base
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
            };
        };
    };
    class 332nd_CIS_JIT: 3AS_DF9_Rocket
    {
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="JIT-10";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Factions\CIS\Vehicles\JIT\332nd_JIT.paa"
		};
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection="mainGun";
						typeRecognitionDistance=4000;
						maxTrackableSpeed=1388.89;
					};
				};
			};
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"332nd_JIT_Missile_Launcher"
				};
				magazines[]=
				{
					"332nd_JIT_Missile_Pack",
                    "332nd_JIT_Missile_Pack",
					"332nd_JIT_Missile_Pack",
                    "332nd_JIT_Missile_Pack",
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000,1000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000,1000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
            };
        };
    };
};
class CfgAmmo 
{
	class 332nd_Hammer_II_Ammo;
    class 332nd_JIT_Missile: 332nd_Hammer_II_Ammo
    {
		effectsMissile = "332nd_Effect_CIS_A2A";
    };
}; 
class CfgMagazines
{

	class 332nd_Hammer_II_Mag;
    class 332nd_JIT_Missile_Pack: 332nd_Hammer_II_Mag
    {
		displayName = "[332nd] JIT-10 Missile";
		ammo = "332nd_JIT_Missile";
        count = 12;
	};
}; 
class CfgWeapons 
{ 
	class 332nd_Hammer_II;
    class 332nd_JIT_Missile_Launcher: 332nd_Hammer_II
    {
		displayName = "[332nd] JIT-10 Missile";
		magazines[] = {"332nd_JIT_Missile_Pack"};
		reloadTime = 1.5;
	};
};