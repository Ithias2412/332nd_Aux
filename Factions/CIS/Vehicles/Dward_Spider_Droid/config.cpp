class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Dwarf_Spider_Droid
	{
		units[] = 
        {
            "332nd_CIS_Dwarf_Spider_Droid",
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
	class DBA_DSD;
	class 332nd_CIS_Dwarf_Spider_Droid: DBA_DSD
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Dwarf Spider Droid";
		//armor = 60;
		armor = 100;
		editorPreview = "";
	};
};