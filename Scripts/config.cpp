class CfgPatches {
    class nd332_AUX_DroidFixes {
        name = "332nd Auxiliary - Droid Behavior Fixes";
        author = "332nd";
        requiredVersion = 1.0;
        requiredAddons[] = {
            "cba_main",
            "cba_settings",
            "WBK_DroidsSw"
        };
        units[] = {};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class nd332_AUX_DroidFixes_preInit {
        init = "call compile preprocessFileLineNumbers '332nd_Aux\Scripts\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class nd332_AUX_DroidFixes_postInit {
        init = "call compile preprocessFileLineNumbers '332nd_Aux\Scripts\XEH_postInit.sqf'";
    };
};