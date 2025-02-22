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
	
	class 332nd_Backpack;

//Base Items

	//ARF Start
	class 332nd_ARF_Backpack_Desert: 332nd_Backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Desert)";
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
	class 332nd_ARF_Backpack_Urban: 332nd_Backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Urban)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_ARF_Backpack_Woodland: 332nd_Backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Woodland)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_ARF_Backpack_Winter: 332nd_Backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Winter)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	//JTAC
	class 332nd_ARF_Backpack_JTAC_Desert: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (JTAC / Desert)";
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
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 332nd_ARF_Backpack_JTAC_Urban: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (JTAC / Urban)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa",
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
	class 332nd_ARF_Backpack_JTAC_Woodland: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (JTAC / Woodland)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa",
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
	class 332nd_ARF_Backpack_JTAC_Winter: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (JTAC / Winter)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa",
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
	//Medic
	class 332nd_ARF_Backpack_Medic_Desert: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] ARF Backpack (Medic / Desert)";
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
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};
	class 332nd_ARF_Backpack_Medic_Urban: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] ARF Backpack (Medic / Urban)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};
	class 332nd_ARF_Backpack_Medic_Woodland: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] ARF Backpack (Medic / Woodland)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};
	class 332nd_ARF_Backpack_Medic_Winter: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[332nd] ARF Backpack (Medic / Winter)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};
	//Heavy
	class 332nd_ARF_Backpack_Heavy_Desert: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Heavy / Desert)";
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
	class 332nd_ARF_Backpack_Heavy_Urban: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Heavy / Urban)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Urban.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_ARF_Backpack_Heavy_Woodland: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Heavy / Woodland)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Woodland.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};
	class 332nd_ARF_Backpack_Heavy_Winter: SWLB_clone_backpack
	{
		author="Cherryy";
		displayName="[332nd] ARF Backpack (Heavy / Winter)";
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
			"\332nd_Aux\Backpacks\Tex\332nd_Backpack_Winter.paa",
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
            class Type
            {
                label = "Type";
				values[] = { "Backpack", "Medic", "JTAC", "Heavy",};
                changeingame = 0;
                alwaysSelectable = 1;
				//Backpack
				class 332nd_ARF_Backpack_Desert
                {
                    label = "Backpack";
                    description = "AR/AT";
					camo = "Desert";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Urban
                {
                    label = "Backpack";
                    description = "AR/AT";
					camo = "Urban";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Woodland
                {
                    label = "Backpack";
                    description = "AR/AT";
					camo = "Woodland";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Winter
                {
                    label = "Backpack";
                    description = "AR/AT";
					camo = "Winter";
                    //image = "xxx";
                };
				//Medic Bags
				class 332nd_ARF_Backpack_Medic_Desert
                {
                    label = "Medic";
                    description = "Medic";
					camo = "Desert";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Medic_Urban
                {
                    label = "Medic";
                    description = "Medic";
					camo = "Urban";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Medic_Woodland
                {
                    label = "Medic";
                    description = "Medic";
					camo = "Woodland";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Medic_Winter
                {
                    label = "Medic";
                    description = "Medic";
					camo = "Winter";
                    //image = "xxx";
                };
				//JTAC Bags
				class 332nd_ARF_Backpack_JTAC_Desert
                {
                    label = "JTAC";
                    description = "JTAC";
					camo = "Desert";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_JTAC_Urban
                {
                    label = "JTAC";
                    description = "JTAC";
					camo = "Urban";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_JTAC_Woodland
                {
                    label = "JTAC";
                    description = "JTAC";
					camo = "Woodland";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_JTAC_Winter
                {
                    label = "JTAC";
                    description = "JTAC";
					camo = "Winter";
                    //image = "xxx";
                };
				//Heavy Bags
				class 332nd_ARF_Backpack_Heavy_Desert
                {
                    label = "Heavy";
                    description = "ENG/Ammo Bearer";
					camo = "Desert";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Heavy_Urban
                {
                    label = "Heavy";
                    description = "ENG/Ammo Bearer";
					camo = "Urban";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Heavy_Woodland
                {
                    label = "Heavy";
                    description = "ENG/Ammo Bearer";
					camo = "Woodland";
                    //image = "xxx";
                };
				class 332nd_ARF_Backpack_Heavy_Winter
                {
                    label = "Heavy";
                    description = "ENG/Ammo Bearer";
					camo = "Winter";
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
		//ARF Beninig
		class 332nd_ARF_Backpack_Desert
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Backpack";
			camo = "Desert";
        };
		class 332nd_ARF_Backpack_Urban
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Backpack";
			camo = "Urban";
        };
		class 332nd_ARF_Backpack_Woodland
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Backpack";
			camo = "Woodland";
        };
		class 332nd_ARF_Backpack_Winter
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Backpack";
			camo = "Winter";
        };
		//JTAC
		class 332nd_ARF_Backpack_JTAC_Desert
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "JTAC";
			camo = "Desert";
        };
		class 332nd_ARF_Backpack_JTAC_Urban
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "JTAC";
			camo = "Urban";
        };
		class 332nd_ARF_Backpack_JTAC_Woodland
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "JTAC";
			camo = "Woodland";
        };
		class 332nd_ARF_Backpack_JTAC_Winter
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "JTAC";
			camo = "Winter";
        };
		//Medic
		class 332nd_ARF_Backpack_Medic_Desert
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Desert";
        };
		class 332nd_ARF_Backpack_Medic_Urban
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Urban";
        };
		class 332nd_ARF_Backpack_Medic_Woodland
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Woodland";
        };
		class 332nd_ARF_Backpack_Medic_Winter
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Medic";
			camo = "Winter";
        };
		//Heavy
		class 332nd_ARF_Backpack_Heavy_Desert
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Heavy";
			camo = "Desert";
        };
		class 332nd_ARF_Backpack_Heavy_Urban
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Heavy";
			camo = "Urban";
        };
		class 332nd_ARF_Backpack_Heavy_Woodland
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Heavy";
			camo = "Woodland";
        };
		class 332nd_ARF_Backpack_Heavy_Winter
        {
            model = "332nd_ARF_Backpack_Extended";
            Type = "Heavy";
			camo = "Winter";
        };
    };
};