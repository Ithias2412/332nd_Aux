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
	class 332nd_Backpack_P1: 332nd_Backpack
	{
		displayName="[332nd] Backpack (Ammo Bearer)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa"};
	};
	class 332nd_Backpack_AT_P1: 332nd_Backpack_AT
	{
		displayName="[332nd] Backpack (AT)";
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT_P1.paa",
		};
	};
	class 332nd_Backpack_RTO_P1: 332nd_Backpack_RTO
	{
		displayName="[332nd] Backpack (RTO)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_co.paa"};
	};
	class 332nd_Backpack_Medic_P1: 332nd_Backpack_Medic
	{
		displayName="[332nd] Backpack (Medic)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_medic_co.paa"};
	};
	class 332nd_Backpack_Engineer_P1: 332nd_Backpack_Engineer
	{
		displayName="[332nd] Backpack (ENG)";
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer_P1.paa",
		};
	};
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
        class 332nd_Backpack_P1
        {
            model = "332nd_Backpack_P1_Extended";
            Backpacks = "AMMO";
        };
        class 332nd_Backpack_AT_P1
        {
            model = "332nd_Backpack_P1_Extended";
            Backpacks = "AT";
        };
        class 332nd_Backpack_RTO_P1
        {
            model = "332nd_Backpack_P1_Extended";
            Backpacks = "RTO";
        };
        class 332nd_Backpack_Medic_P1
        {
            model = "332nd_Backpack_P1_Extended";
            Backpacks = "Medic";
        };
        class 332nd_Backpack_Engineer_P1
        {
            model = "332nd_Backpack_P1_Extended";
            Backpacks = "ENG";
        };
    };
};