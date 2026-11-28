class CfgPatches {
    class aux332_configfix_jlts {
        name = "332nd Config Fix (JLTS droids)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "A3_Data_F_Decade_Loadorder", "JLTS_characters_DroidArmor"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles {
    class SoldierEB;
    class O_Soldier_base_F: SoldierEB {
        class HitPoints;
    };
    class O_Soldier_F: O_Soldier_base_F {};
    class O_crew_F: O_Soldier_base_F {};
    class O_Soldier_02_F: O_Soldier_base_F {
        class HitPoints;
    };
    class O_helipilot_F: O_Soldier_02_F {};
    class JLTS_Droid_B1_E5: O_Soldier_F {
        class HitPoints: HitPoints {
            class HitHead;
            class HitPelvis: HitHead { depends = "0"; };
            class HitAbdomen: HitPelvis { depends = "0"; };
            class HitDiaphragm: HitAbdomen { depends = "0"; };
            class HitChest: HitDiaphragm { depends = "0"; };
        };
    };
    class JLTS_Droid_B1_Crew: O_crew_F {
        class HitPoints: HitPoints {
            class HitHead;
            class HitPelvis: HitHead { depends = "0"; };
            class HitAbdomen: HitPelvis { depends = "0"; };
            class HitDiaphragm: HitAbdomen { depends = "0"; };
            class HitChest: HitDiaphragm { depends = "0"; };
        };
    };
    class JLTS_Droid_B1_Pilot: O_helipilot_F {
        class HitPoints: HitPoints {
            class HitHead;
            class HitPelvis: HitHead { depends = "0"; };
            class HitAbdomen: HitPelvis { depends = "0"; };
            class HitDiaphragm: HitAbdomen { depends = "0"; };
            class HitChest: HitDiaphragm { depends = "0"; };
        };
    };
};
