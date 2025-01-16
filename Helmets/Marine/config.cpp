class CfgPatches {
	class 332nd_Helmets_Marine {
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
	class SEA_Helmet_GM_21;

//Base Start
	class 332nd_Helmet_Marine_CT: SEA_Helmet_GM_21
	{
		author="Cherryy + Ithias";
		dlc="332nd Aux";
		displayName="[332nd] Hazardous Environment Helmet";
		//displayName="[332nd] P2 Helmet (CT)";
		//picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
			"Visor",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_CT.paa",
			"332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_CT.paa",
		};
		model = "JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
			hiddenSelections[] = 
			{
				"Camo1",
				"Visor",
			};
			modelSides[] = {6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=20;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	
	class 332nd_Helmet_Marine_NCO: 332nd_Helmet_Marine_CT
	{
		hiddenSelections[]=
		{
			"camo1",
			"Visor",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_NCO.paa",
			"332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_NCO.paa",
		};
	};
};