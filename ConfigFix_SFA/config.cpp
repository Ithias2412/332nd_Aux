class CfgPatches {
    class aux332_configfix_sfa {
        name = "332nd Config Fix (SFA)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "SFA_Weapons_Core"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    class CannonCore;
    class SFA_HeavyRepCannon_Base: CannonCore { class manual; };
    class SFA_HeavyImpCannon_Base: CannonCore { class manual; };
    class SFA_Mass_Driver: SFA_HeavyRepCannon_Base { class player: manual {}; };
    class SFA_Mass_Driver_imp: SFA_HeavyImpCannon_Base { class player: manual {}; };
};
