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
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;

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

	class 332nd_ARF_Sergeant_Vest_variant_3_Desert: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 3 / Desert)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Desert.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	
	class 332nd_ARF_Sergeant_Vest_variant_4_Desert: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 4 / Desert)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Desert.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
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

	class 332nd_ARF_Sergeant_Vest_variant_3_Urban: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 3 / Urban)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Urban.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	
	class 332nd_ARF_Sergeant_Vest_variant_4_Urban: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 4 / Urban)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Urban.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
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

	class 332nd_ARF_Sergeant_Vest_variant_3_Winter: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 3 / Winter)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Winter.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	
	class 332nd_ARF_Sergeant_Vest_variant_4_Winter: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 4 / Winter)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Winter.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
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

	class 332nd_ARF_Sergeant_Vest_variant_3_Woodland: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 3 / Woodland)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Woodland.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	
	class 332nd_ARF_Sergeant_Vest_variant_4_Woodland: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (ARF CS+ / variant 4 / Woodland)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARF_Woodland.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};

};


class XtdGearModels
{
    class CfgWeapons 
    {
		//ARF Extended
		class 332nd_ARF_Vest_Extended
        {
            label = "332nd Vests ARF";
            author = "Ithias & Cherryy";
			options[] = { "Rank", "variant", "Camo", };
            class Rank
            {
                label = "Rank";
				values[] = { "CS", "CSM", };
                changeingame = 0;
                alwaysSelectable = 0;
                class CS
                {
                    label = "CS+";
                    description = "Sergeant";
                    //image = "xxx";
                };
                class CSM
                {
                    label = "CSM+";
                    description = "Sergeant Major";
                    //image = "xxx";
                };
            };
            class variant
            {
                label = "variant";
                values[] = { "variant1", "variant2", "variant3", "variant4", "variant5", };
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
                class variant3
                {
                    label = "3";
                    description = "variant 3";
                    // image = "xxx";
                };
                class variant4
                {
                    label = "4";
                    description = "variant 4";
                    // image = "xxx";
                };
                class variant5
                {
                    label = "5";
                    description = "variant 5";
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
		//ARF
		//Desert
		//CS
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
		class 332nd_ARF_Sergeant_Vest_variant_3_Desert
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant3";
			camo = "Desert";
        };
		class 332nd_ARF_Sergeant_Vest_variant_4_Desert
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant4";
			camo = "Desert";
        };
		//ARF
		//Urban
		//CS
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
		class 332nd_ARF_Sergeant_Vest_variant_3_Urban
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant3";
			camo = "Urban";
        };
		class 332nd_ARF_Sergeant_Vest_variant_4_Urban
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant4";
			camo = "Urban";
        };
		//ARF
		//Winter
		//CS
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
		class 332nd_ARF_Sergeant_Vest_variant_3_Winter
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant3";
			camo = "Winter";
        };
		class 332nd_ARF_Sergeant_Vest_variant_4_Winter
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant4";
			camo = "Winter";
        };
		//ARF
		//Woodland
		//CS
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
		class 332nd_ARF_Sergeant_Vest_variant_3_Woodland
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant3";
			camo = "Woodland";
        };
		class 332nd_ARF_Sergeant_Vest_variant_4_Woodland
        {
            model = "332nd_ARF_Vest_Extended";
            Rank = "CS";
            variant = "variant4";
			camo = "Woodland";
        };
		//ARF
    };
};