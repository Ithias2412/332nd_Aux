class CfgPatches 
{
	class 332nd_Backpacks_ARF 
	{
		units[] = 
        {
            "",
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles
{
	class SWLB_clone_backpack;
	
//desert
	class 332nd_Backpack_Desert: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_Desert_AR: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert_AR.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_Desert_AT: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert_AT.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_Desert_RTO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert.paa",
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

	class 332nd_Backpack_Desert_NCO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert_Fulcrum.paa",
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

	class 332nd_Backpack_Desert_Medic: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert_Medic.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_Desert_Engineer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert_ENG.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_Desert_Ammo_Bearer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Desert.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

//urban
	class 332nd_Backpack_urban: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_urban_AR: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban_AR.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_urban_AT: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban_AT.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_urban_RTO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban.paa",
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

	class 332nd_Backpack_urban_NCO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban_Fulcrum.paa",
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

	class 332nd_Backpack_urban_Medic: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban_Medic.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_urban_Engineer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban_ENG.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_urban_Ammo_Bearer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_urban.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};


//winter
	class 332nd_Backpack_winter: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_winter_AR: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter_AR.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_winter_AT: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter_AT.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_winter_RTO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter.paa",
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

	class 332nd_Backpack_winter_NCO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter_Fulcrum.paa",
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

	class 332nd_Backpack_winter_Medic: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter_Medic.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_winter_Engineer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter_ENG.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_winter_Ammo_Bearer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_winter.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};


//woodland
	class 332nd_Backpack_woodland: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_woodland_AR: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland_AR.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_woodland_AT: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland_AT.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_woodland_RTO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland.paa",
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

	class 332nd_Backpack_woodland_NCO: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland_Fulcrum.paa",
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

	class 332nd_Backpack_woodland_Medic: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland_Medic.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class 332nd_Backpack_woodland_Engineer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland_ENG.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class 332nd_Backpack_woodland_Ammo_Bearer: SWLB_clone_backpack
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_woodland.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};


};

class XtdGearModels
{
    class CfgVehicles
    {
		class 332nd_ARF_Backpack_Extended
        {
            label = "Backpack ARF";
            author = "Cherryy";
			options[] = { "Type", "Camo", };
			class Type
            {
                label = "Type";
                values[] = { "AR", "AT", "RTO", "NCO", "Medic", "ENG", "Ammo",};
                changeingame = 0;
                alwaysSelectable = 0;
                class AR
                {
                    label = "AR";
                    description = "AR";
                    // image = "xxx";
                };
                class AT
                {
                    label = "AT";
                    description = "AT";
                    // image = "xxx";
                };
                class RTO
                {
                    label = "RTO";
                    description = "RTO";
                    // image = "xxx";
                };
                class NCO
                {
                    label = "NCO";
                    description = "NCO";
                    // image = "xxx";
                };
                class Medic
                {
                    label = "Medic";
                    description = "Medic";
                    // image = "xxx";
                };
                class ENG
                {
                    label = "ENG";
                    description = "ENG";
                    // image = "xxx";
                };
                class Ammo
                {
                    label = "Ammo-Bearer";
                    description = "Ammo";
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
    class CfgVehicles
    {
		//desert
		class 332nd_Backpack_Desert_AR
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AR";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_AT
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AT";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_RTO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "RTO";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_NCO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "NCO";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_Medic
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_Engineer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "ENG";
			camo = "Desert";
        };
		class 332nd_Backpack_Desert_Ammo_Bearer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Ammo";
			camo = "Desert";
        };
		//Urban
		class 332nd_Backpack_Urban_AR
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AR";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_AT
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AT";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_RTO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "RTO";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_NCO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "NCO";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_Medic
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_Engineer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "ENG";
			camo = "Urban";
        };
		class 332nd_Backpack_Urban_Ammo_Bearer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Ammo";
			camo = "Urban";
        };
		//Winter
		class 332nd_Backpack_Winter_AR
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AR";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_AT
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AT";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_RTO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "RTO";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_NCO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "NCO";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_Medic
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_Engineer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "ENG";
			camo = "Winter";
        };
		class 332nd_Backpack_Winter_Ammo_Bearer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Ammo";
			camo = "Winter";
        };
		//Woodland
		class 332nd_Backpack_Woodland_AR
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AR";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_AT
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "AT";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_RTO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "RTO";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_NCO
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "NCO";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_Medic
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_Engineer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "ENG";
			camo = "Woodland";
        };
		class 332nd_Backpack_Woodland_Ammo_Bearer
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Ammo";
			camo = "Woodland";
        };
    };
};