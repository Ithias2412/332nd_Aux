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
        class Components
{
    class TransportPylonsComponent
    {
        UIPicture = "3as\3AS_ARC170\data\ui\pylon_arc.paa"; // Optional UI icon for pylons
        class pylons
        {
            class pylons1
            {
                hardpoints[] =
                {
                    "B_BIM9X_DUAL_RAIL",
                    "B_AGM65_RAIL",
                    "REP_AGM_RAIL"
                };
                attachment = "PylonRack_Missile_BIM9X_x2"; // Default weapon
                priority = 10;
                maxweight = 300; // Maximum payload weight
                UIposition[] = {0.5, 0.25}; // Position in the pylon configuration UI
            };
            class pylons2: pylons1
            {
                UIposition[] = {0.15, 0.25};
                mirroredMissilePos = 1; // Mirrors pylon1
            };
            class pylons3: pylons1
            {
                hardpoints[] =
                {
                    "B_AMRAAM_D_RAIL",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_AGM65_RAIL",
                    "B_AGM65_DUAL_RAIL",
                    "ARC_AGM_PYLON",
                    "B_BOMB_PYLON"
                };
                attachment = "PylonMissile_1Rnd_Bomb_04_F"; // Default bomb
                priority = 9;
                maxweight = 2500;
                UIposition[] = {0.55, 0.35};
            };
            class pylons4: pylons3
            {
                UIposition[] = {0.1, 0.35};
                mirroredMissilePos = 3; // Mirrors pylon3
            };
            class pylons5: pylons1
            {
                hardpoints[] =
                {
                    "B_AMRAAM_D_RAIL",
                    "B_AGM65_RAIL",
                    "B_AGM65_DUAL_RAIL",
                    "B_HARM_RAIL",
                    "ARC_AGM_PYLON"
                };
                attachment = "PylonRack_Missile_AMRAAM_D_x1"; // Default missile
                priority = 7;
                maxweight = 5000;
                UIposition[] = {0.6, 0.45};
            };
            class pylons6: pylons5
            {
                UIposition[] = {0.05, 0.45};
                mirroredMissilePos = 5; // Mirrors pylon5
            };
        };
        class presets
        {
            class empty
            {
                displayName = "$STR_empty"; // Empty loadout
                attachment[] = {};
            };
            class AA
            {
                displayName = "$STR_A3_cfgmagazines_titan_aa_dns"; // Anti-Air loadout
                attachment[] =
                {
                    "PylonRack_Missile_BIM9X_x1",
                    "PylonRack_Missile_BIM9X_x1",
                    "3AS_PylonRack_ARC_6Rnd_Missile_AGM",
                    "3AS_PylonRack_ARC_6Rnd_Missile_AGM",
                    "PylonRack_Missile_AMRAAM_D_x1",
                    "PylonRack_Missile_AMRAAM_D_x1"
                };
            };
            class CAS
            {
                displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME"; // Close Air Support loadout
                attachment[] =
                {
                    "PylonRack_Missile_BIM9X_x1",
                    "PylonRack_Missile_BIM9X_x1",
                    "PylonMissile_1Rnd_Bomb_04_F",
                    "PylonMissile_1Rnd_Bomb_04_F",
                    "3AS_PylonRack_ARC_6Rnd_Missile_AGM",
                    "3AS_PylonRack_ARC_6Rnd_Missile_AGM"
                };
            };
        };
    };
};

        
    };


};
