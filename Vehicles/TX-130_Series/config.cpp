class CfgPatches
{
	class 3AS_SaberTank
	{
		requiredAddons[] = {"A3_Armor_F_Beta","3AS_Main","3AS_Animations","3AS_UTAT","A3_Data_F_Tank_Loadorder"};
		units[] = {"332nd_Saber_Tank"};
		weapons[] = {};
		author = "Cherryy & 3AS";
		skipWhenMissingDependencies = 1;
		magazines[] = {};
		ammo[] = {"3AS_Saber_CMFlare_Chaff_Ammo"};
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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Saber_Driver = "Saber_Driver";
		Saber_Commander_In = "Saber_Commander_In";
		Saber_Commander_Recon_In = "Saber_Commander_Recon_In";
		Saber_Commander_OUT = "Saber_Commander_OUT";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class Saber_Driver_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "3AS\3AS_UTAT\data\Anim\UTATDriver_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class Saber_Driver: Crew
		{
			file = "3AS\3AS_Anims\anims\Saber_Driver.rtm";
			interpolateTo[] = {"Saber_Driver_KIA",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Saber_Commander_in_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "3AS\3AS_UTAT\data\Anim\UTATDriver_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class Saber_Commander_In: Crew
		{
			file = "3AS\3AS_Anims\anims\Saber_Commander_In.rtm";
			interpolateTo[] = {"Saber_Commander_in_KIA",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Saber_Commander_Recon_in_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "3AS\3AS_UTAT\data\Anim\UTATDriver_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class Saber_Commander_Recon_in: Crew
		{
			file = "3AS\3AS_Anims\anims\Saber_Commander_Recon_in.rtm";
			interpolateTo[] = {"Saber_Commander_Recon_in_KIA",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Saber_Commander_OUT_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "3AS\3AS_Anims\anims\Saber_gunner_kia.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class Saber_Commander_OUT: Crew
		{
			file = "3AS\3AS_Anims\anims\Saber_Commander_OUt.rtm";
			interpolateTo[] = {"Saber_Commander_OUT_KIA",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};
class RCWSOptics;
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class EventHandlers;
		class ACE_SelfActions: ACE_SelfActions{};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3AS_Saber_01_Base: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 4.5;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.275;
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "motor";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack
			{
				armor = -650;
				material = -1;
				name = "track_l_hit";
				passThrough = 0;
				minimalHit = 0.08;
				explosionShielding = 0.8;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = -650;
				material = -1;
				name = "track_r_hit";
				passThrough = 0;
				minimalHit = 0.08;
				explosionShielding = 0.8;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.25;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
				startEngine = 0;
				hideWeaponsGunner = 1;
				showCrewAim = 2;
				stabilizedInAxes = 3;
				memoryPointGun[] = {"z_gunL_Muzzle","z_gunR_Muzzle"};
				weapons[] = {"3AS_Sabre_Cannons","SmokeLauncher","Missiles_DAGR"};
				magazines[] = {"3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","12Rnd_PG_Missiles"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim = "zasleh2";
				flash = "gunfire";
				animationSourceBody = "obTurret";
				animationSourceGun = "obGun";
				body = "obTurret";
				gun = "obGun";
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1,50};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "commanderview";
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 0;
				visionMode[] = {"Normal"};
				thermalMode[] = {};
				missileBeg = "missleEnd";
				missileEnd = "missleBeg";
				gunnerInOpticsShowCursor = 1;
				usepip = 2;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				gunnerAction = "Saber_Driver";
				forceHideGunner = 1;
				outGunnerMayFire = 0;
				gunnerInAction = "Saber_Driver";
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				proxyIndex = 2;
				viewGunnerInExternal = 1;
				proxytype = "CPGunner";
				gunnername = "Gunner";
				commanding = 1;
				personTurretAction = "vehicle_turnout_1";
				minOutElev = -10;
				maxOutElev = 15;
				initOutElev = 0;
				minOutTurn = -45;
				maxOutTurn = 90;
				initOutTurn = 0;
				minTurn = -15;
				maxTurn = 15;
				initTurn = 0;
				minElev = -8;
				maxElev = 20;
				initElev = 0;
				inGunnerMayFire = 1;
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				class HitPoints
				{
					class HitTurret
					{
						armor = 1.2;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 1.2;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {800,400,200,1600};
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
								range[] = {800,400,200,1600};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				class Turrets{};
			};
			class Mainturret_top: MainTurret_bottom
			{
				body = "MainTurret";
				gun = "MainGun";
				proxyIndex = 1;
				gunnername = "Commander";
				animationSourceBody = "Mainturret";
				animationSourceGun = "Maingun";
				AnimationSourceHatch = "HatchCommander";
				minOutElev = -10;
				maxOutElev = 15;
				initOutElev = 0;
				minOutTurn = -360;
				maxOutTurn = 360;
				initOutTurn = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minElev = -15;
				maxElev = 15;
				initElev = 0;
				gunnerAction = "Saber_Commander_OUT";
				gunnerInAction = "Saber_Commander_In";
				ejectDeadGunner = 1;
				forceHideGunner = 0;
				outGunnerMayFire = 1;
				ingunnerMayFire = 0;
				stabilizedInAxes = 3;
				ispersonturret = 0;
				userpip = 0;
				enabledByAnimationSource = "HatchCommander";
				gunnerRightHandAnimName = "HandR";
				gunnerLeftHandAnimName = "HandL";
				personTurretAction = "vehicle_turnout_1";
				memoryPointGun[] = {"usti hlavne3","usti hlavne4"};
				weapons[] = {"3AS_Sabre_MG","SmokeLauncher"};
				magazines[] = {"3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","SmokeLauncherMag"};
				memoryPointGunnerOptics = "gunnerview";
				gunnerHasFlares = 1;
				gunnerOutOpticsShowCursor = 1;
				maxHorizontalRotSpeed = 0.615;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.3;
						material = -1;
						name = "Commander_Turret";
						visual = "commander_turret";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "Commander_Gun";
						visual = "Commander_Gun";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
				selectionFireAnim = "zasleh3";
				class Turrets{};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {800,400,200,1600};
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
								range[] = {800,400,200,1600};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				canHideGunner = 0;
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				gunnerName = "$STR_A3_TURRETS_BENCH_R1";
				proxyIndex = 1;
				soundAttenuationTurret = "HeliAttenuationGunner";
				isPersonTurret = 1;
				ejectDeadGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_04[] = {-65,95};
				};
				playerPosition = 4;
				gunnerGetInAction = "GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				gunnerName = "$STR_A3_TURRETS_BENCH_L2";
				proxyIndex = 2;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-65,95};
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments = "Compartment3";
				gunnerName = "$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 3;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-95,65};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments = "Compartment2";
				gunnerName = "$STR_A3_TURRETS_BENCH_R2";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 4;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-95,65};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
	};
	class 3AS_Saber_Base: 3AS_Saber_01_Base{};
	class 332nd_Saber_Tank: 3AS_Saber_Base
	{
		author = "Cherryy & 3AS";
		scope = 2;
        faction="332nd_Faction";
		displayname = "[332nd] TX-130";
		hiddenSelections[] = {"Camo1","Camo2"};
		editorPreview = "\3AS\3AS_Saber\images\3AS_Saber_M1.jpg";
		hiddenSelectionsTextures[] = {"332nd_Aux\Vehicles\TX-130_Series\tex\332nd_Saber_Tank.paa","3AS\3AS_Saber\data\Saber_weapons_co.paa"};
        class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret
			{
	
				weapons[] = {"3AS_Sabre_Cannons","SmokeLauncher","332nd_Saber_Missile_Launcher"};
				magazines[] = {"3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","3AS_50Rnd_Sabre_Mag","332nd_Saber_Missile_Pack"};
				
			};

		};
	};
};
/* class CfgAmmo 
{
    class 332nd_Saber_Missile 
    {
        airLock=1;
        fuseDistance=1;
		thrustTime=200;
    };
    class CMflare_Chaff_Ammo;
	class 3AS_Saber_CMFlare_Chaff_Ammo: CMflare_Chaff_Ammo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8+ 16";
	};
}; */
/* class CfgMagazines
{
	class 60Rnd_CMFlare_Chaff_Magazine;
	class 3AS_60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		ammo = "3AS_Saber_CMFlare_Chaff_Ammo";
	};
    class 332nd_Saber_Missile_Pack;
    {
		ammo = "332nd_Saber_Missile";
        count = 12;
        effectsMissile = "332nd_Effect_Anvil";
	};
}; 
class CfgWeapons
{
	class CMFlareLauncher;
	class 3AS_CMFlareLauncher: CMFlareLauncher
	{
		magazines[] = {"3AS_60Rnd_CMFlare_Chaff_Magazine"};
	};
    class 332nd_Saber_Missile_Launcher;
    {
		magazines[] = {"332nd_Saber_Missile_Pack"};
	};
}; 
 */