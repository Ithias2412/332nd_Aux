class CfgPatches {
	class 332nd_Flame_Grenade {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"A3_Weapons_F"
		};
        magazines[] =
        {
            "332nd_Flame_Grenade"
        };
	};
};

class CfgAmmo
{
	class IDA_grenade_Detonator_ammo;
	class 332nd_Flame_Grenade_Ammo: IDA_grenade_Detonator_ammo
	{
		hit = 20;
		indirectHit = 40;
		indirectHitRange = 10;
		explosionEffects = "332nd_Flame_Grenade_Effect";
		//model = "\Indecisive_Armoury_Ammos\Data\Thermal_Imploder\IDA_Thermal_Imploder.p3d";
	};
};

class CfgMagazines
{
	class IDA_grenade_Detonator_mag;
	class 332nd_Flame_Grenade: IDA_grenade_Detonator_mag
	{
		ammo = "332nd_Flame_Grenade_Ammo";
		displayName = "[332nd] Flame Grenade (ENG)";
		//descriptionShort = "[332nd] Flame Grenade";
		displayNameShort = "Flame Grenade";
		mass = 8;
		//model = "\Indecisive_Armoury_Ammos\Data\Thermal_Imploder\IDA_Thermal_Imploder.p3d";
		//picture = "\Indecisive_Armoury_Ammos\Data\Thermal_Imploder\Thermal_Imploder_UI.paa";
	};
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] +=
        {
            "332nd_Flame_Grenade_Muzzle"
        };
        class ThrowMuzzle;
        class 332nd_Flame_Grenade_Muzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_Flame_Grenade"
            };
        };
    };
};


class 332nd_Flame_Grenade_Effect
{
	class Explosion1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.1; // was 0.1
		position = "smoke_pos";
		simulation = "particles";
		type = "3as_Cloudlet_Rhydonium_Explosion";
	};
	class Fire1
	{
		intensity = 0.11;
		interval = 1;
		lifeTime = 100; // was 10
		position = "smoke_pos";
		simulation = "particles";
		type = "3as_Cloudlet_Rhydonium_Fire";
	};
	class Smoke2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 100; // was 10
		position = "smoke_pos";
		simulation = "particles";
		type = "3as_Cloudlet_Rhydonium_Smoke";
	};
};