class CfgPatches {
	class 332nd_Helmets_P2 {
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
	class 332nd_Helmet_P2_CR;
	
	class 332nd_Helmet_P2_CT_104: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (104th / CT)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_104thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_104thTrooper_helmet_co.paa"
		};
	};
    class 332nd_Helmet_P2_CT_Comet: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (104th / Comet)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_104thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_104thComet_helmet_co.paa"
		};
	};
    class 332nd_Helmet_P2_CT_Boost: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (104th / Boost)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_104thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_104thBoost_helmet_co.paa"
		};
	};
     class 332nd_Helmet_P2_CT_Sinker: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (104th / Sinker)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_104thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_104thSinker_helmet_co.paa"
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P2_Extended_104
        {
            label = "Phase 2";
            author = "Cherryy";
			options[] = { "Type",};
            class Type
            {
                label = "Type";
				values[] = { "Trooper", "Boost", "Comet", "Sinker",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "104th CT";
                    //image = "xxx";
                };
                class Boost
                {
                    label = "Boost";
                    description = "104th Boost";
                    //image = "xxx";
                };
                class Comet
                {
                    label = "Comet";
                    description = "104th Comet";
                    //image = "xxx";
                };
                class Sinker
                {
                    label = "Sinker";
                    description = "104th Sinker";
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
		class 332nd_Helmet_P2_CT_104
        {
            model = "332nd_Helmets_P2_Extended_104";
            Type = "Trooper";
        };
        class 332nd_Helmet_P2_CT_Boost
        {
            model = "332nd_Helmets_P2_Extended_104";
            Type = "Boost";
        };
        class 332nd_Helmet_P2_CT_Comet
        {
            model = "332nd_Helmets_P2_Extended_104";
            Type = "Comet";
        };
        class 332nd_Helmet_P2_CT_Sinker
        {
            model = "332nd_Helmets_P2_Extended_104";
            Type = "Sinker";
        };
	};
};

