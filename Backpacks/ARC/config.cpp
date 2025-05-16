class CfgPatches {
	class 332nd_Backpacks_ARC {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{

    class SWLB_clone_arc_backpack;
    class 332nd_Backpack_ARC: SWLB_clone_arc_backpack
    {
        displayName = "[332nd] ARC Backpack";
		author="Ithias";
		maximumLoad=200;
		mass=40;
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_arc_backpack_co.paa",
		};
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
    };
};

class XtdGearModels
{
    class CfgVehicles 
    {
        class 332nd_Backpack_Fun_Ops_Extended
        {
            label = "Fun Operations";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "ARC", "Commando",};
                changeingame = 0;
                alwaysSelectable = 1;
                class ARC
                {
                    label = "ARC";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Commando
                {
                    label = "Commando";
                    description = "With Zeus Approval";
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
        class 332nd_Backpack_ARC
        {
            model = "332nd_Backpack_Fun_Ops_Extended";
            Type = "ARC";
        };
        class 332nd_Backpack_Commando
        {
            model = "332nd_Backpack_Fun_Ops_Extended";
            Type = "Commando";
        };
	};
};