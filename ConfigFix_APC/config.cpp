class CfgPatches {
    class aux332_configfix_apc {
        name = "332nd Config Fix (wheeled APC turrets)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix_base", "A3_Data_F_Decade_Loadorder", "TKE_Wheeled_C", "3AS_ATAT", "OPTRE_Vehicles_Bison"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles {
    class Car_F;
    class Wheeled_APC_F: Car_F {
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class Components;
                class Turrets;
            };
        };
    };
    class APC_Wheeled_01_base_F: Wheeled_APC_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Components: Components {};
                class Turrets: Turrets {};
            };
        };
    };
};
