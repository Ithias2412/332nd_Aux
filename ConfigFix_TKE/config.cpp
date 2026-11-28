class CfgPatches {
    class aux332_configfix_tke {
        name = "332nd Config Fix (TKE guard)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "TKE_Naval"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    class TKE_VoidSuitArmy_U_OP;
    class TKE_VoidSuitUCFN_U_B: TKE_VoidSuitArmy_U_OP { class ItemInfo {}; };
    class TKE_VoidSuitMTF_U_B: TKE_VoidSuitArmy_U_OP { class ItemInfo {}; };
};
