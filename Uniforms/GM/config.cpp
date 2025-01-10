/*class CfgPatches
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
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Helmets\Tex\332nd_Marine_Helmet_CT.paa",
            "\JLTS_AE_GM\data\BaseTextures\BaseHelmet\Visor_co.paa"
        };
    };

    // Engineer Helmet
    class 332nd_Marine_Engineer_Helmet: SEA_Helmet_GM_21_Engineer
    {
        author = "Custom";
        displayName = "[332nd] Marine Engineer Helmet";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Helmets\Tex\332nd_Marine_Engineer_Helmet.paa",
            "\JLTS_AE_GM\data\BaseTextures\BaseHelmet\Visor_co.paa"
        };
    };

    // RTO Helmet
    class 332nd_Marine_RTO_Helmet: SEA_Helmet_GM_21_RTO
    {
        author = "Custom";
        displayName = "[332nd] Marine RTO Helmet";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Helmets\Tex\332nd_Marine_RTO_Helmet.paa",
            "\JLTS_AE_GM\data\BaseTextures\BaseHelmet\Visor_co.paa"
        };
    };

    // Marine Vest
    class 332nd_Marine_Vest: SEA_Vest_GM_21
    {
        author = "Custom";
        displayName = "[332nd] Marine Vest";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Vests\Tex\332nd_Marine_Vest.paa",
            "\JLTS_AE_GM\data\BaseTextures\Vest\Vest_Lower_co.paa",
            "\JLTS_AE_GM\data\BaseTextures\Vest\Vest_Upper_co.paa"
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
            uniformClass = "332nd_Marine_Uniform_Veh";
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
    class SEA_Backpack_GM_Base;
    class SEA_Backpack_GM_Medic;
    class SEA_Backpack_GM_RTO;

    // Marine Backpack
    class 332nd_Marine_Backpack: SEA_Backpack_GM_Base
    {
        author = "Custom";
        displayName = "[332nd] Marine Backpack";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack.paa"
        };
    };

    // Medic Backpack
    class 332nd_Marine_Medic_Backpack: SEA_Backpack_GM_Medic
    {
        author = "Custom";
        displayName = "[332nd] Marine Medic Backpack";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Backpacks\Tex\332nd_Marine_Medic_Backpack.paa"
        };
    };

    // RTO Backpack
    class 332nd_Marine_RTO_Backpack: SEA_Backpack_GM_RTO
    {
        author = "Custom";
        displayName = "[332nd] Marine RTO Backpack";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "\332nd_Aux\Backpacks\Tex\332nd_Marine_RTO_Backpack.paa",
            "\JLTS_AE_GM\data\BaseTextures\Backpack\RTO\Backpack_RTO_ca.paa"
        };
    };
};
*/