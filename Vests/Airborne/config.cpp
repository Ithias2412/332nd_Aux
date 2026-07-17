#include "..\..\332nd_Aux_Macros.hpp"
#define AB_VEST(NAME,DISP,MDL,TEXA,TEXB) class NAME: 332nd_Trooper_Vest { displayName=DISP; model=MDL; hiddenSelections[]={"camo1","camo2"}; hiddenSelectionsTextures[]={TEXA,TEXB}; class ItemInfo: ItemInfo { uniformModel=MDL; hiddenSelections[]={"camo1","camo2"}; }; };
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

	AB_VEST(332nd_CS_Vest_AB, "[332nd] Vest (CS / AB)", "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d", "332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa", "MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa")

	AB_VEST(332nd_CSP_Vest_AB, "[332nd] Vest (CSP / AB)", "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d", "", "MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa")

	AB_VEST(332nd_CSS_Vest_AB, "[332nd] Vest (CSS / AB)", "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d", "332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa", "MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa")

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
        XTD_INFO(332nd_CS_Vest_AB, "332nd_Vest_AB_Extended", Rank, "CS")
        XTD_INFO(332nd_CSS_Vest_AB, "332nd_Vest_AB_Extended", Rank, "CSS")
        XTD_INFO(332nd_CSP_Vest_AB, "332nd_Vest_AB_Extended", Rank, "CSP")
	};
};
