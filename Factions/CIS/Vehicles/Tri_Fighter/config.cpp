class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Tri_Fighters
	{
		units[] = 
        {
            "332nd_CIS_Tri_Fighter",
			"332nd_CIS_Tri_Fighter_Missiles",
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
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
	};
	class 3AS_Tri_Fighter_DynamicLoadout_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
	};
	class 3AS_Tri_Fighter_DynamicLoadout: 3AS_Tri_Fighter_DynamicLoadout_Base
	{
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				
			};
		};
	};

	class 332nd_CIS_Tri_Fighter: 3AS_Tri_Fighter_DynamicLoadout
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Tri Fighter";
		//armor = 200;
		//editorPreview = "";
	};
	class 332nd_CIS_Tri_Fighter_Missiles: 3AS_Tri_Fighter_DynamicLoadout
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_Planes";
		displayName="Tri Fighter (Advanced)";
		//armor = 200;
		//editorPreview = "";
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
					class pylons3
					{
						attachment = "332nd_CIS_A2A_Missile_Mag";
						hardpoints[] = {"332nd_CIS_A2A_Missile",};
						maxweight = 300;
						name = "3AS_Vulture_MFD";
						priority = 11;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.1,0.35};
					};
				};
			};
		};
	};
};