class CfgPatches 
{
    class 332nd_East_Enia_Faction_Vehicles_Gozanti
	{
        author = "Ithias";
        name = "East Enian Gozanti";
        weapons[] = {};
		requiredAddons[] = {};
        units[] = 
		{
            "332nd_East_Enia_Gozanti",
        };
    };
};

class CfgVehicles 
{
	class 3AS_Gozanti_Civ_Yellow;
	class 332nd_East_Enia_Gozanti: 3AS_Gozanti_Civ_Yellow
	{
		displayName = "Enian Gozanti";
		side = 0;
		editorSubcategory = "EdSubcat_332nd_Planes";
		faction = "332nd_East_Enia_Faction";
		crew = "332nd_Enia_Base";
		hiddenselectionstextures[] =
		{
			"332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Gozanti.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
			"332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Gozanti_2.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa",
		};
		class TextureSources
		{
			class Tex_Gozanti_Base
			{
				author = "Ithias";
				displayName = "Base";
				factions[] = {"332nd_East_Enia_Faction"};
				textures[] = 
				{
					"332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Gozanti.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
					"332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Gozanti_2.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa",
				};
			};
		};
	};
};