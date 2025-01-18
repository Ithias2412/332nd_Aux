class CfgPatches
{
    class 332nd_Aux_LAAT_LE
    {
        requiredAddons[] = { "3AS_LAAT_LE" };
        units[] =
        {
            "332nd_Aux_Patrol_LAAT_Republic"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class 3AS_Patrol_LAAT_Base;

    class 332nd_Aux_Patrol_LAAT_Base: 3AS_Patrol_LAAT_Base
    {
        scope = 1; // Hidden in the editor but available for inheritance
        scopeCurator = 0;
        weapons[] =
        {
            "3as_LAAT_Medium_Canon",
            "CMFlareLauncher"
        };
        magazines[] =
        {
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells"
        };
        memoryPointGun[] =
        {
            "z_gunL_muzzle",
            "z_gunR_muzzle"
        };
        memorypointcm[] =
        {
            "flare_launcher1",
            "flare_launcher2"
        };
        memorypointcmdir[] =
        {
            "flare_launcher1_dir",
            "flare_launcher2_dir"
        };
    };

    class 332nd_Aux_Patrol_LAAT_Republic: 332nd_Aux_Patrol_LAAT_Base
    {
        scope = 2; // Visible in the editor
        scopeCurator = 2; // Available in Zeus
        displayName = "[332nd] LAAT/LE (Republic)";
        vehicleClass = "Air";
        faction = "332nd_Faction"; // Assign to a faction (default NATO here, adjust as needed)
        editorSubcategory = "EdSubcat_Helicopters"; // Use appropriate subcategory
        typicalCargo[] =
        {
            "B_Helipilot_F" // Adjust to valid crew units
        };
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "3AS\3as_LAAT\LAAT_LE\data\republicpatrol01_CO.paa"
        };
        class Library
        {
            libTextDesc = "";
        };
    };
};