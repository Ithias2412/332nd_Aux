class CfgPatches {
    class 332nd_Aux_BTLB_Bomber {
        units[] = {
            "332nd_BTLB_Bomber_Base",
            "332nd_BTLB_Bomber"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"3AS_BTLB_Bomber"};
        author = "332nd Auxiliary Mod Team";
    };
};

class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F; // Reference the original Arma 3 base class.

    // Parent Base Class for all Bombers
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class Components; // Ensure the Components class exists as a placeholder.
    };

    // 332nd Base Class
    class 332nd_BTLB_Bomber_Base: BTL_Base {
        scope = 0; // Not directly visible in the editor.
        displayName = "[332nd] BTLB Bomber (Base)";
        author = "332nd Auxiliary Mod Team";
        faction = "332nd_Faction";
        side = 1;
        crew = "B_Pilot_F";
        typicalCargo[] = {"B_Pilot_F"};
        editorSubcategory = "EdSubcat_Planes";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\332nd\data\BTLB_Bomber_Hull_co.paa",
            "\332nd\data\BTLB_Bomber_Wings_co.paa"
        };

        class Components: Components {
            class TransportPylonsComponent {
                uiPicture = "\A3\Air_F_Jets\Plane_Fighter_03\Data\UI\Plane_Fighter_03_3DEN_CA.paa";
                class Pylons {
                    class Pylon1 {
                        attachment = "PylonRack_1Rnd_Missile_AA_01_F";
                        hardpoints[] = {"SCALPEL_1RND", "BOMB_1"};
                        priority = 5;
                        UIposition[] = {0.2, 0.4};
                    };
                    class Pylon2: Pylon1 {
                        mirroredMissilePos = 1;
                    };
                    class Pylon3 {
                        attachment = "PylonRack_3Rnd_Bomb_01_F";
                        hardpoints[] = {"SCALPEL_3RND", "BOMB_3"};
                        priority = 3;
                        UIposition[] = {0.3, 0.5};
                    };
                    class Pylon4: Pylon3 {
                        mirroredMissilePos = 3;
                    };
                };
            };
        };
    };

    // 332nd Variant Class
    class 332nd_BTLB_Bomber: 332nd_BTLB_Bomber_Base {
        scope = 2; // Visible in the editor.
        displayName = "[332nd] BTLB Bomber";
        editorPreview = "\332nd\data\BTLB_Bomber_preview.jpg"; // Adjust to the actual path of your preview image.
        hiddenSelectionsTextures[] = {
            "\332nd\data\BTLB_Bomber_Hull_co.paa",
            "\332nd\data\BTLB_Bomber_Wings_co.paa"
        };
    };
};
