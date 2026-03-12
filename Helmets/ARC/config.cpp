class CfgPatches 
{
	class 332nd_Helmets_ARC
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
	class SEA_Helmet_ARC;

//Base Start
	class 332nd_Helmet_ARC_Base: SEA_Helmet_ARC
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] ARC Helmet";
		subItems[] = {};
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Missing_Texture.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
			hiddenSelections[] = 
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
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_ARC_Extended
        {
            label = "ARC";
            author = "Ithias";
			options[] = { "Default", };
            class Default
            {
                label = "Default";
				values[] = { "Trooper",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Non Camo";
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
        class 332nd_Helmet_ARC_Base
        {
            model = "332nd_Helmets_ARC_Extended";
            Default = "Trooper";
        };
	};
};