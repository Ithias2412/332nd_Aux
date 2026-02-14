class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Dwarf_Spider_Droid_MK3
	{
		units[] = 
        {
            "332nd_CIS_Dwarf_Spider_Droid_MK3",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"DBA_DwarfSpiderDroidMK3",
		};
	};
};

class CfgVehicles
{
	class DBA_DSD3;
	class 332nd_CIS_Dwarf_Spider_Droid_MK3: DBA_DSD3
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Dwarf Spider Droid MK3";
		armor = 50;
		editorPreview = "";
	};
};