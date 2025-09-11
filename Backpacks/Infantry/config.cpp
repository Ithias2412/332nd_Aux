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
	class SWLB_clone_backpack;
	class SWLB_clone_bag_belt;
	class SWLB_clone_RTO_mini_backpack;
	class ls_gar_mrbc_backpack;
	class 3AS_Republic_Mortar_Bag;
	class SWLB_clone_bag;
	class SWLB_clone_bag_leg;

//Base Items


	class 332nd_Backpack: SWLB_clone_backpack
	{
		scope = 1;
		author="Ithias";
		displayName="[332nd] Backpack";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_Backpack_AR: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Auto-Rifleman)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_AR.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_Backpack_AT: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Anti-Tank)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_AT.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_RTO: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (RTO)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=258;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack.paa",
			"",
			"",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 332nd_Backpack_NCO: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (NCO)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Fulcrum.paa",
			"",
			"",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class 332nd_Backpack_Medic: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Medic)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=321;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Medic.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_Engineer: SWLB_clone_backpack
	{
        ace_fortify_fortifyTool = 1;
		author="Ithias";
		displayName="[332nd] Backpack (Engineer)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=320;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Engineer.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_Backpack_Ammo_Bearer: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Ammo Bearer)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=320;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Bag: SWLB_clone_bag_belt
	{
		author="Ithias";
		displayName="[332nd] Rifleman Bags";
		model = "\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		maximumLoad=100;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			""
		};
	};
	
	class 332nd_Leg_Bag: SWLB_clone_bag
	{
		author="Ithias";
		displayName="[332nd] Grenadier Bags";
		model = "\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		maximumLoad=150;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			"\SWLB_equipment\backpacks\data\bag_co.paa"
		};
	};
	
	class 332nd_Leg: SWLB_clone_bag_leg
	{
		author="Ithias";
		displayName="[332nd] Marksman Bags";
		model = "\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		maximumLoad=150;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"",
			"\SWLB_equipment\backpacks\data\bag_co.paa",
		};
	};

	class 332nd_Radio: SWLB_clone_RTO_mini_backpack
	{
		author="Ithias";
		displayName="[332nd] Radio";
		model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		maximumLoad=150;
		mass=40;
		hiddenSelections[] = 
		{
			"main",
			"accumulator"
		};		
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	
	class 332nd_Radio_Black: 332nd_Radio
	{
		displayName="[332nd] Radio (Black)";
		hiddenSelections[] = 
		{
			"main",
			"accumulator"
		};		
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\swlb_clone_rto_mini_backpack_night_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
	};

	class 332nd_Radio_Orange: 332nd_Radio
	{
		displayName="[332nd] Radio (Orange)";
		hiddenSelections[] = 
		{
			"main",
			"accumulator"
		};		
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Radio_Orange.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
	};

/*	class 332nd_Repeater_CSW: ls_gar_mrbc_backpack
	{
		author="Ithias";
		displayName = "[332nd] Blaster Cannon CSW (BANNED)";
	};
	
	class 332nd_Mortor_CSW: 3AS_Republic_Mortar_Bag
	{
		author="Ithias";
		displayName = "[332nd] Mortor CSW (BANNED)";
		picture = "ls_equipment_bluefor\backpack\gar\mrbc\data\ui\mrbc_ui_ca.paa";
	};
	*/
};

class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Backpack_Extended
        {
            label = "Backpack";
            author = "Ithias";
			options[] = { "Bags", "Backpacks", "NCO", "Jumppack", };
            class Bags
            {
                label = "Bags";
				values[] = { "Rifleman", "Grenadier", "Marksman", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Rifleman
                {
                    label = "Rifleman";
                    description = "RFL";
                    //image = "xxx";
                };
				class Grenadier
                {
                    label = "Grenadier";
                    description = "GRN";
                    //image = "xxx";
                };
				class Marksman
                {
                    label = "Marksman";
                    description = "MRK";
                    //image = "xxx";
                };
			};
            class Backpacks
            {
                label = "Backpacks";
				values[] = {"AR", "AT", "ENG", "Ammo", "RTO", "Medic", };
                changeingame = 0;
                alwaysSelectable = 1;
				class AR
                {
                    label = "Auto-Rifleman";
                    description = "AR";
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
				class Ammo
                {
                    label = "Ammo Bearer";
					//description = "";
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
				values[] = { "White", "Orange", "Black", "Backpack", };
                changeingame = 0;
                alwaysSelectable = 1;
                class White
                {
                    label = "White";
                    //description = "White";
                    //image = "xxx";
                };
				class Orange
                {
                    label = "Orange";
                    //description = "Orange";
                    //image = "xxx";
                };
				class Black
                {
                    label = "Black";
                    //description = "Black";
                    //image = "xxx";
                };
				class Backpack
                {
                    label = "Backpack";
                    description = "For using weapon quals!";
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
        class 332nd_Backpack_AR
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "AR";
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
        class 332nd_Bag
        {
            model = "332nd_Backpack_Extended";
            Bags = "Rifleman";
        };
        class 332nd_Leg_Bag
        {
            model = "332nd_Backpack_Extended";
            Bags = "Grenadier";
        };
        class 332nd_Leg
        {
            model = "332nd_Backpack_Extended";
            Bags = "Marksman";
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
        class 332nd_Backpack_Ammo_Bearer
        {
            model = "332nd_Backpack_Extended";
            Backpacks = "Ammo";
        };
        class 332nd_Radio
        {
            model = "332nd_Backpack_Extended";
            NCO = "White";
        };
        class 332nd_Radio_Black
        {
            model = "332nd_Backpack_Extended";
            NCO = "Black";
        };
        class 332nd_Radio_Orange
        {
            model = "332nd_Backpack_Extended";
            NCO = "Orange";
        };
        class 332nd_Backpack_NCO
        {
            model = "332nd_Backpack_Extended";
            NCO = "Backpack";
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