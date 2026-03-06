class CfgPatches 
{
	class 332nd_Crates 
	{
		units[] = 
        {
			"332nd_Ammo_Crate",
			"332nd_Medical_Crate",
			"332nd_Equipment_Crate",
			"332nd_Refueling_Barrel",
        };
		weapons[] = 
        {
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_Prop_Crates",
		};
	};
};
//#include "xtdGear.hpp"

class CfgEditorCategories
{
	class 332nd_Crates
	{
		displayname = "[332nd] Crates";
	};
};

class CfgVehicles 
{
	class 3AS_Supply_Large_Prop;
	class 3AS_Small_Fuel_Barrel;

	// AMMO CRATE
	class 332nd_Ammo_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		displayName = "[332nd] Supply Crate (Ammo)";
		editorCategory = "332nd_Crates";
		editorSubcategory = "EdSubcat_332nd_Resupply_Crates";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Ammo_Prop.jpg";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"
		};

		class TransportMagazines
		{
			class 332nd_DC15A_Mag
			{
				count = 100;
				magazine = "332nd_DC15A_Mag";
			};
			class 332nd_DC15C_Mag
			{
				count = 100;
				magazine = "332nd_DC15C_Mag";
			};
			class 332nd_DC15L_Mag
			{
				count = 100;
				magazine = "332nd_DC15L_Mag";
			};
			class 332nd_DC15LE_Mag
			{
				count = 100;
				magazine = "332nd_DC15LE_Mag";
			};
			class 332nd_C_24_Mag
			{
				count = 100;
				magazine = "332nd_C_24_Mag";
			};
			class 332nd_C_24_Flamer_Mag
			{
				count = 50;
				magazine = "332nd_C_24_Flamer_Mag";
			};
			class 332nd_EPL_Mag
			{
				count = 100;
				magazine = "332nd_EPL_Mag";
			};
			class 332nd_EPL_AT_Mag
			{
				count = 50;
				magazine = "332nd_EPL_AT_Mag";
			};
			class 332nd_DLT15_Mag
			{
				count = 100;
				magazine = "332nd_DLT15_Mag";
			};
			class 332nd_DW_32S_Mag
			{
				count = 100;
				magazine = "332nd_DW_32S_Mag";
			};
			class 332nd_EPL_2_Mag
			{
				count = 100;
				magazine = "332nd_EPL_2_Mag";
			};
			class 332nd_Firepuncher_Mag
			{
				count = 100;
				magazine = "332nd_Firepuncher_Mag";
			};
			class 332nd_ScatterGun_Scattershot_Mag
			{
				count = 100;
				magazine = "332nd_ScatterGun_Scattershot_Mag";
			};
			class 332nd_ScatterGun_Condensedshot_Mag
			{
				count = 100;
				magazine = "332nd_ScatterGun_Condensedshot_Mag";
			};
			class 332nd_Slug_Thrower_Mag
			{
				count = 100;
				magazine = "332nd_Slug_Thrower_Mag";
			};
			class 332nd_Westar_Mag
			{
				count = 100;
				magazine = "332nd_Westar_Mag";
			};
			class 332nd_HE_UGLGrenade_Mag
			{
				count = 50;
				magazine = "332nd_HE_UGLGrenade_Mag";
			};
			class ACE_HuntIR_M203
			{
				count = 50;
				magazine = "ACE_HuntIR_M203";
			};
			class 332nd_Smoke_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_Smoke_LauncherGrenade";
			};
			class 332nd_Smoke_LauncherGrenade_3GL
			{
				count = 50;
				magazine = "332nd_Smoke_LauncherGrenade_3GL";
			};
			class 332nd_SmokeRed_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeRed_LauncherGrenade";
			};
			class 332nd_SmokeGreen_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeGreen_LauncherGrenade";
			};
			class 332nd_SmokeBlue_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeBlue_LauncherGrenade";
			};
			class 332nd_SmokePurple_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokePurple_LauncherGrenade";
			};
			class 332nd_Westar_Rifle_Grenade
			{
				count = 25;
				magazine = "332nd_Westar_Rifle_Grenade_Mag";
			};
			class 332nd_DC15S_Low_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_Low_Mag";
			};
			class 332nd_DC15S_High_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_High_Mag";
			};
			class 332nd_DC15X_Charged_Mag
			{
				count = 100;
				magazine = "332nd_DC15X_Charged_Mag";
			};
			class 332nd_DC15X_Mag
			{
				count = 100;
				magazine = "332nd_DC15X_Mag";
			};
			class 332nd_DP23_Mag
			{
				count = 100;
				magazine = "332nd_DP23_Mag";
			};
			class 332nd_Valken_Mag
			{
				count = 100;
				magazine = "332nd_Valken_Mag";
			};
			class 332nd_Z6_Mag
			{
				count = 100;
				magazine = "332nd_Z6_Mag";
			};
			class 332nd_DC17S_Mag
			{
				count = 100;
				magazine = "332nd_DC17S_Mag";
			};
			class 332nd_DC15SA_Mag
			{
				count = 100;
				magazine = "332nd_DC15SA_Mag";
			};
			class 332nd_DC17S_Mag_Dual
			{
				count = 100;
				magazine = "332nd_DC17S_Mag_Dual";
			};
			class 332nd_Sidearm_Stun_Mag
			{
				count = 100;
				magazine = "332nd_Sidearm_Stun_Mag";
			};
			class 332nd_RPS6_Mag
			{
				count = 25;
				magazine = "332nd_RPS6_Mag";
			};
			class 332nd_PLX1_Mag
			{
				count = 25;
				magazine = "332nd_PLX1_Mag";
			};
			class 332nd_Heavy_Repeater_Mag
			{
				count = 25;
				magazine = "332nd_Heavy_Repeater_Mag";
			};

			// moved from TransportItems – these are mags/grenades
			class 3AS_SmokeWhite
			{
				count = 50;
				magazine = "3AS_SmokeWhite";
			};
			class 3AS_SmokeBlue
			{
				count = 25;
				magazine = "3AS_SmokeBlue";
			};
			class 3AS_SmokeGreen
			{
				count = 25;
				magazine = "3AS_SmokeGreen";
			};
			class 3AS_SmokeOrange
			{
				count = 25;
				magazine = "3AS_SmokeOrange";
			};
			class 3AS_SmokePurple
			{
				count = 25;
				magazine = "3AS_SmokePurple";
			};
			class 3AS_SmokeRed
			{
				count = 25;
				magazine = "3AS_SmokeRed";
			};
			class 3AS_SmokeYellow
			{
				count = 25;
				magazine = "3AS_SmokeYellow";
			};
			class 332nd_Remote_Charge_Mag
			{
				count = 25;
				magazine = "332nd_Remote_Charge_Mag";
			};
			class 332nd_Thermal_Detonator
			{
				count = 25;
				magazine = "332nd_Thermal_Detonator";
			};
			class 332nd_DroidPopper_x1_mag
			{
				count = 25;
				magazine = "332nd_DroidPopper_x1_mag";
			};
			class 332nd_Detonation_pack_Mag
			{
				count = 10;
				magazine = "332nd_Detonation_pack_Mag";
			};
		};

		class TransportItems
		{
			// keep the throwable “items” here
			class 332nd_Remote_Charge_Throwable
			{
				count = 25;
				name = "332nd_Remote_Charge_Throwable";
			};
			class 332nd_Detonation_pack_Throwable
			{
				count = 10;
				name = "332nd_Detonation_pack_Throwable";
			};
		};

		class TransportWeapons
		{
			class 332nd_Dispo_F
			{
				count = 6;
				weapon = "332nd_Dispo_F";
			};
		};
	};

	// MEDICAL CRATE
	class 332nd_Medical_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		displayName = "[332nd] Supply Crate (Medical)";
		editorCategory = "332nd_Crates";
		editorSubcategory = "EdSubcat_332nd_Resupply_Crates";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"
		};

		class TransportItems
		{
			class 332nd_Acti_Bandage_Weap
			{
				count = 250;
				name = "332nd_Acti_Bandage_Weap";
			};
			class 332nd_Bacta_Spray_Weap
			{
				count = 10;
				name = "332nd_Bacta_Spray_Weap";
			};
			class 332nd_Painkiller_Weap
			{
				count = 100;
				name = "332nd_Painkiller_Weap";
			};
			class ACE_epinephrine
			{
				count = 25;
				name = "ACE_epinephrine";
			};
			class ACE_morphine
			{
				count = 25;
				name = "ACE_morphine";
			};
			class ACE_plasmaIV
			{
				count = 25;
				name = "ACE_plasmaIV";
			};
			class ACE_plasmaIV_250
			{
				count = 25;
				name = "ACE_plasmaIV_250";
			};
			class ACE_plasmaIV_500
			{
				count = 25;
				name = "ACE_plasmaIV_500";
			};
			class ACE_splint
			{
				count = 25;
				name = "ACE_splint";
			};
			class ACE_surgicalKit
			{
				count = 5;
				name = "ACE_surgicalKit";
			};
			class ACE_tourniquet
			{
				count = 25;
				name = "ACE_tourniquet";
			};
		};
	};

	// EQUIPMENT CRATE
	class 332nd_Equipment_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		displayName = "[332nd] Supply Crate (Equipment)";
		editorCategory = "332nd_Crates";
		editorSubcategory = "EdSubcat_332nd_Resupply_Crates";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"
		};

		class TransportItems
		{
			class ACE_DefusalKit
			{
				count = 5;
				name = "ACE_DefusalKit";
			};
			class ACE_EntrenchingTool
			{
				count = 10;
				name = "ACE_EntrenchingTool";
			};
			class ACE_HuntIR_monitor
			{
				count = 5;
				name = "ACE_HuntIR_monitor";
			};
			class ACE_M26_Clacker
			{
				count = 5;
				name = "ACE_M26_Clacker";
			};
			class ACE_Flashlight_XL50
			{
				count = 10;
				name = "ACE_Flashlight_XL50";
			};
			class MineDetector
			{
				count = 10;
				name = "MineDetector";
			};
			class ToolKit
			{
				count = 5;
				name = "ToolKit";
			};
			class ACE_wirecutter
			{
				count = 5;
				name = "ACE_wirecutter";
			};
			class ACE_CableTie
			{
				count = 50;
				name = "ACE_CableTie";
			};
			class ACE_IR_Strobe_Item
			{
				count = 25;
				name = "ACE_IR_Strobe_Item";
			};
			class ItemcTabHCam
			{
				count = 10;
				name = "ItemcTabHCam";
			};
			class JLTS_clone_comlink
			{
				count = 10;
				name = "JLTS_clone_comlink";
			};
			class ItemMap 
			{
				count = 10;
				name = "ItemMap";
			};
			class ItemcTab 
			{
				count = 10;
				name = "ItemcTab";
			};
			class ItemCompass 
			{
				count = 10;
				name = "ItemCompass";
			};
			class ACE_Altimeter 
			{
				count = 10;
				name = "ACE_Altimeter";
			};
			class 332nd_NVG_Chip 
			{
				count = 10;
				name = "332nd_NVG_Chip";
			};
			class 332nd_Helmet_P2_CT 
			{
				count = 5;
				name = "332nd_Helmet_P2_CT";
			};
			class 332nd_Trooper_Vest 
			{
				count = 5;
				name = "332nd_Trooper_Vest";
			};
			class 332nd_Uniform_Clone_CT 
			{
				count = 5;
				name = "332nd_Uniform_Clone_CT";
			};
		};

		class TransportWeapons
		{
			class 332nd_DC15A
			{
				count = 10;
				weapon = "332nd_DC15A";
			};
			class 332nd_DC15C
			{
				count = 10;
				weapon = "332nd_DC15C";
			};
			class 332nd_DC15S
			{
				count = 10;
				weapon = "332nd_DC15S";
			};
			class 332nd_DP23
			{
				count = 10;
				weapon = "332nd_DP23";
			};
			class 332nd_DC17S
			{
				count = 10;
				weapon = "332nd_DC17S";
			};
			class 332nd_CSW_Heavy_Repeater_W
			{
				count = 10;
				weapon = "332nd_CSW_Heavy_Repeater_W";
			};
			class 332nd_CSW_Heavy_Repeater_Baseplate_W
			{
				count = 10;
				weapon = "332nd_CSW_Heavy_Repeater_Baseplate_W";
			};

			// Optics / attachments still treated as weapons (CfgWeapons)
			class 332nd_Mode_A_Raised
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised";
			};
			class 332nd_Mode_A_Raised_Forward
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised_Forward";
			};
			class 332nd_Mode_A_Raised_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised_2";
			};
			class 332nd_Mode_A_Zoom_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2";
			};
			class 332nd_Mode_A_Zoom_2_Raised
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised";
			};
			class 332nd_Mode_A_Zoom_2_Forward
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Forward";
			};
			class 332nd_Mode_A_Zoom_2_Raised_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised_2";
			};
			class 332nd_Mode_A_Zoom_2_Raised_Forward_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised_Forward_2";
			};
			class 332nd_Binocular 
			{
				count = 10;
				weapon = "332nd_Binocular";
			};
		};

		class TransportBackpacks
		{
			class 332nd_Bag
			{
				count = 5;
				backpack = "332nd_Bag";
			};
		};
	};

	// GENERAL RESUPPLY CRATE
	class 332nd_Resupply_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "332nd_Resupply_Crate";
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		displayName = "[332nd] Supply Crate";
		editorCategory = "332nd_Crates";
		editorSubcategory = "EdSubcat_332nd_Resupply_Crates";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};

		class TransportItems
		{
			// MEDICAL
			class 332nd_Acti_Bandage_Weap
			{
				count = 250;
				name = "332nd_Acti_Bandage_Weap";
			};
			class 332nd_Bacta_Spray_Weap
			{
				count = 10;
				name = "332nd_Bacta_Spray_Weap";
			};
			class 332nd_Painkiller_Weap
			{
				count = 100;
				name = "332nd_Painkiller_Weap";
			};
			class ACE_epinephrine
			{
				count = 25;
				name = "ACE_epinephrine";
			};
			class ACE_morphine
			{
				count = 25;
				name = "ACE_morphine";
			};
			class ACE_plasmaIV
			{
				count = 25;
				name = "ACE_plasmaIV";
			};
			class ACE_plasmaIV_250
			{
				count = 25;
				name = "ACE_plasmaIV_250";
			};
			class ACE_plasmaIV_500
			{
				count = 25;
				name = "ACE_plasmaIV_500";
			};
			class ACE_splint
			{
				count = 25;
				name = "ACE_splint";
			};
			class ACE_surgicalKit
			{
				count = 5;
				name = "ACE_surgicalKit";
			};
			class ACE_tourniquet
			{
				count = 25;
				name = "ACE_tourniquet";
			};

			// TOOLS / GEAR
			class ACE_DefusalKit
			{
				count = 5;
				name = "ACE_DefusalKit";
			};
			class ACE_EntrenchingTool
			{
				count = 10;
				name = "ACE_EntrenchingTool";
			};
			class ACE_HuntIR_monitor
			{
				count = 5;
				name = "ACE_HuntIR_monitor";
			};
			class ACE_M26_Clacker
			{
				count = 5;
				name = "ACE_M26_Clacker";
			};
			class ACE_Flashlight_XL50
			{
				count = 10;
				name = "ACE_Flashlight_XL50";
			};
			class MineDetector
			{
				count = 10;
				name = "MineDetector";
			};
			class ToolKit
			{
				count = 5;
				name = "ToolKit";
			};
			class ACE_wirecutter
			{
				count = 5;
				name = "ACE_wirecutter";
			};
			class ACE_CableTie
			{
				count = 50;
				name = "ACE_CableTie";
			};
			class ACE_IR_Strobe_Item
			{
				count = 25;
				name = "ACE_IR_Strobe_Item";
			};
			class ItemcTabHCam
			{
				count = 10;
				name = "ItemcTabHCam";
			};

			// THROWABLE “ITEM” VARIANTS
			class 332nd_Remote_Charge_Throwable
			{
				count = 25;
				name = "332nd_Remote_Charge_Throwable";
			};
			class 332nd_Detonation_pack_Throwable
			{
				count = 10;
				name = "332nd_Detonation_pack_Throwable";
			};

			// MAP / NAV / COMMS / WEARABLES
			class ItemMap 
			{
				count = 10;
				name = "ItemMap";
			};
			class ItemcTab 
			{
				count = 10;
				name = "ItemcTab";
			};
			class ItemCompass 
			{
				count = 10;
				name = "ItemCompass";
			};
			class ACE_Altimeter 
			{
				count = 10;
				name = "ACE_Altimeter";
			};
			class JLTS_clone_comlink
			{
				count = 10;
				name = "JLTS_clone_comlink";
			};
			class 332nd_Helmet_P2_CT 
			{
				count = 5;
				name = "332nd_Helmet_P2_CT";
			};
			class 332nd_Uniform_Clone_CT 
			{
				count = 5;
				name = "332nd_Uniform_Clone_CT";
			};
			class 332nd_Trooper_Vest 
			{
				count = 5;
				name = "332nd_Trooper_Vest";
			};
		};

		class TransportWeapons
		{
			class 332nd_DC15A
			{
				count = 10;
				weapon = "332nd_DC15A";
			};
			class 332nd_DC15C
			{
				count = 10;
				weapon = "332nd_DC15C";
			};
			class 332nd_DC15S
			{
				count = 10;
				weapon = "332nd_DC15S";
			};
			class 332nd_DP23
			{
				count = 10;
				weapon = "332nd_DP23";
			};
			class 332nd_DC17S
			{
				count = 10;
				weapon = "332nd_DC17S";
			};
			class 332nd_CSW_Heavy_Repeater_W
			{
				count = 10;
				weapon = "332nd_CSW_Heavy_Repeater_W";
			};
			class 332nd_CSW_Heavy_Repeater_Baseplate_W
			{
				count = 10;
				weapon = "332nd_CSW_Heavy_Repeater_Baseplate_W";
			};


			class 332nd_Mode_A_Raised
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised";
			};
			class 332nd_Mode_A_Raised_Forward
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised_Forward";
			};
			class 332nd_Mode_A_Raised_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Raised_2";
			};
			class 332nd_Mode_A_Zoom_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2";
			};
			class 332nd_Mode_A_Zoom_2_Raised
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised";
			};
			class 332nd_Mode_A_Zoom_2_Forward
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Forward";
			};
			class 332nd_Mode_A_Zoom_2_Raised_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised_2";
			};
			class 332nd_Mode_A_Zoom_2_Raised_Forward_2
			{
				count = 10;
				weapon = "332nd_Mode_A_Zoom_2_Raised_Forward_2";
			};

			class 332nd_NVG_Chip 
			{
				count = 10;
				weapon = "332nd_NVG_Chip";
			};
			class 332nd_Binocular 
			{
				count = 10;
				weapon = "332nd_Binocular";
			};
			class 332nd_Dispo_F
			{
				count = 6;
				weapon = "332nd_Dispo_F";
			};
		};

		class TransportBackpacks
		{
			class 332nd_Bag
			{
				count = 5;
				backpack = "332nd_Bag";
			};
		};

		class TransportMagazines
		{
			class 332nd_DC15A_Mag
			{
				count = 100;
				magazine = "332nd_DC15A_Mag";
			};
			class 332nd_DC15C_Mag
			{
				count = 100;
				magazine = "332nd_DC15C_Mag";
			};
			class 332nd_DC15L_Mag
			{
				count = 100;
				magazine = "332nd_DC15L_Mag";
			};
			class 332nd_C_24_Mag
			{
				count = 100;
				magazine = "332nd_C_24_Mag";
			};
			class 332nd_C_24_Flamer_Mag
			{
				count = 50;
				magazine = "332nd_C_24_Flamer_Mag";
			};
			class 332nd_DLT15_Mag
			{
				count = 100;
				magazine = "332nd_DLT15_Mag";
			};
			class 332nd_DW_32S_Mag
			{
				count = 100;
				magazine = "332nd_DW_32S_Mag";
			};
			class 332nd_EPL_2_Mag
			{
				count = 100;
				magazine = "332nd_EPL_2_Mag";
			};
			class 332nd_Firepuncher_Mag
			{
				count = 100;
				magazine = "332nd_Firepuncher_Mag";
			};
			class 332nd_ScatterGun_Scattershot_Mag
			{
				count = 100;
				magazine = "332nd_ScatterGun_Scattershot_Mag";
			};
			class 332nd_ScatterGun_Condensedshot_Mag 
			{ 
				count = 100; 
				magazine = "332nd_ScatterGun_Condensedshot_Mag"; 
			}; 
			class 332nd_Slug_Thrower_Mag
			{
				count = 100;
				magazine = "332nd_Slug_Thrower_Mag";
			};
			class 332nd_Westar_Mag
			{
				count = 100;
				magazine = "332nd_Westar_Mag";
			};
			class 332nd_HE_UGLGrenade_Mag
			{
				count = 50;
				magazine = "332nd_HE_UGLGrenade_Mag";
			};
			class ACE_HuntIR_M203 
			{ 
				count = 50; 
				magazine = "ACE_HuntIR_M203"; 
			}; 
			class 332nd_Smoke_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_Smoke_LauncherGrenade";
			};
			class 332nd_Smoke_LauncherGrenade_3GL 
			{ 
				count = 50; 
				magazine = "332nd_Smoke_LauncherGrenade_3GL"; 
			}; 
			class 332nd_SmokeRed_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeRed_LauncherGrenade";
			};
			class 332nd_SmokeGreen_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeGreen_LauncherGrenade";
			};
			class 332nd_SmokeBlue_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokeBlue_LauncherGrenade";
			};
			class 332nd_SmokePurple_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_SmokePurple_LauncherGrenade";
			};
			class 332nd_Westar_Rifle_Grenade
			{
				count = 25;
				magazine = "332nd_Westar_Rifle_Grenade_Mag";
			};
			class 332nd_DC15S_Low_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_Low_Mag";
			};
			class 332nd_DC15S_High_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_High_Mag";
			};
			class 332nd_DC15X_Mag
			{
				count = 100;
				magazine = "332nd_DC15X_Mag";
			};
			class 332nd_DP23_Mag
			{
				count = 100;
				magazine = "332nd_DP23_Mag";
			};
			class 332nd_Valken_Mag
			{
				count = 100;
				magazine = "332nd_Valken_Mag";
			};
			class 332nd_Z6_Mag
			{
				count = 100;
				magazine = "332nd_Z6_Mag";
			};
			class 332nd_DC17S_Mag
			{
				count = 100;
				magazine = "332nd_DC17S_Mag";
			};
			class 332nd_DC17S_Mag_Dual
			{
				count = 100;
				magazine = "332nd_DC17S_Mag_Dual";
			};
			class 332nd_Sidearm_Stun_Mag
			{
				count = 100;
				magazine = "332nd_Sidearm_Stun_Mag";
			};
			class 332nd_RPS6_Mag
			{
				count = 25;
				magazine = "332nd_RPS6_Mag";
			};
			class 332nd_PLX1_Mag
			{
				count = 25;
				magazine = "332nd_PLX1_Mag";
			};

			// moved from Items – grenade/mag variants
			class 3AS_SmokeWhite
			{
				count = 50;
				magazine = "3AS_SmokeWhite";
			};
			class 3AS_SmokeBlue
			{
				count = 25;
				magazine = "3AS_SmokeBlue";
			};
			class 3AS_SmokeGreen
			{
				count = 25;
				magazine = "3AS_SmokeGreen";
			};
			class 3AS_SmokeOrange
			{
				count = 25;
				magazine = "3AS_SmokeOrange";
			};
			class 3AS_SmokePurple
			{
				count = 25;
				magazine = "3AS_SmokePurple";
			};
			class 3AS_SmokeRed
			{
				count = 25;
				magazine = "3AS_SmokeRed";
			};
			class 3AS_SmokeYellow
			{
				count = 25;
				magazine = "3AS_SmokeYellow";
			};
			class 332nd_Thermal_Detonator
			{
				count = 25;
				magazine = "332nd_Thermal_Detonator";
			};
			class 332nd_DroidPopper_x1_mag
			{
				count = 25;
				magazine = "332nd_DroidPopper_x1_mag";
			};
			class 332nd_Remote_Charge_Mag
			{
				count = 25;
				magazine = "332nd_Remote_Charge_Mag";
			};
			class 332nd_Detonation_pack_Mag
			{
				count = 10;
				magazine = "332nd_Detonation_pack_Mag";
			};
		};
	};

	// REFUEL BARREL
	class 332nd_Refueling_Barrel: 3AS_Small_Fuel_Barrel
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[332nd] Refueling Barrel";
		editorCategory = "332nd_Crates";
		editorSubcategory = "EdSubcat_332nd_Resupply_Crates";
	};
};
