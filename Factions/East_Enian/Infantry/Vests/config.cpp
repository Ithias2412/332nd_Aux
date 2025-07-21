class CfgPatches 
{
	class 332nd_East_Enia_Faction_Infantry_Vests
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
	class TKE_UCMCArmour2_2Camo2;
	
// Vest
	class 332nd_Vest_East_Enian: TKE_UCMCArmour2_2Camo2
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] East Enian Vest";
		class ItemInfo: VestItem
		{
			containerClass = "Supply120";
			hiddenSelections[] = 
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
			};
			hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			mass = 25;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
			class HitpointsProtectionInfo
			{
				//Nothing kekw
			};
		};
	};
	class 332nd_Vest_East_Enian_Light: 332nd_Vest_East_Enian
	{
		displayName = "[332nd] East Enian Light Vest";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmour_co.paa",
			"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa",
		};
		class ItemInfo: VestItem
		{
			containerClass = "Supply120";
			hiddenSelections[] = 
			{
				"camo",
				"camo1",
			};
			hiddenSelectionsTextures[] = 
			{
				"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmour_co.paa",
				"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa",
			};
			mass = 25;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			class HitpointsProtectionInfo
			{
				//Nothing kekw
			};
		};
	};
};