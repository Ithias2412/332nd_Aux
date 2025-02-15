class CfgPatches
{
    class 332_Aux_PX10
    {
        requiredAddons[] = {"3AS_Rebel_Armor_PX10"};
        units[] = {"332_Aux_PX10_REP_F", "332_Aux_PX10_REP_R3", "332_Aux_PX10_REP_UP"};
        weapons[] = {};
    };
};

class CfgVehicles
{
    class 3AS_PX10_REP_F; // Base Republic variant
    class 3AS_PX10_REP_R3;
    class 3AS_PX10_REP_UP;

    //  ustom Republic Base Variant
    class 332_Aux_PX10_REP_F: 3AS_PX10_REP_F
    {
        displayName = "[332] PX-10 Republic Standard";
        side = 1;
        faction = "332nd_Faction"; // Replace with your custom faction if defined
        editorSubcategory = "EdSubcat_332nd_Frankies_Aux_Affixes";
        hiddenSelections[] = {"Camo","camo2","camo3","camo_Fuel","camo_repair"};
        hiddenSelectionsTextures[] =
        {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
        };
    };

    // Custom Republic R3 Variant
    class 332_Aux_PX10_REP_R3: 3AS_PX10_REP_R3
    {
        displayName = "[332] PX-10 Republic R3";
        faction = "332nd_Faction"; // Replace with your custom faction if defined
        editorSubcategory = "EdSubcat_332nd_Frankies_Aux_Affixes";
        side = 1;
        hiddenSelections[] = {"Camo","camo2","camo3","camo_Fuel","camo_repair"};
        hiddenSelectionsTextures[] =
        {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
        };
    };

    // Custom Republic Upgraded Variant
    class 332_Aux_PX10_REP_UP: 3AS_PX10_REP_UP
    {
        displayName = "[332] PX-10 Republic Upgraded";
        faction = "332nd_Faction"; // Replace with your custom faction if defined
        editorSubcategory = "EdSubcat_332nd_Frankies_Aux_Affixes";
        side = 1;
        hiddenSelections[] = {"Camo","camo2","camo3","camo_Fuel","camo_repair"};
        hiddenSelectionsTextures[] =
        {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
        };
    };
};
