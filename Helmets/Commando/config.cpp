class CfgPatches {
	class 332nd_Helmets_Commando {
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
	class 3AS_H_Katarn_Helmet;

//Base Start
    class 332nd_Helmet_Commando: 3AS_H_Katarn_Helmet
    {
		author="Frankenburg + Ithias";
		dlc="332nd Aux";
        displayName = "[332nd] Commando Helmet";
        hiddenSelections[] = 
		{
			"camo",
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Helmets\Tex\332nd_Commando_Helmet.paa",
			"\332nd_Aux\Helmets\Tex\332nd_Commando_Helmet.paa",
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
			hiddenSelections[] = 
			{
				"camo",
				"camo1"
			};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
};