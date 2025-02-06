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
	class lsd_gar_rangefinder_nvg;
	
	class 332nd_NVG_Chip: OPTRE_NVG
	{
		displayName = "[332nd] NVG Chip";
		picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";
	};
	class 332nd_NVG_Rangefinder: OPTRE_NVG
	{
		displayName = "[332nd] Rangefinder";
		model = "\lsd_equipment_bluefor\accessories\gar\lsd_gar_rangefinder_nvg_on.p3d";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_clone_rangefinder_ca.paa";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\lsd_equipment_bluefor\accessories\gar\visor\data\swlb_clone_nvg_co.paa",
		};		
		visionMode[] = 
		{
			"Normal","NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1"};
			mass = 5;
			modelOff = "\lsd_equipment_bluefor\accessories\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
			type = 616;
			uniformModel = "\lsd_equipment_bluefor\accessories\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
		};
	};
	class 332nd_NVG_Visor: OPTRE_NVG
	{
		displayName = "[332nd] Visor";
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_ca.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG.paa"
		};
		visionMode[] = 
		{
			"Normal","NVG",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			mass = 5;
			modelOff = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_off.p3d";
			type = 616;
			uniformModel = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		};
	};
};
class CfgGlasses
{
	class G_Combat;

//Primary
	class 332nd_Facewear_Base: G_Combat
	{
		_generalMacro = "G_Combat";
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		//ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_Overlay = "";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		//ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayDirt = "";
		ACE_Protection = 1;
		ACE_Resistance = 1;
		ACE_TintAmount = 0;
		author = "SW Legion Studios";
		displayName = "332nd Facewear Base";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		identityTypes[] = {};
		mass = 2;
		model = "\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		name = "None";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";
		scope = 1;
	};
	class 332nd_Facewear_Rangefinder :332nd_Facewear_Base
	{
		scope = 2;
		displayName = "[332nd] Range Finder";
	};
	class 332nd_Facewear_Visor :332nd_Facewear_Base
	{
		scope = 2;
		displayName = "[332nd] Visor (On)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_ca.paa";
	};
	class 332nd_Facewear_Visor_Off :332nd_Facewear_Visor
	{
		scope = 2;
		displayName = "[332nd] Visor (Off)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_off.p3d";
	};

//White
	class 332nd_Facewear_XO_White :332nd_Facewear_Base
	{
		scope = 2;
		displayName = "[332nd] Commander Visor (XO)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_White.paa"};
		model = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
	};
	class 332nd_Facewear_CO_White :332nd_Facewear_Base
	{
		scope = 2;
		displayName = "[332nd] Commander Visor (CO)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_White.paa",
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_White.paa",
			"\332nd_Aux\NVGs_And_Face_Wear\Tex\332nd_NVG_Commander_White.paa",
		};
		model = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_cc_ca.paa";
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
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Chip", "Visor", "Rangefinder", };
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
                    description = "SCT+";
                    //image = "xxx";
                };
				class Rangefinder
                {
                    label = "Rangefinder";
                    description = "SCT+";
                    //image = "xxx";
                };
            };
        };
    };
    class CfgGlasses 
    {
        class 332nd_Facewear_Extended
        {
            label = "Facewear";
            author = "Ithias";
			options[] = { "Type", "Variant", };
            class Type
            {
                label = "Type";
				values[] = { "Visor", "Rangefinder", "Commander", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Commander
                {
                    label = "Commander";
                    description = "CL+";
                    //image = "xxx";
                };
				class Visor
                {
                    label = "Visor";
                    description = "SCT+";
                    //image = "xxx";
                };
				class Rangefinder
                {
                    label = "Rangefinder";
                    description = "SCT+";
                    //image = "xxx";
                };
            };
            class Variant
            {
                label = "Variant";
				values[] = { "A", "B", };
                changeingame = 0;
                alwaysSelectable = 1;
                class A
                {
                    label = "A";
                    //description = "Default";
                    //image = "xxx";
                };
                class B
                {
                    label = "B";
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
    };
    class CfgGlasses 
    {
        class 332nd_Facewear_Rangefinder
        {
            model = "332nd_Facewear_Extended";
            Type = "Rangefinder";
            Variant = "A";
        };
        class 332nd_Facewear_Visor
        {
            model = "332nd_Facewear_Extended";
            Type = "Visor";
            Variant = "B";
        };
        class 332nd_Facewear_Visor_Off
        {
            model = "332nd_Facewear_Extended";
            Type = "Visor";
            Variant = "A";
        };
        class 332nd_Facewear_XO_White
        {
            model = "332nd_Facewear_Extended";
            Type = "Commander";
            Variant = "A";
        };
        class 332nd_Facewear_CO_White
        {
            model = "332nd_Facewear_Extended";
            Type = "Commander";
            Variant = "B";
        };
    };

};