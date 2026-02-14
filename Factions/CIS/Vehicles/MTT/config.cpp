class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_MTT
	{
		units[] = 
        {
            "332nd_CIS_MTT",
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
	class 3as_MTT;
	class 332nd_CIS_MTT: 3as_MTT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="MTT";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};