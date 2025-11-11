/*

class CfgPatches {
	class 332nd_Backpacks_Commando {
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

    class 3AS_B_Katarn_Backpack;
    class 332nd_Backpack_Commando: 3AS_B_Katarn_Backpack
    {
        displayName = "[332nd] Commando Backpack";
		author="Frankenburg + Ithias";
		maximumLoad=200;
		mass=40;
		hiddenSelectionsTextures[] = 
		{
            "\332nd_Aux\Backpacks\Tex\332nd_Commando_Backpack.paa"
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