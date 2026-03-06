class CfgPatches
{
	class 332nd_BARC
	{
		requiredAddons[] = {"3AS_LightVics_Barc"};
		units[] = 
		{
			"332nd_Barc_Speeder",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Barc;
	class 332nd_Barc_Speeder: 3AS_Barc
	{
		displayname = "[332nd] BARC Speeder";
		faction = "332nd_Faction";
		scope = 2;
		side = 1;
		armor = 50; // was 22
		camouflage = 0.6; // was 2
		
		getInRadius = 5; // was 2.5
		acceleration = 50; // was 25
		/*
		antiRollbarForceCoef = 30; // was 24
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMax = 170; // was 70
		antiRollbarSpeedMin = 5; // was 15
		*/
		antiRollbarForceCoef = 100; // was 24
		antiRollbarForceLimit = 100;
		antiRollbarSpeedMax = 100; // was 70
		antiRollbarSpeedMin = 0; // was 15
		maxSpeed = 300; // was 160

		hiddenSelections[] = 
		{
			"camo",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vehicles\BARC_Speeder\tex\332nd_BARC.paa",
		};
		magazines[] = {"3AS_BARC_Mag"};
		weapons[] = {"3AS_BARC_repeater"};
	};
};