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