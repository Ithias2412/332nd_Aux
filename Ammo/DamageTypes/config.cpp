class CfgPatches
{
	class 332nd_Ammo_DamageTypes
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
		requiredAddons[]={};
	};
};

class ACE_Medical_Injuries 
{
	class Wounds
	{
		class ElectricBurn
		{
			bleeding = 0;
			causeFracture = 0;
			causeLimping = 0;
			pain = 1;
		};
	};
    class damageTypes
	{
        class 332nd_ARC_DamageType 
		{
			thresholds[] = 
			{
				{20,10},
				{4.5,2},
				{3,1},
				{0,1}
			};
            selectionSpecific = 0;
            noBlood = 1;
            class woundHandlers 
			{
                ace_medical_damage = "ace_medical_damage_fnc_woundsHandlerBase";
				ace_medical_damage_woundsHandlerBase = "ace_medical_damage_fnc_woundsHandlerBase";
            };
            class ElectricBurn 
			{
                //weighting[] = {{1.5,0},{1.5,1},{0.35,1},{0.35,0}};
				weighting[] = {{0.2,2},{0,2.5}};
            };
        };
    };
};