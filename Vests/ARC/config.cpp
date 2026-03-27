class CfgPatches 
{
	class 332nd_Vests_ARC
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

	class 332nd_ARC_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARC)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			//"332nd_Aux\Missing_Texture.paa"
			//"MRC\JLTS\characters\CloneArmor\data\Clone_vest_arc_co.paa"
			"332nd_Aux\Vests\Tex\332nd_Vest_ARC.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			hiddenSelections[] = 
			{
				"camo1"
			};
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vest_ARC_Extended
        {
            label = "ARC Vests";
            author = "Ithias";
			options[] = { "Rank", };
            class Rank
            {
                label = "Rank";
				values[] = {"ARC",};
                changeingame = 0;
                alwaysSelectable = 1;
                class ARC
                {
                    label = "ARC";
                    description = "CAG / JSOC Inspired";
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
        class 332nd_ARC_Vest
        {
            model = "332nd_Vest_ARC_Extended";
            Rank = "ARC";
        };
	};
};