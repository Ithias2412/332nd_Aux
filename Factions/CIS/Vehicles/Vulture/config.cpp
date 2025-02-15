class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Vulture
	{
		units[] = 
        {
            "332nd_CIS_Vulture",
			"332nd_CIS_Vulture_Missiles",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_CIS_Vulture_F;
	class 3AS_CIS_Vulture_AA_F;
	class 332nd_CIS_Vulture: 3AS_CIS_Vulture_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Vulture";
		//armor = 200;
		editorPreview = "";
	};
	class 332nd_CIS_Vulture_Missiles: 3AS_CIS_Vulture_AA_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Vulture (Advanced)";
		//armor = 200;
		editorPreview = "";
	};
};