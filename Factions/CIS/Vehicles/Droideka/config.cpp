class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Droideka
	{
		units[] = 
        {
            "332nd_CIS_Deka",
			"332nd_CIS_Deka_Sniper",
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
	class 3AS_Deka_Static;
	class 3AS_Deka_Static_Sniper;

	class 332nd_CIS_Deka: 3AS_Deka_Static
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Droideka";
		displayName="Droideka";
		//armor = 60;
		editorPreview = "";
	};

	class 332nd_CIS_Deka_Sniper: 3AS_Deka_Static_Sniper
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Droideka";
		displayName="Droideka (Sniper)";
		//armor = 60;
		editorPreview = "";
	};

};