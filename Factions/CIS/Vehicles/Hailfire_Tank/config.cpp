class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Hailfire_Tank
	{
		units[] = 
        {
            "332nd_CIS_Hailfire_Tank",
			"332nd_CIS_Hailfire_Tank_AA",
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
	class 3AS_Hailfire_Rocket;
	class 3AS_Hailfire_SAM;
	class 332nd_CIS_Hailfire_Tank: 3AS_Hailfire_Rocket
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Hailfire Tank";
		//armor = 60;
		editorPreview = "";
	};
	class 332nd_CIS_Hailfire_Tank_AA: 3AS_Hailfire_SAM
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Hailfire Tank (AA)";
		//armor = 60;
		editorPreview = "";
	};
};