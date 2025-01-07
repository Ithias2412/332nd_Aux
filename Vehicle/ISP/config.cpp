class CfgPatches
{
    class 332nd_Swamp_Speeder
    {
        units[] = {"332nd_ISP", "332nd_ISP_Transport"};
        weapons[] = {};
        requiredAddons[] = {"3AS_ISP"}; // Ensure the original mod is loaded
        author = "YourName";
    };
};

class CfgEditorSubcategories
{
    class EdSubcat_332nd_Vehicles
    {
        displayName = "332nd Legion Vehicles"; // Custom tab for 332nd vehicles
    };
};

class CfgVehicles
{
    // Inherit from the base ISP class in the original mod
    class 3AS_ISP_Base;

    // Custom Swamp Speeder
    class 332nd_ISP: 3AS_ISP_Base
    {
        scope = 2; // Makes it available in the editor
        scopeCurator = 2; // Makes it available in Zeus
        faction = "BLU_F"; // Replace with your custom faction if defined
        editorSubcategory = "EdSubcat_332nd_Vehicles";
        displayName = "[332nd] Swamp Speeder";
        hiddenSelectionsTextures[] = {
        };
        crew = "B_Pilot_F"; // Replace with a custom crew unit if available
        typicalCargo[] = {"B_Soldier_F"};
    };

    // Custom Swamp Speeder Transport
    class 332nd_ISP_Transport: 3AS_ISP_Base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_332nd_Vehicles";
        displayName = "[332nd] Swamp Speeder (Transport)";
        hiddenSelectionsTextures[] = {
        };
        animationList[] = {
            "HideTurrets", 1
        };
        crew = "B_Pilot_F";
        typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
    };
};
