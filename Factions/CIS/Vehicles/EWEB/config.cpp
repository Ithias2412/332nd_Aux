class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_EWEB
	{
		units[] = 
        {
            "332nd_CIS_EWEB",
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
	class 101st_EWEB;
	class 332nd_CIS_EWEB: 101st_EWEB
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="EWEB";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";		
	};
};