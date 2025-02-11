class CfgPatches 
{
    class 332nd_CIS_Faction_Infantry 
	{
        author = "Frank";
        name = "332nd Aux CIS Infantry";
        requiredAddons[] = 
		{
			"JLTS_characters_DroidArmor"
		};
        weapons[] = {};
        units[] = 
		{
            "332nd_Droid_B1_Rifleman",
            "332nd_Droid_B1_AT",
            "332nd_Droid_B1_Support",
            "332nd_Droid_B1_Sniper",
            "332nd_Droid_B1_Commander",
            "332nd_Droid_B1_Crewman",
            "332nd_Droid_B1_Security",
            "332nd_Droid_B1_Pilot",
			"332nd_Droid_T_Series",
			"332nd_Droid_B2_Rockets",
			"332nd_Droid_B2",
			"332nd_CIS_Hum",
			"332nd_CIS_Hum_AT",
			"332nd_CIS_Hum_AR",
			"332nd_CIS_Hum_Med",
			"332nd_CIS_Hum_Officer",
			"332nd_Droid_BX_Melee",
			"332nd_Droid_BX_Range",

        };
    };
};
class CfgVehicles {
    // **Base Droid Class (No uniform enforced, inherits from JLTS)**
    class JLTS_Droid_B1_E5;
    class JLTS_Droid_B1_SBB3;
    class JLTS_Droid_B1_AR;
    class JLTS_Droid_B1_AT;
    class JLTS_Droid_B1_Pilot;
    class JLTS_Droid_B1_Sniper;
	class 3AS_CIS_B2_F;
	class 3AS_CIS_TS_F;
	class 3AS_U_CIS_Light;
	class SWLB_clone_bag_leg;
	class lsd_cis_bxdroid_specops;
	class WBK_BX_Assasin_1;
	class HitPoints;

    // B1 Droids
    class 332nd_Droid_Base: JLTS_Droid_B1_E5 
	{
        scope = 0; // Base class (hidden)
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "JLTS_droids_normal";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {"SmokeShell"};
        respawnMagazines[] = {"SmokeShell"};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
    };
    class 332nd_Droid_B1_Rifleman: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Rifleman";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
    class 332nd_Droid_B1_AT: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Anti-Tank";
        backpack = "JLTS_B1_backpack_at_predef";
        uniformClass = "JLTS_DroidB1"; // Uses default AT droid uniform
        weapons[] = {"JLTS_E5", "JLTS_RPS6", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RPS6", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",  "JLTS_RG4D_mag", "SmokeShell", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
    };
    class 332nd_Droid_B1_Support: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Support Gunner";
        uniformClass = "JLTS_DroidB1"; // Support variant
        weapons[] = {"JLTS_E5C", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5C", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    };
    class 332nd_Droid_B1_Sniper: JLTS_Droid_B1_SBB3 
	{ 
        scope = 2;
        displayName = "B1 Sniper";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "JLTS_droids_normal";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5S", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5S", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
    class 332nd_Droid_B1_Commander: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Commander";
        uniformClass = "JLTS_DroidB1_Commander"; // Commander-specific uniform
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_E5", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
    class 332nd_Droid_B1_Crewman: JLTS_Droid_B1_Pilot 
	{
        scope = 2;
        displayName = "B1 Crewman";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "JLTS_droids_normal";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
    class 332nd_Droid_B1_Security: JLTS_Droid_B1_E5 
	{
        scope = 2;
        displayName = "B1 Security Droid";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "JLTS_droids_normal";
        uniformClass = "JLTS_DroidB1_Security"; // Security uniform
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
    class 332nd_Droid_B1_Pilot: JLTS_Droid_B1_Pilot 
	{
        scope = 2;
        displayName = "B1 Pilot";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "JLTS_droids_normal";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag", "SmokeShell"};
    };
	// B2 Droids
    class 332nd_Droid_B2: 3AS_CIS_B2_F 
	{
        scope = 2; 
        displayName = "B2 Battledroid";
        uniformClass = "3AS_U_CIS_B2"; // Standard Battle Droid uniform
        faction = "332nd_CIS_Faction";
        editorSubcategory = "JLTS_droids_normal";
        weapons[] = {"3AS_DWBlaster_F", "Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"3AS_DWBlaster_F", "Throw", "Put"};
        magazines[] = {"3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "SmokeShell"};
        respawnMagazines[] = {"3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "SmokeShell"};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
    };
    class 332nd_Droid_B2_Rockets: 332nd_Droid_B2 
	{
        displayName = "B2 Battledroid (Rockets)";
        magazines[] = {"3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "SmokeShell"};
        respawnMagazines[] = {"3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "3AS_500Rnd_EM30_mag", "SmokeShell"};
    };
	// T-Series
	class 332nd_Droid_T_Series: 3AS_CIS_TS_F
	{
        faction = "332nd_CIS_Faction";
        editorSubcategory = "JLTS_droids_normal";
        displayName = "T-Series Commander Droid";
		weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {"SmokeShell"};
        respawnMagazines[] = {"SmokeShell"};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
	};
	//Human CIS
	class 332nd_CIS_Hum: 3AS_U_CIS_Light
	{
		displayName = "CIS Infantry";
		faction = "332nd_CIS_Faction";
		glassesEnabled = 0;
		backpack = "";
        uniformClass = "3AS_U_CIS_Light_Armor";
        weapons[] = {"JLTS_E5", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        linkedItems[] = {"3AS_CIS_Light_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"3AS_CIS_Light_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough = 0.8; 
				radius = 0.08; 
				explosionShielding=0.1;
				minimalHit = 0.01; 
			};
			class HitNeck: HitFace
			{
				armor=8;
				material=-1;
				name="neck";
				passThrough = 0.1; 
				radius=0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01; 
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough = 0.1;
				radius=0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01; 
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 10;
				material=-1;
				name="pelvis";
				passThrough = 0.1; 
				radius = 0.24; 
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01; 
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 10;
				material=-1;
				name="spine1";
				passThrough = 0.1;
				radius=0.16;
				explosionShielding = 3;	
				visual="injury_body";
				minimalHit = 0.01;	
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 10;
				material=-1;
				name="spine2";
				passThrough = 0.1;
				radius = 0.18; 
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01; 
			};
			class HitChest: HitDiaphragm
			{
				armor = 10;
				material=-1;
				name="spine3";
				passThrough = 0.1;
				radius = 0.18; 
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01; 
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.01;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 10;
				material=-1;
				name="arms";
				passThrough = 0.1;
				radius=0.1;
				explosionShielding = 2;
				visual="injury_hands";
				minimalHit = 0.01; 
				depends="0";
			};
			class HitHands: HitArms
			{
				armor = 10;
				material=-1;
				name="hands";
				passThrough = 0.1;
				radius=0.1;
				explosionShielding = 1;
				visual="injury_hands";
				minimalHit=0.01; 
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 10;
				material=-1;
				name="legs";
				passThrough = 0.1;
				radius=0.14;
				explosionShielding = 2;
				visual="injury_legs";
				minimalHit = 0.01; 
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding = 3; 
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 10;
				material=-1;
				name="hand_l";
				passThrough = 0.1;
				radius = 0.08; 
				explosionShielding = 2;
				visual="injury_hands";
				minimalHit = 0.01; 
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 10;
				material=-1;
				name="leg_l";
				passThrough = 0.1;
				radius=0.1;
				explosionShielding = 2;
				visual="injury_legs";
				minimalHit = 0.01; 
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
	};
	class 332nd_CIS_Hum_AT: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Anti-Tank";
		backpack = "332nd_CIS_Hum_AT_Backpack";
        uniformClass = "3AS_U_CIS_Heavy_Armor";
        weapons[] = {"JLTS_RPS6", "JLTS_E5", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_RPS6", "JLTS_E5", "Throw", "Put"};
        magazines[] = {"JLTS_RPS6_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_RPS6_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
	};
	class 332nd_CIS_Hum_AR: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Support Gunner";
		backpack = "";
        uniformClass = "3AS_U_CIS_Heavy_Armor";
        weapons[] = {"JLTS_E5C", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5C", "Throw", "Put"};
        magazines[] = {"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "SmokeShell"};
	};
	class 332nd_CIS_Hum_Med: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Medic";
		backpack = "";
        uniformClass = "3AS_U_CIS_Medic_Armor";
        weapons[] = {"JLTS_E5", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        linkedItems[] = {"3AS_CIS_Medic_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"3AS_CIS_Medic_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
		RespawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", };
	};
	class 332nd_CIS_Hum_Officer: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Officer";
        uniformClass = "3AS_U_CIS_Officer_Armor";
	};
	class 332nd_CIS_Hum_AT_Backpack: SWLB_clone_bag_leg
	{
        scope = 1;
		displayName = "CIS Human AT Backpack";
		class TransportMagazines
		{
			class _xx_JLTS_RPS6_mag
			{
				count = 2;
				magazine = "JLTS_RPS6_mag";
			};
		};
	};
	//BX Droids
	class 332nd_Droid_BX_Melee: WBK_BX_Assasin_1
	{
		faction = "332nd_CIS_Faction";
		displayName = "BX Melee";
        scope = 2;
        weapons[] = {"WBK_Dutch_Vibro", "JLTS_E5", "Throw", "Put"};
        respawnWeapons[] = {"WBK_Dutch_Vibro", "JLTS_E5", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};

	};
	class 332nd_Droid_BX_Range: lsd_cis_bxdroid_specops
	{
		faction = "332nd_CIS_Faction";
		displayName = "BX Commando";
        weapons[] = {"JLTS_E5", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "SmokeShell"};

	};
};


class CfgGroups 
{
    class East 
	{
        class 332nd_CIS_Faction 
		{
            name = "332nd Auxiliary Droids";

            class Droids_Infantry 
			{
                name = "Droids";

                class 332nd_Patrol 
				{
                    name = "B1 Patrol";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Sniper_Team 
				{
                    name = "B1 Sniper Team";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Sniper";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Sniper";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Fireteam 
				{
                    name = "B1 Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Security_Fireteam 
				{
                    name = "B1 Security Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_AT_Fireteam 
				{
                    name = "B1 AT Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_AT";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_AT";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Weapons_Fireteam 
				{
                    name = "B1 Weapons Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Rifle_Squad 
				{
                    name = "B1 Rifle Squad";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-20, -20, 0};
                    };
                };
                class 332nd_Defensive_Garrison 
				{
                    name = "B1 Defensive Garrison [Rose's Game Crashers]";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Commander";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit8 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-20, -20, 0};
                    };
                    class Unit9 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {25, -25, 0};
                    };
                    class Unit10 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-25, -25, 0};
                    };
                    class Unit11 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {30, -30, 0};
                    };
                    class Unit12 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-30, -30, 0};
                    };
                    class Unit13 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {35, -35, 0};
                    };
                    class Unit14 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-35, -35, 0};
                    };
                    class Unit15 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {40, -40, 0};
                    };
                    class Unit16 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-40, -40, 0};
                    };
                    class Unit17 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {45, -45, 0};
                    };
                    class Unit18 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-45, -45, 0};
                    };
                    class Unit19 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {50, -50, 0};
                    };
                    class Unit20 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-50, -50, 0};
                    };
                    class Unit21 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {55, -55, 0};
                    };
                    class Unit22 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-55, -55, 0};
                    };
                    class Unit23 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {60, -60, 0};
                    };
                    class Unit24 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-60, -60, 0};
                    };
                    class Unit25 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {65, -65, 0};
                    };
                    class Unit26 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-65, -65, 0};
                    };
                    class Unit27 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {70, -70, 0};
                    };
                    class Unit28 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-70, -70, 0};
                    };
                    class Unit29 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {75, -75, 0};
                    };
                    class Unit30 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-75, -75, 0};
                    };
                    class Unit31 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
                        position[] = {80, -80, 0};
                    };
                };
				class 332nd_B2_Fireteam 
				{
                    name = "B2 Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B2";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B2";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B2";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B2";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
				class 332nd_T_Series_Escort
				{
                    name = "T Series Escort (B1)";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_T_Series";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Security";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
				};
			};
            class Human_Div_Infantry 
			{
                name = "Human Division";

                class 332nd_Hum_Patrol 
				{
                    name = "Patrol";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Hum_AT_Fireteam 
				{
                    name = "AT Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AT";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AT";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Hum_Fireteam 
				{
                    name = "Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_Med";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Hum_Weapons_Fireteam 
				{
                    name = "Weapons Fireteam";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_Med";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Rifle_Squad 
				{
                    name = "Rifle Squad";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_Med";
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                    class Unit6 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                    };
                    class Unit7 
					{
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                };
				class 332nd_Hum_Commander_Escort
				{
                    name = "Commander Escort";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_CIS_Hum_Officer";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_CIS_Hum";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_CIS_Hum_Med";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_CIS_Hum_AR";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
				};
			};
            class Special_Infantry 
			{
                name = "Special Operations";
				
				class 332nd_BX_Team_Melee
				{
                    name = "BX Team (Melee)";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Melee";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Melee";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Melee";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
				};
				class 332nd_BX_Team
				{
                    name = "BX Team";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
				};
				class 332nd_BX_T_Series_Escort
				{
                    name = "T-Series Escort (BX)";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_T_Series";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_BX_Range";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
			};
        };
    };
};