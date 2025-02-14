class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_GAT
	{
		units[] = 
        {
            "332nd_CIS_GAT_Light",
            "332nd_CIS_GAT_Heavy",
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
	class 3AS_GAT_Light;
	class 3AS_GAT;
	class 332nd_CIS_GAT_Light: 3AS_GAT_Light
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="GAT";
		armor = 200;
		editorPreview = "";
	};
	class 332nd_CIS_GAT_Heavy: 3AS_GAT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="GAT (Cannon";
		armor = 200;
		editorPreview = "";
	};

};