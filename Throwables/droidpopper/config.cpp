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
        displayName = "[332nd] Droid Popper";
        model = "\Indecisive_Armoury_Ammos\Data\Thermal_Detonator\IDA_Thermal_Detonator.p3d";
        hit=0;
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        indirectHit = 0;
        indirectHitRange = 10;
		dangerRadiusHit=5;
		suppressionRadiusHit=5;
        //ExplosionEffects = "WNZ_EMPGrenadeExplosion"; // Maybe causes EMP on radio 
        SoundSetExplosion[] = {"EMP_Sparks_SoundSet_GL"}; // Maybe causes EMP on radio 
        class EventHandlers {
            Fired="_unit = _this select 0; if (local _unit) then {_this spawn fnc_SB_DroidPopper};"
        };
    };
};

class CfgMagazines
{
    class HandGrenade;
    class 332nd_DroidPopper_x1_mag: HandGrenade
    {
        author = "332nd";
        displayName = "[332nd] Droid Popper";
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