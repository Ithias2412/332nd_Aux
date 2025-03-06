class CfgPatches 
{
	class 332nd_LAAT_LE 
	{
		requiredAddons[] = {};
		units[] = 
        {
			"332nd_LAAT_LE",
        };
		weapons[] = 
        {
            "",
        };
	};
};

class CfgVehicles
{
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Components;
	};
	class ls_laatle_base: Helicopter_Base_H
	{
		class Components: Components 
		{
			class TransportPylonsComponent;
		};
	};
	class ls_heli_laatle: ls_laatle_base
	{
		class Components: Components 
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				
			};
		};
	};
	class 332nd_LAAT_LE: ls_heli_laatle
	{
		displayname = "[332nd] LAAT/le";
		faction = "332nd_Faction";
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010;
		ls_impulsor_boostSpeed_1=300;
		icon = "lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
		camouflage = 1;
		class pilotCamera
		{
			//Removed
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				uiPicture = "";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_Anvil_III_Mag";
						priority=5;
						hardpoints[]=
						{
							"332nd_Anvil_III",
						};
						turret[]={0};
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_Anvil_III_Mag";
						priority=4;
						hardpoints[]=
						{
							"332nd_Anvil_III",
						};
						turret[]={0};
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_Anvil_III_Mag";
						priority=3;
						hardpoints[]=
						{
							"332nd_Anvil_III",
						};
						turret[]={0};
						UIposition[] = {0.1,0.3};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[] = {0.64,0.4};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[] = {0.62,0.35};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[] = {0.59,0.3};
					};
				};
			};
		};
	};
};