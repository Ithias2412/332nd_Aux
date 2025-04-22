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
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Marine_CT.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Marine_CT.paa",
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

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_Marine_Extended
        {
            label = "Hazardous Environment";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Trooper", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Non NCO";
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
        class 332nd_Helmet_Marine_CT
        {
            model = "332nd_Helmets_Marine_Extended";
            Type = "Trooper";
        };
	};
};