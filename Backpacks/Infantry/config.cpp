class CfgPatches 
{
	class 332nd_Backpacks 
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
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_belt_bag;
	class IDA_Clone_ScoutPack;
	class JLTS_Clone_LR_attachment;

//Base Items

	//Backpacks
	class 332nd_Backpack: JLTS_Clone_backpack
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (Ammo Bearer)";
		maximumLoad=320;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack.paa",
		};
	};
	
	class 332nd_Backpack_AT: JLTS_Clone_backpack
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (AT)";
		maximumLoad=200;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT.paa",
		};
	};

	class 332nd_Backpack_RTO: JLTS_Clone_backpack_RTO
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (RTO)";
		maximumLoad=258;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack.paa",
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class 332nd_Backpack_Medic: JLTS_Clone_backpack
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (Medic)";
		maximumLoad=321;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Medic.paa",
		};
	};

	class 332nd_Backpack_Engineer: JLTS_Clone_backpack
	{
        ace_fortify_fortifyTool = 1;
		author="Ithias";
		displayName="New! [332nd] Backpack (Engineer)";
		maximumLoad=320;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer.paa",
		};
	};
	
	//Bag
	class 332nd_Bag_GRN_MRK: JLTS_Clone_belt_bag
	{
		author="Ithias";
		displayName="New! [332nd] GRN / MRK Bags";
		maximumLoad=150;
		mass=40;
	};
		
	class 332nd_Bag_AR: IDA_Clone_ScoutPack
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (Auto-Rifleman)";
		maximumLoad=200;
		mass=40;
	};

	//Back
	class 332nd_Back_Radio: JLTS_Clone_LR_attachment
	{
		author="Ithias";
		displayName="New! [332nd] Radio";
		maximumLoad=150;
		mass=40;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class 332nd_Back_NCO: JLTS_Clone_RTO_pack
	{
		author="Ithias";
		displayName="New! [332nd] Backpack (NCO)";
		maximumLoad=200;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_RTO_pack_co.paa"
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class 332nd_Back: JLTS_Clone_belt_bag
	{
		author="Ithias";
		displayName="New! [332nd] Rifleman Bags";
		model = "\a3\weapons_f\empty.p3d";
		maximumLoad=100;
		mass=40;
	};

};

class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Backpack_Extended
        {
            label = "Backpack";
            author = "Ithias";
			options[] = { "Bags", "Backpacks", "NCO", "Jumppack",};
            class Bags
            {
                label = "Bags";
				values[] = { "Rifleman", "GRN_MRK", "AR", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Rifleman
                {
                    label = "Rifleman";
                    description = "RFL";
                    //image = "xxx";
                };
				class GRN_MRK
                {
                    label = "GRN/MRK";
                    description = "Grenadier + Marksman";
                    //image = "xxx";
                };
				class AR
                {
                    label = "Auto-Rifleman";
                    description = "AR";
                    //image = "xxx";
                };
			};
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
            class NCO
            {
                label = "NCO";
				values[] = { "Radio", "Qual", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Radio
                {
                    label = "Radio";
                    //description = "White";
                    //image = "xxx";
                };
				class Qual
                {
                    label = "Qual";
                    description = "FOR WEAPON QUALS ONLY";
                    //image = "xxx";
                };
            };
            class Jumppack
            {
                label = "Jumppack";
				values[] = { "JT12", "JT12_LR", "Pilot", };
                changeingame = 0;
                alwaysSelectable = 1;
                class JT12
                {
                    label = "JT12";
                    //description = "White";
                    //image = "xxx";
                };
				class JT12_LR
                {
                    label = "JT12 (LR)";
                    //description = "Orange";
                    //image = "xxx";
                };
				class Pilot
                {
                    label = "Pilot";
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
        class 332nd_Backpack
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "AMMO";
			
        };
        class 332nd_Backpack_AT
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "AT";
			
        };
        class 332nd_Backpack_RTO
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "RTO";
			
        };
        class 332nd_Backpack_Medic
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "Medic";
        };
        class 332nd_Backpack_Engineer
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "ENG";
			
        };
        class 332nd_Back
        {
            model = "332nd_Backpack_Extended";
            Bags = "Rifleman";
        };
        class 332nd_Bag_GRN_MRK
        {
            model = "332nd_Backpack_Extended";
            Bags = "GRN_MRK";
        };
        class 332nd_Bag_AR
        {
            model = "332nd_Backpack_Extended";
            Bags = "AR";
        };
        class 332nd_Back_Radio
        {
            model = "332nd_Backpack_Extended";
            NCO = "Radio";
        };
        class 332nd_Back_NCO
        {
            model = "332nd_Backpack_Extended";
            NCO = "Qual";
			
        };
        class 332nd_JT12
        {
            model = "332nd_Backpack_Extended";
            Jumppack = "JT12";
        };
        class 332nd_JT12_LR
        {
            model = "332nd_Backpack_Extended";
            Jumppack = "JT12_LR";
        };
        class 332nd_MC
        {
            model = "332nd_Backpack_Extended";
            Jumppack = "Pilot";
        };
    };
};