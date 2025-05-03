class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Flak_Cannon
	{
		units[] = 
        {
            "332nd_CIS_Flak_Cannon",
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
	class 3as_FlakCannon;
	class 332nd_CIS_Flak_Cannon: 3as_FlakCannon
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Flak Cannon";
		editorPreview = "";
	};
};