class CfgPatches 
{
	class 332nd_LAAT 
	{
		requiredAddons[] = 
		{
			"ls_core",
			"ls_vehicles_weapons",
			"lsd_sounds",
			"A3_Air_F_EPB_Heli_Light_03",
			"lsd_vehicles_heli",
		};
		units[] = 
        {
			"332nd_LAAT",
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
	};
};
//#include "xtdGear.hpp"
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

class CfgVehicles 
{
	class lsd_laat_base;
	class lsd_heli_laati: lsd_laat_base
	{
		class ACE_SelfActions;
	};
	
	class 332nd_LAAT: lsd_heli_laati
	{
		faction="332nd_Faction"; // Changed from LS_GAR
		displayname="[332nd] LAAT/i"; // Changed from "LAAT/i Gunship (Pylons)"
		ls_impulsor_boostSpeed_1=300; //Changed from 400
		transportSoldier=22;
		magazines[]= // changed from "200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"200rnd_laat_apfsds_mag",
			"200rnd_laat_apfsds_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
		};
		hiddenselectionstextures[]=
		{
			"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Body_1.paa", // changed from "lsd_vehicles_heli\laati\data\body1_co.paa",
			"lsd_vehicles_heli\laati\data\body2_co.paa",
			"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_1.paa", //changed from "lsd_vehicles_heli\laati\data\door1_co.paa",
			"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_2.paa", //changed from "lsd_vehicles_heli\laati\data\door2_co.paa",
			"lsd_vehicles_heli\laati\data\door3_co.paa",
			"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Wings.paa", //changed from "lsd_vehicles_heli\laati\data\wings_co.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"lsd_vehicles_heli\laati\data\cockpits_co.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown=30;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						animDirection="";
						color[]={0,1,1,1};
						componentType="ActiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=1000; // changed from 0
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010; //was 125
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=3000;
						class AirTarget
						{
							maxRange=8000; //was 5000
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000; //was 5000
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
						class AirTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=100;
						aimDown=0;
						allowsMarking=1;
						animDirection="";
						color[]={1,0,0,1};
						componentType="IRSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.995;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=2000;
					};
					class VisualSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=1000; //was 100
						aimDown=0;
						animDirection="";
						allowsMarking=1;
						color[]={1,1,0.5,0.80000001};
						componentType="VisualSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.94;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						nightRangeCoef=0;
						typeRecognitionDistance=2000;
					};
					class PassiveRadarSensorComponent
					{
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
						aimDown=0;
						allowsMarking=0;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="LaserSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="NVSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
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
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
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
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_Missile_AA_Mag";
						priority=5;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_Bomb_LGB_Mag";
						priority=4;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
						};
						turret[]={0};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_Missile_AGM_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
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
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"332nd_Missile_AA_Mag",
							"332nd_Bomb_LGB_Mag",
							"332nd_Missile_AGM_Mag",
							"332nd_Missile_AGM_Mag",
							"332nd_Bomb_LGB_Mag",
							"332nd_Missile_AA_Mag"
						};
					};
					class AT
					{
						displayName="CAS";
						attachment[]=
						{
							"332nd_Bomb_LGB_Mag",
							"332nd_Bomb_LGB_Mag",
							"332nd_Missile_AGM_Mag",
							"332nd_Missile_AGM_Mag",
							"332nd_Bomb_LGB_Mag",
							"332nd_Bomb_LGB_Mag"
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"332nd_Missile_AA_Mag",
							"332nd_Missile_AA_Mag",
							"332nd_Missile_AA_Mag",
							"332nd_Missile_AA_Mag",
							"332nd_Missile_AA_Mag",
							"332nd_Missile_AA_Mag"
						};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class TextureSources
		{
			class 332nd_Base_tex
			{
				displayname="332nd Base";
				author="Ithias";
				textures[]=
				{
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Body_1.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_1.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_2.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Wings.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"332nd_Faction"
				};
			};
			class 332nd_Asuka_tex: 332nd_Base_tex
			{
				displayname="Asuka";
				textures[]=
				{
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Body_1_Asuka.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_1.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_2.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Wings.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"332nd_Base_tex",
			1,
		};
	};
	
/*
	class Shit_to_pull_from_in_future: lsd_heli_laati
	{
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown=30;
						allowsMarking=1;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0,1,1,1};
						componentType="ActiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=1000;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=3000;
						class AirTarget
						{
							maxRange=8000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000;
							minRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
						class AirTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=8000;
							minRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=100;
						aimDown=0;
						allowsMarking=1;
						animDirection="";
						color[]={1,0,0,1};
						componentType="IRSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=0.995;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=2000;
					};
					class VisualSensorComponent
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=1000;
						aimDown=0;
						animDirection="";
						allowsMarking=1;
						color[]={1,1,0.5,0.80000001};
						componentType="VisualSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxFogSeeThrough=1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						nightRangeCoef=0;
						typeRecognitionDistance=2000;
					};
					class PassiveRadarSensorComponent
					{
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
						aimDown=0;
						allowsMarking=0;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0.5,1,0.5,0.5};
						componentType="PassiveRadarSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="LaserSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=6000;
							minRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						animDirection="";
						color[]={1,1,1,0};
						componentType="NVSensorComponent";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=0;
					};
				};
			};
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
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
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
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="swlb_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_Missile_AA_Mag";
						priority=5;
						hardpoints[]=
						{
							"332nd_AA",
							"332nd_AGM",
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_Missile_AGM_Mag";
						priority=4;
						hardpoints[]=
						{
							"332nd_AA",
							"332nd_AGM",
						};
						turret[]={0};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_Bomb_LGB_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_AA",
							"332nd_LGB",
							"332nd_AGM",
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
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonMissile_1Rnd_AAA_missiles"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles",
							"PylonMissile_1Rnd_AAA_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		maximumLoad=20000;
		class TransportWeapons
		{
			class _xx_ls_weapon_rps6
			{
				count=1;
				weapon="ls_weapon_rps6";
			};
			class _xx_501_weapon_DC15S
			{
				count=1;
				weapon="AUX501_Weaps_DC15S";
			};
		};
		class TransportMagazines
		{
			class _xx_501_DC15X_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_40mw5";
			};
			class _xx_501_DC15L_mag
			{
				count=10;
				magazine="AUX501_Weapons_Mags_20mw240";
			};
			class _xx_501_DC15C_mag
			{
				count=10;
				magazine="AUX501_Weapons_Mags_20mw40";
			};
			class _xx_501_DC15ADP_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_20mwdp30";
			};
			class _xx_501_DC15AUP_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_20mwup30";
			};
			class _xx_501_DC15S_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_10mw50";
			};
			class _xx_501_Stun_mag
			{
				count=2;
				magazine="AUX501_Weapons_Mags_Stun5";
			};
			class _xx_501_Z6_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_10mw400";
			};
			class _xx_501_DC17DP_mag
			{
				count=5;
				magazine="AUX501_Weapons_Mags_20mwdp20";
			};
			class _xx_JLTS_DC15A_mag
			{
				count=5;
				magazine="JLTS_DC15A_mag";
			};
			class _xx_UGL_HE
			{
				count=2;
				magazine="AUX501_Weapons_Mags_GL_HE3";
			};
			class _xx_UGL_Smoke_White
			{
				count=2;
				magazine="AUX501_Weapons_Mags_GL_smoke_white6";
			};
			class _xx_UGL_Smoke_Blue
			{
				count=2;
				magazine="AUX501_Weapons_Mags_GL_smoke_blue3";
			};
			class _xx_UGL_Smoke_Green
			{
				count=1;
				magazine="AUX501_Weapons_Mags_GL_smoke_green3";
			};
			class _xx_UGL_Smoke_Orange
			{
				count=1;
				magazine="AUX501_Weapons_Mags_GL_smoke_orange3";
			};
			class _xx_UGL_Smoke_Purple
			{
				count=1;
				magazine="AUX501_Weapons_Mags_GL_smoke_purple3";
			};
			class _xx_UGL_Smoke_Red
			{
				count=2;
				magazine="AUX501_Weapons_Mags_GL_smoke_red3";
			};
			class _xx_UGL_Smoke_Yellow
			{
				count=1;
				magazine="AUX501_Weapons_Mags_GL_smoke_yellow3";
			};
			class _xx_ls_mag_at_plx
			{
				count=1;
				magazine="ls_mag_at_plx";
			};
			class _xx_ls_mag_rpg_1rnd
			{
				count=3;
				magazine="ls_mag_rpg_1rnd";
			};
			class _xx_JA104_mag_T9_1rnd
			{
				count=5;
				magazine="JA_104th_LaserCannon_mag";
			};
			class _xx_501_ThermalDet
			{
				count=8;
				magazine="AUX501_Weapons_Mags_Thermal_Detonator";
			};
			class _xx_3AS_ThermalDet
			{
				count=8;
				magazine="3AS_ThermalDetonator";
			};
			class _xx_LS_ThermalDet
			{
				count=8;
				magazine="LS_mag_classC_thermalDet";
			};
			class _xx_BI_SmokeGrenade
			{
				count=8;
				magazine="SmokeShell";
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				count=50;
				name="ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine
			{
				count=20;
				name="ACE_epinephrine";
			};
			class _xx_ACE_morphine
			{
				count=20;
				name="ACE_morphine";
			};
			class _xx_ACE_packingBandage
			{
				count=30;
				name="ACE_packingBandage";
			};
			class _xx_ACE_quikclot
			{
				count=30;
				name="ACE_quikclot";
			};
			class _xx_ACE_salineIV
			{
				count=5;
				name="ACE_salineIV";
			};
			class _xx_ACE_salineIV_500
			{
				count=5;
				name="ACE_salineIV_500";
			};
			class _xx_ACE_tourniquet
			{
				count=8;
				name="ACE_tourniquet";
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class Style_Changer
			{
				displayName="Change Camo";
				exceptions[]=
				{
					"isNotInside",
					"isNotSwimming",
					"isNotSitting"
				};
				condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled=0;
				priority=2;
				class DefaultSkin
				{
					displayName="Republic";
					exceptions[]=
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition="!(isNull objectParent player)";
					statement="_target setObjectTextureGlobal [0,'lsd_vehicles_heli\laati\data\body1_co.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'lsd_vehicles_heli\laati\data\wings_co.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					showDisabled=0;
					runOnHover=0;
					priority=2.5;
				};
				class 104th_Skins
				{
					displayname="104th Skins";
					class 104th_Blue: DefaultSkin
					{
						displayName="104th Blue";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bg.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Logo: DefaultSkin
					{
						displayName="104th Logo";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgwp.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_PloBro: DefaultSkin
					{
						displayName="104th PloBro";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgpb.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_MedEvac: DefaultSkin
					{
						displayName="104th MedEvac";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104medic.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_medic2.paa']; _target setObjectTextureGlobal [3,'JangosVehicles\data\textures\door2_co_medic.paa']; _target setObjectTextureGlobal [4,'JangosVehicles\data\textures\door3_co_medic.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
				};
				class Custom_Skins
				{
					displayname="Custom Skins";
					class 104th_Haze: DefaultSkin
					{
						displayName="Haze";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Echo.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_echo.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Beef: DefaultSkin
					{
						displayName="Beef";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Beef.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Bail: DefaultSkin
					{
						displayName="Bail";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Bail.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_OD: DefaultSkin
					{
						displayName="OD";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104OD.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Varelli: DefaultSkin
					{
						displayName="Varelli";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Varelli.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Fish: DefaultSkin
					{
						displayName="Fish";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Fish.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104Fish.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Cherryy: DefaultSkin
					{
						displayName="Cherryy";
						statement="_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Cherryy.paa']; _target setObjectTextureGlobal [1,'JangosVehicles\data\textures\body2_co_104Cherryy.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_104Cherryy.paa']; _target setObjectTextureGlobal [3,'JangosVehicles\data\textures\door2_co_104Cherryy.paa']; _target setObjectTextureGlobal [4,'JangosVehicles\data\textures\door3_co_104Cherryy.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104Cherryy.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104Cherryy.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
				};
			};
		};
	};
	*/

};