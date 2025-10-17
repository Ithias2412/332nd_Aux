class CfgPatches {
	class 332nd_Facewear {
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
class CfgWeapons
{
	class OPTRE_NVG;
	class ItemInfo;
	class 332nd_NVG_Chip: OPTRE_NVG
	{
		displayName = "New! [332nd] NVG Chip";
		picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";
	};
	class 332nd_NVG_Marshal_Commander: OPTRE_NVG
	{
		displayName = "New! [332nd] Marshal Commander";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_mc_visor_ui_ca.paa";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_JLTS.paa"
		};
		visionMode[] = 
		{
			"Normal",
			"NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		};
	};
	class 332nd_NVG_Commander: OPTRE_NVG
	{
		displayName = "New! [332nd] Commander";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_cc_visor_ui_ca.paa";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_JLTS.paa"
		};
		visionMode[] = 
		{
			"Normal",
			"NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		};
	};
	class 332nd_NVG_Rangefinder: OPTRE_NVG
	{
		displayName = "New! [332nd] Rangefinder";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_range_co.paa"
		};
		visionMode[] = 
		{
			"Normal",
			"NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
		};
	};
	class 332nd_NVG_Visor: OPTRE_NVG
	{
		displayName = "New! [332nd] Visor";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"
		};
		visionMode[] = 
		{
			"Normal",
			"NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		};
	};
	class 332nd_NVG_Inverted_Visor: OPTRE_NVG
	{
		displayName = "New! [332nd] Visor (Inverted)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Inverted_JLTS.paa"
		};
		visionMode[] = 
		{
			"Normal",
			"NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
			type = 616;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_NVG_Extended
        {
            label = "Night Vision";
            author = "Ithias";
			options[] = { "Type", "Customs",};
            class Type
            {
                label = "Type";
				values[] = { "Chip", "Visor", "Visor_Inverted", "Rangefinder", "Commander", "Marshal_Commander"};
                changeingame = 0;
                alwaysSelectable = 1;
                class Chip
                {
                    label = "Chip";
                    description = "Default";
                    //image = "xxx";
                };
				class Visor
                {
                    label = "Visor";
                    description = "VCT+";
                    //image = "xxx";
                };
				class Visor_Inverted
                {
                    label = "Visor Inverted";
                    description = "VCT+";
                    //image = "xxx";
                };
				class Rangefinder
                {
                    label = "Rangefinder";
                    description = "VCT+";
                    //image = "xxx";
                };
				class Commander
                {
                    label = "Commander";
                    description = "CL+";
                    //image = "xxx";
                };
				class Marshal_Commander
                {
                    label = "Marshal Commander";
                    description = "CC+";
                    //image = "xxx";
                };
            };
            class Customs
            {
                label = "Customs";
				values[] = { "Cherryy", "Walkie"};
                changeingame = 0;
                alwaysSelectable = 1;
                class Cherryy
                {
                    label = "Cherryy";
                    //description = "Default";
                    //image = "xxx";
                };
				class Walkie
                {
                    label = "Walkie";
                    //description = "Default";
                    //image = "xxx";
                };
            };
			class Variant
            {
                label = "Variant";
				values[] = { "A", "B", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Tanker
                {
                    label = "Tanker";
                    //description = "Default";
                    //image = "xxx";
                };
                /* class NCO
                {
                    label = "NCO";
                    //description = "Not Default";
                    //image = "xxx";
                }; */
			};
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_NVG_Chip
        {
            model = "332nd_NVG_Extended";
            Type = "Chip";
        };
        class 332nd_NVG_Rangefinder
        {
            model = "332nd_NVG_Extended";
            Type = "Rangefinder";
        };
        class 332nd_NVG_Visor
        {
            model = "332nd_NVG_Extended";
            Type = "Visor";
        };
		class 332nd_NVG_Inverted_Visor
        {
            model = "332nd_NVG_Extended";
            Type = "Visor_Inverted";
        };
        class 332nd_NVG_Commander
        {
            model = "332nd_NVG_Extended";
            Type = "Commander";
        };
        class 332nd_NVG_Marshal_Commander
        {
            model = "332nd_NVG_Extended";
            Type = "Marshal_Commander";
        };
    };
};