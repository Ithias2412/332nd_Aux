class CfgPatches {
	class 332nd_Vests_ARF {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {"332nd_Vests",};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class VestItem;
	class Hands;
	class Pelvis;
	class 332nd_Trooper_Vest;

//ARF Start
//Desert
	class 332nd_ARF_Sergeant_Vest_variant_1_Desert: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 1 / Desert)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Desert.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};

	
	class 332nd_ARF_Sergeant_Vest_variant_2_Desert: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 2 / Desert)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Desert.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

//Urban
	class 332nd_ARF_Sergeant_Vest_variant_1_Urban: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 1 / Urban)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Urban.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};

	
	class 332nd_ARF_Sergeant_Vest_variant_2_Urban: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 2 / Urban)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Urban.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

//Winter
	class 332nd_ARF_Sergeant_Vest_variant_1_Winter: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 1 / Winter)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Winter.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};

	
	class 332nd_ARF_Sergeant_Vest_variant_2_Winter: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 2 / Winter)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Winter.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

//Woodland
	class 332nd_ARF_Sergeant_Vest_variant_1_Woodland: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 1 / Woodland)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Woodland.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};

	
	class 332nd_ARF_Sergeant_Vest_variant_2_Woodland: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 2 / Woodland)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Woodland.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
		class 332nd_ARF_Vest_Extended
        {
            label = "ARF Vests";
            author = "Ithias & Cherryy";
			options[] = { "Rank", "variant", "Camo", };
            class Rank
            {
                label = "Rank";
				values[] = { "CS", };
                changeingame = 0;
                alwaysSelectable = 0;
                class CS
                {
                    label = "CS+";
                    description = "Sergeant";
                    //image = "xxx";
                };
            };
            class variant
            {
                label = "variant";
                values[] = { "variant1", "variant2", };
                changeingame = 0;
                alwaysSelectable = 0;
                class variant1
                {
                    label = "1";
                    description = "variant 1";
                    // image = "xxx";
                };
                class variant2
                {
                    label = "2";
                    description = "variant 2";
                    // image = "xxx";
                };
            };
			class Camo
            {
                label = "Camo";
                values[] = { "Desert", "Urban", "Winter", "Woodland",};
                changeingame = 0;
                alwaysSelectable = 0;
                class Desert
                {
                    label = "Desert";
                    description = "Desert";
                    // image = "xxx";
                };
                class Urban
                {
                    label = "Urban";
                    description = "Urban";
                    // image = "xxx";
                };
                class Winter
                {
                    label = "Winter";
                    description = "Winter";
                    // image = "xxx";
                };
                class Woodland
                {
                    label = "Woodland";
                    description = "Woodland";
                    // image = "xxx";
                };
            };
        };
	};
};

class XtdGearInfos
{
    class CfgWeapons 
    {
		//Desert
		class 332nd_ARF_Sergeant_Vest_variant_1_Desert
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant1";
			camo = "Desert";
        };
		class 332nd_ARF_Sergeant_Vest_variant_2_Desert
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant2";
			camo = "Desert";
        };
		//Urban
		class 332nd_ARF_Sergeant_Vest_variant_1_Urban
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant1";
			camo = "Urban";
        };
		class 332nd_ARF_Sergeant_Vest_variant_2_Urban
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant2";
			camo = "Urban";
        };
		//Winter
		class 332nd_ARF_Sergeant_Vest_variant_1_Winter
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant1";
			camo = "Winter";
        };
		class 332nd_ARF_Sergeant_Vest_variant_2_Winter
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant2";
			camo = "Winter";
        };
		//Woodland
		class 332nd_ARF_Sergeant_Vest_variant_1_Woodland
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant1";
			camo = "Woodland";
        };
		class 332nd_ARF_Sergeant_Vest_variant_2_Woodland
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant2";
			camo = "Woodland";
        };
	};
};