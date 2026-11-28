class CfgPatches {
    class aux332_configfix_ida {
        name = "332nd Config Fix (IDA guard)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "IDA_DEVGUNS", "IDA_Imperial"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    class IDA_DC15A;
    class IDA_DC15S;
    class IDA_DC15S_UGL;
    class IDA_Nerf_Carbine: IDA_DC15S { class WeaponSlotsInfo {}; };
    class IDA_Nerf_Rifle: IDA_DC15A { class WeaponSlotsInfo {}; };
    class IDA_DC15S_Evil: IDA_DC15S { class WeaponSlotsInfo {}; };
    class IDA_DC15S_UGL_Evil: IDA_DC15S_UGL { class WeaponSlotsInfo {}; };
};
