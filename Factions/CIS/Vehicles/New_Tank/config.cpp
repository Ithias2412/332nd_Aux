class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Shield_Tank
	{
		units[] = 
        {
            "332nd_CIS_Shield_Tank",
			"332nd_CIS_Flamer",
			"332nd_CIS_Defoliator",
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
	class 3AS_Heavy_AAT_Shield_F;
	class 3AS_Heavy_AAT_Flamer_F;
	class 3AS_Heavy_AAT_Defoliator_F;
	class 332nd_CIS_Shield_Tank: 3AS_Heavy_AAT_Shield_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Shield Tank";
		editorPreview = "";
		armor = 400;
		crew = "332nd_Droid_B1_Crewman";
	};
	class 332nd_CIS_Flamer: 3AS_Heavy_AAT_Flamer_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Flamer Tank";
		editorPreview = "";
		armor = 400;
		crew = "332nd_Droid_B1_Crewman";
	};
	class 332nd_CIS_Defoliator: 3AS_Heavy_AAT_Defoliator_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="Defoliator Tank";
		editorPreview = "";
		armor = 400;
		crew = "332nd_Droid_B1_Crewman";
	};

};