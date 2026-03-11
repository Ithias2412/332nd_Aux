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
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_ARF_Extended
        {
            label = "ARF";
            author = "Ithias";
			options[] = { "Default", "Camo", "Customs",};
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
            class Camo
            {
                label = "Camo";
				values[] = { "Desert", "Urban", "Winter", "Woodland", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Desert
                {
                    label = "Desert";
                    //description = "NA";
                    //image = "xxx";
                };
				class Urban
                {
                    label = "Urban";
                    //description = "NA";
                    //image = "xxx";
                };
				class Winter
                {
                    label = "Winter";
                    //description = "NA";
                    //image = "xxx";
                };
				class Woodland
                {
                    label = "Woodland";
                    //description = "NA";
                    //image = "xxx";
                };
            };
			class Customs
            {
                label = "Customs";
				values[] = { "Asuka", "Cin", /* "Walkie", */ "Trick", "Stryker", "Smoke",};
                changeingame = 0;
                alwaysSelectable = 1;
				class Asuka
                {
                    label = "Asuka";
                    description = "6k dollars into SC";
                    //image = "xxx";
                };
				class Cin
                {
                    label = "Cin";
                    description = "Where's the 9 Line";
                    //image = "xxx";
                };
				/* class Walkie
				{
					label = "Walkie";
					description = "Whispers drugs into my system";
					//image = "xxx";
				}; */
				class Trick
                {
                    label = "Trick";
                    description = "Goon Platoon";
                    //image = "xxx";
                };
				class Stryker
                {
                    label = "Stryker";
                    description = "Stryker Eureka";
                    //image = "xxx";
                };
				class Smoke
                {
                    label = "Smoke";
                    description = "Smokey Mountain Range";
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
        class 332nd_Helmet_ARF_Base
        {
            model = "332nd_Helmets_ARF_Extended";
            Default = "Trooper";
        };
        class 332nd_Helmet_ARF_Desert
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Desert";
        };
        class 332nd_Helmet_ARF_Urban
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Urban";
        };
        class 332nd_Helmet_ARF_Winter
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Winter";
        };
        class 332nd_Helmet_ARF_Woodland
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Woodland";
        };
        class 332nd_Helmet_ARF_Asuka
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Asuka";
        };
        class 332nd_Helmet_ARF_Cin
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Cin";
        };
        class 332nd_Helmet_ARF_Trick
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Trick";
        };
        class 332nd_Helmet_ARF_Stryker
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Stryker";
        };
	};
};