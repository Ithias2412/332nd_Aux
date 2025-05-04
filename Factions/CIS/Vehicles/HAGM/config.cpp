class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_HAGM
	{
		units[] = 
        {
            "332nd_CIS_HAGM",
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
	class 3AS_HAGM_CIS;
	class 332nd_CIS_HAGM: 3AS_HAGM_CIS
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Artillery";
		displayName="HAG-M Artillery Piece";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};