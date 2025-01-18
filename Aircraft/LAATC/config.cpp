class CfgPatches
{
    class 332nd_Aux_LAAT_Cargo
    {
        requiredAddons[] = { "3AS_LAAT_Cargo" };
        units[] =
        {
            "332nd_Aux_LAATC_Republic"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class 3AS_LAAT_Cargo_Base;

    class 332nd_Aux_LAATC_Base: 3AS_LAAT_Cargo_Base
    {
        scope = 1; // Hidden in the editor but available for inheritance
        scopeCurator = 0;
        displayName = "LAAT/C (Base)";
        weapons[] =
        {
            "3AS_LAAT_Missile_AGM",
            "3AS_LAAT_Missile_AA",
            "3as_LAAT_Medium_Canon",
            "CMFlareLauncher"
        };
        magazines[] =
        {
            "3AS_LAAT_8Rnd_Missile_AGM",
            "3AS_PylonMissile_LAAT_8Rnd_Missile_AA",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3as_LAAT_1000Rnd_Medium_shells"
        };
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
    };

    class 332nd_Aux_LAATC_Republic: 332nd_Aux_LAATC_Base
    {
        scope = 2; // Visible in the editor
        scopeCurator = 2; // Available in Zeus
        displayName = "[332nd] LAAT/C (Republic)";
        faction = "BLU_F"; // Change to desired faction
        editorSubcategory = "EdSubcat_Helicopters"; // Change to appropriate subcategory
        side = 1; // Friendly (BLUFOR)
        crew = "B_Helipilot_F"; // Default crew, change if needed
        hiddenSelectionsTextures[] =
        {
            "3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa",
            "3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa",
            "3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
            "3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
        };
        textureList[] =
        {
            "Republic", 1,
            "Wampa", 0
        };
    };
};
