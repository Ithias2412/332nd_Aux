class CfgPatches {
    class aux332_configfix_fsnb {
        name = "332nd Config Fix (artillery turrets)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix_base", "A3_Data_F_Decade_Loadorder", "FSNB_Freestyles_Nuclear_Bombs"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles {
    class Tank_F;
    class MBT_01_base_F: Tank_F {
        class Turrets;
    };
    class MBT_01_arty_base_F: MBT_01_base_F {
        class Turrets: Turrets {};
    };
    class MBT_02_base_F: Tank_F {
        class Turrets;
    };
    class MBT_02_arty_base_F: MBT_02_base_F {
        class Turrets: Turrets {};
    };
};
