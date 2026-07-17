#include "..\..\332nd_Aux_Macros.hpp"
class CfgPatches
{
	class 332nd_Backpacks_Marine
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
	class SEA_Backpack_GM_Base;
	class SEA_Backpack_GM_RTO;
	class SEA_Backpack_GM_Medic;

//Base Items


	class 332nd_Marine_Backpack: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=100;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack.paa",
		};
	};
	class 332nd_Marine_Backpack_AR: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Auto-Rifleman)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_AR.paa",
		};
	};
	class 332nd_Marine_Backpack_AT: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Anti-Tank)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_AT.paa",
		};
	};
	class 332nd_Marine_Backpack_RTO: SEA_Backpack_GM_RTO
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (RTO)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_RTO.p3d";
		maximumLoad=258;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenselections[] =
		{
			"Camo1",
			"Camo2",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_RTO.paa",
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_RTO_2.paa",
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
	class 332nd_Marine_Backpack_NCO: SEA_Backpack_GM_RTO
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (NCO)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_RTO.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenselections[] =
		{
			"Camo1",
			"Camo2",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_RTO.paa",
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_RTO_2_NCO.paa",
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
	class 332nd_Marine_Backpack_Medic: SEA_Backpack_GM_Medic
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Medic)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Medic.p3d";
		maximumLoad=321;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_Medic.paa",
		};
	};
	class 332nd_Marine_Backpack_ENG: SEA_Backpack_GM_Base
	{
        ace_fortify_fortifyTool = 1;
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Engineer)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=320;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_ENG.paa",
		};
	};
	class 332nd_Marine_Backpack_Ammo_Bearer: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Ammo Bearer)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=320;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_Ammo_Bearer.paa",
		};
	};
	class 332nd_Marine_Backpack_GRN: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Grenadier)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=150;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_GRN.paa",
		};
	};
	class 332nd_Marine_Backpack_MRK: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Hazardous Envirement Backpack (Marksman)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=150;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] =
		{
			"camo1",
		};
		hiddenSelectionsTextures[] =
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack_MRK.paa",
		};
	};

};

class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Marine_Backpack_Extended
        {
            label = "Hazardous";
            author = "Ithias";
			options[] = {"Backpacks", };
            class Backpacks
            {
                label = "Backpacks";
				values[] = { "Rifleman", "AR", "AT", "RTO", "NCO", "Medic", "ENG", "Ammo_Bearer", "GRN", "MRK", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Rifleman
                {
                    label = "Rifleman";
					//description = "";
                    //image = "xxx";
                };
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
				class RTO
                {
                    label = "RTO";
                    description = "RTO";
                    //image = "xxx";
                };
				class NCO
                {
                    label = "NCO";
                    description = "Leadership";
                    //image = "xxx";
                };
				class Medic
                {
                    label = "Medic";
                    description = "Medic";
                    //image = "xxx";
                };
				class ENG
                {
                    label = "Engineer";
                    description = "ENG";
                    //image = "xxx";
                };
				class Ammo_Bearer
                {
                    label = "Ammo Bearer";
                    description = "Your mother";
                    //image = "xxx";
                };
				class GRN
                {
                    label = "Grenadier";
                    description = "GRN";
                    //image = "xxx";
                };
				class MRK
                {
                    label = "Marksman";
                    description = "MRK";
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
        XTD_INFO(332nd_Marine_Backpack, "332nd_Marine_Backpack_Extended", Backpacks, "Rifleman")
        XTD_INFO(332nd_Marine_Backpack_AR, "332nd_Marine_Backpack_Extended", Backpacks, "AR")
        XTD_INFO(332nd_Marine_Backpack_AT, "332nd_Marine_Backpack_Extended", Backpacks, "AT")
        XTD_INFO(332nd_Marine_Backpack_RTO, "332nd_Marine_Backpack_Extended", Backpacks, "RTO")
        XTD_INFO(332nd_Marine_Backpack_NCO, "332nd_Marine_Backpack_Extended", Backpacks, "NCO")
        XTD_INFO(332nd_Marine_Backpack_Medic, "332nd_Marine_Backpack_Extended", Backpacks, "Medic")
        XTD_INFO(332nd_Marine_Backpack_ENG, "332nd_Marine_Backpack_Extended", Backpacks, "ENG")
        XTD_INFO(332nd_Marine_Backpack_Ammo_Bearer, "332nd_Marine_Backpack_Extended", Backpacks, "Ammo_Bearer")
        XTD_INFO(332nd_Marine_Backpack_GRN, "332nd_Marine_Backpack_Extended", Backpacks, "GRN")
        XTD_INFO(332nd_Marine_Backpack_MRK, "332nd_Marine_Backpack_Extended", Backpacks, "MRK")
    };
};
