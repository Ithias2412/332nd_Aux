class CfgPatches
{
	class 332nd_MAV_3
	{
		requiredAddons[] = {};
		units[] = 
		{
			"332nd_Mav_3_Base", "332nd_Mav_3_Unarmed", "332nd_Mav_3_Autocannon"
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class TKE_Ext_Bearcat_BASE;
	class TKE_Ext_Bearcat_Unarmed;
	class ACE_SelfActions;
	class UserActions;
	class Components;
	class HitTurret;
	class HitGun;
	class GunParticles;
	class AnimationSources;
	class Eventhandlers;
	class HitPoints;
	class HitHull;
	class MarkerLights;
	class Turrets;
	class MainTurret;
	class ViewPilot;
	class SensorTemplateLaser;
	class SensorTemplateDataLink;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateNV;
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
	class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
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
	class All
	{
		class ViewCargo;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class ViewGunner;
			class ViewOptics;
			class HitPoints
			{
				class HitTurret;
				class HitGun;
			};
		};
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo{};
		};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret
		{
			class ViewOptics: ViewOptics{};
			class ViewGunner: ViewCargo{};
		};
	};
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
		};
		class ViewPilot: ViewPilot{};
		class DestructionEffects
		{
			class Light1;
		};
		class EventHandlers;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
			class HitHull;
		};
		class ViewPilot: ViewPilot{};
		class NewTurret: NewTurret{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics: ViewOptics{};
				class ViewGunner: ViewGunner{};
			};
		};
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel: HitLFWheel{};
			class HitLBWheel: HitLFWheel{};
			class HitRBWheel: HitLFWheel{};
			class HitLF2Wheel: HitLFWheel{};
			class HitRF2Wheel: HitLFWheel{};
			class HitLMWheel: HitLFWheel{};
			class HitRMWheel: HitLFWheel{};
			class HitGlass1;
			class HitGlass2: HitGlass1{};
			class HitGlass3: HitGlass1{};
			class HitGlass4: HitGlass1{};
			class HitGlass5: HitGlass1{};
			class HitGlass6: HitGlass1{};
		};
		class Exhausts
		{
			class Exhaust1;
		};
		class Reflectors
		{
			class Left;
			class Right: Left{};
			class Right2: Right{};
			class Left2: Left{};
		};
	};
	class ViewOptics;
	class CommanderOptics;
	class ViewGunner;
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
	class 332nd_Mav_3_Base: TKE_Ext_Bearcat_Unarmed
	{
		scope = 1;
		scopeCurator = 1;
		author = "Cherryy & Luca";
		model = "\TKE_Ext_APC\data\apc.p3d";
		displayName = "[332nd] Mav 3 (Morruck Transport)";
		faction="332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\MAV-3_Morruck\tex\332nd_Morruck_co.paa"};
		armor = 500;
		armorStructural = 5;
		brakeDistance = 3;
		maxSpeed = 350;
		enginePower = 9001;
		canFloat = 1;
		tas_canBlift = 1;
        tas_liftVars = [[[[0,-4.5,-9]]], [0], [0]];
		class ACE_SelfActions: ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition = "alive _target";
				displayName = "Passengers";
				insertChildren = "call ace_interaction_fnc_addPassengersActions";
				statement = "";
			};
			class ace_quickmount_ChangeSeat
			{
				condition = "call ace_quickmount_fnc_canShowFreeSeats";
				displayName = "Change seat";
				icon = "\z\ace\addons\quickmount\UI\Seats_ca.paa";
				insertChildren = "call ace_quickmount_fnc_addFreeSeatsActions";
			};
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
		class TextureSources
		{
			class Camo
			{
				displayName = "The Base Skin";
				author = "Cherryy";
				textures[] = {"332nd_Aux\Vehicles\MAV-3_Morruck\tex\332nd_Morruck_co.paa"};
				factions[] = {"332nd_Faction"};
			};
		};
		textureList[] = {"Camo",1}; 
		/* class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name = "hull";
				visual = "body";
				armor = 1;
				material = -1;
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.6;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_fire";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class Engine_Fire: Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
				};
				name = "engine";
				visual = "";
			};
			class HitFuel: HitFuel
			{
				name = "palivo";
				visual = "";
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_1_1_hide";
				name = "wheel_1_1_steering";
				visual = "wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_1_2_hide";
				name = "wheel_1_2_steering";
				visual = "wheel_1_2_hide";
			};
			class HitLF3Wheel: HitLF2Wheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_1_3_hide";
				name = "wheel_1_3_steering";
				visual = "wheel_1_3_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_2_1_hide";
				name = "wheel_2_1_steering";
				visual = "wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_2_2_hide";
				name = "wheel_2_2_steering";
				visual = "wheel_2_2_hide";
			};
			class HitRF3Wheel: HitRF2Wheel
			{
				armor = 0.5;
				explosionShielding = 4;
				radius = 0.33;
				passThrough = 0;
				material = -1;
				minimalHit = -0.016;
				armorComponent = "wheel_2_3_hide";
				name = "wheel_2_3_steering";
				visual = "wheel_2_3_hide";
			};
		}; */
	};
	class 332nd_Mav_3_Unarmed: 332nd_Mav_3_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav 3 (Morruck Transport)";
		faction="332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\MAV-3_Morruck\tex\332nd_Morruck_co.paa"};  
	};
	class 332nd_Mav_3_Autocannon: 332nd_Mav_3_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav 3 (Morruck Armed)";
		model = "\TKE_Ext_APC\data\apc_a.p3d";
		faction="332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\MAV-3_Morruck\tex\332nd_Morruck_co.paa"}; 
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
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
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadL01_T: LightCarHeadL01
			{
				position = "LightCarHeadL01_T";
				direction = "LightCarHeadL01_end_T";
				hitpoint = "Light_L_T";
				selection = "Light_L_T";
				innerAngle = 60;
				outerAngle = 100;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 150;
					hardLimitEnd = 300;
				};
			};
			class LightCarHeadR01_T: LightCarHeadL01_T
			{
				position = "LightCarHeadR01_T";
				direction = "LightCarHeadR01_end_T";
				hitpoint = "Light_R_T";
				selection = "Light_R_T";
			};
		};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 13;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 125;
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "CommanderPeriscope";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 20;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.17782794,1,10};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.17782794,1,10};
						forceHideGunner = 1;
						gunnerAction = "driver_hemtt";
						gunnerInAction = "Driver_APC_Wheeled_03_cannon_F_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 0;
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						personTurretAction = "vehicle_turnout_2";
						minOutElev = -45;
						maxOutElev = 65;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						gunnerForceOptics = 1;
						class ViewGunner: ViewGunner{};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.6;
							minFov = 0.6;
							maxFov = 0.6;
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {0,1};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.6;
								minFov = 0.6;
								maxFov = 0.6;
								visionMode[] = {"Normal","NVG","TI"};
								thermalMode[] = {0,1};
								gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
								gunnerOpticsEffect[] = {};
							};
							class Medium: Wide
							{
								gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
								initFov = 0.07;
								minFov = 0.07;
								maxFov = 0.07;
							};
							class Narrow: Wide
							{
								gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
								initFov = 0.028;
								minFov = 0.028;
								maxFov = 0.028;
							};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						usePip = 1;
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints{};
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 4;
						maxVerticalRotSpeed = 4;
						gunnerHasFlares = 0;
						viewGunnerInExternal = 1;
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"332nd_PX10_Repeater","SmokeLauncher"};
				magazines[] = {"332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","SmokeLauncherMag"};
				gunnerForceOptics = 1;
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh";
				maxHorizontalRotSpeed = 1.4;
				maxVerticalRotSpeed = 1.6;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.398107,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.398107,1,30};
				gunnerAction = "driver_hemtt";
				gunnerInAction = "Driver_APC_Wheeled_03_cannon_F_in";
				forceHideGunner = 1;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				usePip = 0;
				minElev = -10;
				maxElev = 55;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				isPersonTurret = 0;
				personTurretAction = "vehicle_turnout_1";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.5;
						minFov = 0.5;
						maxFov = 0.5;
						visionMode[] = {"Normal","NVG","TI"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_m_F.p3d";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_n_F.p3d";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 15;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor = "2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name = "vez";
						visual = "OtocVez";
					};
					class HitGun: HitGun
					{
						armor = "4*100/((18+2*9+9) + (19+2*19+19))";
						name = "zbranVelitele";
						visual = "OtocHlaven";
					};
				};
				gunnerDoor = "";
			};
		};
		class AnimationSources: AnimationSources
		{
			/* class muzzle_rot1
			{
				source = "ammorandom";
				weapon = "TKE_Ext_MG_Coax";
			}; */
			class recoil_source
			{
				source = "reload";
				weapon = "332nd_PX10_Repeater";
			};
		};
	};
	class 332nd_Mav_3_Autocannon_2: 332nd_Mav_3_Base
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav 3 (Morruck Armed / 2)";
		faction="332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\MAV-3_Morruck\tex\332nd_Morruck_co.paa"}; 
		model = "\TKE_Ext_APC\data\apc_aa.p3d";
		transportSoldier = 12;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_flatground_leanleft","passenger_flatground_generic01","passenger_flatground_generic02","passenger_flatground_generic03","passenger_flatground_generic04","passenger_flatground_generic05"};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
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
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 13;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 105;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {10000,5000,2000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = "SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {10000,5000,2000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				weapons[] = {"332nd_PX10_Repeater"};
				magazines[] = {"332nd_PX10_Repeater_Mag"};
				memoryPointGun[] = {"usti hlavne","usti hlavne1"};
				minElev = -12;
				maxElev = 75;
				maxHorizontalRotSpeed = 1.1;
				maxVerticalRotSpeed = 1.2;
				class OpticsIn: Optics_Gunner_AAA_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				turretInfoType = "RscOptics_APC_Tracked_01_gunner";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {10000,5000,2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = "SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {10000,5000,2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000;
						angleRangeHorizontal = 160;
						angleRangeVertical = 160;
						aimDown = -45;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 90;
						animDirection = "mainTurret";
					};
					class DataLinkSensorComponent: SensorTemplateDataLink{};
				};
			};
		};
	};
};