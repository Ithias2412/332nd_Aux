class CfgPatches {
	class 332nd_Helmets_RTO {
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
	class SWLB_P2_SpecOps_Helmet;
	class 332nd_Helmet_RTO_Base: SWLB_P2_SpecOps_Helmet
	{
		author="Cherryy";
		dlc="332nd Aux";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		displayName="[332nd] P2 RTO Helmet (Base)";
		scope=0;
		subItems[] = {};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			modelSides[]={6};
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
	class 332nd_Helmet_RTO_CT: 332nd_Helmet_RTO_Base
	{
		displayName="[332nd] P2 Radio Helmet (CT)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_CT.paa"
		};
	};
	class 332nd_Helmet_RTO_Seelig: 332nd_Helmet_RTO_Base
	{
		displayName="[332nd] P2 Radio Helmet (Seelig)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_Seelig.paa"
		};
	};
	class 332nd_Helmet_RTO_Cin: 332nd_Helmet_RTO_Base
	{
		displayName="[332nd] P2 Radio Helmet (Cin)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_Cin.paa"
		};
	};
	class 332nd_Helmet_RTO_Joker: 332nd_Helmet_RTO_Base
	{
		displayName="[332nd] P2 Radio Helmet (Joker)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_Joker.paa"
		};
	};
//Customs

};