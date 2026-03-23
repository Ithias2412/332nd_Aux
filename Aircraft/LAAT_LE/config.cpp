class CfgPatches 
{
	class 332nd_LAAT_LE 
	{
		requiredAddons[] = {};
		units[] = 
        {
			"332nd_LAAT_LE",
        };
		weapons[] = 
        {
            "",
        };
	};
};

class Extended_init_EventHandlers
{
	class 332nd_LAAT_LE
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
};

class ls_impulsor_base;

class CfgVehicles
{
//
	class AllVehicles;
	class Air: AllVehicles
	{
		class Components;
		class AnimationSources;
	};
	class Helicopter: Air
	{
		class Components: Components
		{
			
		};
		class AnimationSources: AnimationSources
		{
			
		};
		class ACE_SelfActions;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Components: Components
		{
			
		};
		class AnimationSources: AnimationSources
		{
			
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Components: Components
		{
			
		};
		class AnimationSources: AnimationSources
		{
			
		};
	};
	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
	{
		class Components: Components
		{
			
		};
		class HitPoints; //Rose is 500 years old
		class AnimationSources: AnimationSources
		{
			
		};
		class UserActions;
	};
	class 3AS_Patrol_LAAT_Republic: 3AS_Patrol_LAAT_Base
	{
		class Components: Components
		{
			
		};
		class HitPoints: HitPoints
		{
			
		};
		class AnimationSources: AnimationSources
		{
			
		};
		class UserActions: UserActions
		{
			
		};
	};
//
	class 332nd_LAAT_LE: 3AS_Patrol_LAAT_Republic
	{
		displayName = "[332nd] LAAT/le";
		scope = 2;
		faction = "332nd_Faction";
		class ls_impulsor: ls_impulsor_base
		{
			speed = 300;
			overchargeSpeed = 600;
		};
		class TransportMagazines
		{
			
		};
		class TransportItems
		{
			
		};
		class TransportWeapons
		{
			
		};
		class TransportBackpacks
		{
			
		};
		weapons[] = 
		{
			"332nd_LAAT_Minigun",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"332nd_LAAT_Minigun_Mag",
			"332nd_LAAT_Minigun_Mag",
			"332nd_LAAT_Minigun_Mag",
			"332nd_LAAT_Minigun_Mag"
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
							"332nd_Anvil_X_S",
							"332nd_Hammer_I",
						};
						turret[]={0};
						UIposition[] = {0.5,0.25};
					};
					class Pylons2: Pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.15,0.25};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class UserActions: UserActions
		{
			class ls_impulsor_impulse
			{
				displayName="Impulse";
				position="pilotview";
				radius=5;
				onlyForPlayer=0;
				condition="ls_player == currentPilot this and {this call ls_impulsor_fnc_canImpulse}";
				statement="[this, 1] call ls_impulsor_fnc_impulse";
			};
			class ls_impulsor_repulse: ls_impulsor_impulse
			{
				displayName="Repulse";
				statement="[this, -1] call ls_impulsor_fnc_impulse";
			};
		};
	};
};
/*
class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
	{
		author = "$STR_3as_Studio";
		_generalMacro = "Heli_Attack_01_base_F";
		scope = 1;
		side = 1;
		scopeCurator = 2;
		faction = "3AS_REP";
		displayName = "[3AS] LAAT/LE (Base)";
		crew = "3AS_Clone_P2_Pilot";
		model = "3AS\3as_LAAT\LAAT_LE\LAAT_LE.p3d";
		icon = "3AS\3as_LAAT\LAAT_LE\data\ui\LAATLE_top_ca.paa";
		picture = "3as\3as_LAAT\LAAT_LE\data\ui\LAATLE_side_ca.paa";
		editorpreview = "\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
		editorSubcategory = "EdSubcat_Helicopters";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		cargoaction[] = {"RTT_Cargo_Left","RTT_Cargo_Left","RTT_Cargo_Left","RTT_Cargo_Left","RTT_Cargo_Left","RTT_Cargo_Right","RTT_Cargo_Right","RTT_Cargo_Right","RTT_Cargo_Right","RTT_Cargo_Right"};
		driveOnComponent[] = {"Skids"};
		accuracy = 0.5;
		geardowntime = 1.5;
		gearretracting = 1;
		gearuptime = 1.5;
		gearMinAlt = 0.0;
		gearsUpFrictionCoef = 0.001;
		tas_max_impulse = 800;
		tas_impulse_break = 100;
		tas_can_impulse = 1;
		ace_cargo_space = 10;
		ace_cargo_hasCargo = 1;
		nameSound = "veh_helicopter_s";
		fuelCapacity = 1000;
		fuelConsumptionRate = 0.2;
		mainBladeRadius = 0.1;
		liftForceCoef = 3;
		bodyFrictionCoef = 1.9845;
		cyclicAsideForceCoef = 2.8;
		backRotorForceCoef = 1.8;
		cyclicForwardForceCoef = 2;
		acceleration = 450;
		maxSpeed = 600;
		brakeDistance = 400;
		mainRotorSpeed = -1;
		backRotorSpeed = 1;
		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		neutralMainRotorDive = 0;
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[] = {3.2,0,0};
			defaultCollective = 0.805;
			retreatBladeStallWarningSpeed = 83;
			maxTorque = 5800;
			stressDamagePerSec = 0.01;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
		};
		startDuration = 4.5;
		castDriverShadow = 0;
		canFloat = 1;
		waterLeakiness = 0.2;
		waterResistanceCoef = 0.9;
		waterResistance = 1;
		waterLinearDampingCoefY = 3;
		waterLinearDampingCoefX = 2;
		waterAngularDampingCoef = 3;
		maxFordingDepth = 110.65;
		armor = 200;
		armorStructural = 1;
		altFullForce = 137400;
		altNoForce = 172400;
		crewCrashProtection = 0;
		explosionShielding = 0.33;
		epeImpulseDamageCoef = 0;
		soundEngineOnInt[] = {"3as\3as_laat\sounds\LAAT_Start.ogg","1/2",1};
		soundEngineOnExt[] = {"3as\3as_laat\sounds\LAAT_Start.ogg","1*1.5",1,300};
		soundEngineOffInt[] = {"3as\3as_laat\sounds\LAAT_End.ogg","1/2",1};
		soundEngineOffExt[] = {"3as\3as_laat\sounds\LAAT_End.ogg","1*1.5",1,300};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class AnimationSources: AnimationSources
		{
			class BeaconsStart
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_BeaconsStart0";
				author = "$STR_A3_Bohemia_Interactive";
				initPhase = 0;
			};
			class Door_L
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Door_R
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Beacons
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "3as_LAAT_Medium_Canon";
			};
		};
		class UserActions
		{
			class beacons_start
			{
				displayName = "$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position = "pilotview";
				available = 0;
				showWindow = 0;
				radius = 9;
				onlyForplayer = 0;
				condition = "(ace_player == driver this) AND {this animationSourcePhase 'Beacons' < 0.5}";
				statement = "this animateSource ['Beacons',1];";
			};
			class beacons_stop: beacons_start
			{
				displayName = "$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition = "(ace_player == driver this) AND {this animationSourcePhase 'Beacons' > 0.5}";
				statement = "this animateSource ['Beacons',0];";
			};
			class LeftDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 0)";
				statement = "this animateSource ['Door_L',1];";
				onlyforplayer = 0;
			};
			class LeftDoor_Close
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 1)";
				statement = "this animateSource ['Door_L',0];";
				onlyforplayer = 0;
			};
			class RightDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 0)";
				statement = "this animateSource ['Door_R',1];";
				onlyforplayer = 0;
			};
			class RightDoor_Close
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 1)";
				statement = "this animateSource ['Door_R',0];";
				onlyforplayer = 0;
			};
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",1.25893,1,400};
				frequency = "rotorSpeed";
				volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",1.25893,1,1000};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "3*camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[] = {"",0.707946,1,300};
				frequency = 1;
				volume = 0;
			};
			class EngineInt
			{
				sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",0.794328,1};
				frequency = "rotorSpeed";
				volume = "3*(1-camPos)*2*(0 max (rotorSpeed-0.4))";
			};
			class RotorInt
			{
				sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",0.630957,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "3*(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
			};
			class RotorBench
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_rotor_normal_bench",0.501187,1,1000};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class EngineBench
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_engine_bench",0.354813,1,400};
				frequency = "rotorSpeed";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
			};
			class WindBench
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_out",0.562341,1,50};
				frequency = 1;
				volume = "3 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316228,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.223872,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.316228,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.223872,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.25893,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.25893,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,700};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,700};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",1.12202,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class WindLateralMovementInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",1.99526,1,50};
				frequency = 1;
				volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.316228,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",1.25893,1,400};
					frequency = "rotorSpeed";
					volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",1.25893,1,1000};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "3*camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\rotor_swist",0.707946,1,300};
					frequency = 1;
					volume = 0;
				};
				class EngineInt
				{
					sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",0.794328,1};
					frequency = "rotorSpeed";
					volume = "3*(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorInt
				{
					sound[] = {"3AS\3as_LAAT\LAAT_LE\SFX\LE_Idle.ogg",0.630957,1};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "3*(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
				class RotorBench
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_rotor_normal_bench",0.501187,1,1000};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class EngineBench
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_engine_bench",0.354813,1,400};
					frequency = "rotorSpeed";
					volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
				};
				class WindBench
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_out",0.562341,1,50};
					frequency = 1;
					volume = "4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316228,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.223872,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.316228,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.223872,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
					frequency = 1;
					volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_open_int",1.12202,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class WindLateralMovementInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",1.99526,1,50};
					frequency = 1;
					volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.316228,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
			class Waternoise_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\air_driving_in_water",0.707946,1,300};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",0.562341,1,100};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{"rope1"},{"Rope2"}};
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		slingLoadMaxCargoMass = 5000000;
		radarType = 8;
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		driverAction = "LE_Pilot";
		getInAction = "ChopperLight_L_In_H";
		getOutAction = "GetOutLow";
		memoryPointsGetInCargo[] = {"pos_cargo"};
		memoryPointsGetInCargoDir[] = {"pos_cargo_dir"};
		usePreciseGetInAction = 0;
		memoryPointsGetInDriverPrecise = "pos_driver";
		memorypointsgetindriver = "pos_driver";
		memorypointsgetindriverdir = "pos_driver_dir";
		memoryPointsGetInCargoPrecise[] = {"GetIn_Cargo","GetIn_Cargo2"};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		getInRadius = 10;
		typicalCargo[] = {"B_HeliPilot_F"};
		memorypointlmissile = "Rocket_1";
		memorypointrmissile = "Rocket_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		weapons[] = {"3as_LAAT_Medium_Canon","CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells"};
		memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
		memorypointcm[] = {"flare_launcher1","flare_launcher2"};
		memorypointcmdir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		primarygunner = 1;
		selectionFireAnim = "zasleh";
		memoryPointDriverOptics = "PilotCamera";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(15 / 120)";
					minFov = "(15 / 120)";
					maxFov = "(15 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(3.75 / 120)";
					minFov = "(3.75 / 120)";
					maxFov = "(3.75 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			minElev = 0;
			maxElev = 80;
			initElev = 0;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		maximumLoad = 25000;
		class SpeechVariants
		{
			class Default
			{
				speechplural[] = {"veh_air_gunship_p"};
				speechsingular[] = {"veh_air_gunship_s"};
			};
		};
		transportsoldier = 10;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				caneject = 0;
				castgunnershadow = 1;
				commanding = -1;
				discretedistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discretedistanceinitindex = 5;
				gunneraction = "LE_Pilot";
				gunnerforceoptics = 0;
				displayname = "CoPilot";
				gunnergetinaction = "Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction = "Heli_Attack_01_Gunner_Exit";
				gunnerinaction = "";
				gunnerlefthandanimname = "lever_copilot";
				gunneropticseffect[] = {"TankCommanderOptics1","BWTV"};
				gunneropticsmodel = "";
				gunnerrighthandanimname = "stick_copilot";
				initelev = 0;
				initturn = 0;
				iscopilot = 1;
				maxelev = 20;
				maxturn = 75;
				gunnerCompartments = "Compartment1";
				memorypointgunneroptics = "GunnerView";
				memorypointsgetingunner = "pos_driver";
				memorypointsgetingunnerdir = "pos_driver_dir";
				minelev = -65;
				minturn = -75;
				outgunnermayfire = 1;
				precisegetinout = 1;
				primarygunner = 0;
				selectionfireanim = "zasleh";
				soundservo[] = {"",0.01,1};
				startengine = 0;
				animationSourceBody = "mainTurret";
				animationsourcegun = "Maingun";
				animationsourcehatch = "";
				body = "mainTurret";
				gun = "Maingun";
				turretinfotype = "RscOptics_Heli_Attack_01_gunner";
				weapons[] = {"CMFlareLauncher"};
				magazines[] = {"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				class Reflectors
				{
					class Right
					{
						color[] = {7000,7500,10000};
						ambient[] = {70,75,100};
						intensity = 50;
						size = 5;
						innerAngle = 15;
						outerAngle = 65;
						coneFadeCoef = 10;
						position = "SpotLight";
						direction = "SpotLight_Dir";
						hitpoint = "Light_b_hitpoint";
						selection = "Spotlight";
						useFlare = 1;
						flareSize = 15;
						flareMaxDistance = 250;
						dayLight = 0;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 1;
							hardLimitStart = 100;
							hardLimitEnd = 200;
						};
					};
				};
				class OpticsIn
				{
					class Wide
					{
						gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
						initanglex = 0;
						initangley = 0;
						initfov = 0.466;
						maxanglex = 30;
						maxangley = 100;
						maxfov = 0.466;
						minanglex = -30;
						minangley = -100;
						minfov = 0.466;
						opticsdisplayname = "W";
						thermalmode[] = {0,1};
						visionmode[] = {"Normal","NVG","Ti"};
					};
					class Medium: Wide
					{
						gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						initfov = 0.093;
						maxfov = 0.093;
						minfov = 0.093;
						opticsdisplayname = "M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initfov = 0.029;
						maxfov = 0.029;
						minfov = 0.029;
						opticsdisplayname = "N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						gunneropticseffect[] = {};
						gunneropticsmodel = "";
						initanglex = 0;
						initangley = 0;
						initfov = 1.1;
						maxanglex = 30;
						maxangley = 100;
						maxfov = 1.1;
						minanglex = -30;
						minangley = -100;
						minfov = 0.133;
						visionmode[] = {"Normal","NVG"};
					};
				};
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "gun1";
					passthrough = 0.5;
					visual = "gun1";
				};
				class HitGun
				{
					armor = 0.4;
					material = -1;
					name = "gun2";
					passthrough = 0.2;
					visual = "gun2";
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1.9,1.8,1.7};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 30;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 80;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 0;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 0;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				flareSize = 0.3;
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.3;
			};
			class Left4
			{
				color[] = {1.9,1.8,1.7};
				ambient[] = {5,5,5};
				position = "Light_L_1";
				direction = "Light_L_1_end";
				hitpoint = "Light_L_1";
				selection = "Light_L_1";
				size = 1;
				innerAngle = 30;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 80;
				};
			};
			class Right4: Left4
			{
				position = "Light_R_1";
				direction = "Light_R_1_end";
				hitpoint = "Light_R_1";
				selection = "Light_R_1";
			};
			class Right5: Right4
			{
				position = "light_R_1_flare";
				useFlare = 0;
			};
			class Left5: Left4
			{
				position = "light_L_1_flare";
				useFlare = 0;
			};
			class Right6: Right5
			{
				position = "light_R_1_flare2";
				flareSize = 0.3;
			};
			class Left6: Left5
			{
				position = "light_L_1_flare2";
				flareSize = 0.3;
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2","Left3","Right3"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position = "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustEffectHeli";
			};
		};
		class VehicleTransport{};
		class Eventhandlers{};
		class Damage
		{
			tex[] = {};
			mat[] = {"3AS\3as_LAAT\laat_le\data\patrol1.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat"};
		};
		class TextureSources
		{
			class Base
			{
				displayName = "Police Enforcement";
				author = "Charger";
				textures[] = {"3AS\3as_LAAT\LAAT_LE\data\policepatrol01_CO.paa"};
				factions[] = {"3as_rep"};
			};
			class RepublicRed
			{
				displayName = "Republic Red";
				author = "Charger";
				textures[] = {"3AS\3as_LAAT\LAAT_LE\data\republicpatrol01_CO.paa"};
				factions[] = {"3as_rep"};
			};
			class Imperial
			{
				displayName = "Imperial";
				author = "Charger";
				textures[] = {"3AS\3as_LAAT\LAAT_LE\data\imperialpatrol01_CO.paa"};
				factions[] = {"3as_rep"};
			};
		};
	};
	*/