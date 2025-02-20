class CfgPatches {
	class 332nd_Vests_Commando {
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
	class VestItem;
	class Hands;
	class Pelvis;
	class 332nd_Trooper_Vest;


	class 332nd_Commando_Vest: 332nd_Trooper_Vest
	{
		displayName = "[332nd] Commando Armor Plating";
	};

	class 332nd_Commando_Vest_Demolitions: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Demolitions Vest";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Demo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_DemolitionPack.p3d";
			hiddenSelections[] = {};
		};
	};

	class 332nd_Commando_Vest_Sniper: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Sniper Vest";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Sniper.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Sniper_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Sniper.p3d";
			hiddenSelections[] = {};
		};
	};

	class 332nd_Commando_Vest_TL: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Team Leader Vest";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};

	class 332nd_Commando_Vest_TL_Red: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Team Leader Vest (Red)";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_Boss_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};

	class 332nd_Commando_Vest_TL_Orange: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Team Leader Vest (Orange)";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_Foxtrot_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Vest_Team_Leader.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
	
	class 332nd_Commando_Vest_Technician: 332nd_Commando_Vest
	{
        displayName = "[332nd] Commando Technician Vest";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Vest_Tech_Foxtrot_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_TechPack.p3d";
			hiddenSelections[] = {"camo"};
		};
	};

};