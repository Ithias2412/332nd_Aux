class CfgPatches {
	class 332nd_Crates {
		units[] = 
        {
			"332nd_Ammo_Crate",
			"332nd_Medical_Crate",
			"332nd_Equipment_Crate",
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"

class CfgVehicles 
{
	class 3AS_Supply_Large_Prop;


//

	class 332nd_Ammo_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		displayName="[332nd] Supply Crate (Ammo)";
		//editorCategory="332nd_EditorCategory";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Ammo_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
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
			class 332nd_HE_EPL_Mag
			{
				count = 25;
				magazine = "332nd_HE_EPL_Mag";
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
			class 332nd_HE_LGrenade_Mag
			{
				count = 50;
				magazine = "332nd_HE_LGrenade_Mag";
			};
			class 332nd_Smoke_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_Smoke_LauncherGrenade";
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
			class 332nd_DC15S_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_Mag";
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
			class 1Rnd_HE_Grenade_shell
			{
				count = 100;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class 332nd_DC17S_Mag
			{
				count = 100;
				magazine = "332nd_DC17S_Mag";
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
		};
		class TransportItems
		{
			class 3AS_ThermalDetonator
			{
				count = 50;
				name = "3AS_ThermalDetonator";
			};
			class 3AS_SmokeWhite
			{
				count = 50;
				name = "3AS_SmokeWhite";
			};
			class 3AS_SmokeBlue
			{
				count = 25;
				name = "3AS_SmokeBlue";
			};
			class 3AS_SmokeGreen
			{
				count = 25;
				name = "3AS_SmokeGreen";
			};
			class 3AS_SmokeOrange
			{
				count = 25;
				name = "3AS_SmokeOrange";
			};
			class 3AS_SmokePurple
			{
				count = 25;
				name = "3AS_SmokePurple";
			};
			class 3AS_SmokeRed
			{
				count = 25;
				name = "3AS_SmokeRed";
			};
			class 3AS_SmokeYellow
			{
				count = 25;
				name = "3AS_SmokeYellow";
			};
			class C7_Remote_Mag
			{
				count = 25;
				name = "C7_Remote_Mag";
			};
			class C12_Remote_Mag
			{
				count = 10;
				name = "C12_Remote_Mag";
			};
		};
		class TransportWeapons
		{
			class 332nd_Dispo_F
			{
				count = 25;
				weapon = "332nd_Dispo_F";
			};
		};
	};

	class 332nd_Medical_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		displayName="[332nd] Supply Crate (Medical)";
		//editorCategory="332nd_EditorCategory";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
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
				count = 10;
				name = "ACE_plasmaIV";
			};
			class ACE_plasmaIV_250
			{
				count = 50;
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

	class 332nd_Equipment_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		model="3as\3as_props\crates\models\supply_Large.p3d";
		displayName="[332nd] Supply Crate (Equipment)";
		//editorCategory="332nd_EditorCategory";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Black_Prop.jpg";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
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
			class ACE_UAVBattery
			{
				count = 5;
				name = "ACE_UAVBattery";
			};
			class ItemcTabHCam
			{
				count = 10;
				name = "ItemcTabHCam";
			};
			class DRNP_AR2P
			{
				count = 5;
				name = "DRNP_AR2P";
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
			class 332nd_DC15A_GL
			{
				count = 5;
				weapon = "332nd_DC15A_GL";
			};
			class 332nd_DC15C_GL
			{
				count = 5;
				weapon = "332nd_DC15C_GL";
			};
			class 332nd_DC15L
			{
				count = 5;
				weapon = "332nd_DC15L";
			};
			class 332nd_DC15S
			{
				count = 10;
				weapon = "332nd_DC15S";
			};
			class 332nd_DC15X
			{
				count = 5;
				weapon = "332nd_DC15X";
			};
			class 332nd_DP23
			{
				count = 10;
				weapon = "332nd_DP23";
			};
			class 332nd_Valken
			{
				count = 5;
				weapon = "332nd_Valken";
			};
			class 332nd_Z6
			{
				count = 5;
				weapon = "332nd_Z6";
			};
			class 332nd_DC17S
			{
				count = 25;
				weapon = "332nd_DC17S";
			};
			class 332nd_PLX1
			{
				count = 5;
				weapon = "332nd_PLX1";
			};
			class 332nd_RPS6
			{
				count = 5;
				weapon = "332nd_RPS6";
			};
			class 332nd_Helmet_P2_CT 
			{
				count = 5;
				weapon = "332nd_Helmet_P2_CT";
			};
			class 332nd_Uniform_Clone_CT 
			{
				count = 5;
				weapon = "332nd_Uniform_Clone_CT";
			};
			class 332nd_Trooper_Vest 
			{
				count = 5;
				weapon = "332nd_Trooper_Vest";
			};
			class 332nd_NVG_Chip 
			{
				count = 10;
				weapon = "332nd_NVG_Chip";
			};
			class SWLB_clone_binocular 
			{
				count = 10;
				weapon = "SWLB_clone_binocular";
			};
			class ItemMap 
			{
				count = 10;
				weapon = "ItemMap";
			};
			class ItemcTab 
			{
				count = 10;
				weapon = "ItemcTab";
			};
			class JLTS_clone_comlink 
			{
				count = 10;
				weapon = "JLTS_clone_comlink";
			};
			class ItemCompass 
			{
				count = 10;
				weapon = "ItemCompass";
			};
			class ACE_Altimeter 
			{
				count = 10;
				weapon = "ACE_Altimeter";
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

	class 332nd_Resupply_Crate: 3AS_Supply_Large_Prop
	{
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "332nd_Resupply_Crate";
		model="3as\3as_props\crates\models\supply_Large.p3d";
		displayName="[332nd] Supply Crate";
		//editorCategory="332nd_EditorCategory";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"
		};
		class TransportItems
		{
			class 332nd_Acti_Bandage_Weap
			{
				count = 250;
				name = "332nd_Acti_Bandage_Weap";
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
				count = 10;
				name = "ACE_plasmaIV";
			};
			class ACE_plasmaIV_250
			{
				count = 50;
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
			class ACE_UAVBattery
			{
				count = 5;
				name = "ACE_UAVBattery";
			};
			class ItemcTabHCam
			{
				count = 10;
				name = "ItemcTabHCam";
			};
			class DRNP_AR2P
			{
				count = 5;
				name = "DRNP_AR2P";
			};
			class 3AS_ThermalDetonator
			{
				count = 50;
				name = "3AS_ThermalDetonator";
			};
			class 3AS_SmokeWhite
			{
				count = 50;
				name = "3AS_SmokeWhite";
			};
			class 3AS_SmokeBlue
			{
				count = 25;
				name = "3AS_SmokeBlue";
			};
			class 3AS_SmokeGreen
			{
				count = 25;
				name = "3AS_SmokeGreen";
			};
			class 3AS_SmokeOrange
			{
				count = 25;
				name = "3AS_SmokeOrange";
			};
			class 3AS_SmokePurple
			{
				count = 25;
				name = "3AS_SmokePurple";
			};
			class 3AS_SmokeRed
			{
				count = 25;
				name = "3AS_SmokeRed";
			};
			class 3AS_SmokeYellow
			{
				count = 25;
				name = "3AS_SmokeYellow";
			};
			class C7_Remote_Mag
			{
				count = 25;
				name = "C7_Remote_Mag";
			};
			class C12_Remote_Mag
			{
				count = 10;
				name = "C12_Remote_Mag";
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
			class 332nd_DC15A_GL
			{
				count = 5;
				weapon = "332nd_DC15A_GL";
			};
			class 332nd_DC15C_GL
			{
				count = 5;
				weapon = "332nd_DC15C_GL";
			};
			class 332nd_DC15L
			{
				count = 5;
				weapon = "332nd_DC15L";
			};
			class 332nd_DC15S
			{
				count = 10;
				weapon = "332nd_DC15S";
			};
			class 332nd_DC15X
			{
				count = 5;
				weapon = "332nd_DC15X";
			};
			class 332nd_DP23
			{
				count = 10;
				weapon = "332nd_DP23";
			};
			class 332nd_Valken
			{
				count = 5;
				weapon = "332nd_Valken";
			};
			class 332nd_Z6
			{
				count = 5;
				weapon = "332nd_Z6";
			};
			class 332nd_DC17S
			{
				count = 25;
				weapon = "332nd_DC17S";
			};
			class 332nd_PLX1
			{
				count = 5;
				weapon = "332nd_PLX1";
			};
			class 332nd_RPS6
			{
				count = 5;
				weapon = "332nd_RPS6";
			};
			class 332nd_Helmet_P2_CT 
			{
				count = 5;
				weapon = "332nd_Helmet_P2_CT";
			};
			class 332nd_Uniform_Clone_CT 
			{
				count = 5;
				weapon = "332nd_Uniform_Clone_CT";
			};
			class 332nd_Trooper_Vest 
			{
				count = 5;
				weapon = "332nd_Trooper_Vest";
			};
			class 332nd_NVG_Chip 
			{
				count = 10;
				weapon = "332nd_NVG_Chip";
			};
			class SWLB_clone_binocular 
			{
				count = 10;
				weapon = "SWLB_clone_binocular";
			};
			class ItemMap 
			{
				count = 10;
				weapon = "ItemMap";
			};
			class ItemcTab 
			{
				count = 10;
				weapon = "ItemcTab";
			};
			class JLTS_clone_comlink 
			{
				count = 10;
				weapon = "JLTS_clone_comlink";
			};
			class ItemCompass 
			{
				count = 10;
				weapon = "ItemCompass";
			};
			class ACE_Altimeter 
			{
				count = 10;
				weapon = "ACE_Altimeter";
			};
			class 332nd_Dispo_F
			{
				count = 25;
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
			/* class 332nd_DLT19L_Mag
			{
				count = 100;
				magazine = "332nd_DLT19L_Mag";
			}; */
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
			class 332nd_HE_EPL_Mag
			{
				count = 25;
				magazine = "332nd_HE_EPL_Mag";
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
			class 332nd_HE_LGrenade_Mag
			{
				count = 50;
				magazine = "332nd_HE_LGrenade_Mag";
			};
			class 332nd_Smoke_LauncherGrenade
			{
				count = 50;
				magazine = "332nd_Smoke_LauncherGrenade";
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
			class 332nd_DC15S_Mag
			{
				count = 100;
				magazine = "332nd_DC15S_Mag";
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
		};
	};
};
	