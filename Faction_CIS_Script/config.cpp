class CfgPatches {
    class Faction_CIS_Script {
        author = "Legion Studio & 332nd";
        requiredVersion = 0.1;
        requiredAddons[] = {"ls_characters_droid"};
        units[] = {"332nd_droideka"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class Faction_CIS_Script {
        init = "call compile preprocessFileLineNumbers '\332nd_Aux\Faction_CIS_Script\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class Faction_CIS_Script {
        init = "call compile preprocessFileLineNumbers '\332nd_Aux\Faction_CIS_Script\XEH_postInit.sqf'";
    };
};

class CfgVehicles {
    class ls_droid_droideka_base;

    class 332nd_droideka_base: ls_droid_droideka_base {
        scope = 1;
        author = "332nd";
        aux332_uglOnlyShield = 1;
    };

    class 332nd_droideka: 332nd_droideka_base {
        scope = 2;
        scopeCurator = 2;
        author = "332nd";
        displayName = "[332nd] Droideka (UGL-only shield)";
        editorSubcategory = "ls_edsubcat_cis_standardDroids";
    };
};