class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Advanced_DSD
	{
		units[] = 
        {
            "332nd_CIS_Advanced_DSD",
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
	class 3AS_Advanced_DSD;
	class 332nd_CIS_Advanced_DSD: 3AS_Advanced_DSD
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Advanced DSD (Walking)";
		armor = 400;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};