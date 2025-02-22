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
	
	class 332nd_Helmet_P2_CT_212: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (212th / CT)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_212thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_212thTrooper_helmet_co.paa"
		};
	};
    class 332nd_Helmet_P2_CT_Waxer: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (212th / Waxer)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_212thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_212thWaxer_helmet_co.paa"
		};
	};
    class 332nd_Helmet_P2_CT_Boil: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (212th / Boil)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_212thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_212thBoil_helmet_co.paa"
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P2_Extended_212
        {
            label = "Phase 2";
            author = "Cherryy";
			options[] = { "Type",};
            class Type
            {
                label = "Type";
				values[] = { "Trooper", "Waxer", "Boil",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "212th CT";
                    //image = "xxx";
                };
                class Waxer
                {
                    label = "Waxer";
                    description = "212th Boost";
                    //image = "xxx";
                };
                class Boil
                {
                    label = "Boil";
                    description = "212th Comet";
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
		class 332nd_Helmet_P2_CT_212
        {
            model = "332nd_Helmets_P2_Extended_212";
            Type = "Trooper";
        };
        class 332nd_Helmet_P2_CT_Waxer
        {
            model = "332nd_Helmets_P2_Extended_212";
            Type = "Waxer";
        };
        class 332nd_Helmet_P2_CT_Boil
        {
            model = "332nd_Helmets_P2_Extended_212";
            Type = "Boil";
        };
	};
};

