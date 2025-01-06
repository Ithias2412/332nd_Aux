class CfgPatches {
	class 332nd_Backpacks {
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
		maximumLoad=420;
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