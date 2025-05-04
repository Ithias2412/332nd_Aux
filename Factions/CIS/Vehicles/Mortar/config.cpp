class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Mortar
	{
		units[] = 
        {
            "332nd_CIS_Mortar",
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
	class 3as_CIS_Mortar;
	class 332nd_CIS_Mortar: 3as_CIS_Mortar
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Mortar";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
	};
};