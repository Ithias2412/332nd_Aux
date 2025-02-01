class CfgPatches {
    class JLTS_characters_DroidUnits {
        author = "Frank";
        name = "332nd Aux Droids";
        requiredAddons[] = {"JLTS_characters_DroidArmor"};
        weapons[] = {};
        units[] = {
            "332nd_Droid_B1_Rifleman",
            "332nd_Droid_B1_AT",
            "332nd_Droid_B1_Support",
            "332nd_Droid_B1_Sniper",
            "332nd_Droid_B1_Commander",
            "332nd_Droid_B1_Crewman",
            "332nd_Droid_B1_Security",
            "332nd_Droid_B1_Pilot"
        };
    };
};

class CfgFactionClasses {
    class 332nd_Droids_Faction {
        displayName = "332nd Auxiliary Droids";
        priority = 2;
        side = 0; // OPFOR
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
    
    class 332nd_Droid_Base: JLTS_Droid_B1_E5 {
        scope = 0; // Base class (hidden)
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"Throw", "Put"}; // Default for all, overridden by subclasses
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {"SmokeShell"};
        respawnMagazines[] = {"SmokeShell"};
        linkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "JLTS_droid_comlink", "ItemCompass", "ItemWatch"};
    };

    // **B1 Rifleman (Default JLTS Uniform)**
    class 332nd_Droid_B1_Rifleman: 332nd_Droid_Base {
        scope = 2;
        displayName = "B1 Rifleman";
        uniformClass = "JLTS_DroidB1"; // Standard Battle Droid uniform
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Anti-Tank (Uses Standard JLTS AT Uniform)**
    class 332nd_Droid_B1_AT: 332nd_Droid_Base {
        scope = 2;
        displayName = "B1 Anti-Tank";
        uniformClass = "JLTS_DroidB1"; // Uses default AT droid uniform
        weapons[] = {"JLTS_E5", "JLTS_RPS6", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RPS6", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell", "JLTS_RPS6_mag"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell", "JLTS_RPS6_mag"};
    };

    // **B1 Support Gunner**
    class 332nd_Droid_B1_Support: 332nd_Droid_Base {
        scope = 2;
        displayName = "B1 Support Gunner";
        uniformClass = "JLTS_DroidB1"; // Support variant
        weapons[] = {"JLTS_E5C", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5C", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5C_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5C_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Sniper (Uses Sniper Droid Model)**
    class 332nd_Droid_B1_Sniper: JLTS_Droid_B1_SBB3 { 
        scope = 2;
        displayName = "B1 Sniper";
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5S", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5S", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5S_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5S_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Commander**
    class 332nd_Droid_B1_Commander: 332nd_Droid_Base {
        scope = 2;
        displayName = "B1 Commander";
        uniformClass = "JLTS_DroidB1_Commander"; // Commander-specific uniform
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Crewman (Uses Pilot Uniform)**
    class 332nd_Droid_B1_Crewman: JLTS_Droid_B1_Pilot {
        scope = 2;
        displayName = "B1 Crewman";
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Security Droid**
    class 332nd_Droid_B1_Security: JLTS_Droid_B1_Security {
        scope = 2;
        displayName = "B1 Security Droid";
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };

    // **B1 Pilot**
    class 332nd_Droid_B1_Pilot: JLTS_Droid_B1_Pilot {
        scope = 2;
        displayName = "B1 Pilot";
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        backpack = "JLTS_B1_backpack";
        weapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        respawnWeapons[] = {"JLTS_E5", "JLTS_RG4D", "Throw", "Put"};
        magazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
        respawnMagazines[] = {"JLTS_E5_mag", "JLTS_RG4D_mag", "SmokeShell"};
    };
};
