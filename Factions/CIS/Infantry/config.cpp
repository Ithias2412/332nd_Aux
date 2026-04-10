class CBA_Extended_EventHandlers_base;
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
			"332nd_Droid_B1_Scatterblaster",
			"332nd_Droid_B1_Shield",
            "332nd_Droid_B1_Grenadier",
            "332nd_Droid_B1_AT",
            "332nd_Droid_B1_AA",
            "332nd_Droid_B1_Support",
            "332nd_Droid_B1_Sniper",
            "332nd_Droid_B1_Commander",
            "332nd_Droid_B1_Crewman",
            "332nd_Droid_B1_Security",
            "332nd_Droid_B1_Pilot",
			"332nd_Droid_B1_Rifleman_Jump",
			"332nd_Droid_B1_Support_Jump",
			"332nd_Droid_B1_Rifleman_Fly",
			"332nd_Droid_T_Series",
			"332nd_Droid_B2_Rockets",
			"332nd_Droid_B2_Flamer",
			"332nd_Droid_B2",
			"332nd_CIS_Hum",
			"332nd_CIS_Hum_AT",
			"332nd_CIS_Hum_AR",
			"332nd_CIS_Hum_Med",
			"332nd_CIS_Hum_Officer",
			"332nd_Droid_BX_Melee",
			"332nd_Droid_BX_Range",
			"332nd_Droid_BX_Shield",

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
	class JLTS_Droid_B1_Crew;
	class 3AS_CIS_B2_F;
	class 3AS_CIS_TS_F;
	class 3AS_U_CIS_Light;
	class SWLB_clone_bag_leg;
	class WBK_LS_BX;
	class HitPoints;

    // B1 Droids
    class 332nd_Droid_Base: JLTS_Droid_B1_E5 
	{
		identityTypes[] = {"332nd_B1_Voice","Head_NATO"};
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
        scope = 0; // Base class (hidden)
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
    };
    class 332nd_Droid_B1_Rifleman: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Rifleman";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_B1_Scatterblaster: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Scatterblaster";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_SBB3", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_SBB3", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag",};
        respawnMagazines[] = {"332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag",};
    };
    class 332nd_Droid_B1_Shield: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Shield";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_B1_Grenadier: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Grenadier";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"}; 
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};
    };
    class 332nd_Droid_B1_AT: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Anti-Tank";
        backpack = "JLTS_B1_backpack_at_predef";
        uniformClass = "JLTS_DroidB1"; // Uses default AT droid uniform
        weapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
    };
	class JLTS_B1_backpack_at_predef;
	class 332nd_B1_backpack_AA_predef: JLTS_B1_backpack_at_predef
	{
		class TransportMagazines
		{
			class _xx_332nd_CIS_E60R_Mag
			{
				count = 2;
				magazine = "332nd_CIS_E60R_Mag";
			};
		};
	};
    class 332nd_Droid_B1_AA: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Anti-Air";
        backpack = "332nd_B1_backpack_AA_predef";
        uniformClass = "JLTS_DroidB1";
        weapons[] = {"332nd_CIS_E5", "332nd_CIS_E60R_AA", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "332nd_CIS_E60R_AA", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag"};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag"};
    };
    class 332nd_Droid_B1_Support: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Support Gunner";
        uniformClass = "JLTS_DroidB1"; // Support variant
        weapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
		respawnMagazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
    };
    class 332nd_Droid_B1_Sniper: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Sniper";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5S", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5S", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag",};
    };
    class 332nd_Droid_B1_Commander: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Commander";
        uniformClass = "JLTS_DroidB1_Commander"; // Commander-specific uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_B1_Crewman: JLTS_Droid_B1_Crew 
	{
        scope = 2;
        displayName = "B1 Crewman";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		//identityTypes[] = {"SWdroidvoice"}; // Apply the custom identity
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";		
		identityTypes[] = {"332nd_B1_Voice","Head_NATO"};
    };
    class 332nd_Droid_B1_Security: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Security Droid";
        uniformClass = "JLTS_DroidB1_Security"; // Security uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_B1_Pilot: JLTS_Droid_B1_Pilot 
	{
        scope = 2;
        displayName = "B1 Pilot";
        faction = "332nd_CIS_Faction";
        //editorSubcategory = "332nd_Droids_Subcategory";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		//identityTypes[] = {"SWdroidvoice"}; // Apply the custom identity
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		identityTypes[] = {"332nd_B1_Voice","Head_NATO"};
    };
	class 332nd_Droid_B1_Rifleman_Jump: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Rifleman (Jump)";
        uniformClass = "JLTS_DroidB1_Rocket";
		backpack = "JLTS_B1_jetpack_Rocket";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
		class Eventhandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
			init="_unit = _this select 0; if (local _unit) then {[_this select 0] spawn SB_fnc_Init_JumpPack};";
		};
	};
    class 332nd_Droid_B1_Support_Jump: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Support Gunner (Jump)";
        uniformClass = "JLTS_DroidB1_Rocket";
		backpack = "JLTS_B1_jetpack_Rocket";
        weapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
		respawnMagazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
		class Eventhandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
			init="_unit = _this select 0; if (local _unit) then {[_this select 0] spawn SB_fnc_Init_JumpPack};";
		};
    };

	class 332nd_Droid_B1_Rifleman_Fly: 332nd_Droid_Base 
	{
        scope = 2;
        displayName = "B1 Rifleman (Fly)";
        uniformClass = "JLTS_DroidB1_Rocket";
		backpack = "JLTS_B1_jetpack_Rocket";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
		class Eventhandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
			{
			};
			init="_unit = _this select 0; if (local _unit) then {[_this select 0] spawn SB_fnc_Init_FlyPack};";
		};
	};
	// B2 Droids
    class 332nd_Droid_B2: 3AS_CIS_B2_F 
	{
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
        scope = 2; 
        displayName = "B2 Battledroid";
        uniformClass = "3AS_U_CIS_B2"; // Standard Battle Droid uniform
        faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        weapons[] = {"332nd_CIS_Wrist_Blaster", "Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"332nd_CIS_Wrist_Blaster", "Throw", "Put"};
        magazines[] = {"332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
        respawnMagazines[] = {"332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","332nd_NVG_Chip"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 5;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1500;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 5;
				depends = "HitArms";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
    };
    class 332nd_Droid_B2_Rockets: 332nd_Droid_B2 
	{
        displayName = "B2 Battledroid (Rockets)";
        magazines[] = {"3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_DWRockets_AT", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
        respawnMagazines[] = {"3AS_DWRockets_AT", "3AS_DWRockets_AT", "3AS_DWRockets_AT", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
    };
    class 332nd_Droid_B2_Flamer: 332nd_Droid_B2 
	{
        weapons[] = {"332nd_CIS_Wrist_Blaster_Flame", "Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"332nd_CIS_Wrist_Blaster_Flame", "Throw", "Put"};
        displayName = "B2 Battledroid (Flamer)";
        magazines[] = {"332nd_FlamerFuel_B2", "332nd_FlamerFuel_B2", "332nd_FlamerFuel_B2", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
        respawnMagazines[] = {"332nd_FlamerFuel_B2", "332nd_FlamerFuel_B2", "332nd_FlamerFuel_B2", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", "332nd_CIS_Wrist_Blaster_Mag", };
    };
	// T-Series
	class 332nd_Droid_T_Series: 3AS_CIS_TS_F
	{
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
        faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        displayName = "T-Series Commander Droid";
		weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};

	};
	//Human CIS
	class 332nd_CIS_Hum: 3AS_U_CIS_Light
	{
		displayName = "CIS Infantry";
		faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Human_Division";
		glassesEnabled = 0;
		backpack = "";
        uniformClass = "332nd_Uniform_CIS_Human_Light";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"3AS_CIS_Light_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"3AS_CIS_Light_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		model = "\3AS\3AS_CIS_Infantry\Model\CIS_Inf.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_CIS_Infantry\data\cis_inf_texture_armour_co.paa"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 14; //was 8
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 9; //was 6
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 9; //was 6
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 12; //was 8
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 9; //was 6
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 9; //was 6
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 9; //was 6
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 9; //was 6
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 9; //was 6
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_legs";
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
        uniformClass = "332nd_Uniform_CIS_Human_Heavy";
        weapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
		model = "3AS\3AS_CIS_Infantry\Model\CIS_Heavy.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy_texture_armour_co.paa"};
	};
	class 332nd_CIS_Hum_AR: 332nd_CIS_Hum_AT
	{
		displayName = "CIS Infantry Support Gunner";
		backpack = "";
        uniformClass = "332nd_Uniform_CIS_Human_Heavy";
        weapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
		respawnMagazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
	};
	class 332nd_CIS_Hum_Med: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Medic";
		backpack = "";
        uniformClass = "332nd_Uniform_CIS_Human_Medical";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"3AS_CIS_Medic_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"3AS_CIS_Medic_helmet", "ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		RespawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", };
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_CIS_Infantry\data\cis_inf_medic_texture_armour_co.paa"};
	};
	class 332nd_CIS_Hum_Officer: 332nd_CIS_Hum
	{
		displayName = "CIS Infantry Officer";
        uniformClass = "332nd_Uniform_CIS_Human_Officer";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_CIS_Infantry\data\cis_inf_officer_texture_armour_co.paa"};
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
	class 332nd_Droid_BX_Melee: WBK_LS_BX
	{
		faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Special_Operations";
		displayName = "BX Assassin";
        scope = 2; 
        weapons[] = {"WBK_Dutch_Vibro", "332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"WBK_Dutch_Vibro", "332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"ls_droidVest_bx","ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ls_droidVest_bx","ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 5;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1500;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 5;
				depends = "HitArms";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
	};
	class 332nd_Droid_BX_Range: WBK_LS_BX
	{
		faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Special_Operations";
		displayName = "BX Commando";
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 5;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1500;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 5;
				depends = "HitArms";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
	};
	class 332nd_Droid_BX_Shield: WBK_LS_BX
	{
		faction = "332nd_CIS_Faction";
        editorSubcategory = "EdSubcat_332nd_Special_Operations";
		displayName = "BX Commando (Shield)";
        weapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 5;
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 1.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 5;
				depends = "";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1500;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 5;
				depends = "HitArms";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				depends = "0";
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 5;
				explosionShielding = 2;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
	};
};

class CfgGroups 
{
    class East 
	{
        class 332nd_CIS_Faction
		{
            name = "[332nd] CIS";

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
                class 332nd_CQB
				{
                    name = "B1 CQB Team";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Shield";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Shield";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Scatterblaster";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Scatterblaster";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Grenadier_Team 
				{
                    name = "B1 Grenadier Fireteam";
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
                        vehicle = "332nd_Droid_B1_Grenadier";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Grenadier";
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
                class 332nd_AA_Fireteam 
				{
                    name = "B1 AA Fireteam";
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
                        vehicle = "332nd_Droid_B1_AA";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_AA";
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
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
						position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support";
                        rank = "PRIVATE";
						position[] = {20, -20, 0};
                    };
                };
                class 332nd_Rifle_Squad_Jump
				{
                    name = "B1 Rifle Squad (Jump)";
                    faction = "332nd_CIS_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
						position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Rifleman_Jump";
                        rank = "PRIVATE";
						position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support_Jump";
                        rank = "PRIVATE";
						position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_B1_Support_Jump";
                        rank = "PRIVATE";
						position[] = {20, -20, 0};
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


class Extended_InitPost_EventHandlers {
	class 332nd_Droid_Base {
        class WBK_B1_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_B1_Load;};";
        };
    };
	class 332nd_Droid_BX_Shield {
        class WBK_BX_Assasin_1_init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_BX_Load;};";
        };
    };
	class 332nd_Droid_BX_Range {
        class WBK_BX_Assasin_1_init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_BX_Load;};";
        };
    };
	class 332nd_Droid_BX_Melee {
        class WBK_BX_Assasin_1_init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_BX_Load;};";
        };
    };
	class 332nd_Droid_B2 {
        class WBK_B2_Mod_init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_B2_Load;};";
        };
    };
};