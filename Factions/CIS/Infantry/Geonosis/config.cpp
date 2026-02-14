class CBA_Extended_EventHandlers_base;
class CfgPatches 
{
    class 332nd_CIS_Faction_Infantry_Geonosis
	{
        author = "Ithias";
        name = "332nd Aux CIS Infantry Geonosis";
        requiredAddons[] = 
		{
			"JLTS_characters_DroidArmor"
		};
        weapons[] = {};
        units[] = 
		{
            "332nd_Droid_Geonosis_B1_Rifleman",
			"332nd_Droid_Geonosis_B1_Scatterblaster",
			"332nd_Droid_Geonosis_B1_Shield",
            "332nd_Droid_Geonosis_B1_Grenadier",
            "332nd_Droid_Geonosis_B1_AT",
            "332nd_Droid_Geonosis_B1_AA",
            "332nd_Droid_Geonosis_B1_Support",
            "332nd_Droid_Geonosis_B1_Sniper",
            "332nd_Droid_Geonosis_B1_Commander",
        };
    };
};
class CfgVehicles {
    // **Base Droid Class (No uniform enforced, inherits from JLTS)**
    class JLTS_Droid_B1_Geonosis_E5;
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
	class lsd_cis_bxdroid_specops;
	class WBK_BX_Assasin_1;
	class HitPoints;

    // B1 Droids
    class 332nd_Droid_Geonosis_Base: JLTS_Droid_B1_Geonosis_E5 
	{
		identityTypes[] = {"332nd_B1_Voice","Head_NATO"};
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
        scope = 0; // Base class (hidden)
        faction = "332nd_CIS_Geonosis_Faction";
        editorSubcategory = "EdSubcat_332nd_Battle_Droids";
        backpack = "JLTS_B1_backpack_Geonosis";
        weapons[] = {"Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
    };
    class 332nd_Droid_Geonosis_B1_Rifleman: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Rifleman";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_Geonosis_B1_Scatterblaster: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Scatterblaster";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_SBB3", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_SBB3", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag",};
        respawnMagazines[] = {"332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag", "332nd_CIS_SBB3_Mag",};
    };
    class 332nd_Droid_Geonosis_B1_Shield: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Shield";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5_Shield","Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
    class 332nd_Droid_Geonosis_B1_Grenadier: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Grenadier";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"}; 
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};
    };
    class 332nd_Droid_Geonosis_B1_AT: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Anti-Tank";
        backpack = "JLTS_B1_backpack_Geonosis_at_predef";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Uses default AT droid uniform
        weapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "JLTS_RPS6", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
    };
	class JLTS_B1_backpack_Geonosis_at_predef;
	class 332nd_B1_backpack_Geonosis_AA_predef: JLTS_B1_backpack_Geonosis_at_predef
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
    class 332nd_Droid_Geonosis_B1_AA: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Anti-Air";
        backpack = "332nd_B1_backpack_Geonosis_AA_predef";
        uniformClass = "JLTS_DroidB1_Geonosis";
        weapons[] = {"332nd_CIS_E5", "332nd_CIS_E60R_AA", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "332nd_CIS_E60R_AA", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag"};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag","332nd_CIS_E60R_Mag"};
    };
    class 332nd_Droid_Geonosis_B1_Support: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Support Gunner";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Support variant
        weapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5C", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
		respawnMagazines[] = {"332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag", "332nd_CIS_E5C_Mag",};
    };
    class 332nd_Droid_Geonosis_B1_Sniper: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Sniper";
        uniformClass = "JLTS_DroidB1_Geonosis"; // Standard Battle Droid uniform
        weapons[] = {"332nd_CIS_E5S", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5S", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag", "332nd_CIS_E5S_Mag",};
    };
    class 332nd_Droid_Geonosis_B1_Commander: 332nd_Droid_Geonosis_Base 
	{
        scope = 2;
        displayName = "B1 Commander";
        uniformClass = "JLTS_DroidB1_Geonosis_Commander"; // Commander-specific uniform
        weapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        respawnWeapons[] = {"332nd_CIS_E5", "Throw", "Put"};
        magazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
        respawnMagazines[] = {"332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag", "332nd_CIS_E5_Mag",};
    };
};

class CfgGroups 
{
    class East 
	{
        class 332nd_CIS_Geonosis_Faction 
		{
            name = "[332nd] CIS (Geonosis)";

            class Droids_Infantry 
			{
                name = "Droids";

                class 332nd_Patrol 
				{
                    name = "B1 Patrol";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Sniper_Team 
				{
                    name = "B1 Sniper Team";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Sniper";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Sniper";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Fireteam 
				{
                    name = "B1 Fireteam";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_CQB
				{
                    name = "B1 CQB Team";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Shield";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Shield";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Scatterblaster";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Scatterblaster";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Grenadier_Team 
				{
                    name = "B1 Grenadier Fireteam";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Grenadier";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Grenadier";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_AT_Fireteam 
				{
                    name = "B1 AT Fireteam";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_AT";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_AT";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_AA_Fireteam 
				{
                    name = "B1 AA Fireteam";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_AA";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_AA";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Weapons_Fireteam 
				{
                    name = "B1 Weapons Fireteam";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Rifle_Squad
				{
                    name = "B1 Rifle Squad";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
						position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
						position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
						position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
						position[] = {20, -20, 0};
                    };
                };
                class 332nd_Defensive_Garrison 
				{
                    name = "B1 Defensive Garrison [Rose's Game Crashers]";
                    faction = "332nd_CIS_Geonosis_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Commander";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit8 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-20, -20, 0};
                    };
                    class Unit9 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {25, -25, 0};
                    };
                    class Unit10 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-25, -25, 0};
                    };
                    class Unit11 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {30, -30, 0};
                    };
                    class Unit12 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-30, -30, 0};
                    };
                    class Unit13 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {35, -35, 0};
                    };
                    class Unit14 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-35, -35, 0};
                    };
                    class Unit15 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {40, -40, 0};
                    };
                    class Unit16 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-40, -40, 0};
                    };
                    class Unit17 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {45, -45, 0};
                    };
                    class Unit18 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-45, -45, 0};
                    };
                    class Unit19 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {50, -50, 0};
                    };
                    class Unit20 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-50, -50, 0};
                    };
                    class Unit21 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {55, -55, 0};
                    };
                    class Unit22 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-55, -55, 0};
                    };
                    class Unit23 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {60, -60, 0};
                    };
                    class Unit24 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-60, -60, 0};
                    };
                    class Unit25 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {65, -65, 0};
                    };
                    class Unit26 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-65, -65, 0};
                    };
                    class Unit27 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {70, -70, 0};
                    };
                    class Unit28 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-70, -70, 0};
                    };
                    class Unit29 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {75, -75, 0};
                    };
                    class Unit30 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {-75, -75, 0};
                    };
                    class Unit31 {
                        side = 0;
                        vehicle = "332nd_Droid_Geonosis_B1_Support";
                        rank = "PRIVATE";
                        position[] = {80, -80, 0};
                    };
                };
			};
        };
    };
};