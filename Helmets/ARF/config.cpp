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
		332nd_Has_Lowlight = 1;
		//displayName="[332nd] P2 Helmet (CT)";
		//picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		subItems[] = {};
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
	/* class 332nd_Helmet_ARF_New_Mat: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (New Mat)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_New_Mat.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_New_Mat.paa",
		}; 
	}; */
	//Customs
	class 332nd_Helmet_ARF_Asuka: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Asuka)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
		};
	};
	class 332nd_Helmet_ARF_Cin: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Cin)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
		};
	};
	/* class 332nd_Helmet_ARF_Walkie: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Walkie)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Walkie.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Walkie.paa",
		};
	}; */
	class 332nd_Helmet_ARF_Trick: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Trick)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
		};
	};
	class 332nd_Helmet_ARF_Stryker: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Stryker)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
		};
	};
	class 332nd_Helmet_ARF_Smoke: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Smoke)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Smoke.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Smoke.paa",
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
				values[] = { "Asuka", "Cin", /* "Walkie", */ "Trick", "Stryker", "Smoke"};
                changeingame = 0;
                alwaysSelectable = 1;
				class Asuka
                {
                    label = "Asuka";
                    description = "Sucks at Destiny";
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
        class 332nd_Helmet_ARF_Woodland
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Woodland";
        };
        class 332nd_Helmet_ARF_Winter
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Winter";
        };
        class 332nd_Helmet_ARF_Urban
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Urban";
        };
        class 332nd_Helmet_ARF_Desert
        {
            model = "332nd_Helmets_ARF_Extended";
            Camo = "Desert";
        };
		//customs
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
		/*  class 332nd_Helmet_ARF_Walkie
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Walkie";
        }; */
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
		 class 332nd_Helmet_ARF_Smoke
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Smoke";
        };
	};
};