class CfgPatches {
	class 332nd_Helmets_ARC {
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
	class SWLB_clone_P15_helmet;
	class SWLB_clone_P2_helmet;

//Base Start
	class 332nd_Helmet_ARC: SWLB_clone_P15_helmet
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] ARC Helmet";
		//displayName="[332nd] P2 Helmet (CT)";
		//picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARC.paa",
		};
		model = "\SWLB_clones\SWLB_clone_P15_helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\SWLB_clones\SWLB_clone_P15_helmet.p3d";
			hiddenSelections[]=
			{
			"camo1",
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
	class 332nd_Helmet_ARC_P2: SWLB_clone_P2_helmet
	{
		author="Cherryy";
		dlc="332nd Aux";
		displayName="[332nd] ARC Helmet (P2)";
		//displayName="[332nd] P2 Helmet (CT)";
		//picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_ARC.paa",
		};
	};
};


class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_Fun_Ops_Extended
        {
            label = "Fun Operations";
            author = "Ithias";
			options[] = { "Type", "Varient", };
            class Type
            {
                label = "Type";
				values[] = { "ARC", "Commando",};
                changeingame = 0;
                alwaysSelectable = 1;
                class ARC
                {
                    label = "ARC";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Commando
                {
                    label = "Commando";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
			class Variant
            {
                label = "Variant";
				values[] = { "P1", "P2", };
                changeingame = 0;
                alwaysSelectable = 1;
                class P1
                {
                    label = "P1";
                    //description = "Default";
                    //image = "xxx";
                };
                class P2
                {
                    label = "P2";
                    //description = "Not Default";
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
        class 332nd_Helmet_ARC
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
            Type = "ARC";
			Variant = "P1";
        };
		class 332nd_Helmet_ARC_P2
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
            Type = "ARC";
			Variant = "P2";
        };
        class 332nd_Helmet_Commando
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
            Type = "Commando";
			Variant = "P2";
        };
	};
};