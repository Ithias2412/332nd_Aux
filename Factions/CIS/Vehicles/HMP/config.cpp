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
	class 3AS_HMP_Transport;
	class Helicopter_Base_F;
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class 3AS_HMP_Base: Heli_Attack_01_base_F
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
	};
	class 3AS_HMP_Gunship: 3AS_HMP_Base
	{
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				
			};
		};
	};
	class 332nd_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Helicopters";
		displayName="HMP Gunship";
		editorPreview = "";
		crew = "332nd_Droid_B1_Pilot";
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_CIS_A2A_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_A2A_Missile",
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_CIS_A2A_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_A2A_Missile",
						};
						turret[]={0};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_CIS_ATG_Missile_Mag";
						priority = 5;
						hardpoints[]=
						{
							"332nd_CIS_ATG_Missile",
						};
						turret[]={0};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
			};
		};
	};
	class 332nd_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Helicopters";
		displayName="HMP Transport";
		editorPreview = "";
		crew = "332nd_Droid_B1_Pilot";
	};
};