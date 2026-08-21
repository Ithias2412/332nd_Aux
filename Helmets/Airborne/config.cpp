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
	class 332nd_Helmet_AB_Cherryy: 332nd_Helmet_AB_Base
	{
		author="Cherryy";
		displayName="[332nd] AB Helmet (Cherryy)";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Cherryy.paa",
		};		
	};
	class 332nd_Helmet_AB_Fusion: 332nd_Helmet_AB_Base
	{
		author="Fusion";
		displayName="[332nd] AB Helmet (Fusion)";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Fusion.paa",
		};		
	};
	class 332nd_Helmet_AB_Trick: 332nd_Helmet_AB_Base
	{
		author="Ahri";
		displayName="[332nd] AB Helmet (Trick)";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Trick.paa",
		};		
	};
	class 332nd_Helmet_AB_Stryker: 332nd_Helmet_AB_Base
	{
		author="Ahri";
		displayName="[332nd] AB Helmet (Stryker)";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Stryker.paa",
		};		
	};
	class 332nd_Helmet_AB_Beansworth: 332nd_Helmet_AB_Base
	{
		author="Ahri";
		displayName="[332nd] AB Helmet (Beansworth)";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_AB_Beansworth.paa",
		};		
	};
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
					"Stryker",
					"Beansworth",
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
				class Stryker
                {
                    label = "Stryker";
                    description = "Trend Chaser";
                    //image = "xxx";
                };
				class Beansworth
                {
                    label = "Beansworth";
                    description = "I would've said a slur rn - Beansworth circa every discord call";
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
        class 332nd_Helmet_AB_Base
        {
            model = "332nd_Helmets_AB_Extended";
            Default = "Trooper";
        };
		class 332nd_Helmet_AB_Cherryy
        {
            model = "332nd_Helmets_AB_Extended";
            Customs = "Cherryy";
        };
		class 332nd_Helmet_AB_Fusion
        {
            model = "332nd_Helmets_AB_Extended";
            Customs = "Fusion";
        };
		class 332nd_Helmet_AB_Trick
        {
            model = "332nd_Helmets_AB_Extended";
            Customs = "Trick";
        };
		class 332nd_Helmet_AB_Stryker
        {
            model = "332nd_Helmets_AB_Extended";
            Customs = "Stryker";
        };
		class 332nd_Helmet_AB_Beansworth
        {
            model = "332nd_Helmets_AB_Extended";
            Customs = "Beansworth";
        };
	};
};