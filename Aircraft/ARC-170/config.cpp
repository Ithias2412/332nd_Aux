class CfgPatches
{
    class 332nd_ARC_170
    {
        units[] = {"332nd_ARC_170_base", "332nd_ARC_170_blue", "332nd_ARC_170_green"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"3AS_ARC_170"}; // Reference the original mod here
        author = "YourName";
    };
};

class CfgEditorSubcategories
{
    class EdSubcat_332nd_Planes
    {
        displayName = "332nd Legion Planes";
    };
};

class CfgVehicles
{
    // Inherit from the base class of the other mod
    class 3AS_ARC_170_Base;

    // 332nd Base ARC-170
    class 332nd_ARC_170_base: 3AS_ARC_170_Base
    {
        faction = "332nd_Faction"; // Replace with your faction (e.g., "332nd_Faction" if defined)
        editorSubcategory = "EdSubcat_332nd_Planes"; // Adds to a custom editor category
        displayName = "[332nd] ARC-170";
        scope = 2; // Makes it available in the editor
        scopeCurator = 2; // Makes it available in Zeus
        crew = "B_Pilot_F"; // Replace with your desired pilot unit
        typicalCargo[] = {"B_Pilot_F"}; // Default crew for vehicles
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Aircraft\ARC-170\Tex\332nd_arc_170_body.paa",
            "332nd_Aux\Aircraft\ARC-170\Tex\332nd_arc_170_wings.paa"
        };
    };


};
