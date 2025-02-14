class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Hailfire_Tank
	{
		units[] = 
        {
            "332nd_CIS_Hailfire_Tank",
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
	class 332nd_CIS_Hailfire_Tank: 3AS_Hailfire_Rocket
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Hailfire Tank";
		//armor = 60;
		editorPreview = "";
	};
};