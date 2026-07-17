#include "..\332nd_Aux_Macros.hpp"
#define NVG_VAR(NAME,DISP,MODEL,PICTURE,TEXTURE,UNIFORMMODEL) class NAME: OPTRE_NVG { displayName = DISP; model = MODEL; picture = PICTURE; hiddenSelections[] = { "camo1" }; hiddenSelectionsTextures[] = { TEXTURE }; visionMode[] = { "Normal", "NVG", }; class ItemInfo: ItemInfo { hiddenSelections[] = {"camo1"}; mass = 5; modelOff = MODEL; type = 616; uniformModel = UNIFORMMODEL; picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa"; }; };
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
	class NVGoggles;
	class OPTRE_NVG: NVGoggles
	{
		class ItemInfo;
	};
	class 332nd_NVG_Chip: OPTRE_NVG
	{
		displayName = "[332nd] NVG Chip";
		picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";
	};
	NVG_VAR(332nd_NVG_Marshal_Commander, "[332nd] Marshal Commander", "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_mc_visor_ui_ca.paa", "\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_JLTS.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d")
	NVG_VAR(332nd_NVG_Commander, "[332nd] Commander", "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_cc_visor_ui_ca.paa", "\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_JLTS.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d")
	NVG_VAR(332nd_NVG_Rangefinder, "[332nd] Rangefinder", "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa", "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_range_co.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d")
	NVG_VAR(332nd_NVG_Visor, "[332nd] Visor", "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa", "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d")
	NVG_VAR(332nd_NVG_Visor_Luci, "[332nd] Visor (Luci)", "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa", "\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Luci.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d")
	NVG_VAR(332nd_NVG_Inverted_Visor, "[332nd] Visor (Inverted)", "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d", "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa", "\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Inverted_JLTS.paa", "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d")
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
				values[] =
				{
					"Cherryy",
					"Walkie",
					"Luci",
				};
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
				class Luci
                {
                    label = "Luci";
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
        XTD_INFO(332nd_NVG_Chip, "332nd_NVG_Extended", Type, "Chip")
        XTD_INFO(332nd_NVG_Rangefinder, "332nd_NVG_Extended", Type, "Rangefinder")
        XTD_INFO(332nd_NVG_Visor, "332nd_NVG_Extended", Type, "Visor")
        XTD_INFO(332nd_NVG_Inverted_Visor, "332nd_NVG_Extended", Type, "Visor_Inverted")
        XTD_INFO(332nd_NVG_Commander, "332nd_NVG_Extended", Type, "Commander")
        XTD_INFO(332nd_NVG_Marshal_Commander, "332nd_NVG_Extended", Type, "Marshal_Commander")
        XTD_INFO(332nd_NVG_Visor_Luci, "332nd_NVG_Extended", Customs, "Luci")
    };
};
