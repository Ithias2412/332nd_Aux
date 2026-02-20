class CfgPatches
{
    class 332nd_Chair
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
            "332nd_Chair_mag"
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
            "332nd_ChairMuzzle"
        };
        class ThrowMuzzle;
        class 332nd_ChairMuzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_Chair_mag"
            };
        };
    };
};

class cfgAmmo
{
    class GrenadeHand;
    class 332nd_Chair_ammo: GrenadeHand
    {
        displayName = "[332nd] Chair";
        model = "\A3\Structures_F_Heli\Furniture\RattanChair_01_F.p3d";
        hit=0;
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        indirectHit = 2000;
        indirectHitRange = 1;
		dangerRadiusHit=5;
		suppressionRadiusHit=5;
        fuseDistance = 0;
        explosionTime = -1;
        ExplosionEffects = "";
        SoundSetExplosion[] = {""};
    };
};

class CfgMagazines
{
    class HandGrenade;
    class 332nd_Chair_mag: HandGrenade
    {
        author = "332nd";
        displayName = "[332nd] Chair";
        displayNameShort = "Chair";
        count = 1;
        ammo = "332nd_Chair_ammo";
		mass = 8;
		value = 1;
		model = "\A3\Structures_F_Heli\Furniture\RattanChair_01_F.p3d";
		picture = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
		type = 256;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "A chair.";
    };
};