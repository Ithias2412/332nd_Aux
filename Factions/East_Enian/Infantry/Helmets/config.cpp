class CfgPatches 
{
	class 332nd_East_Enia_Faction_Infantry_Helmets
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
    class HeadgearItem;
	class TKE_UCMCHelmMask_Camo2;
	class H_Beret_Colonel;
	
// Helmet
	class 332nd_Beret_East_Enian: H_Beret_Colonel
	{
		scope=1;
		displayName = "[332nd] East Enian Beret";		
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Factions\East_Enian\Infantry\Tex\East_Enian_Beret.paa",
		};
	};
	class 332nd_Helmet_East_Enian: TKE_UCMCHelmMask_Camo2
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] East Enian Helmet";
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Factions\East_Enian\Infantry\Tex\East_Enian_Helmet.paa",
			"332nd_Aux\Factions\East_Enian\Infantry\Tex\East_Enian_Helmet_Mask.paa",
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"camo","camo1"};
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
			class HitpointsProtectionInfo
			{
				//Nothing kekw
			};
		};
	};
};