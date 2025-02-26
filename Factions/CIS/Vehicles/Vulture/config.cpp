class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Vulture
	{
		units[] = 
        {
            "332nd_CIS_Vulture",
			"332nd_CIS_Vulture_Missiles",
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
	class 3AS_CIS_Vulture_F;
	class 332nd_CIS_Vulture: 3AS_CIS_Vulture_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Vulture";
		//armor = 200;
		editorPreview = "";
	};
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
	};
	class 3AS_Vulture_Base_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
	};
	class 3AS_CIS_Vulture_AA_F: 3AS_Vulture_Base_F
	{
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				
			};
		};
	};
	class 332nd_CIS_Vulture_Missiles: 3AS_CIS_Vulture_AA_F
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Vulture (Advanced)";
		//armor = 200;
		editorPreview = "";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons
				{
					class pylons1
					{
						attachment = "332nd_CIS_A2A_Missile_Mag";
						hardpoints[] = {"332nd_CIS_A2A_Missile",};
						maxweight = 300;
						name = "3AS_Vulture_MFD";
						priority = 13;
						UIposition[] = {0.6,0.45};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.05,0.45};
					};
				};
			};
		};
	};
};