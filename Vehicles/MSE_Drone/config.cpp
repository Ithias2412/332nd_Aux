class CfgPatches
{
    class 332nd_Drone_MSE
    {
        units[] = 
		{
			"332nd_MSE6_Drone",
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
	class ACE_ItemCore;
	class sch_packableItem: ACE_ItemCore
	{
		class ItemInfo;
	};
	class 332nd_MSE6_Packed: sch_packableItem
	{
		displayName = "[332nd] MSE6 Drone (RTO)";
		scope = 2;
		scopeCurator = 2;
		sch_unPacksTo = "332nd_MSE6_Drone";
		class ItemInfo: ItemInfo
		{
			allowedSlots[] = {901};
			mass = 50;
			scope = 0;
			type = 302;
		};
	};
};



class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class NewTurret;
	};
	class Land: AllVehicles
	{
		class NewTurret: NewTurret
		{
			
		};
	};
	class LandVehicle: Land
	{
		class NewTurret: NewTurret
		{
			
		};
	};
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class Car_F: Car
	{
		class NewTurret: NewTurret
		{
			
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				
			};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			
		};
	};
	class B_UGV_01_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			
		};
	};
	class JLTS_UGV_MSE6: B_UGV_01_F
	{
		class Turrets: Turrets
		{
			
		};
		class UserActions;
		class EventHandlers;
	};
	class 332nd_MSE6_Drone: JLTS_UGV_MSE6
	{
		displayName = "[332nd] MSE6 Drone";
		faction = "332nd_Faction";
		
		isUav = 1;
		vehicleClass = "Autonomous";
		
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\drones\MSE6\data\mse6_body_co.paa",
			"\MRC\JLTS\drones\MSE6\data\mse6_parts_co.paa"
		};
		textureList[] = 
		{
			"gray",1,
		};
		//fuelCapacity = 5;
		//fuelConsumptionRate = 0.01;
		camouflage = 0.1; // 0.6 = Sniper
		//armor = 5; // was 0.5
		class EventHandlers: EventHandlers 
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			hitPart = "(_this select 0) call JLTS_fnc_mse6OnHit";
			init = "(_this # 0) spawn {_this disableAI 'lights'};if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; }";
		};
		class Attributes
		{
			class JLTS_mse6_var_idleSounds
			{
				control = "CheckboxNumber";
				defaultValue = 1;
				displayName = "Idle sounds";
				expression = "_this setVariable ['%s',_value,true];";
				property = "JLTS_mse6_config_mode_idleSounds";
				tooltip = "Spawn idle sound loop";
			};
			class PlateNumber
			{
				control = "EditShort";
				defaultValue = "getPlateNumber _this";
				displayName = "Set droid ID number";
				expression = "_this setPlateNumber format['%1',_value];";
				property = "spz";
				tooltip = "Number painted on the front and back of the droid";
				validate = "STRING";
			};
		};
		class UserActions: UserActions
		{
			class Detonate
			{
				displayName = "NA";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				inGunnerMayFire = 1;
				isCopilot = 0;
				outGunnerMayFire = 1;
				primaryGunner = 1;
				turretInfoType = "RscOptics_UAV_gunner";
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
				};
			};
		};
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
			class gray
			{
				author = "MrClock";
				displayName = "Gray";
				factions[] = {};
				textures[] = {"\MRC\JLTS\drones\MSE6\data\mse6_body_co.paa","\MRC\JLTS\drones\MSE6\data\mse6_parts_co.paa"};
			};
		};
		sch_PacksTo = "332nd_MSE6_Packed";
		class ACE_Actions: ACE_Actions 
		{
			class ACE_MainActions: ACE_MainActions 
			{
				class SCH_PackDarter 
				{
					displayName = "Repack UGV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call sch_packable_fnc_Pack";
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
					class SCH_Unpack_332nd_MSE6_Drone
					{
						displayName = "[332nd] MSE6 Drone";
						condition = "'332nd_MSE6_Packed' in (items _player)";
						statement = "['332nd_MSE6_Packed',_player] call sch_packable_fnc_unPack";
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