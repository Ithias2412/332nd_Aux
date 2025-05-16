class CfgPatches
{
    class 332nd_DroidPopper
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
            magazines[] =
            {
                "332nd_DroidPopper_x1_mag"
            };
        };
    };
};

class cfgAmmo
{
    class GrenadeHand;
    class 332nd_DroidPopper_ammo: GrenadeHand
    {
        droidPopper = 1
        displayName = "[BANNED / 332nd] WIP Droid Popper";
        indirectHit = 0.1;
        indirectHitRange = 10;
    };
};

class CfgMagazines
{
    class HandGrenade;
    class 332nd_DroidPopper_x1_mag: HandGrenade
    {
        author = "332nd";
        displayName = "[BANNED / 332nd] WIP Droid Popper";
        displayNameShort = "Droid Popper";
        count = 1;
        ammo = "332nd_DroidPopper_ammo";
		mass = 8;
		value = 1;
		model = "\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		picture = "\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
		type = 256;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Droid Popper";
    };
};