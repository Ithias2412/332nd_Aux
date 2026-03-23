class CfgPatches
{
    class 332nd_Drone
    {
        units[] = 
		{
			"332nd_Prowler_Drone",
		};
        weapons[] = 
		{
			"",
		};
        requiredVersion = 0.1;
        requiredAddons[] = {}; 
    };
};

class CfgWeapons
{
	class sch_packableItem;
	class 332nd_Drone_Packed: sch_packableItem
	{
		displayName = "[332nd] Prowler Drone";
		scope = 2;
		scopeCurator = 2;
		sch_unPacksTo = "332nd_Prowler_Drone";
	};
};

class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
        class ACE_Actions 
		{
            class ACE_MainActions;
        };
	};
	class Helicopter_Base_F: Helicopter
	{
        class ACE_Actions: ACE_Actions
		{
            class ACE_MainActions: ACE_MainActions 
			{
				
			};
        };
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
        class ACE_Actions: ACE_Actions 
		{
            class ACE_MainActions: ACE_MainActions 
			{
				
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class JLTS_UAV_prowler_base: UAV_01_base_F
	{
	};
	class JLTS_UAV_prowler_gar: JLTS_UAV_prowler_base
	{
	};	
	class 332nd_Prowler_Drone: JLTS_UAV_prowler_gar
	{
		displayName = "[332nd] Prowler Drone";
		faction = "332nd_Faction";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\drones\prowler1000\data\prowler_cis_co.paa"};
		textureList[] = {"Blufor",1};
		fuelCapacity = 5;
		fuelConsumptionRate = 0.01;
		camouflage = 0.1; // 0.6 = Sniper
		armor = 5; // was 0.5
		class assembleInfo 
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		class TextureSources
		{
			class Blufor
			{
				author = "MrClock";
				displayName = "BLUFOR";
				factions[] = {"332nd_Faction"};
				textures[] = {"\MRC\JLTS\drones\prowler1000\data\prowler_cis_co.paa"};
			};
		};
		sch_PacksTo = "332nd_Drone_Packed";
		class ACE_Actions: ACE_Actions 
		{
			class ACE_MainActions: ACE_MainActions 
			{
				class SCH_PackDarter 
				{
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call sch_packable_fnc_Pack";
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {""};
				class OpticsIn
				{
					class Wide
					{
						directionStabilized = 1;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
						initAngleX = 0;
						initAngleY = 0;
						initFov = 0.5;
						maxAngleX = 30;
						maxAngleY = 100;
						maxFov = 0.5;
						minAngleX = -30;
						minAngleY = -100;
						minFov = 0.5;
						opticsDisplayName = "W";
						thermalMode[] = {0,1};
						visionMode[] = {"Normal","NVG","Ti"};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
						initFov = 0.1;
						maxFov = 0.1;
						opticsDisplayName = "M";
					};
				};
			};
		};	
	};
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions 
		{
			class ACE_Equipment 
			{
				class SCH_Unpack 
				{
					class SCH_Unpack_332nd_Prowler_Drone
					{
						displayName = "[332nd] Prowler Drone";
						condition = "'332nd_Drone_Packed' in (items _player)";
						statement = "['332nd_Drone_Packed',_player] call sch_packable_fnc_unPack";
						priority = 1;
						showDisabled = 1;
						exceptions[] = {"isNotInside","isNotSitting"};
						enableInside = 0;
					};
				};
			};
		};
	};
};