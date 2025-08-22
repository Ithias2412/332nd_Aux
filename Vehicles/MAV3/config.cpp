
class CfgPatches
{
	class 332nd_MAV_3
	{
		requiredAddons[] = {};
		units[] = 
		{
			"332nd_Mav_3_Transport", "332nd_Mav_3_Armed","332nd_Mav_3_SHORAD"
		};
		weapons[] = {};
	};
};

//Crap
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
//The Actual Code
class CfgVehicles
{
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
	class Wheeled_Apc_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints{};
		class Exhausts{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Components;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components;
						class ViewGunner;
					};
				};
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_Apc_F
	{
		class ViewPilot;
		class HitPoints: HitPoints{};
		class Exhausts{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Components;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components;
						class ViewGunner;
					};
				};
			};
		};
	};
	class TKE_Ext_Bearcat_BASE: APC_Wheeled_01_base_F
	{
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine
			{
				class DestructionEffects
				{
					class Engine_Smoke{};
					class Engine_Fire: Engine_Smoke{};
				};
				class HitFuel: HitFuel{};
				class HitLFWheel: HitLFWheel{};
				class HitLF2Wheel: HitLF2Wheel{};
				class HitLF3Wheel: HitLF2Wheel{};
				class HitRFWheel: HitRFWheel{};
				class HitRF2Wheel: HitRF2Wheel{};
				class HitRF3Wheel: HitRF2Wheel{};
			};
		};
		class sounds{};
		class ACE_SelfActions;
	};
	class TKE_Ext_Bearcat_Unarmed: TKE_Ext_Bearcat_BASE
	{
		class Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				class ViewGunner: ViewGunner{};
				class Viewoptics: ViewOptics{};
				class OpticsIn
				{
					class Wide: Viewoptics{};
					class Medium: Wide{};
					class Narrow: Wide{};
				};
				class HitPoints{};
			};
		};
	};
	class TKE_Ext_Bearcat_Autocannon: TKE_Ext_Bearcat_BASE
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				class OpticsIn
				{
					class Wide: Viewoptics{};
					class Medium: Wide{};
					class Narrow: Wide{};
				};
				class ViewOptics: ViewOptics{};
				class ViewGunner: ViewOptics{};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret{};
					class HitGun: HitGun{};
				};
			};
		};
	};
	class TKE_Ext_Bearcat_AA: TKE_Ext_Bearcat_Autocannon
	{
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
					};
				};
				class OpticsIn: Optics_Gunner_AAA_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
			};
		};
	};
	class 332nd_Mav_3_Transport: TKE_Ext_Bearcat_BASE
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav 3 (Morruck Transport)";
		editorPreview = "";
		faction = "332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\MAV3\tex\332nd_Morruck_co.paa"};
		armor = 500;
		armorStructural = 5;
		brakeDistance = 3;
		canFloat = 1;
		tas_canBlift = 1;
        tas_liftVars = [[[[0,-4.5,-9]]], [0], [0]];
		fuelCapacity = 132;
		class Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				body="obsTurret";
				gun="CommanderPeriscope";
				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				minElev=-10;
				maxElev=20;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]={};
				magazines[]={};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				forceHideGunner=1;
				gunnerAction="driver_hemtt";
				gunnerInAction="Driver_APC_Wheeled_03_cannon_F_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				personTurretAction="vehicle_turnout_2";
				minOutElev=-45;
				maxOutElev=65;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				gunnerForceOptics=1;
				class ViewGunner: ViewGunner
				{
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.60000002;
					minFov=0.60000002;
					maxFov=0.60000002;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.60000002;
						minFov=0.60000002;
						maxFov=0.60000002;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				turretInfoType="RscOptics_MBT_01_commander";
				usePip=1;
				showCrewAim=1;
				startEngine=0;
				class HitPoints
				{
				};
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=4;
				maxVerticalRotSpeed=4;
				gunnerHasFlares=0;
				viewGunnerInExternal=1;
			};
		};
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
				textures[] = {"332nd_Aux\Vehicles\MAV3\tex\332nd_Morruck_co.paa"};
				factions[] = {"332nd_Faction"};
			};
		};
		textureList[] = {"Camo",1}; 
	};
	class 332nd_Mav_3_Armed: TKE_Ext_Bearcat_Autocannon
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav 3 (Morruck Armed)";
		editorPreview = "";
		faction = "332nd_Faction";
		editorSubcategory = "EdSubcat_APCs";
		crew = "JLTS_Clone_P2_DC15S";
		transportSoldier = 8;
		fuelCapacity = 132;
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
				weapons[] = {"332nd_MAV3_Repeater","SmokeLauncher"};
				magazines[] = {"332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","SmokeLauncherMag"};
				gunnerForceOptics = 1;
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh";
				maxHorizontalRotSpeed = 1.0;
				maxVerticalRotSpeed = 1.2;
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
			class muzzle_rot1
			{
				source = "ammorandom";
				weapon = "332nd_MAV3_Repeater";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "332nd_MAV3_Repeater";
			};
		};
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
				textures[] = {"332nd_Aux\Vehicles\MAV3\tex\332nd_Morruck_co.paa"};
				factions[] = {"332nd_Faction"};
			};
		};
		textureList[] = {"Camo",1}; 
	};
	class 332nd_Mav_3_SHORAD: 332nd_Mav_3_Armed
	{
		scope = 2;
		scopeCurator = 2;
		author = "Cherryy & Luca";
		displayName = "[332nd] Mav-3 (Morruck Shorad)";
		editorPreview = "";
		faction = "332nd_Faction";
		crew = "JLTS_Clone_P2_DC15S";
		model = "\TKE_Ext_APC\data\apc_aa.p3d";
		editorSubcategory = "EdSubcat_APCs";
		transportSoldier = 6;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"332nd_MAV3_Repeater", "332nd_Hammer_I"};
				magazines[] = {"332nd_PX10_Repeater_Mag", "332nd_Hammer_I_Mag", "332nd_Hammer_I_Mag", "332nd_Hammer_I_Mag", "332nd_Hammer_I_Mag"};
				memoryPointGun[] = {"usti hlavne","usti hlavne1"};

			};
		};
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
				textures[] = {"332nd_Aux\Vehicles\MAV3\tex\332nd_Morruck_co.paa"};
				factions[] = {"332nd_Faction"};
			};
		};
		textureList[] = {"Camo",1};
	};
};
class Mode_FullAuto;



class CfgWeapons
{
	class 3AS_MK4ES_Medium_Cannon;
	
	class 332nd_MAV3_Repeater: 3AS_MK4ES_Medium_Cannon
	{
		displayName = "[332nd] MAV3 Repeater";
		magazines[] = {"332nd_PX10_Repeater_Mag"};
		magazineReloadTime = 30;
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		waterAngularDampingCoef = 10;
		waterDamageEngine = 0.2;
		waterLeakiness = 2.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterPPInVehicle = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.5;
		waterSpeedFactor = 0.2;
		class GunParticles
		{
			class FirstEffect {
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
		class manual: Mode_FullAuto
		{
			dispersion = 0.00073;
			displayName = "Full";
			reloadTime = 0.075;
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.025,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.95,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.05,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.9,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
	};
};