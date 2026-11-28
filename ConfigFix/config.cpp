class CfgPatches {
    class aux332_configfix {
        name = "332nd Config Fix";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"A3_Data_F_Decade_Loadorder"};
    };
};

class CfgWeapons {
    class Default;
    class animationSources: Default { scope = 1; };
    class FullAuto: Default { scope = 1; };
    class ItemInfo: Default { scope = 1; };
    class WeaponSlotsInfo: Default { scope = 1; };
};

class CfgVehicles {
    class Logic;
    class ACE_SelfActions: Logic { scope = 1; };
    class Components: Logic { scope = 1; };
    class DBA_AEDItem: Logic { scope = 1; };
    class DBA_X_AEDItem: Logic { scope = 1; };
    class HitPoints: Logic { scope = 1; };
    class ItemInfo: Logic { scope = 1; };
    class JT_NoCDV_Thagoron: Logic { scope = 1; };
    class k_clone_unit_104th_Dirty: Logic { scope = 1; };
    class k_clone_unit_104thWolfpack_Dirty: Logic { scope = 1; };
    class k_clone_unit_13th_Dirty: Logic { scope = 1; };
    class k_clone_unit_187th_Dirty: Logic { scope = 1; };
    class k_clone_unit_212th_Dirty: Logic { scope = 1; };
    class k_clone_unit_327th_Dirty: Logic { scope = 1; };
    class k_clone_unit_332nd_Dirty: Logic { scope = 1; };
    class k_clone_unit_41stGC_Dirty: Logic { scope = 1; };
    class k_clone_unit_442nd_Dirty: Logic { scope = 1; };
    class k_clone_unit_501st_Dirty: Logic { scope = 1; };
    class k_clone_unit_5th_Dirty: Logic { scope = 1; };
    class k_clone_unit_CG_Dirty: Logic { scope = 1; };
    class k_clone_unit_KS_Dirty: Logic { scope = 1; };
    class kat_AEDItem: Logic { scope = 1; };
    class kat_X_AEDItem: Logic { scope = 1; };
    class MFD: Logic { scope = 1; };
    class SupplyDC15X: Logic { scope = 1; };
    class SupplyE11D: Logic { scope = 1; };
    class Venator_MK2: Logic { scope = 1; };
    class WBK_BX_Assasin_1: Logic { scope = 1; };
    class WBK_WRS_WGP1_Ver1: Logic { scope = 1; };

    class Bag_Base;
    class SWLB_clone_bag_leg: Bag_Base { scope = 1; model = "\A3\weapons_f\empty"; };

    class All;
    class AllVehicles: All { class CargoTurret; };
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Car: LandVehicle {};
    class Car_F: Car { class CargoTurret: CargoTurret {}; };
    class Tank: LandVehicle {};
    class Tank_F: Tank { class CargoTurret: CargoTurret {}; };
};

class CfgAmmo {
    class BulletBase;
    class 101st_PlasmaBase_Turret: BulletBase { scope = 1; };
    class 101st_Sniper_Ammo_Red: BulletBase { scope = 1; };
    class DefaultEventhandlers: BulletBase { scope = 1; };
    class MRAWS_HEAT_F: BulletBase { scope = 1; };
    class PLX_Javelin: BulletBase { scope = 1; };

    class MissileBase;
    class RocketBase;
    class DBA_AD3M_AAM: MissileBase { class Direct {}; };
    class DBA_AD5S_Missile: MissileBase { class Direct {}; };
    class DBA_DADS1P_Missile: MissileBase { class Direct {}; };
    class DBA_DADS5M_Missile: MissileBase { class Direct {}; };
    class DBA_DM311_Missile: MissileBase { class Direct {}; };
    class DBA_GD3M_Missile: MissileBase { class Direct {}; };
    class DBA_MG33A_Missile: MissileBase { class Direct {}; };
    class IDA_Blasterbolt_AutoCannon_Blue: RocketBase { class Direct {}; };
};

class CfgMagazines {
    class CA_Magazine;
    class DBA_SN3_x1_Grenade: CA_Magazine { scope = 1; };
    class DBA_SNF15_x1_Flash: CA_Magazine { scope = 1; };
    class DBA_imploder_x1_mag: CA_Magazine { scope = 1; };
    class DBA_thermaldet_x1_mag: CA_Magazine { scope = 1; };
};
