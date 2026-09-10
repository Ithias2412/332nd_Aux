class CfgPatches
{
	class 332nd_Overheating_Compat
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			""
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"IDA_Republic",
			"IDA_Imperial",
			"IDA_INDEP",
		};
	};
};

class CfgWeapons 
{
	class RifleCore;
	class Rifle: RifleCore
	{
		ace_overheating_barrelMass = 9999;
	};
	class arifle_MX_Base_F;
	class IDA_DC15S: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class hgun_Pistol_heavy_01_F;
	class IDA_DC17: hgun_Pistol_heavy_01_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_DLT19: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_773Firepuncher: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_DL63: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_E11D: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_A260: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
	class IDA_DC15X: arifle_MX_Base_F
	{
		ace_overheating_barrelMass = 9999;
	};
};

class CfgVehicles 
{
	
};