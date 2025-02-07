class CfgPatches {
	class 332nd_Helmets_ARF {
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
	class SWLB_clone_ARF_P1_helmet;

//Base Start
	class 332nd_Helmet_ARF_Base: SWLB_clone_ARF_P1_helmet
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] ARF Helmet";
		//displayName="[332nd] P2 Helmet (CT)";
		//picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base.paa",
			"",
		};
		model = "\SWLB_clones\SWLB_clone_ARF_helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\SWLB_clones\SWLB_clone_ARF_helmet.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
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
	class 332nd_Helmet_ARF_Desert: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Desert)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert.paa",
		};
	};
	class 332nd_Helmet_ARF_Urban: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Urban)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban.paa",
		};
	};
	class 332nd_Helmet_ARF_Winter: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Winter)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter.paa",
		};
	};
	class 332nd_Helmet_ARF_Woodland: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Woodland)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland.paa",
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
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Trooper", "Woodland", "Winter", "Urban", "Desert", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Non Camo";
                    //image = "xxx";
                };
				class Woodland
                {
                    label = "Woodland";
                    //description = "NA";
                    //image = "xxx";
                };
				class Winter
                {
                    label = "Winter";
                    //description = "NA";
                    //image = "xxx";
                };
				class Urban
                {
                    label = "Urban";
                    //description = "NA";
                    //image = "xxx";
                };
				class Desert
                {
                    label = "Desert";
                    //description = "NA";
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
            Type = "Trooper";
        };
        class 332nd_Helmet_ARF_Woodland
        {
            model = "332nd_Helmets_ARF_Extended";
            Type = "Woodland";
        };
        class 332nd_Helmet_ARF_Winter
        {
            model = "332nd_Helmets_ARF_Extended";
            Type = "Winter";
        };
        class 332nd_Helmet_ARF_Urban
        {
            model = "332nd_Helmets_ARF_Extended";
            Type = "Urban";
        };
        class 332nd_Helmet_ARF_Desert
        {
            model = "332nd_Helmets_ARF_Extended";
            Type = "Desert";
        };
	};
};