class CfgPatches
{
	class 332nd_ATTE
	{
		requiredAddons[] = {"3AS_ATTE"};
		units[] = 
		{
			"332nd_ATTE",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class Eventhandlers;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class AnimationSources;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources: AnimationSources
		{
		};
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class EventHandlers;
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
	class Wreck_Base_F;
    class 3AS_ATTE_Base: APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurret {};
			class MainTurretFront: MainTurretTop {};
			class MainTurretBack: MainTurretFront {};
		};
	};
    class 332nd_ATTE: 3AS_ATTE_Base
    {
		faction="332nd_Faction";
		displayname="[332nd] AT-TE ";
		side = 1;
		editorSubcategory="3AS_EdSubcat_Walker";
		//transportSoldier = 26;
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo11"
		};
		hiddenselectionstextures[]=
		{
			"332nd_Aux\Vehicles\AT-TE\tex\332nd_ATTE_Shell.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
			"332nd_Aux\Vehicles\AT-TE\tex\332nd_ATTE_Legs.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
		class TextureSources
		{
			class 332nd_Base_Tex
			{
				displayname="332nd Base";
				author = "Ithias";
				textures[]=
				{
					"332nd_Aux\Vehicles\AT-TE\tex\332nd_ATTE_Shell.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"332nd_Aux\Vehicles\AT-TE\tex\332nd_ATTE_Legs.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"332nd_Faction"
				};
			};
			class 332nd_3AS_Base_Tex
			{
				displayname="3AS Base";
				author = "Ithias";
				textures[] = 
				{
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"332nd_Faction"
				};
			};
		};
		textureList[]=
		{
			"332nd_Base_Tex",
			"332nd_3AS_Base_Tex",
			1,
		};
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				weapons[] = 
				{
					"332nd_Mass_Driver_Cannon",
					"SmokeLauncher"
				};
				magazines[] = 
				{
					"332nd_30Rnd_Mass_Driver_shells",
					"332nd_30Rnd_Mass_Driver_shells",
					"332nd_30Rnd_Mass_Driver_shells",
					"SmokeLauncherMag"
				};
			};
			class MainTurretFront: MainTurretFront
			{

			};
			class MainTurretBack: MainTurretBack
			{

			};
		};
	};

};

class CfgWeapons
{
	class 3AS_Mass_Driver_Cannon;
	class 332nd_Mass_Driver_Cannon: 3AS_Mass_Driver_Cannon
	{
		displayName = "[332nd] Mass Driver Cannon";
		magazines[] = 
		{
			"332nd_30Rnd_Mass_Driver_shells"
		};
	};
};

class CfgMagazines
{
	class 3AS_30Rnd_Mass_Driver_shells;
	class 332nd_30Rnd_Mass_Driver_shells :3AS_30Rnd_Mass_Driver_shells
	{
		ammo = "332nd_Mass_Driver_Shell";
	};
};

class CfgAmmo
{
	class 3AS_Mass_Driver_Shell;
	class 332nd_Mass_Driver_Shell: 3AS_Mass_Driver_Shell
	{
		hit = 1000; //was 800
	};
};