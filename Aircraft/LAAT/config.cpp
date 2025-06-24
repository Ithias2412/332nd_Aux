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
			"332nd_LAAT_Ball",
			"332nd_LAAT_Old",
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

class Extended_init_EventHandlers
{
	class 332nd_LAAT
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
	class 332nd_LAAT_Ball
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
};

class CfgWeapons
{
	class ls_laat_DAR;
	class 332nd_Hydra_Missiles: ls_laat_DAR
	{
		showAimCursorInternal = 0;
	};
};

class CfgVehicles 
{
	class lsd_laat_base;
	class lsd_heli_laati: lsd_laat_base
	{
		class ACE_SelfActions;
		class HitPoints;
	};
	
	class 332nd_LAAT_Old: lsd_heli_laati
	{
		faction="332nd_Faction"; // Changed from LS_GAR
		displayname="[332nd] LAAT/i (Old)"; // Changed from "LAAT/i Gunship (Pylons)"
		ls_impulsor_boostSpeed_1=300; //Changed from 400
		transportSoldier=22;
		ls_impulsor_fuelDrain_1=0.00005; // was 0.000099999997;
		ls_impulsor_fuelDrain_2=0.00010; // was 0.00030000001;
		armor = 200; //was 100

		//getInRadius = 5;
		
	//	smokeLauncherGrenadeCount = 16;      // Number of smoke grenades
	//	smokeLauncherVelocity = 15;         // Ejection velocity
	//	smokeLauncherOnTurret = 1;          // Not tied to a turret
	//	smokeLauncherAngle = 360;           // Coverage angle
		
		class HitPoints: HitPoints
		{
			class HitAvionics
			{
				armor=5; // was 1
				convexComponent="avionics_hit";
				explosionShielding=2;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
		};
		class ace_cargo 
		{
			class cargo 
			{
				class 332nd_Ammo_Crate 
				{ 
					type = "332nd_Ammo_Crate";
					amount = 2;
				};
				class 332nd_Medical_Crate 
				{ 
					type = "332nd_Medical_Crate";
					amount = 2;
				};
				class 332nd_Equipment_Crate 
				{ 
					type = "332nd_Equipment_Crate";
					amount = 2;
				};
			};
		};
		weapons[]= 
		{
			"ls_laat_gun",
			"ls_laat_gun_2",
			"ls_laat_DAR",
			"CMFlareLauncher",
		//	"SmokeLauncher",
			
		};
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
		//	"SmokeLauncherMag",
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
						angleRangeVertical=180;
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
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
					};
					class IRSensorComponent
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
						attachment="332nd_Hammer_I_Mag";
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
						attachment="332nd_Anvil_III_Mag";
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
						attachment="332nd_Anvil_I_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Dropcrate_PW1",
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
							"332nd_Hammer_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Hammer_I_Mag",
						};
					};
					class AT
					{
						displayName="CAS";
						attachment[]=
						{
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag"
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag"
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
			class 332nd_Ikran_tex: 332nd_Base_tex
			{
				displayname="Ikran";
				textures[]=
				{
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Body1.paa",
					"lsd_vehicles_heli\laati\data\332nd_Ikran_Body2.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors1.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors2.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors3.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Wings.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
			class 332nd_Saiko_tex: 332nd_Base_tex
			{
				displayname="Saiko";
				textures[]=
				{
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Body1.paa",
					"lsd_vehicles_heli\laati\data\332nd_Saiko_Body2.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors1.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors2.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors3.paa",
					"332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Wings.paa",
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
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
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
					displayName="332nd Base Skin";
					exceptions[]=
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition="!(isNull objectParent player)";
					statement="_target setObjectTextureGlobal [0,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Body_1.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_1.paa']; _target setObjectTextureGlobal [3,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_2.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Wings.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					showDisabled=0;
					runOnHover=0;
					priority=2.5;
				};
				class 332nd_Skins
				{
					displayname="332nd Custom Skins";
					class 332nd_Ikran: DefaultSkin
					{
						displayName="332nd Ikran";
						statement="_target setObjectTextureGlobal [0,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Body1.paa']; _target setObjectTextureGlobal [1,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Body2.paa']; _target setObjectTextureGlobal [2,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors1.paa']; _target setObjectTextureGlobal [3,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors2.paa']; _target setObjectTextureGlobal [4,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Doors3.paa']; _target setObjectTextureGlobal [5,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Ikran_Wings.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 332nd_Asuka: DefaultSkin
					{
						displayName="332nd Asuka";
						statement="_target setObjectTextureGlobal [0,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Body_1_Asuka.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_1.paa']; _target setObjectTextureGlobal [3,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Door_2.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'332nd_Aux\Aircraft\LAAT\Tex\332nd_LAAT_I_Wings.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 332nd_Saiko: DefaultSkin
					{
						displayName="332nd Saiko";
						statement="_target setObjectTextureGlobal [0,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Body1.paa']; _target setObjectTextureGlobal [1,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Body2.paa']; _target setObjectTextureGlobal [2,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors1.paa']; _target setObjectTextureGlobal [3,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors2.paa']; _target setObjectTextureGlobal [4,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Doors2.paa']; _target setObjectTextureGlobal [5,'332nd_Aux\Aircraft\LAAT\Tex\332nd_Saiko_Wings.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
				};
			};
		};
	};
	
	class 3AS_LAAT_Base;
	class 3AS_LAAT_Mk2: 3AS_LAAT_Base
	{
		class Components;
		class ACE_SelfActions;
	};
	class 3AS_LAAT_Mk1: 3AS_LAAT_Base
	{
		class Components;
		class ACE_SelfActions;
	};
	class 332nd_LAAT: 3AS_LAAT_Mk2
	{
		faction="332nd_Faction"; // Changed from LS_GAR
		displayname="[332nd] LAAT/i"; // Changed from "LAAT/i Gunship (Pylons)"
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 300;
		ls_impulsor_boostSpeed_2 = 600;
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010; 
		//smokeLauncherGrenadeCount = 16;	// Number of smoke grenades
		//smokeLauncherVelocity = 15;		// Ejection velocity
		//smokeLauncherOnTurret = 1;		// Not tied to a turret
	//	smokeLauncherAngle = 360;		// Coverage angle
		class ace_cargo 
		{
			class cargo 
			{
				class 332nd_Ammo_Crate 
				{ 
					type = "332nd_Ammo_Crate";
					amount = 2;
				};
				class 332nd_Medical_Crate 
				{ 
					type = "332nd_Medical_Crate";
					amount = 2;
				};
				class 332nd_Equipment_Crate 
				{ 
					type = "332nd_Equipment_Crate";
					amount = 2;
				};
			};
		};
		weapons[]= 
		{
			"3as_LAAT_Medium_Canon",
			"332nd_Hydra_Missiles",
			"CMFlareLauncher",
			//"SmokeLauncher",
		};
		magazines[]=
		{
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"12rnd_missiles",
			"12rnd_missiles",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			//"SmokeLauncherMag",
		};
		class Components: Components
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
						angleRangeVertical=180;
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
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
					};
					class IRSensorComponent
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
			class TransportPylonsComponent
			{
				uiPicture="lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_Anvil_III_Mag";
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
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_Hammer_I_Mag";
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
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=3;
						UIposition[]={0.62,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_Anvil_I_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Dropcrate_PW1",
						};
						turret[]={0};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=5;
						UIposition[]={0.58999997,0.30000001};
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
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
						};
					};
					class AT
					{
						displayName="CAS";
						attachment[]=
						{
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_III_Mag",
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag"
						};
					};
				};
			};
		};
		class UserActions
		{
			class impulse
			{
				displayName="Impulse";
				position="pilotview";
				radius=5;
				onlyforplayer=0;
				shortcut="User19";
				condition="isEngineOn this and ls_player == currentPilot this and isTouchingGround this";
				statement="this call ls_vehicle_fnc_ImpulseJoystick;";
			};
			class repulse: impulse
			{
				displayName="Repulse";
				shortcut="User20";
				statement="this call ls_vehicle_fnc_RepulseJoystick;";
			};
			class rampClose
			{
				available = 0;
				condition = "(player == driver this) AND (this animationphase 'ramp' ==1)";
				displayName = "Ramp Close";
				onlyforplayer = 0;
				position = "pilotview";
				radius = 9;
				showWindow = 0;
				statement = "this animateSource ['ramp',0,1];";
			};
			class rampClose
			{
				available = 0;
				condition = "(player == driver this) AND (this animationphase 'ramp' ==0)";
				displayName = "Ramp Open";
				onlyforplayer = 0;
				position = "pilotview";
				radius = 9;
				showWindow = 0;
				statement = "this animateSource ['ramp',1,1];";
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
		};
	};
	class 332nd_LAAT_Ball: 3AS_LAAT_Mk1
	{
		faction="332nd_Faction"; // Changed from LS_GAR
		displayname="[332nd] LAAT/i (Ball Turrets)"; // Changed from "LAAT/i Gunship (Pylons)"
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 300;
		ls_impulsor_boostSpeed_2 = 600;
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010; 
		//smokeLauncherGrenadeCount = 16;	// Number of smoke grenades
		//smokeLauncherVelocity = 15;		// Ejection velocity
		//smokeLauncherOnTurret = 1;		// Not tied to a turret
	//	smokeLauncherAngle = 360;		// Coverage angle
		class ace_cargo 
		{
			class cargo 
			{
				class 332nd_Ammo_Crate 
				{ 
					type = "332nd_Ammo_Crate";
					amount = 2;
				};
				class 332nd_Medical_Crate 
				{ 
					type = "332nd_Medical_Crate";
					amount = 2;
				};
				class 332nd_Equipment_Crate 
				{ 
					type = "332nd_Equipment_Crate";
					amount = 2;
				};
			};
		};
		weapons[]= 
		{
			"3as_LAAT_Medium_Canon",
			"332nd_Hydra_Missiles",
			"CMFlareLauncher",
			//"SmokeLauncher",
		};
		magazines[]=
		{
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"12rnd_missiles",
			"12rnd_missiles",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			//"SmokeLauncherMag",
		};
		class Components: Components
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
						angleRangeVertical=180;
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
					};
					class AntiRadiationSensorComponent
					{
						aimDown=0;
						allowsMarking=1;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
					};
					class IRSensorComponent
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
						angleRangeHorizontal=180;
						angleRangeVertical=180;
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
			class TransportPylonsComponent
			{
				uiPicture="lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_Anvil_III_Mag";
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
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_Hammer_I_Mag";
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
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=3;
						UIposition[]={0.62,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_Anvil_I_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_Hammer_I",
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Dropcrate_PW1",
						};
						turret[]={0};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=5;
						UIposition[]={0.58999997,0.30000001};
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
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
						};
					};
					class AT
					{
						displayName="CAS";
						attachment[]=
						{
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_I_Mag",
							"332nd_Anvil_III_Mag",
							"332nd_Anvil_III_Mag",
						};
					};
					class CAP
					{
						displayName="CAP";
						attachment[]=
						{
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag",
							"332nd_Hammer_I_Mag"
						};
					};
				};
			};
		};
		class UserActions
		{
			class impulse
			{
				displayName="Impulse";
				position="pilotview";
				radius=5;
				onlyforplayer=0;
				shortcut="User19";
				condition="isEngineOn this and ls_player == currentPilot this and isTouchingGround this";
				statement="this call ls_vehicle_fnc_ImpulseJoystick;";
			};
			class repulse: impulse
			{
				displayName="Repulse";
				shortcut="User20";
				statement="this call ls_vehicle_fnc_RepulseJoystick;";
			};
			class rampClose
			{
				available = 0;
				condition = "(player == driver this) AND (this animationphase 'ramp' ==1)";
				displayName = "Ramp Close";
				onlyforplayer = 0;
				position = "pilotview";
				radius = 9;
				showWindow = 0;
				statement = "this animateSource ['ramp',0,1];";
			};
			class rampClose
			{
				available = 0;
				condition = "(player == driver this) AND (this animationphase 'ramp' ==0)";
				displayName = "Ramp Open";
				onlyforplayer = 0;
				position = "pilotview";
				radius = 9;
				showWindow = 0;
				statement = "this animateSource ['ramp',1,1];";
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
		};
	};
};