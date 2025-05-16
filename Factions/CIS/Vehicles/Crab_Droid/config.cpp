class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Crab_Droid
	{
		units[] = 
        {
            "332nd_CIS_Crab_Droid",
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
	class 101st_Crab_Droid;
	class 332nd_CIS_Crab_Droid: 101st_Crab_Droid
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Crab Droid";
		armor = 125;
		editorPreview = "";
	};
};