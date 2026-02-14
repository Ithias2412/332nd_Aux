class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_AAT
	{
		units[] = 
        {
            "332nd_CIS_AAT",
            "332nd_CIS_AAT_Heavy",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_AAT",
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class 3AS_AAT_base_F: Tank_F
	{
		class HitPoints;
	};
	class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F
	{
		class HitPoints: HitPoints
		{
			
		};
	};
	class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F
	{
		class HitPoints: HitPoints
		{
			
		};
	};
	class 3AS_AAT: 3AS_CIS_AAT_F
	{
		class HitPoints: HitPoints
		{
			
		};
	};
	class 3AS_AAT_Red: 3AS_AAT
	{
		class HitPoints: HitPoints
		{
			
		};
	};
	class 332nd_CIS_AAT: 3AS_AAT
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="AAT";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor = 1.5; //was 0.5
				explosionShielding = 1.44;
				material = -1;
				minimalHit = 0.08;
				name = "track_l_hit";
				passThrough = 0;
				radius = 0.3;
				visual = "pas_L";
			};
			class HitRTrack
			{
				armor = 1.5; //was 0.5
				explosionShielding = 1.44;
				material = -1;
				minimalHit = 0.08;
				name = "track_r_hit";
				passThrough = 0;
				radius = 0.3;
				visual = "pas_P";
			};
		};
	};
	class 332nd_CIS_AAT_Heavy: 3AS_AAT_Red
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Heavy_Vics";
		displayName="AAT (Heavy)";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor = 1.5; //was 0.5
				explosionShielding = 1.44;
				material = -1;
				minimalHit = 0.08;
				name = "track_l_hit";
				passThrough = 0;
				radius = 0.3;
				visual = "pas_L";
			};
			class HitRTrack
			{
				armor = 1.5; //was 0.5
				explosionShielding = 1.44;
				material = -1;
				minimalHit = 0.08;
				name = "track_r_hit";
				passThrough = 0;
				radius = 0.3;
				visual = "pas_P";
			};
		};
	};
};