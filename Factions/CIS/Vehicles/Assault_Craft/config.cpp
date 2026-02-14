class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Assault_Craft
	{
		units[] = 
        {
            "332nd_CIS_Assault_Craft",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_CIS_Wheeled_PAC",
		};
	};
};

class CfgVehicles
{
	class 3AS_PAC_F;
	class 332nd_CIS_Assault_Craft: 3AS_PAC_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Assault Craft";
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};