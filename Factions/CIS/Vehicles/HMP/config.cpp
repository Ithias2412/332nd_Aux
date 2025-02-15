class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_HMP
	{
		units[] = 
        {
            "332nd_CIS_HMP_Gunship",
			"332nd_CIS_HMP_Transport",
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
	class 3AS_HMP_Gunship;
	class 3AS_HMP_Transport;
	class 332nd_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Helicopters";
		displayName="HMP Gunship";
		editorPreview = "";
	};
	class 332nd_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Helicopters";
		displayName="HMP Transport";
		editorPreview = "";
	};
};