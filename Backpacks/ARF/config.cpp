#include "..\..\332nd_Aux_Macros.hpp"
#define BP_VAR(NAME,PARENT,DISP,TEX) class NAME: PARENT { displayName = DISP; hiddenSelectionsTextures[] = { TEX }; };
class CfgPatches
{
	class 332nd_Backpacks_ARF
	{
		units[] =
        {
            "",
			""
        };
		weapons[] =
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles
{
	class 332nd_Backpack;
	class 332nd_Backpack_AT;
	class 332nd_Backpack_RTO;
	class 332nd_Backpack_Engineer;
	class 332nd_Back_NCO;

//Base Items

	//Backpacks
	BP_VAR(332nd_Backpack_Woodland, 332nd_Backpack, "[332nd] Backpack (Ammo Bearer / Woodland)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa")
	BP_VAR(332nd_Backpack_Winter, 332nd_Backpack, "[332nd] Backpack (Ammo Bearer / Winter)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa")
	BP_VAR(332nd_Backpack_Urban, 332nd_Backpack, "[332nd] Backpack (Ammo Bearer / Urban)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa")
	BP_VAR(332nd_Backpack_Desert, 332nd_Backpack, "[332nd] Backpack (Ammo Bearer / Desert)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert.paa")

	BP_VAR(332nd_Backpack_AT_Woodland, 332nd_Backpack_AT, "[332nd] Backpack (AT / Woodland)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_Woodland.paa")
	BP_VAR(332nd_Backpack_AT_Winter, 332nd_Backpack_AT, "[332nd] Backpack (AT / Winter)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_Winter.paa")
	BP_VAR(332nd_Backpack_AT_Urban, 332nd_Backpack_AT, "[332nd] Backpack (AT / Urban)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_Urban.paa")
	BP_VAR(332nd_Backpack_AT_Desert, 332nd_Backpack_AT, "[332nd] Backpack (AT / Desert)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_Desert.paa")

	BP_VAR(332nd_Backpack_RTO_Woodland, 332nd_Backpack_RTO, "[332nd] Backpack (RTO / Woodland)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa")
	BP_VAR(332nd_Backpack_RTO_Winter, 332nd_Backpack_RTO, "[332nd] Backpack (RTO / Winter)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa")
	BP_VAR(332nd_Backpack_RTO_Urban, 332nd_Backpack_RTO, "[332nd] Backpack (RTO / Urban)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa")
	BP_VAR(332nd_Backpack_RTO_Desert, 332nd_Backpack_RTO, "[332nd] Backpack (RTO / Desert)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert.paa")

	BP_VAR(332nd_Backpack_Engineer_Woodland, 332nd_Backpack_Engineer, "[332nd] Backpack (Engineer / Woodland)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_Woodland.paa")
	BP_VAR(332nd_Backpack_Engineer_Winter, 332nd_Backpack_Engineer, "[332nd] Backpack (Engineer / Winter)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_Winter.paa")
	BP_VAR(332nd_Backpack_Engineer_Urban, 332nd_Backpack_Engineer, "[332nd] Backpack (Engineer / Urban)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_Urban.paa")
	BP_VAR(332nd_Backpack_Engineer_Desert, 332nd_Backpack_Engineer, "[332nd] Backpack (Engineer / Desert)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_Desert.paa")

	//Back
	BP_VAR(332nd_Back_NCO_Woodland, 332nd_Back_NCO, "[332nd] Backpack (NCO / Woodland)", "\332nd_Aux\Backpacks\Tex\332nd_Back_NCO_Woodland.paa")
	BP_VAR(332nd_Back_NCO_Winter, 332nd_Back_NCO, "[332nd] Backpack (NCO / Winter)", "\332nd_Aux\Backpacks\Tex\332nd_Back_NCO_Winter.paa")
	BP_VAR(332nd_Back_NCO_Urban, 332nd_Back_NCO, "[332nd] Backpack (NCO / Urban)", "\332nd_Aux\Backpacks\Tex\332nd_Back_NCO_Urban.paa")
	BP_VAR(332nd_Back_NCO_Desert, 332nd_Back_NCO, "[332nd] Backpack (NCO / Desert)", "\332nd_Aux\Backpacks\Tex\332nd_Back_NCO_Desert.paa")

};


class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Backpack_ARF_Extended
        {
            label = "ARF";
            author = "Ithias";
			options[] = {"Backpacks", "NCO", "Camo",};
            class Backpacks
            {
                label = "Backpacks";
				values[] = {"AMMO", "AT", "ENG", "RTO",};
                changeingame = 0;
                alwaysSelectable = 1;
				class AMMO
                {
                    label = "Ammo Bearer";
                    description = "AMMO";
                    //image = "xxx";
                };
				class AT
                {
                    label = "Anti-Tank";
                    description = "AT";
                    //image = "xxx";
                };
				class ENG
                {
                    label = "Engineer";
                    description = "ENG";
                    //image = "xxx";
                };
				class RTO
                {
                    label = "RTO";
					//description = "";
                    //image = "xxx";
                };
            };
            class NCO
            {
                label = "NCO";
				values[] = {"Qual", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Qual
                {
                    label = "Qual";
                    description = "FOR WEAPON QUALS ONLY";
                    //image = "xxx";
                };
            };
            class Camo
            {
                label = "Camo";
				values[] = { "Woodland", "Winter", "Urban", "Desert",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Woodland
                {
                    label = "Woodland";
                    //description = "White";
                    //image = "xxx";
                };
				class Winter
                {
                    label = "Winter";
                    //description = "Orange";
                    //image = "xxx";
                };
				class Urban
                {
                    label = "Urban";
                    //description = "Black";
                    //image = "xxx";
                };
				class Desert
                {
                    label = "Desert";
                    //description = "Black";
                    //image = "xxx";
                };
            };
        };
	};
};

class XtdGearInfos
{
    class CfgVehicles
    {
        XTD_INFO2(332nd_Backpack_Woodland, "332nd_Backpack_ARF_Extended", Backpacks, "AMMO", Camo, "Woodland")
        XTD_INFO2(332nd_Backpack_Winter, "332nd_Backpack_ARF_Extended", Backpacks, "AMMO", Camo, "Winter")
        XTD_INFO2(332nd_Backpack_Urban, "332nd_Backpack_ARF_Extended", Backpacks, "AMMO", Camo, "Urban")
        XTD_INFO2(332nd_Backpack_Desert, "332nd_Backpack_ARF_Extended", Backpacks, "AMMO", Camo, "Desert")
        XTD_INFO2(332nd_Backpack_AT_Woodland, "332nd_Backpack_ARF_Extended", Backpacks, "AT", Camo, "Woodland")
        XTD_INFO2(332nd_Backpack_AT_Winter, "332nd_Backpack_ARF_Extended", Backpacks, "AT", Camo, "Winter")
        XTD_INFO2(332nd_Backpack_AT_Urban, "332nd_Backpack_ARF_Extended", Backpacks, "AT", Camo, "Urban")
        XTD_INFO2(332nd_Backpack_AT_Desert, "332nd_Backpack_ARF_Extended", Backpacks, "AT", Camo, "Desert")
        XTD_INFO2(332nd_Backpack_RTO_Woodland, "332nd_Backpack_ARF_Extended", Backpacks, "RTO", Camo, "Woodland")
        XTD_INFO2(332nd_Backpack_RTO_Winter, "332nd_Backpack_ARF_Extended", Backpacks, "RTO", Camo, "Winter")
        XTD_INFO2(332nd_Backpack_RTO_Urban, "332nd_Backpack_ARF_Extended", Backpacks, "RTO", Camo, "Urban")
        XTD_INFO2(332nd_Backpack_RTO_Desert, "332nd_Backpack_ARF_Extended", Backpacks, "RTO", Camo, "Desert")
        XTD_INFO2(332nd_Backpack_Engineer_Woodland, "332nd_Backpack_ARF_Extended", Backpacks, "ENG", Camo, "Woodland")
        XTD_INFO2(332nd_Backpack_Engineer_Winter, "332nd_Backpack_ARF_Extended", Backpacks, "ENG", Camo, "Winter")
        XTD_INFO2(332nd_Backpack_Engineer_Urban, "332nd_Backpack_ARF_Extended", Backpacks, "ENG", Camo, "Urban")
        XTD_INFO2(332nd_Backpack_Engineer_Desert, "332nd_Backpack_ARF_Extended", Backpacks, "ENG", Camo, "Desert")
        XTD_INFO2(332nd_Back_NCO_Woodland, "332nd_Backpack_ARF_Extended", NCO, "Qual", Camo, "Woodland")
        XTD_INFO2(332nd_Back_NCO_Winter, "332nd_Backpack_ARF_Extended", NCO, "Qual", Camo, "Winter")
        XTD_INFO2(332nd_Back_NCO_Urban, "332nd_Backpack_ARF_Extended", NCO, "Qual", Camo, "Urban")
        XTD_INFO2(332nd_Back_NCO_Desert, "332nd_Backpack_ARF_Extended", NCO, "Qual", Camo, "Desert")
    };
};
