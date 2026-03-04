class CfgPatches 
{
	class 332nd_LAAT_C 
	{
		requiredAddons[] = {};
		units[] = 
        {
			"332nd_LAAT_C",
			"332nd_LAAT_C_Old",
        };
		weapons[] = 
        {
            "",
        };
	};
};

class Extended_init_EventHandlers
{
	class 332nd_LAAT_C
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
};

class CfgVehicles
{
	class 3AS_LAATC_Wampa;
	class 3AS_LAATC: 3AS_LAATC_Wampa
	{
		class Components;
		class ACE_SelfActions;
		class UserActions;
	};

	class 332nd_LAAT_C: 3AS_LAATC
	{
		displayname = "[332nd] LAAT/c";
		scope = 2;
		faction = "332nd_Faction";
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 300;
		ls_impulsor_boostSpeed_2 = 600;
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010; 
		weapons[] = 
		{
			"332nd_LAAT_Cannon",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"332nd_LAAT_Cannon_Mag",
			"332nd_LAAT_Cannon_Mag",
			"332nd_LAAT_Cannon_Mag",
			"332nd_LAAT_Cannon_Mag"
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
				UIPicture = "3as\3AS_LAAT\LAATI\data\ui\pylon_laat.paa";
				class Pylons
				{
					class Pylons1
					{
						attachment="332nd_Anvil_I_Mag";
						priority = 10;
						hardpoints[]=
						{
							"332nd_Anvil_I",
							"332nd_Anvil_IV",
						};
						turret[]={0};
						UIposition[] = {0.5,0.25};
					};
					class Pylons2: Pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.15,0.25};
					};
				/*	class Pylons3: Pylons1
					{
						priority = 9;
						UIposition[] = {0.55,0.35};
					};
					class Pylons4: Pylons3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.1,0.35};
					};	*/
				};
			};
		};
		class UserActions: UserActions
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
		/*	class LoadCargo
			{
				condition = "((speed this < TAS_lcLoadSpeed) AND (player == currentPilot vehicle player))";
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				onlyForPlayer = 0;
				position = "pilotview";
				priority = 1;
				radius = 5;
				showWindow = 0;
				statement = "0 = [this] spawn TAS_fnc_Maglift;";
				textToolTip = "Load Vehicle";
				userActionID = 6;
			};
			class UnLoadCargo
			{
				condition = "(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
				displayName = "Unload Vehicles";
				displayNameDefault = "Unload Vehicles";
				onlyForPlayer = 0;
				position = "pilotview";
				priority = 3;
				radius = 15;
				showWindow = 0;
				statement = "0 = [this] spawn TAS_fnc_MagDrop;";
				textToolTip = "Unload Vehicles";
				userActionID = 7;
			};	*/
		};
	};
};
