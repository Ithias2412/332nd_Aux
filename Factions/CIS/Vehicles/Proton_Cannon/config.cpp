class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Proton_Cannon
	{
		units[] = 
        {
            "332nd_CIS_Proton_Cannon",
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
	class 3AS_J1_Proton_Legged;
	class 332nd_CIS_Proton_Cannon: 3AS_J1_Proton_Legged
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Proton Cannon";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
};