#include "..\..\332nd_Aux_Macros.hpp"
#define AB_HELM(NAME,AUTH,DISP,TEX) class NAME: 332nd_Helmet_AB_Base { author = AUTH; displayName = DISP; hiddenSelections[] = { "camo1", }; hiddenSelectionsTextures[] = { TEX, }; };
class CfgPatches
{
	class 332nd_Helmets_AB
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
	class JLTS_CloneHelmetAB;

//Base Start
	class 332nd_Helmet_AB_Base: JLTS_CloneHelmetAB
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] AB Helmet (CT)";
		subItems[] = {};
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Base.paa",
		};
		//model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[] =
			{
				"camo1"
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
	AB_HELM(332nd_Helmet_AB_Cherryy, "Cherryy", "[332nd] AB Helmet (Cherryy)", "332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Cherryy.paa")
	AB_HELM(332nd_Helmet_AB_Fusion, "Fusion", "[332nd] AB Helmet (Fusion)", "332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Fusion.paa")
	AB_HELM(332nd_Helmet_AB_Trick, "Ahri", "[332nd] AB Helmet (Trick)", "332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Trick.paa")
};

class XtdGearModels
{
    class CfgWeapons
    {
        class 332nd_Helmets_AB_Extended
        {
            label = "AB";
            author = "Ithias";
			options[] = { "Default", "Customs"};
            class Default
            {
                label = "Default";
				values[] = { "Trooper", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Non Camo";
                    //image = "xxx";
                };
			};
            class Customs
            {
                label = "Customs";
				values[] =
				{
					"Cherryy",
					"Fusion",
					"Trick",
				};
                changeingame = 0;
                alwaysSelectable = 1;
				class Cherryy
                {
                    label = "Cherryy";
                    description = "Can't hold a billet";
                    //image = "xxx";
            	};
				class Fusion
                {
                    label = "Fusion";
                    description = "Awaiting Rimuru DM";
                    //image = "xxx";
            	};
				class Trick
                {
                    label = "Trick";
                    description = "Goon Platoon";
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
        XTD_INFO(332nd_Helmet_AB_Base, "332nd_Helmets_AB_Extended", Default, "Trooper")
		XTD_INFO(332nd_Helmet_AB_Cherryy, "332nd_Helmets_AB_Extended", Customs, "Cherryy")
		XTD_INFO(332nd_Helmet_AB_Fusion, "332nd_Helmets_AB_Extended", Customs, "Fusion")
		XTD_INFO(332nd_Helmet_AB_Trick, "332nd_Helmets_AB_Extended", Customs, "Trick")
	};
};
