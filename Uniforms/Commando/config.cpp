class CfgPatches
{
    class 332nd_Aux_Characters_Commando
    {
        addonRootClass = "332nd_Aux_Characters";
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F", "JLTS_radios", "3AS_Characters_Commando"};
        requiredVersion = 0.1;
        units[] = {
            "332nd_Aux_Commando_Base"
        };
        weapons[] = {
            "332nd_Aux_U_Katarn_Armor",
            "332nd_Aux_V_Katarn_Vest_Demo",
            "332nd_Aux_V_Katarn_Vest_Tech",
            "332nd_Aux_V_Katarn_Vest_Tech_Foxtrot",
            "332nd_Aux_V_Katarn_Vest_Tech_Omega",
            "332nd_Aux_V_Katarn_Vest_Sniper",
            "332nd_Aux_V_Katarn_Vest_Team_Leader",
            "332nd_Aux_V_Katarn_Vest_Team_Leader_Boss",
            "332nd_Aux_V_Katarn_Vest_Team_Leader_Foxtrot",
            "332nd_Aux_B_Katarn_Backpack"
        };
    };
};

class CfgVehicles
{
    class 3AS_Rep_Commando_base_F;

    class 332nd_Aux_Commando_Base: 3AS_Rep_Commando_base_F
    {
        author = "332nd Auxiliary";
        displayName = "[332nd] Republic Commando";
        faction = "332nd_Aux";
        editorSubcategory = "332nd_Aux_EdSubcat_Commandos";
        uniformClass = "332nd_Aux_U_Katarn_Armor";
        backpack = "332nd_Aux_B_Katarn_Backpack";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Armor_Standard_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
    };

    // Backpacks
    class 3AS_B_Katarn_Backpack;
    class 332nd_Aux_B_Katarn_Backpack: 3AS_B_Katarn_Backpack
    {
        displayName = "[332nd] Republic Katarn Backpack";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"
        };
    };
};

class cfgWeapons
{
    class 3AS_U_Rep_Katarn_Armor;
    
    // Command Uniform
    class 332nd_Aux_U_Katarn_Armor: 3AS_U_Rep_Katarn_Armor
    {
        displayName = "[332nd] Republic Katarn Armor";
    };

    // Vests
    class 3AS_V_Katarn_Vest_Demo;
    class 332nd_Aux_V_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo
    {
        displayName = "[332nd] Republic Katarn Demolitions Vest";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Demo_CO.paa"
        };
    };

    class 3AS_V_Katarn_Vest_Tech;
    class 332nd_Aux_V_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech
    {
        displayName = "[332nd] Republic Katarn Technician Vest";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Tech_CO.paa"
        };
    };

    class 3AS_V_Katarn_Vest_Tech_Foxtrot;
    class 332nd_Aux_V_Katarn_Vest_Tech_Foxtrot: 3AS_V_Katarn_Vest_Tech_Foxtrot
    {
        displayName = "[332nd] Republic Katarn Technician Vest (Foxtrot)";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Tech_Foxtrot_CO.paa"
        };
    };

    class 3AS_V_Katarn_Vest_Tech_Omega;
    class 332nd_Aux_V_Katarn_Vest_Tech_Omega: 3AS_V_Katarn_Vest_Tech_Omega
    {
        displayName = "[332nd] Republic Katarn Technician Vest (Omega)";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Tech_Omega_CO.paa"
        };
    };

    class 3AS_Katarn_Vest_Sniper;
    class 332nd_Aux_V_Katarn_Vest_Sniper: 3AS_Katarn_Vest_Sniper
    {
        displayName = "[332nd] Republic Katarn Sniper Vest";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Sniper_CO.paa"
        };
    };

    class 3AS_Katarn_Vest_Team_Leader;
    class 332nd_Aux_V_Katarn_Vest_Team_Leader: 3AS_Katarn_Vest_Team_Leader
    {
        displayName = "[332nd] Republic Katarn Team Leader Vest";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_CO.paa"
        };
    };

    class 3AS_Katarn_Vest_Team_Leader_Boss;
    class 332nd_Aux_V_Katarn_Vest_Team_Leader_Boss: 3AS_Katarn_Vest_Team_Leader_Boss
    {
        displayName = "[332nd] Republic Katarn Team Leader Vest (Boss)";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_Boss_CO.paa"
        };
    };

    class 3AS_Katarn_Vest_Team_Leader_Foxtrot;
    class 332nd_Aux_V_Katarn_Vest_Team_Leader_Foxtrot: 3AS_Katarn_Vest_Team_Leader_Foxtrot
    {
        displayName = "[332nd] Republic Katarn Team Leader Vest (Foxtrot)";
        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Characters\Commando\data\Katarn_Vest_Team_Leader_Foxtrot_CO.paa"
        };
    };
	class 3AS_H_Katarn_Helmet;

    class 332nd_Aux_H_Katarn_Helmet: 3AS_H_Katarn_Helmet
    {
        displayName = "[332nd] Republic Katarn Helmet";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa","\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"};
		
    };
};
