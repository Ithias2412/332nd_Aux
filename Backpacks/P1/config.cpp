#include "..\..\332nd_Aux_Macros.hpp"
#define BP_VAR(NAME,PARENT,DISP,TEX) class NAME: PARENT { displayName = DISP; hiddenSelectionsTextures[] = { TEX }; };
class CfgPatches
{
	class 332nd_Backpacks_P1
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
	class 332nd_Backpack_Medic;
	class 332nd_Backpack_Engineer;

//Base Items

	//Backpacks
	BP_VAR(332nd_Backpack_P1, 332nd_Backpack, "[332nd] Backpack (Ammo Bearer)", "\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa")
	BP_VAR(332nd_Backpack_AT_P1, 332nd_Backpack_AT, "[332nd] Backpack (AT)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_P1.paa")
	BP_VAR(332nd_Backpack_RTO_P1, 332nd_Backpack_RTO, "[332nd] Backpack (RTO)", "\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa")
	BP_VAR(332nd_Backpack_Medic_P1, 332nd_Backpack_Medic, "[332nd] Backpack (Medic)", "\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_medic_co.paa")
	BP_VAR(332nd_Backpack_Engineer_P1, 332nd_Backpack_Engineer, "[332nd] Backpack (ENG)", "\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_P1.paa")
};


class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Backpack_P1_Extended
        {
            label = "P1";
            author = "Ithias";
			options[] = {"Backpacks",};
            class Backpacks
            {
                label = "Backpacks";
				values[] = {"AMMO", "AT", "ENG", "RTO", "Medic", };
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
				class Medic
                {
                    label = "Medic";
					//description = "";
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
        XTD_INFO(332nd_Backpack_P1, "332nd_Backpack_P1_Extended", Backpacks, "AMMO")
        XTD_INFO(332nd_Backpack_AT_P1, "332nd_Backpack_P1_Extended", Backpacks, "AT")
        XTD_INFO(332nd_Backpack_RTO_P1, "332nd_Backpack_P1_Extended", Backpacks, "RTO")
        XTD_INFO(332nd_Backpack_Medic_P1, "332nd_Backpack_P1_Extended", Backpacks, "Medic")
        XTD_INFO(332nd_Backpack_Engineer_P1, "332nd_Backpack_P1_Extended", Backpacks, "ENG")
    };
};
