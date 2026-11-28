class CfgPatches {
    class aux332_configfix_ls {
        name = "332nd Config Fix (Legion droideka blaster)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "A3_Data_F_Decade_Loadorder", "ls_weapons_wristblaster"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    class ls_weapon_wristblaster_base;
    class ls_weapon_wristblaster_droideka: ls_weapon_wristblaster_base {
        class short;
        class medium: short {};
    };
};
