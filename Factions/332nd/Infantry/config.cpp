class CfgPatches 
{
    class 332nd_Faction_Infantry 
	{
        author = "Ithias";
        name = "332nd Aux 332nd Infantry";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = 
		{
            "332nd_Spawn_Unit",
        };
    };
};
class CfgVehicles 
{
    class 332nd_Uniform_Clone_CR_Veh;

    // Spawn Comp
    class 332nd_Spawn_Unit: 332nd_Uniform_Clone_CR_Veh
	{
        scope = 2;
        faction = "332nd_Faction";
        editorSubcategory = "EdSubcat_Personnel";
		hiddenSelections[] = {"bodyGlove","camo_legs"};
		hiddenSelectionsTextures[] = {"ls_armor_bluefor\uniform\gar\phase2\data\bodyGlove_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa"};
		model = "ls_armor_bluefor\uniform\gar\phase2\lsd_gar_naked_uniform.p3d";
		nakedUniform = "lsd_gar_bodyGlove_uniform";
        uniformClass = "lsd_gar_bodyGloveLegArmor_uniform";
		identityTypes[] = {"LanguageENG_F","Head_LSD_CLONE"};
		backpack = "";
		displayName = "[332nd] Spawn Unit";
		faceType = "Man_A3";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		magazines[] = {};
		respawnItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		weapons[] = {"Throw","Put"};
    };
};