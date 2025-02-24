class CfgPatches
{
    class 332nd_aux_Weapons_DLT
    {
        addonRootClass = "332nd_aux";
        requiredAddons[] = {"A3_Weapons_F"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {"332nd_DLT19"};
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class Rifle_Base_F;
    class 332nd_DLT19: Rifle_Base_F
    {
        scope = 2;
        author = "332nd Auxiliary";
        displayName = "[332nd] DLT-19 Anti Material Blaster [MRK]";
        model = "\3AS\3AS_Weapons\Imperial\3AS_DLT19.p3d";
        picture = "\3AS\3AS_Weapons\Imperial\data\UI\3as_dlt19.paa";
        weaponInfoType = "RscWeaponZeroing";
        magazines[] = {"332nd_DLT_Mag"};
        
        class WeaponSlotsInfo
        {
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = {};
            };
            class MuzzleSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };
        modes[] = {"Single","FullAuto"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.08;
            dispersion = 0.00106;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.1;
            soundContinuous = 0;
            soundBurst = 0;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"3AS_DLT19_Shot_SoundSet"};
            };
        };
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.08;
            dispersion = 0.00106;
            minRange = 200;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            soundContinuous = 0;
            soundBurst = 0;
            sounds[] = {"StandardSound"};

            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"3AS_DLT19_Shot_SoundSet"};
            };
        };
    };
};