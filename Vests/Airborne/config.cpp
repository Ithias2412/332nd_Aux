class CfgPatches 
{
	class 332nd_Vests_Airborne
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
	class VestItem;
	class Hands;
	class Pelvis;
	class JLTS_CloneVestHolster;
	class 332nd_Trooper_Vest: JLTS_CloneVestHolster
	{
		class ItemInfo: VestItem
		{
			
		};
	};

	class 332nd_CS_Vest_AB: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CS / AB)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
			};
		};
	};
	
	class 332nd_CSP_Vest_AB: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSP / AB)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"",
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
			};
		};
	};

	class 332nd_CSS_Vest_AB: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSS / AB)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
			};
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vest_AB_Extended
        {
            label = "AB Vests";
            author = "Ithias";
			options[] = 
			{
				"Rank",
			};
            class Rank
            {
                label = "Rank";
				values[] = 
				{
					"CSP",
					"CS",
					"CSS",
				};
                changeingame = 0;
                alwaysSelectable = 1;
                class CSP
                {
                    label = "CSP";
                    description = "Specialist";
                    //image = "xxx";
                };
                class CS
                {
                    label = "CS";
                    description = "Sergeant";
                    //image = "xxx";
                };
                class CSS
                {
                    label = "CSS";
                    description = "Staff Sergeant";
                    //image = "xxx";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_CS_Vest_AB
        {
            model = "332nd_Vest_AB_Extended";
            Rank = "CS";
        };
        class 332nd_CSS_Vest_AB
        {
            model = "332nd_Vest_AB_Extended";
            Rank = "CSS";
        };
	};
};