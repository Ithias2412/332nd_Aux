class CfgPatches
{
    class 332nd_Radio_Post
    {
        units[] = 
		{
			"332nd_Radio_Post_Crate",
			"332nd_Radio_Post_Radio",
			"332nd_Radio_Post_Antenna",
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
	class 332nd_Radio_Post_Crate_Packed: sch_packableItem
	{
		displayName = "[332nd] Radio Post (ARF)";
		scope = 2;
		scopeCurator = 2;
		sch_unPacksTo = "332nd_Radio_Post_Crate";
		class ItemInfo: ItemInfo
		{
			allowedSlots[] = {901};
			mass = 10;
			scope = 0;
			type = 302;
		};
	};
};

class CfgVehicles
{
	class OmniDirectionalAntenna_01_black_F;
	class 332nd_Radio_Post_Antenna: OmniDirectionalAntenna_01_black_F
	{
		scope=2;
		displayName = "[332nd] Radio Post Antenna";
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		ace_dragging_canCarry = 1;
		class ACE_Actions 
		{
			class ACE_MainActions 
			{
				condition = "true";
				displayName = "Interactions";
				distance = 4;
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
			};
		};
	};
	class ls_radio;
	class 3as_Small_Box_3_prop;
	class 332nd_Radio_Post_Crate: ls_radio
	{
		scope=2;
		simulation = "thing";
		displayName = "[332nd] Radio Post Crate";
		sch_PacksTo = "332nd_Radio_Post_Crate_Packed";
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 5;
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		ace_dragging_canCarry = 1;
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3as_Small_Box_3_prop.jpg";
		model = "3as\3as_props\crates\models\Small_Box_3.p3d";
		class ace_cargo 
		{
			class cargo 
			{
				class 332nd_Radio_Post_Antenna 
				{ 
					type = "332nd_Radio_Post_Antenna";
					amount = 1;
				};
			};
		};
		class ACE_Actions 
		{
			class ACE_MainActions 
			{
				condition = "true";
				displayName = "Interactions";
				distance = 4;
				position = "[_target, ace_interact_menu_cameraPosASL] call ace_interaction_fnc_getVehiclePosComplex";
				selection = "";
				class SCH_PackDarter 
				{
					displayName = "Repack Crate";
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
					class SCH_Unpack_332nd_Radio_Post_Crate
					{
						displayName = "[332nd] Radio Post";
						condition = "'332nd_Radio_Post_Crate_Packed' in (items _player)";
						statement = "['332nd_Radio_Post_Crate_Packed',_player] call sch_packable_fnc_unPack";
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

class Extended_InitPost_EventHandlers 
{
    class 332nd_Radio_Post_Antenna 
	{
        class tfar_antennas 
		{
            clientInit = "[_this select 0,50000] call tfar_antennas_fnc_initRadioTower";
        };
    };
};

class Extended_Deleted_EventHandlers 
{
    class 332nd_Radio_Post_Antenna 
	{
        tfar_antennas = "(_this param [0,_this]) call tfar_antennas_fnc_deleteRadioTower";
    };
};