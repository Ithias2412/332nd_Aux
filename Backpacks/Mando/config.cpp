class CfgPatches 
{
	class 332nd_Backpacks_Mando
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
	class SFA_Hunter_Jetpack_Black;
	class SFA_Hunter_Jetpack_Armatek;

//Base Items

	class 332nd_Hunter_Jetpack_Black_RTO: SFA_Hunter_Jetpack_Black
	{
		author="Ithias";
		displayName = "[Butch Deloria] Hunter Jetpack [Black]";
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 332nd_Hunter_Jetpack_Armatek_RTO: SFA_Hunter_Jetpack_Armatek
	{
		author="Ithias";
		displayName = "[Butch Deloria] Hunter Jetpack [Red]";
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
};