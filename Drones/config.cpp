// ============================================================================
// 332nd Deployable Drone System
// config.cpp - Drones subfolder addon
// ============================================================================

class CfgPatches {
    class 332nd_Drones {
        name = "332nd Deployable Drones";
        author = "332nd";
        units[] = {};
        weapons[] = {"332nd_Drone_Item"};
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Air_F_Gamma_UAV_01",
            "ace_interact_menu",
            "ace_common",
            "cba_main"
        };
    };
};

// ============================================================================
// CfgFunctions
// NOTE: Class name here determines the function prefix in SQF.
//       "trd_Drones" -> trd_Drones_fnc_deployDrone, etc.
//       SQF cannot parse identifiers starting with a number,
//       so we use "trd" instead of "332nd".
// ============================================================================
class CfgFunctions {
    class trd_Drones {
        class Drones {
            file = "332nd_Aux\Drones\functions";
            class droneCrewInit {};

            class droneSettings {};

            class droneInit {
                postInit = 1;
            };

            class canDeploy {};
            class canPack {};
            class deployDrone {};
            class packDrone {};
        };
    };
};

// ============================================================================
// CfgWeapons - Inventory item
// Config-side classnames starting with numbers are fine.
// ============================================================================
class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class 332nd_Drone_Item : CBA_MiscItem {
        scope = 2;
        displayName = "Deployable Recon Drone";
        descriptionShort = "A packable reconnaissance UAV. Use ACE Self-Interact to deploy.";
        picture = "";
        model = "\A3\Weapons_F\DummyItem.p3d";

        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };
};