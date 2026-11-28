class CfgPatches {
    class aux332_configfix_dba {
        name = "332nd Config Fix (DBA)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "A3_Data_F_Decade_Loadorder", "101st_EWEB", "DBA_patch_vehicle_weapons", "DBA_TriFighter", "DBA_VultureDroid", "DBA_BuzzDroidsUnits", "DBA_CISExplosives"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles {
    class StaticMGWeapon;
    class 101st_EWEB_base: StaticMGWeapon {
        class DestructionEffects {
            class SmokeSmall {
                position = "destructionEffect";
            };
        };
    };

    class VTOL_Base_F;
    class DBA_TriFighter_VTOL_Base_F: VTOL_Base_F {
        picture = "\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Heli_Attack_01_CA.paa";
    };
    class DBA_VultureDroid_VTOL_Base_F: VTOL_Base_F {
        picture = "\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Heli_Attack_01_CA.paa";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons {
    class CannonCore;
    class DBA_30mw_G108K: CannonCore {
        scope = 1;
    };

    class MGun;
    class LMG_RCWS: MGun { class manual; };
    class autocannon_35mm: CannonCore { class manual; };
    class cannon_120mm;
    class 3AS_GATRepeater;
    class DBA_13mw_H92C_MG: LMG_RCWS { class manual: manual {}; };
    class DBA_20mw_HH30C_AC: LMG_RCWS { class manual: manual {}; };
    class DBA_25mw_H96C_AC: LMG_RCWS { class manual: manual {}; };
    class DBA_50mw_K5B2: LMG_RCWS { class manual: manual {}; };
    class DBA_70mw_HH94G_Cannon: LMG_RCWS { class manual: manual {}; };
    class DBA_23mw_G765: DBA_50mw_K5B2 { class manual: manual {}; };
    class DBA_40mw_HH84M_AC: autocannon_35mm { class manual: manual {}; };
    class DBA_30mw_HH753K_AC: CannonCore { class manual: Mode_FullAuto {}; };
    class DBA_37mw_Brindisi_AAA: CannonCore { class manual: Mode_FullAuto {}; };
    class DBA_88mw_B18S_Cannon: CannonCore { class manual: Mode_SemiAuto {}; };
    class DBA_130mw_PN65M_Cannon: cannon_120mm { class manual: Mode_SemiAuto {}; };
    class 101st_CIS_Mech: 3AS_GATRepeater { class manual: Mode_SemiAuto {}; };
    class DBA_140mw_PN87R: cannon_120mm { class player; class close: player {}; };

    class autocannon_Base_F;
    class autocannon_40mm_CTWS: autocannon_Base_F { class player: Mode_FullAuto {}; };
};

class CfgAmmo {
    class BulletCore;
    class Grenade;
    class MineBase;
    class ShellBase;
    class DBA_FakeBullet: BulletCore { class EventHandlers {}; };
    class DBA_BuzzDroidPod_ammo: ShellBase { class eventhandlers {}; };
    class DBA_BuzzDroidDropPod_ammo: Grenade { class eventhandlers {}; };
    class DBA_HiddenBuzzDroid_Ammo: MineBase { class eventhandlers {}; };
};
