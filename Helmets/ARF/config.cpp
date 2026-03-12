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
	class HeadgearItem;
	class ls_gar_phase1Arf_helmet;

//Base Start
	class 332nd_Helmet_ARF_Base: ls_gar_phase1Arf_helmet
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] ARF Helmet (CT)";
		332nd_Has_Lowlight = 1;
		subItems[] = {};
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base_JLTS.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base_JLTS.paa",
		};
		model = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"visor"
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
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert_JLTS.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert_JLTS.paa",
		};
	};
	class 332nd_Helmet_ARF_Urban: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban_JLTS.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban_JLTS.paa",
		};
	};
	class 332nd_Helmet_ARF_Winter: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Winter)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter_JLTS.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter_JLTS.paa",
		};
	};
	class 332nd_Helmet_ARF_Woodland: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland_JLTS.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland_JLTS.paa",
		};
	};
	class 332nd_Helmet_ARF_Asuka: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Asuka)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
		};
	};
	class 332nd_Helmet_ARF_Cin: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Cin)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
		};
	};
	class 332nd_Helmet_ARF_Trick: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Trick)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
		};
	};
	class 332nd_Helmet_ARF_Stryker: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Stryker)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
		};
	};
	class 332nd_Helmet_ARF_Aztec: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] ARF Helmet (Aztec)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Aztec.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Aztec.paa",
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
				values[] = { "Asuka", "Cin", /* "Walkie", */ "Trick", "Stryker", "Smoke", "Aztec",};
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
				class Aztec
                {
                    label = "Aztec";
                    description = "Brazilian or something idk";
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
        class 332nd_Helmet_ARF_Aztec
        {
            model = "332nd_Helmets_ARF_Extended";
            Customs = "Aztec";
        };
	};
};