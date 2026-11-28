class CfgPatches {
    class aux332_configfix_base {
        name = "332nd Config Fix (base game inheritance)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"aux332_configfix", "A3_Data_F_Decade_Loadorder"};
    };
};

class CfgVehicles {
    class All {};
    class AllVehicles: All {
        class CargoTurret;
    };
    class Air: AllVehicles {};
    class Static: All {
        class DestructionEffects;
    };
    class Building: Static {};
    class NonStrategic: Building {};
    class Camping_base_F: NonStrategic {
        class DestructionEffects;
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {
        class CommanderOptics;
    };
    class Car: LandVehicle {};
    class Car_F: Car {
        class Exhausts;
        class Turrets {
            class MainTurret;
        };
    };
    class Helicopter: Air {
        class HitPoints;
    };
    class Helicopter_Base_F: Helicopter {
        class HitPoints: HitPoints {
            class HitFuel;
        };
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class CargoTurret: CargoTurret {};
        class HitPoints: HitPoints {
            class HitFuel: HitFuel {};
        };
    };
    class Helper_Base_F: NonStrategic {
        class Attributes;
    };
    class Land_TentSolar_01_base_F: Camping_base_F {};
    class Land_TentSolar_01_folded_base_F: Land_TentSolar_01_base_F {
        class DestructionEffects: DestructionEffects {};
    };
    class MemoryFragment_F: Helper_Base_F {
        class Attributes: Attributes {};
    };
    class Offroad_01_base_F: Car_F {};
    class Offroad_01_military_base_F: Offroad_01_base_F {};
    class Offroad_01_armed_base_F: Offroad_01_military_base_F {
        class Turrets: Turrets {
            class M2_Turret: MainTurret {};
        };
    };
    class StaticWeapon: LandVehicle {
        class UserActions;
    };
    class StaticMGWeapon: StaticWeapon {
        class UserActions: UserActions {};
    };
    class Strategic: Building {};
    class Tank: LandVehicle {
        class CommanderOptics: CommanderOptics {};
    };
    class Tank_F: Tank {
        class CommanderOptics: CommanderOptics {};
    };
    class Wheeled_APC_F: Car_F {
        class Exhausts: Exhausts {};
    };
    class Wreck_Base: Strategic {
        class DestructionEffects: DestructionEffects {};
    };
};

class CfgWeapons {
    class Default {
        class GunClouds;
    };
    class RifleCore: Default {};
    class Rifle: RifleCore {};
    class Rifle_Base_F: Rifle {};
    class arifle_Katiba_Base_F: Rifle_Base_F {
        class GunParticles;
    };
    class arifle_Katiba_F: arifle_Katiba_Base_F {
        class GunParticles: GunParticles {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class LMG_Mk200_F: Rifle_Long_Base_F {
        class GunClouds: GunClouds {};
    };
};

