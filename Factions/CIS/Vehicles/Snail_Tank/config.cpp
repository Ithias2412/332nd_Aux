class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Snail_Tank
	{
		units[] = 
        {
            "332nd_CIS_Snail_Tank",
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
	class 3AS_N99;
	class 332nd_CIS_Snail_Tank: 3AS_N99
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Snail Tank";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};