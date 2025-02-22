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

//Base Items


	class 332nd_Backpack: SWLB_clone_backpack
	{
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

	class 332nd_Backpack_JTAC: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (JTAC)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=285;
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
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class 332nd_Backpack_Medic: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Medic)";
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
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_Heavy: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] Backpack (Heavy)";
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
		displayName="[332nd] Bag";
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
		displayName="[332nd] Bag + Pouch";
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


	class 332nd_Radio: SWLB_clone_RTO_mini_backpack
	{
		author="Ithias";
		displayName="[332nd] Radio";
		model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		maximumLoad=100;
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
		tf_range=120000;
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

	class 332nd_Repeater_CSW: ls_gar_mrbc_backpack
	{
		author="Ithias";
		displayName = "[332nd] Blaster Cannon CSW (BANNED)";
	};
	
	/*
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
			options[] = { "Type", "Radio", };
            class Type
            {
                label = "Type";
				values[] = { "Bag", "Leg_Bag", "Backpack", "Medic", "JTAC", "Heavy", "CSW", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Bag
                {
                    label = "Bag";
                    description = "Default";
                    //image = "xxx";
                };
				class Leg_Bag
                {
                    label = "Bag + Pouch";
                    description = "MRK/GRN";
                    //image = "xxx";
                };
				class Backpack
                {
                    label = "Backpack";
                    description = "AR/AT";
                    //image = "xxx";
                };
				class Medic
                {
                    label = "Medic";
                    description = "Medic";
                    //image = "xxx";
                };
				class JTAC
                {
                    label = "JTAC";
                    description = "JTAC";
                    //image = "xxx";
                };
				class Heavy
                {
                    label = "Heavy";
                    description = "ENG/Ammo Bearer";
                    //image = "xxx";
                };
				class CSW
                {
                    label = "CSW";
                    description = "BANNED!";
                    //image = "xxx";
                };
            };
            class Radio
            {
                label = "Radio";
				values[] = { "White", "Orange", "Black", };
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
            Type = "Backpack";
        };
        class 332nd_Backpack_JTAC
        {
            model = "332nd_Backpack_Extended";
            Type = "JTAC";
        };
        class 332nd_Backpack_Medic
        {
            model = "332nd_Backpack_Extended";
            Type = "Medic";
        };
        class 332nd_Backpack_Heavy
        {
            model = "332nd_Backpack_Extended";
            Type = "Heavy";
        };
        class 332nd_Bag
        {
            model = "332nd_Backpack_Extended";
            Type = "Bag";
        };
        class 332nd_Leg_Bag
        {
            model = "332nd_Backpack_Extended";
            Type = "Leg_Bag";
        };
        class 332nd_Repeater_CSW
        {
            model = "332nd_Backpack_Extended";
            Type = "CSW";
        };
        class 332nd_Radio
        {
            model = "332nd_Backpack_Extended";
            Radio = "White";
        };
        class 332nd_Radio_Black
        {
            model = "332nd_Backpack_Extended";
            Radio = "Black";
        };
        class 332nd_Radio_Orange
        {
            model = "332nd_Backpack_Extended";
            Radio = "Orange";
        };
    };
};