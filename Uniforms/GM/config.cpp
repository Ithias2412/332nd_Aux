class CfgPatches
{
    class 332nd_Custom_Mod
    {
        author = "Custom";
        requiredAddons[] =
        { 
            "A3_Data_F",
            "A3_Weapons_F",
            "A3_Characters_F",
            "SEA_JLTS_ExtendedArsenal"
        };
        requiredVersion = 1.0;
        units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons
{
    class SEA_Helmet_GM_21;
    class SEA_Helmet_GM_21_Engineer;
    class SEA_Helmet_GM_21_RTO;
    class SEA_Vest_GM_21;
    class SEA_Uniform_GM_Fabric_21;

    // Marine Helmet
    class 332nd_Marine_Helmet: SEA_Helmet_GM_21
    {
        author = "Custom";
        displayName = "[332nd] Marine Helmet";
        scope = 2;
        hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_CT.paa",
			"\JLTS_AE_GM\data\ReTextures\21st\Helmet.paa"
		};
    };



    // Marine Vest
    class 332nd_Marine_Vest: SEA_Vest_GM_21
    {
        author = "Custom";
        displayName = "[332nd] Marine Vest";
        scope = 2;
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Marine_Vest.paa"
		};
    };

    // Marine Uniform
    class 332nd_Marine_Uniform: SEA_Uniform_GM_Fabric_21
    {
        author = "Custom";
        displayName = "[332nd] Marine Uniform";
        scope = 2;
        class ItemInfo
        {
            uniformClass = "SEA_Uniform_GM_Plastic_21";
        };
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Uniforms\Tex\332nd_Marine_Upper_CT.paa",
            "\JLTS_AE_GM\data\BaseTextures\Uniform\BodyLower_co.paa",
            "\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
        };
    };
};

class CfgVehicles
{
};
