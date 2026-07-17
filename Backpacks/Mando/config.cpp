#include "..\..\332nd_Aux_Macros.hpp"
#define MANDO_RTO(NAME,PARENT,DISP) class NAME: PARENT { author="Ithias"; displayName = DISP; descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range"; tf_isolatedAmount=0.64999998; tf_encryptionCode="tf_west_radio_code"; tf_dialog="anarc210_radio_dialog"; tf_subtype="digital_lr"; tf_range=300000; tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;"; tf_hasLRradio=1; };
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

	MANDO_RTO(332nd_Hunter_Jetpack_Black_RTO, SFA_Hunter_Jetpack_Black, "[Butch Deloria] Hunter Jetpack [Black]")
	MANDO_RTO(332nd_Hunter_Jetpack_Armatek_RTO, SFA_Hunter_Jetpack_Armatek, "[Butch Deloria] Hunter Jetpack [Red]")
};
