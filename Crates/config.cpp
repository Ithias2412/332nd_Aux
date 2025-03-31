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
	//Drop Crates
class CfgAmmo
{
	class SensorTemplateLaser;
	class Bo_GBU12_LGB;
	class 332nd_Dropcrate_A: Bo_GBU12_LGB
	{
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		proxyshape = "Dropcrate_FC\Dropcrate_closed.p3d";
        hit = 0;
        indirectHit = 0;
        explosive = 0;
        whistleOnFire = 1;
        sideAirFriction = .1;
        laserLock = 1;
        missileLockCone = 180;
        missileKeepLockedCone = 90;
        autoSeekTarget = 0;
        artilleryLock = 0;
        trackOversteer = 1;
        trackLead = 0.95;
        maneuvrability = 16;
        maxSpeed = 600;
        initSpeed = 30
        /*multiSoundFly[] = {"soundFly1",0.2,"soundFly2",0.2};
        soundFly1[] = {"FC_Locator_fly",db+0, 1};
        soundFly2[] = {"FC_Crate_Fly",db+0, 1};
        multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2};
        soundHit1[] = {"FC_Hit_Ground",db+0, 1};
        soundHit2[] = {"FC_Hit_Thud",db+0, 1};
        soundHit3[] = {"FC_Hit_Echo",db+0, 1};
        soundHit4[] = {"FC_Sputter_T",db+0, 1};
		*/
        whistleDist = 24;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
		class Eventhandlers
        {
            Init = "[_this select 0] execVM '332nd_Aux\Crates\grpl_fired.sqf';";
        };
        class Components
        {
                class SensorsManagerComponent
                {
                    class Components
                    {
                        class LaserSensorComponent: SensorTemplateLaser 
						{
                            class GroundTarget 
							{
                                minRange = 30000;
                                maxRange = 30000;
                                objectDistanceLimitCoef = -1;
                                viewDistanceLimitCoef = -1;
                            };
                            maxTrackableSpeed = 300;
                            angleRangeHorizontal = 180;
                            angleRangeVertical = 180;
                            componentType = "LaserSensorComponent";
                            typeRecognitionDistance = 0;
                            color[] = {1, 1, 1, 0};
                            allowsMarking = 1;
                            groundNoiseDistanceCoef = -1;
                            maxGroundNoiseDistance = -1;
                            minSpeedThreshold = 0;
                            maxSpeedThreshold = 0;
                            animDirection = "";
                            aimDown = 0;
                            minTrackableSpeed = -1e+010;
                            minTrackableATL = -1e+010;
                            maxTrackableATL = 1e+010;
                        };
                    };
                };
    	};
	};
};
class BaseSoundModeType;
class CfgMagazines
{
	class VehicleMagazine;
    class AnimationSources;
	class Pylon_332nd_Dropcrate_1rnd : VehicleMagazine
	{
		scope = 2;
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		hardpoints[] = {"B_BOMB_PYLON","B_MISSILE_PYLON","O_BOMB_PYLON","O_MISSILE_PYLON"};
		pylonWeapon = "332nd_Dropcrate_PW1";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
        class AnimationSources: AnimationSources    /// custom made animation sources
        {
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "FC_Dropcrate_PW1";
            };                  
        };  
		displayName = "332nd_Dropcrate_x1";
		displayNameShort = "Drop Resupply Crate";
		descriptionShort = "332nd_Dropcrate";					
		ammo = "332nd_Dropcrate_A";
		initSpeed = 0;
		count = 2;
		maxLeadSpeed = 40;
		mass = 200;

	};
};
class CfgNonAIVehicles
{
    class ProxyWeapon;
    class ProxyPylon_332nd_Dropcrate_Proxy: ProxyWeapon
    {
        model = "3as\3as_props\crates\models\supply_Large.p3d";
        simulation = "maverickweapon";
    };
};
class CfgWeapons
{
	class RocketPods;
	class weapon_LGBLauncherBase: RocketPods
	{
		class LoalAltitude;
	};
	class 332nd_Dropcrate_PW1: weapon_LGBLauncherBase
	{
		scope = 2;
		displayName = "[332nd] Resupply Dropcrate";
		displayNameMagazine = "332ndDC";
		shortNameMagazine = "332DC";
		cursoraim = "bomb";
		cursor = "EmptyCursor";
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "FC_Release_crate", 1.5848932, 1.1, 2100 };
			soundBegin[] = { "begin1", 1 };
			weaponSoundEffect = "DefaultRifle";
		};
		magazines[] = { "Pylon_332nd_Dropcrate_1rnd" };		
		salvo = 1;
        canLock = 2;
		modes[] = {"LoalAltitude"};
		class EventHandlers
        {
            //fired = "hint 'Fired eventhandler called'";
            fired = "_this spawn 332nd_Dropcrate_A";
        };
	};
};