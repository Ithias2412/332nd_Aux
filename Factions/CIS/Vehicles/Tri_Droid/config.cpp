class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Tri_Droid
	{
		units[] = 
        {
            "332nd_CIS_Tri_Droid",
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
	class DBA_OctoStatic;
	class 332nd_CIS_Tri_Droid: DBA_OctoStatic
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		displayName="Tri-Droid";
		//armor = 60;
		editorPreview = "";
	};
};