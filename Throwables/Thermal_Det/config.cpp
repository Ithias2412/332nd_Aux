class CfgPatches {
	class 332nd_Thermal_Det {
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
            "332nd_Thermal_Detonator"
        };
	};
};

class CfgAmmo
{
	class 3AS_Detonator_1RND;
	class 332nd_Thermal_Detonator_Ammo: 3AS_Detonator_1RND
	{
		hit = 20;
		indirectHit = 40;
		indirectHitRange = 5;
	};
};

class CfgMagazines
{
	class 3AS_ThermalDetonator;
	class 332nd_Thermal_Detonator: 3AS_ThermalDetonator
	{
		ammo = "332nd_Thermal_Detonator_Ammo";
		displayName = "[332nd] Thermal Detonator";
	};
};

class cfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] +=
        {
            "332nd_Thermal_Detonator_Muzzle"
        };
        class ThrowMuzzle;
        class 332nd_Thermal_Detonator_Muzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_Thermal_Detonator"
            };
        };
    };
};
