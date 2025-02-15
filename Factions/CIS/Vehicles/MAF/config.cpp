class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_MAF
	{
		units[] = 
        {
            "332nd_CIS_MAF_Gunship",
			"332nd_CIS_MAF_Transport",
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
	class 3AS_MAF_Gunship_F;
	class 3AS_MAF_Transport_F;
	class 332nd_CIS_MAF_Gunship: 3AS_MAF_Gunship_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Helicopters";
		displayName="MAF Gunship";
		armor = 200;
		editorPreview = "";
	};
	class 332nd_CIS_MAF_Transport: 3AS_MAF_Transport_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Helicopters";
		displayName="MAF Transport";
		armor = 200;
		editorPreview = "";
	};
};