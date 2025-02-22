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
	
	class 332nd_Helmet_P2_CT_327: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (327th / CT)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_327thTrooper_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_units\data\SWLB_327thTrooper_helmet_co.paa"
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P2_Extended_327
        {
            label = "Phase 2";
            author = "Cherryy";
			options[] = { "Type",};
            class Type
            {
                label = "Type";
				values[] = { "Trooper", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "327th CT";
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
		class 332nd_Helmet_P2_CT_327
        {
            model = "332nd_Helmets_P2_Extended_327";
            Type = "Trooper";
        };
	};
};

