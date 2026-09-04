class CfgPatches 
{
	class 332nd_Helmets_BARC
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
	class JLTS_CloneHelmetBARC;

//Base Start
	class 332nd_Helmet_BARC_Base: JLTS_CloneHelmetBARC
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] BARC Helmet (CT)";
		subItems[] = {};
		TFAR_ExternalIntercomWirelessCapable = 1;
		hiddenSelections[] = 
		{
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_BARC_Base.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_BARC_Base.paa",
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[] = 
			{
				"camo2",
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
        class 332nd_Helmets_BARC_Extended
        {
            label = "BARC";
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
        class 332nd_Helmet_BARC_Base
        {
            model = "332nd_Helmets_BARC_Extended";
            Default = "Trooper";
        };
	};
};