#include "..\..\332nd_Aux_Macros.hpp"
class CfgPatches {
	class 332nd_Uniforms_ARF {
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
    class UniformItem;
	class 332nd_Uniform_Clone_CR;
	
// Uniform
	UNI_ITEM(332nd_Uniform_ARF_Desert, "332nd_Uniform_ARF_Desert_Veh", "[332nd] ARF Trooper Armor (Desert)")
	UNI_ITEM(332nd_Uniform_ARF_Urban, "332nd_Uniform_ARF_Urban_Veh", "[332nd] ARF Trooper Armor (Urban)")
	UNI_ITEM(332nd_Uniform_ARF_Winter, "332nd_Uniform_ARF_Winter_Veh", "[332nd] ARF Trooper Armor (Winter)")
	UNI_ITEM(332nd_Uniform_ARF_Woodland, "332nd_Uniform_ARF_Woodland_Veh", "[332nd] ARF Trooper Armor (Woodland)")
};

class CfgVehicles
{
	class 332nd_Uniform_Clone_CR_Veh;
	UNI_VEH_ARF(332nd_Uniform_ARF_Desert_Veh, "332nd_Uniform_ARF_Desert", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Desert.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Desert.paa")
	UNI_VEH_ARF(332nd_Uniform_ARF_Urban_Veh, "332nd_Uniform_ARF_Urban", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Urban.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Urban.paa")
	UNI_VEH_ARF(332nd_Uniform_ARF_Winter_Veh, "332nd_Uniform_ARF_Winter", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Winter.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Winter.paa")
	UNI_VEH_ARF(332nd_Uniform_ARF_Woodland_Veh, "332nd_Uniform_ARF_Woodland", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Woodland.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Woodland.paa")

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_ARF_Extended
        {
            label = "ARF";
            author = "Ithias";
			options[] = { "Camo", };
            class Camo
            {
                label = "Camo";
				values[] = { "Desert", "Urban", "Winter", "Woodland", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Desert
                {
                    label = "Desert";
                    //description = "Recruit";
                    //image = "xxx";
                };
				class Urban
                {
                    label = "Urban";
                    //description = "Trooper";
                    //image = "xxx";
                };
                class Winter
                {
                    label = "Winter";
                    //description = "Senior Trooper";
                    //image = "xxx";
                };
                class Woodland
                {
                    label = "Woodland";
                    //description = "Veteran Trooper";
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
        XTD_INFO(332nd_Uniform_ARF_Desert, "332nd_Uniform_ARF_Extended", Camo, "Desert")
        XTD_INFO(332nd_Uniform_ARF_Urban, "332nd_Uniform_ARF_Extended", Camo, "Urban")
        XTD_INFO(332nd_Uniform_ARF_Winter, "332nd_Uniform_ARF_Extended", Camo, "Winter")
        XTD_INFO(332nd_Uniform_ARF_Woodland, "332nd_Uniform_ARF_Extended", Camo, "Woodland")
    };
};