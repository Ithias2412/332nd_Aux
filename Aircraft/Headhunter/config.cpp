class CfgPatches 
{
	class 332nd_Headhunter
	{
		requiredAddons[] = 
		{
			"3AS_Z95_base",
		};
		units[] = 
        {
			"332nd_Headhunter",
        };
		weapons[] = 
        {
            "",
        };
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
class CfgVehicles
{
	class Plane_Base_F;
	class VTOL_Base_F: Plane_Base_F
	{
		class Components; 
	};
	class 3AS_Z95_VTOL_Base_F: VTOL_Base_F
	{
		class Components: Components
		{
			
		};
	};
	class 3AS_Z95_VTOL_Dynamic_Base_F: 3AS_Z95_VTOL_Base_F
	{
		class Components: Components
		{
			
		};
	};
	class 3AS_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F
	{
		class Components: Components
		{
			
		};
	};
	class 332nd_Headhunter: 3AS_Z95_Republic
	{
		displayname = "[332nd] Z-95 Headhunter";
		faction = "332nd_Faction";
		maxSpeed = 1000;
		hiddenselectionstextures[] = 
		{
			"332nd_Aux\Aircraft\Headhunter\Tex\332nd_Z95.paa",
			"3AS\3AS_Z95\Data\cockpit_co.paa",
			"3AS\3AS_Z95\data\glass\glass_ca"
		};
		magazines[] = 
		{
			"332nd_Z95_Cannon_Mag",
			"332nd_Z95_Cannon_Mag",
			"332nd_Z95_Cannon_Mag",
			//"Laserbatteries",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
		};
		weapons[] = 
		{
			"332nd_Z95_Cannon",
			"CMFlareLauncher",
			//"Laserdesignator_pilotCamera"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						maxTrackableSpeed=100;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="pilotCameraRotY";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=5000;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture = "3as\3AS_Z95\Data\ui\pylon_z95.paa";
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
				};
				class Pylons
				{
					class Pylons1
					{
						attachment="332nd_Hammer_II_Mag";
						priority=10;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Hammer_II_L",
						};
						turret[]={0};
						UIposition[] = {0.6,0.45};
					};
					class Pylons2: Pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.05,0.45};
					};
					class Pylons3: Pylons1
					{
						attachment="332nd_Hammer_II_Mag";
						priority = 9;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Hammer_II_L",
						};
						turret[]={0};
						UIposition[] = {0.55,0.35};
					};
					class Pylons4: Pylons3
					{
						mirroredMissilePos=3;
						UIposition[] = {0.1,0.35};
					};
					class Pylons5: Pylons1
					{
						attachment="332nd_Hammer_II_Mag";
						priority = 7;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Hammer_II_L",
						};
						turret[]={0};
						UIposition[] = {0.5,0.25};
					};
					class Pylons6: Pylons5
					{
						mirroredMissilePos = 5;
						UIposition[] = {0.15,0.25};
					};
					/*
					class Pylons7
					{
						turret[]={0};
						UIposition[] = {0.325,0.1};
						attachment="332nd_Z95_Cannon_Mag";
						hardpoints[]=
						{
							"332nd_Z95_Cannon",
							"332nd_Z95_Cannon_Heavy",
						};
						
					};
					*/
				};
			};
		};
	};
};