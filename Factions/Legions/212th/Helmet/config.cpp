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
