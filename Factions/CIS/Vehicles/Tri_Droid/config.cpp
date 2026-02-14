class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Octuptarra
	{
		units[] = 
        {
            "332nd_CIS_Octuptarra",
			"332nd_CIS_Octuptarra_Missiles",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_CIS_Walkers_Octopara",
		};
	};
};

class CfgVehicles
{
	class 3AS_Octuptarra_Combat_F;
	class 3AS_Octuptarra_Torpedo_F;
	class 332nd_CIS_Octuptarra: 3AS_Octuptarra_Combat_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Octuptarra";
		armor = 100;
	};
	class 332nd_CIS_Octuptarra_Missiles: 3AS_Octuptarra_Torpedo_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Octuptarra (Missiles)";
		armor = 100;
	};
};