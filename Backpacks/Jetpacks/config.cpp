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
		maximumLoad=150;
		tf_hasLRradio=0;
		tf_range=25000;
		BNA_KC_jetpacks_isJetpack = 1;  // Enables jetpack functionality (1-yes, 0-no)
        BNA_KC_jetpacks_speed = 4;  // Horizontal speed for jetpack, rough formula is speed * 21 = speed in km/h
        BNA_KC_jetpacks_strength = 15;  // Vertical speed for jetpack, rough formula is (speed - 10) * 4.3 = speed in km/h. Strength of <10 will not be able to fly
        BNA_KC_jetpacks_fuel = 100;  // Amount of fuel this jetpack has, (fuel / 10) = fuel in liters
        BNA_KC_jetpacks_canHover = 1;  // Enables jetpack hovering (1-yes, 0-no)
        BNA_KC_jetpacks_effectPoints[] = {
            "effect_left",  // Can be mixed
            {0.15051, -0.219357, -0.247619}
        };
        BNA_KC_jetpacks_effects[] = {
            "BNA_KC_cloudlet_jetpackFire_blue",
            "BNA_KC_cloudlet_jetpackSmoke"
        };
        BNA_KC_jetpacks_effectSound = "\ORA\BNA_KC\addons\jetpacks\data\audio\Jetpack_Loop.wss";
        BNA_KC_jetpacks_lightColor[] = {0, 0.1, 0.9};  // Light color in format [R, G, B]
        BNA_KC_jetpacks_freefallHeight = 500;  // Freefall height to set on unit when jetpacking
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
	class 332nd_JT12_LR: 332nd_JT12
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_JT12_LR.paa"
		};
		displayName="[332nd] JT-12 (LR)";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	};
	class 332nd_MC: 332nd_Jetpack_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Backpacks\tex\332nd_mc.paa"
		};
		displayName="[332nd] Pilot Droppack (LR)";
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
		BNA_KC_jetpacks_fuel = 1;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	};
};
/*class XtdGearModels
{
    class CfgWeapons 
    {
         class 332nd_Jetpacks_Extended
        {
            label = "Jetpacks";
            author = "Cherryy";
			options[] = { "Type", "Variant",};
            class Type
            {
                label = "Type";
				values[] = { "JT12", "Pilot", };
                changeingame = 0;
                alwaysSelectable = 1;
                class JT12
                {
                    label = "JT12";
                    description = "Airborne";
                    //image = "xxx";
                };
				class Pilot
                {
                    label = "Pilot";
                    description = "Pilots Only";
                    //image = "xxx";
				};
			};
			class Variant
            {
                label = "Variant";
				values[] = { "Normal", "LR", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Normal
                {
                    label = "Normal";
                    //description = "Default";
                    //image = "xxx";
                };
                class LR
                {
                    label = "LR";
                    //description = "Not Default";
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
        class 332nd_JT12
        {
            model = "332nd_Jetpacks_Extended";
            Type = "JT12";
			Variant = "Normal";
        };
		class 332nd_JT12_LR
        {
            model = "332nd_Jetpacks_Extended";
            Type = "JT12";
			Variant = "LR";
        };
       	class 332nd_MC
        {
            model = "332nd_Jetpacks_Extended";
            Type = "Pilot";
			Variant = "LR";
        };
    };
};