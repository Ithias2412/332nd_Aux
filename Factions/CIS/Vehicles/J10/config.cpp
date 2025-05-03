class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_J10
	{
		units[] = 
        {
            "332nd_CIS_J10",
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
	class 3AS_J10s_F;
	class 332nd_CIS_J10: 3AS_J10s_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="J10";
		//armor = 60;
		editorPreview = "";
	};
};