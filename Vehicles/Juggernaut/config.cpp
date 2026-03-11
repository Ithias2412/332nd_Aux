class CfgPatches
{
	class 332nd_Juggernaut
	{
		requiredAddons[] = {"3AS_APC_Jug"};
		units[] = 
		{
			"332nd_Juggernaut",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Jug;
	class 332nd_Juggernaut: 3AS_Jug
	{
		armor = 350;
		crewVulnerable = 0; //was 1
		displayName = "[332nd] HAVw A6 Juggernaut";
		faction = "332nd_Faction";
	};
};