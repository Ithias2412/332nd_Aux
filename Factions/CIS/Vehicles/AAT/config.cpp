class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_AAT
	{
		units[] = 
        {
            "332nd_CIS_AAT",
            "332nd_CIS_AAT_Heavy",
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
	class 3AS_AAT;
	class 3AS_AAT_Red;
	class 332nd_CIS_AAT: 3AS_AAT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="AAT";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
	class 332nd_CIS_AAT_Heavy: 3AS_AAT_Red
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="AAT (Heavy)";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};