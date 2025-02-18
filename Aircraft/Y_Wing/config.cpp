class CfgPatches 
{
	class 332nd_Y_Wing
	{
		requiredAddons[] = {};
		units[] = 
        {
			"332nd_Y_Wing",
        };
		weapons[] = 
        {
            "",
        };
	};
};

class CfgVehicles
{
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components;
	};
	class 3AS_BTLB_Bomber: BTL_Base
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
	};
	class 332nd_Y_Wing: 3AS_BTLB_Bomber
	{
		displayname = "[332nd] Y-Wing";
		faction = "332nd_Faction";
		hiddenselectionstextures[] = 
		{
			"332nd_Aux\Aircraft\Y_Wing\Tex\332nd_Y_Wing_Chasis.paa",
			"3as\3AS_btlb\data\detail_co.paa",
			"3as\3AS_btlb\data\interior_co.paa",
			"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				uiPicture = "";
				class Pylons
				{
					class Pylon1
					{
						attachment="332nd_Anvil_I_Mag";
						priority=10;
						hardpoints[]=
						{
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Forge_I",
							"332nd_Forge_III",
							"332nd_Forge_X_N",
						};
						turret[]={0};
						UIposition[] = {0.5,0.25};
					};
					class Pylon2: Pylon1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.15,0.25};
					};
					class Pylon3: Pylon1
					{
						attachment="332nd_Anvil_III_Mag";
						priority = 9;
						hardpoints[]=
						{
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Forge_I",
							"332nd_Forge_III",
							"332nd_Forge_X_N",
						};
						turret[]={0};
						UIposition[] = {0.55,0.35};
					};
					class Pylon4: Pylon3
					{
						mirroredMissilePos=3;
						UIposition[] = {0.1,0.35};
					};
					class Pylon5: Pylon1
					{
						attachment="332nd_Forge_I_Mag";
						priority = 7;
						hardpoints[]=
						{
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Forge_I",
							"332nd_Forge_III",
							"332nd_Forge_X_N",
						};
						turret[]={0};
						UIposition[] = {0.6,0.45};
					};
					class Pylon6: Pylon5
					{
						mirroredMissilePos = 5;
						UIposition[] = {0.05,0.45};
					};
					class Pylon7: Pylon1
					{
						attachment="332nd_Forge_III_Mag";
						priority = 7;
						hardpoints[]=
						{
							"332nd_Anvil_I",
							"332nd_Anvil_III",
							"332nd_Forge_I",
							"332nd_Forge_III",
							"332nd_Forge_X_N",
						};
						turret[]={0};
						UIposition[] = {0.6,0.45};
					};
					class Pylon8: Pylon7
					{
						mirroredMissilePos = 7;
						UIposition[] = {0.2,0.4};
					};
				};
			};
		};
	};
};