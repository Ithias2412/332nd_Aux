class CfgPatches {
	class 332nd_Helmets_AB {
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
    class ItemInfo;
	class HeadgearItem;
	class SWLB_clone_P2_helmet;

	class 332nd_Helmet_P2_CR: SWLB_clone_P2_helmet
	{};

	class 332nd_Helmet_JT_CT: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Jump Trooper)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_JT.paa"
		};
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_AB_Extended
        {
            label = "Phase 2";
            author = "Cherryy";
			options[] = { "Type",};
            class Type
            {
                label = "Type";
				values[] = { "JumpTrooper", };
                changeingame = 0;
                alwaysSelectable = 1;
				class JumpTrooper
                {
                    label = "Jump Trooper";
                    description = "CT+";
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
        class 332nd_Helmet_JT_CT
        {
            model = "332nd_Helmets_AB_Extended";
            Type = "Trooper";
        };
	};
};

