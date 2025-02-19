class CfgPatches
{
    class AuxMod_332nd_DroidPopper
    {
        author = "332nd";
        requiredAddons[] =
        {
            "A3_Weapons_F",
            "A3_Characters_F"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
        magazines[] =
        {
            "332nd_DroidPopper_x1_mag"
        };
    };
};

class CfgFunctions
{
    class AuxMod_332nd_DroidPopper
    {
        tag = "AuxMod_332nd_DroidPopper"; // This must match when calling the function

        class Functions
        {
            file = "\332nd_Aux\functions"; // Adjusted to reference the PBO's file structure

            class DroidPopper
            {
                description = "Handles Droid Popper grenade effects.";
                recompile = 1; // Optional for development
            };
        };
    };
};


class Extended_HitPart_EventHandlers
{
    class Man
    {
        332nd_hitPart = "(_this select 0) call AuxMod_332nd_DroidPopper_fnc_DroidPopper";
    };
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] +=
        {
            "332nd_DroidPopperMuzzle"
        };
        class ThrowMuzzle;
        class 332nd_DroidPopperMuzzle: ThrowMuzzle
        {
            model = "\A3\Weapons_F\ammo\handgrenade_thrown.p3d";
            magazines[] =
            {
                "332nd_DroidPopper_x1_mag"
            };
        };
    };
};

class cfgAmmo
{
    class Default;
    class Grenade: Default
    {
    };
    class 332nd_DroidPopper_ammo: Grenade
    {
        droidPopper = 1
        displayName = "332nd Droid Popper";
        hit = 1;
        indirectHit = 1;
        indirectHitRange = 8;
        simulation = "shotGrenade";
        explosionEffects = "GrenadeExplosion";
        explosionSoundEffect = "DefaultExplosion";
        typicalspeed = 18;
        model = "\A3\Weapons_F\ammo\handgrenade_thrown.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            "\A3\Weapons_F\Data\UI\gear_handgrenade_CA.paa"
        };
        fuseDistance = 0;
    };
};

class CfgMagazines
{
    class Default;
    class CA_Magazine: Default
    {
    };
    class HandGrenade: CA_Magazine
    {
    };
    class 332nd_DroidPopper_x1_mag: HandGrenade
    {
        author = "332nd";
        scope = 2;
        displayName = "332nd 1Rnd Droid Popper";
        displayNameShort = "Droid Popper";
        count = 1;
        ammo = "332nd_DroidPopper_ammo";
        mass = 10;
        descriptionShort = "332nd Droid Popper";
        type = 256;
        model = "\A3\Weapons_F\ammo\handgrenade_thrown.p3d";
        initSpeed = 18;
        nameSound = "handgrenade";
    };
};
