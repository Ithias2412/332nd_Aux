class CfgPatches 
{
	class 332nd_CIS_Faction_Vehicles_OG9 
	{
		units[] = 
        {
			""
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
	class 3AS_OG9Turret;
	class 332nd_CIS_OG9: 3AS_OG9Turret
	{
		faction="332nd_CIS_Faction";		
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="AAT";
		//crew = "332nd_Droid_B1_Crewman";
		armor = 24; // was 24
		irTarget = 1;
	};
};