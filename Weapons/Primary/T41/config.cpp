class CfgPatches {
    class 332nd_T41 {
        name = "[332nd] T-41 Airburst Launcher";
        units[] = {};
        weapons[] = {"332nd_T41", "332nd_T41_Scope"};
        magazines[] = {"332nd_T41_HE_Mag", "332nd_T41_Flame_Mag", "332nd_T41_DroidPopper_Mag"};
        ammo[] = {"332nd_T41_HE_Ammo", "332nd_T41_Flame_Ammo", "332nd_T41_DroidPopper_Ammo"};
        requiredVersion = 2.14;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Items", "A3_Sounds_F", "A3_Functions_F", "A3_Anims_F_Config_Sdr",
                            "cba_main", "ace_frag", "332nd_Ammo", "332nd_Optics", "332nd_Cursors"};
    };
};

// Airburst fuze: Ctrl+Tab lase, Alt+PgUp/PgDn adjust, End impact (CBA keybinds)
class Extended_PreInit_EventHandlers {
    class 332nd_T41 {
        init = "call compile preprocessFileLineNumbers '\332nd_Aux\Weapons\Primary\T41\XEH_preInit.sqf'";
    };
};
class Extended_PostInit_EventHandlers {
    class 332nd_T41 {
        clientInit = "call compile preprocessFileLineNumbers '\332nd_Aux\Weapons\Primary\T41\XEH_postInitClient.sqf'";
    };
};
class Extended_FiredBIS_EventHandlers {
    class AllVehicles {
        class 332nd_T41_Airburst {
            firedBIS = "_this call nd332_T41_fnc_fired";
        };
    };
};

// Scope overlay: Mode C reticle + airburst readout, shown only through the T-41 scope
class RscPicture;
class RscStructuredText;
class RscTitles {
    class nd332_T41_ScopeHUD {
        idd = -1;
        duration = 1e+6;
        fadeIn = 0;
        fadeOut = 0;
        movingEnable = 0;
        onLoad = "uiNamespace setVariable ['nd332_T41_HUD', _this select 0]";
        onUnload = "uiNamespace setVariable ['nd332_T41_HUD', displayNull]";
        class controls {
            class Reticle: RscPicture {
                idc = 33211;
                text = "\332nd_Aux\Misc\Optics\332nd_Mode_C.paa";
                x = "0.5 - (0.75 * 0.9 * safezoneH) / 2";
                y = "safezoneY + safezoneH / 2 - (0.9 * safezoneH) / 2";
                w = "0.75 * 0.9 * safezoneH";
                h = "0.9 * safezoneH";
            };
            class Readout: RscStructuredText {
                idc = 33212;
                text = "";
                x = "0.5 - 0.3";
                y = "safezoneY + safezoneH / 2 + 0.095 * safezoneH";
                w = 0.6;
                h = "0.05 * safezoneH";
                size = "0.026 * safezoneH";
                colorBackground[] = {0, 0, 0, 0};
                class Attributes {
                    align = "center";
                    color = "#33d6ff";
                    font = "EtelkaMonospacePro";
                };
            };
        };
    };
};

// Reload: standing gesture + prone move
class CfgMovesBasic {
    class ManActions {
        nd332_T41_GestureReload = "";
    };
    class Actions {
        class NoActions: ManActions {
            nd332_T41_GestureReload[] = {"nd332_T41_GestureReload", "Gesture"};
        };
        class RifleBaseStandActions;
        class RifleProneActions: RifleBaseStandActions {
            nd332_T41_GestureReload = "nd332_T41_ReloadProne";
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustFProneActions: RifleAdjustProneBaseActions {
            nd332_T41_GestureReload[] = {"nd332_T41_GestureReloadContext", "Gesture"};
        };
        class RifleAdjustLProneActions: RifleAdjustProneBaseActions {
            nd332_T41_GestureReload[] = {"nd332_T41_GestureReloadContext", "Gesture"};
        };
        class RifleAdjustRProneActions: RifleAdjustProneBaseActions {
            nd332_T41_GestureReload[] = {"nd332_T41_GestureReloadContextAnimDrive", "Gesture"};
        };
    };
};
class CfgGesturesMale {
    class States {
        class GestureReloadBase;
        class nd332_T41_GestureReload: GestureReloadBase {
            file = "\332nd_Aux\Weapons\Primary\T41\data\anim\t41_reload.rtm";
            speed = 0.37;
            leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
        };
        class nd332_T41_GestureReloadContext: nd332_T41_GestureReload {
            mask = "handsWeapon_context";
        };
        class nd332_T41_GestureReloadContextAnimDrive: nd332_T41_GestureReloadContext {
            mask = "handsWeapon_contextAnimDrive";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class RifleReloadProneBase;
        class nd332_T41_ReloadProne: RifleReloadProneBase {
            file = "\332nd_Aux\Weapons\Primary\T41\data\anim\t41_reload_prone.rtm";
            speed = 0.37;
            leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
        };
    };
};

// Grenadier grenades as 25 mm airburst rounds
class CfgAmmo {
    class 332nd_HE_UGLGrenade;
    class 332nd_Flame_UGLGrenade;
    class 332nd_DroidPopper_UGLGrenade;
    class 332nd_T41_HE_Ammo: 332nd_HE_UGLGrenade {
        typicalSpeed = 210;
        nd332_airburst = 1;
    };
    class 332nd_T41_Flame_Ammo: 332nd_Flame_UGLGrenade {
        typicalSpeed = 210;
        nd332_airburst = 1;
    };
    class 332nd_T41_DroidPopper_Ammo: 332nd_DroidPopper_UGLGrenade {
        typicalSpeed = 210;
        nd332_airburst = 1;
    };
};

class CfgMagazines {
    class CA_Magazine;
    class 332nd_T41_HE_Mag: CA_Magazine {
        scope = 2;
        displayName = "[332nd] T-41 5Rnd HE Airburst (GRN)";
        displayNameShort = "HE AB";
        descriptionShort = "5 grenadier HE rounds<br/>Programmable airburst (Ctrl+Tab to lase)";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
        ammo = "332nd_T41_HE_Ammo";
        count = 5;
        initSpeed = 210;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 16;
    };
    class 332nd_T41_Flame_Mag: 332nd_T41_HE_Mag {
        displayName = "[332nd] T-41 5Rnd Flame Airburst (GRN)";
        displayNameShort = "Flame AB";
        descriptionShort = "5 grenadier flame rounds<br/>Programmable airburst (Ctrl+Tab to lase)";
        ammo = "332nd_T41_Flame_Ammo";
    };
    class 332nd_T41_DroidPopper_Mag: 332nd_T41_HE_Mag {
        displayName = "[332nd] T-41 5Rnd Droid Popper (GRN)";
        displayNameShort = "Popper AB";
        descriptionShort = "5 grenadier droid popper rounds<br/>Programmable airburst (Ctrl+Tab to lase)";
        ammo = "332nd_T41_DroidPopper_Ammo";
    };
};
class CfgMagazineWells {
    class 332nd_T41_MagWell {
        nd332_T41[] = {"332nd_T41_HE_Mag", "332nd_T41_Flame_Mag", "332nd_T41_DroidPopper_Mag"};
    };
};

class Mode_SemiAuto;
class CowsSlot;
class CfgWeapons {
    class Rifle_Base_F;
    class 332nd_T41: Rifle_Base_F {
        scope = 2;
        baseWeapon = "332nd_T41";
        displayName = "[332nd] T-41 Airburst Launcher (GRN)";
        descriptionShort = "Magazine-fed 25 mm airburst grenade launcher<br/>Ctrl+Tab lase, Alt+PgUp/PgDn adjust, End impact";
        model = "\332nd_Aux\Weapons\Primary\T41\data\t41_carbine.p3d";
        picture = "\A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_X_CA.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_gl_CA.paa";
        cursor = "332nd_Cursor_Block";
        cursorAim = "332nd_Cursor_Dot";
        handAnim[] = {"OFP2_ManSkeleton", "\332nd_Aux\Weapons\Primary\T41\data\anim\t41_hands.rtm"};
        reloadAction = "nd332_T41_GestureReload";
        magazineReloadSwitchPhase = 0.5;
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Grenades\ugl_reload", 1, 1, 10};
        drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx", 0.56, 1, 10};
        recoil = "recoil_mx";
        maxRecoilSway = 0.02;
        swayDecaySpeed = 1.25;
        inertia = 0.65;
        dexterity = 1.3;
        aimTransitionSpeed = 0.9;
        magazines[] = {"332nd_T41_HE_Mag"};
        magazineWell[] = {"332nd_T41_MagWell"};
        ace_overheating_mrbs = 0;
        ace_overheating_dispersion = 0;
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            displayName = "Airburst";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\weapons\Grenades\ugl_shot_1", 1.8, 1, 300};
                begin2[] = {"A3\Sounds_F\weapons\Grenades\ugl_shot_2", 1.8, 1, 300};
                begin3[] = {"A3\Sounds_F\weapons\Grenades\ugl_shot_3", 1.8, 1, 300};
                soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
            };
            reloadTime = 0.5;
            dispersion = 0.0022;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            minRange = 30; minRangeProbab = 0.3;
            midRange = 150; midRangeProbab = 0.7;
            maxRange = 400; maxRangeProbab = 0.3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 300;
        };
        class WeaponSlotsInfo {
            mass = 120;
            allowedSlots[] = {901};
            class CowsSlot: CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = {"332nd_T41_Scope"};
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
            };
        };
        muzzlePos = "usti hlavne";
        muzzleEnd = "konec hlavne";
        discreteDistance[] = {50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500};
        discreteDistanceInitIndex = 2;
    };

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class 332nd_T41_Scope: ItemCore {
        scope = 2;
        displayName = "[332nd] T-41 Rangefinder Scope";
        descriptionShort = "3x rangefinder scope, Mode C reticle, airburst readout";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_Arco_ca.paa";
        model = "\332nd_Aux\Weapons\Primary\T41\data\t41_scope.p3d";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 7;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class Scope {
                    opticsID = 1;
                    useModelOptics = 1;
                    modelOptics = "\A3\Weapons_F\empty";
                    opticsPPEffects[] = {};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.0833;
                    opticsZoomMax = 0.0833;
                    opticsZoomInit = 0.0833;
                    memoryPointCamera = "opticView";
                    cameraDir = "";
                    visionMode[] = {"Normal", "NVG"};
                    discreteDistance[] = {50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                };
            };
        };
    };
};
