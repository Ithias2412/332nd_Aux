class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Speeder_Bike
	{
		units[] = 
        {
            "332nd_CIS_Speeder_Bike",
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
	class 3AS_Fliknot_F;
	class 332nd_CIS_Speeder_Bike: 3AS_Fliknot_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Speeder Bike";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
	};
};