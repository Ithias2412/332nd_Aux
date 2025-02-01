class CfgPatches {
    class 332nd_characters_DroidUnits {
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
    class 332nd_Droid_B1_Security: JLTS_Droid_B1_E5 {
        scope = 2;
        displayName = "B1 Security Droid";
        faction = "332nd_Droids_Faction";
        editorSubcategory = "332nd_Droids_Subcategory";
        uniformClass = "JLTS_DroidB1_Security"; // Security uniform
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

class CfgGroups {
    class East {
        class 332nd_Droids_Faction {
            name = "332nd Auxiliary Droids";

            class Infantry {
                name = "Infantry";

                class 332nd_Patrol {
                    name = "Patrol";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_Sniper_Team {
                    name = "Sniper Team";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_Fireteam {
                    name = "Fireteam";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_Security_Fireteam {
                    name = "Security Fireteam";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_AT_Fireteam {
                    name = "AT Fireteam";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_Weapons_Fireteam {
                    name = "Weapons Fireteam";
                    faction = "332nd_Droids_Faction";
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

                class 332nd_Rifle_Squad {
                    name = "Rifle Squad";
                    faction = "332nd_Droids_Faction";
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
                class 332nd_Defensive_Garrison {
                    name = "Defensive Garrison [Rose's Game Crashers]";
                    faction = "332nd_Droids_Faction";
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
            };
        };
    };
};