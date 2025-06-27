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

	class lsd_heli_laatc;
	class 3AS_LAATC;
	class 332nd_LAAT_C_Old: lsd_heli_laatc
	{
		displayname = "[332nd] LAAT/c (Old)";
		faction = "332nd_Faction";
		hiddenSelectionsTextures[] = 
		{
			"\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Cockpit.paa",
			"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Hull.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Wings.paa",
		};
		ls_impulsor_boostSpeed_1=300;
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010; 
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
		};
		class TextureSources
		{
			class 332nd_Base_tex
			{
				displayname="332nd Base";
				author="Ithias";
				textures[]=
				{
					"\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Cockpit.paa",
					"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Hull.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Wings.paa",
				};
				factions[]=
				{
					"332nd_Faction"
				};
			};
		};
		textureList[]=
		{
			"332nd_Base_tex",
			1,
		};
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
			"3as_LAAT_Medium_Canon",
			"CMFlareLauncher"
		};
		magazines[] = 
		{
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells"
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
							"332nd_Anvil_III",
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

/*
	class 3AS_LAAT_Cargo_Base: 3AS_laat_Base
	{
		author = "$STR_3AS_Studio";
		_generalMacro = "3AS_laat_Base";
		scope = 0;
		displayName = "LAAT/C";
		model = "3AS\3AS_LAATC\3AS_LAAT_C.p3d";
		icon = "3AS\3AS_LAATC\data\ui\LAATC_top_ca.paa";
		picture = "3AS\3AS_LAATC\data\ui\LAATC_side_ca.paa";
		editorpreview = "\3AS\3AS_Laat\LAATI\data\editorpreview\3AS_laat.jpg";
		editorSubcategory = "EdSubcat_Helicopters";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		cargoaction[] = {"passenger_boat_holdleft","passenger_boat_holdleft","passenger_boat_holdleft"};
		driveOnComponent[] = {"Skids"};
		accuracy = 0.5;
		tas_canLift = 1;
		geardowntime = 1.5;
		gearretracting = 0;
		gearuptime = 1.5;
		gearMinAlt = 0.0;
		gearsUpFrictionCoef = 0.001;
		nameSound = "veh_helicopter_s";
		fuelCapacity = 700;
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
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "engine_hit";
				hitpoint = "engine_hit";
				name = "engine_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 0.6;
			};
			class HitEngine
			{
				armor = 0.5;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitHRotor
			{
				armor = 3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual = "";
				radius = 0.01;
			};
			class HitVRotor
			{
				armor = 3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.3;
				visual = "";
				radius = 0.01;
			};
			class HitAvionics
			{
				armor = 2;
				convexComponent = "avionics_hit";
				explosionShielding = 5;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
			class HitGlass1
			{
				armor = 2;
				name = "HitGlass1";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass2
			{
				armor = 2;
				name = "HitGlass2";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
			class HitGlass3
			{
				armor = 2;
				name = "HitGlass3";
				radius = 0.4;
				visual = "";
				passThrough = 1;
				explosionShielding = 3;
			};
		};
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
		soundEngineOnInt[] = {"3as\3AS_laat\sounds\LAAT_Start.ogg","volume_sound/2",1};
		soundEngineOnExt[] = {"3as\3AS_laat\sounds\LAAT_Start.ogg","volume_sound*1.5",1,300};
		soundEngineOffInt[] = {"3as\3AS_laat\sounds\LAAT_End.ogg","volume_sound/2",1};
		soundEngineOffExt[] = {"3as\3AS_laat\sounds\LAAT_End.ogg","volume_sound*1.5",1,300};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa","3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa","3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa","3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"};
		class TextureSources
		{
			class Republic
			{
				displayName = "Republic";
				author = "Charger";
				textures[] = {"\3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"};
				factions[] = {"3AS_rep"};
			};
			class Wampa
			{
				displayName = "Wampa";
				author = "Charger";
				textures[] = {"\3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_Wampa_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_Wampa_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa","\3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_Wampa_co.paa"};
				factions[] = {"3AS_rep"};
			};
		};
		textureList[] = {"Republic",1,"Wampa",0};
		class Damage
		{
			tex[] = {};
			mat[] = {"3AS\3AS_LAATC\data\Textures\Hull.rvmat","3as\3AS_LAATC\data\damage\LAAT_C_Hull_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3as\3as_LAATC\data\textures\Wings.rvmat","3as\3AS_LAATC\data\damage\LAAT_C_Wings_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3as\3AS_LAATC\data\Textures\Top.rvmat","3as\3AS_LAATC\data\damage\LAAT_C_Top_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3as\3AS_LAATC\data\Textures\DetailFront.rvmat","3as\3AS_LAATC\data\damage\LAAT_C_Details_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3as\3as_laatc\data\textures\glass.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat"};
		};
		class Turrets: Turrets
		{
			delete Copilot;
			delete LeftDoorGun;
			delete RightDoorGun;
			delete CargoTurret_01;
			delete CargoTurret_02;
			delete CargoTurret_03;
			delete CargoTurret_04;
			delete CargoTurret_05;
			delete CargoTurret_06;
		};
		class AnimationSources
		{
			class Clamp_Hinges
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class Clamp
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class afterburnerMk1_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 1;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn tcw_fnc_afterburnerMK1_turn_on;";
			};
			class afterburnerMk1_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 1;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn tcw_fnc_afterburnerMK1_turn_off;";
			};
			class LoadCargo
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "pilotview";
				showWindow = 0;
				radius = 5;
				priority = 1;
				onlyForPlayer = 0;
				condition = "((speed this < TAS_lcLoadSpeed) AND (player == currentPilot vehicle player))";
				statement = "0 = [this] spawn TAS_fnc_Maglift;";
			};
			class UnLoadCargo
			{
				userActionID = 7;
				displayName = "Unload Vehicles";
				displayNameDefault = "Unload Vehicles";
				textToolTip = "Unload Vehicles";
				position = "pilotview";
				showWindow = 0;
				radius = 15;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
				statement = "0 = [this] spawn TAS_fnc_MagDrop;";
			};
		};
		class Eventhandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.5,1,-3.5},{1.5,2.5,-3.5},{1.5,-1,-3.5},{-1.5,1,-3.5},{-1.5,2.5,-3.5},{-1.5,-1,-3.5}};
		class RenderTargets
		{
			class mfd
			{
				renderTarget = "rendertarget0";
				class CargoView
				{
					pointPosition = "Pip_Pos";
					pointDirection = "Pip_Dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.5;
				};
			};
		};
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		slingLoadMaxCargoMass = 5000000;
		radarType = 8;
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		driverAction = "LAAT_Pilot";
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
		gunnerhasflares = 1;
		commanding = 3;
		weapons[] = {"3AS_LAAT_Missile_AGM","3AS_LAAT_Missile_AA","3as_LAAT_Medium_Canon","CMFlareLauncher"};
		magazines[] = {"3AS_LAAT_8Rnd_Missile_AGM","3AS_PylonMissile_LAAT_8Rnd_Missile_AA","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells"};
		memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
		gunBeg[] = {"z_gunL_muzzle","z_gunR_muzzle"};
		gunEnd[] = {"z_gunL_chamber","z_gunR_chamber"};
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
			minElev = -120;
			maxElev = 10;
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
		scopeCurator = 2;
		transportsoldier = 0;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[] = {"Limit1","limit2"};
				disableHeightLimit = 1;
				maxLoadMass = 200000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0.15,0};
				exits[] = {"exit"};
				unloadingInterval = 2;
				loadingDistance = 10;
				loadingAngle = 60;
				parachuteClassDefault = "B_Parachute_02_F";
				parachuteHeightLimitDefault = 50;
			};
		};
	};
	*/