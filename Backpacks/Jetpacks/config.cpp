class CfgPatches
{
	class 332nd_JT12
	{
		author="Cherryy";
		requiredAddons[]=
		{};
		units[]=
		{};
		weapons[]={};
	};
}; 

class CfgVehicles
{
    class B_Kitbag_rgr;
	class 332nd_Jetpack_Base: B_Kitbag_rgr
	{
		scope=0;
		author="Cherryy";
		maximumLoad=50;
		tf_hasLRradio=0;
		tf_range=25000;
		//nsm
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 30;
		NSM_jumppack_recharge = 1;
		NSM_jumppack_jump_types[] = 
		{
			{
				"Jump",		// Name of jump
				{
					10,		//forward velo  [meters/second] (0)
					2,		//verticle velo [meters/second] (1)
					15,		//cost          [no units]      (2)
					0,		//angle         [degrees]       (3)
					1,		//directional   [bool, 0 = false, 1 = true] (4)
					0		//can prone jump [bool, 0 = false, 1 = true] (5)
				}
			},
		};
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
	};
    class 332nd_JT12: 332nd_Jetpack_Base
    {  
        scope=2;
		author="Cherryy";
		displayName="[332nd] JT-12";
		model="\MRC\JLTS\characters\CloneArmor2\clonejumppackjt12.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_JT12.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";
    };
	class 332nd_JT12_NCO: 332nd_JT12
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_JT12_LR.paa"
		};
		displayName="[332nd] JT-12 (NCO)";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	};
	class 332nd_JT12_Medic: 332nd_JT12
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_JT12_Medic.paa"
		};
		displayName="[332nd] JT-12 (Medic)";
		maximumLoad=75;
	};
	class 332nd_MC: 332nd_Jetpack_Base
	{
		scope=2;
		maximumLoad=180;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_mc.paa"
		};
		displayName="[332nd] Pilot Desent Pack (LR)";
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		NSM_jumppack_energy_capacity = 60;
		NSM_jumppack_recharge = 1;
		NSM_jumppack_jump_types[] = 
		{
			{
				"Jump",// Name of jump
				{
					0,		//forward velo  [meters/second] (0)
					0,		//verticle velo [meters/second] (1)
					60,		//cost          [no units]      (2)
					0,		//angle         [degrees]       (3)
					0,		//directional   [bool, 0 = false, 1 = true] (4)
					1		//can prone jump [bool, 0 = false, 1 = true] (5)
				}
			},
		};
	};
};