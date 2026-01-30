class CfgPatches {
	class 332nd_CIS_E60R {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_CIS_E60R_AA",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};


class cfgWeapons 
{
	class JLTS_E60R_AT;
	class 332nd_CIS_E60R_AA: JLTS_E60R_AT
	{
		scope = 2;
		displayName = "[CIS] E-60R";
		magazines[] = {"332nd_CIS_E60R_Mag"};
	};
};

class CfgMagazines
{
	class JLTS_E60R_AT_mag;
	class 332nd_CIS_E60R_Mag: JLTS_E60R_AT_mag
	{
		displayName = "E-60R AA missile";
		ammo = "332nd_CIS_A2A_Missile_Ammo";
		count = 2;
	};
};