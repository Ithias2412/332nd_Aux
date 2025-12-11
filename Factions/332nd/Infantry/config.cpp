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
			"332nd_Rilfeman",
			"332nd_Grenadier",
			"332nd_Marksman",
			"332nd_AutoRifleman",
			"332nd_AmmoBearer",
			"332nd_AT",
			"332nd_RTO",
			"332nd_Engineer",
			"332nd_Medic",
			"332nd_NCO",
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
		displayName = "[332nd] Trooper";
		faceType = "Man_A3";
		items[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		magazines[] = {};
		respawnItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnMagazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		weapons[] = {"Throw","Put"};
    };
	class 332nd_Rilfeman: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Rifleman";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Back";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_Grenadier: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Grenadier";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK";
		weapons[] = {"332nd_DC15A_GL","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A_GL","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag","332nd_HE_UGLGrenade_Mag","332nd_HE_UGLGrenade_Mag","332nd_HE_UGLGrenade_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_Marksman: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Marksman";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK";
		weapons[] = {"332nd_Valken","Throw","Put"};
		respawnWeapons[] = {"332nd_Valken","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_Valken_Mag", "332nd_Valken_Mag", "332nd_Valken_Mag", "332nd_Valken_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_AutoRifleman: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Auto Rifleman";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_AR";
		weapons[] = {"332nd_DC15L","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15L","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15L_Mag", "332nd_DC15L_Mag", "332nd_DC15L_Mag", "332nd_DC15L_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_AmmoBearer: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Ammo Bearer";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_AT: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Anti-Tank";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_AT";
		weapons[] = {"332nd_DC15A","332nd_RPS6","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","332nd_RPS6","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_RTO: 332nd_Spawn_Unit
	{
		displayName = "[332nd] RTO";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_RTO";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag"};	
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_Engineer: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Engineer";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_Engineer";
		canDeactivateMines = true;
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_Medic: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Medic";
		uniformClass = "332nd_Uniform_Clone_CT_Medic";
		backpack = "332nd_Backpack_Medic";
		attendant = 1;
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT"};
	};
	class 332nd_NCO: 332nd_Spawn_Unit
	{
		displayName = "[332nd] NCO";
		uniformClass = "332nd_Uniform_Clone_SCT";
		backpack = "332nd_Back_Radio";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Acti_Bandage","332nd_Painkiller","332nd_Painkiller"};
		magazines[] = {"332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag", "332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_CS_Vest","332nd_Helmet_P2_CT"};
	};
};

class CfgGroups
{
    class West
    {
        name = "BLUFOR";

        class 332nd_Faction
        {
            name = "332nd Legion";

            class Infantry
            {
                name = "Infantry";

                // 9-man Squad
                class 332nd_Squad
                {
                    name = "[332nd] Rifle Squad";
                    side = 1;
                    faction = "332nd_Faction";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.7;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "332nd_NCO";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "332nd_RTO";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "332nd_Medic";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "332nd_AutoRifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "332nd_AmmoBearer";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "332nd_AT";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "332nd_Grenadier";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "332nd_Marksman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "332nd_Rilfeman";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };

                // 4-man Fireteam
                class 332nd_Fireteam
                {
                    name = "[332nd] Fireteam";
                    side = 1;
                    faction = "332nd_Faction";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.7;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "332nd_NCO";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "332nd_AutoRifleman";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "332nd_Grenadier";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "332nd_Rilfeman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

                // AT Team
                class 332nd_ATTeam
                {
                    name = "[332nd] AT Team";
                    side = 1;
                    faction = "332nd_Faction";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "332nd_NCO";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "332nd_AT";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "332nd_AmmoBearer";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "332nd_Rilfeman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

                // Medical Team
                class 332nd_MedTeam
                {
                    name = "[332nd] Medical Team";
                    side = 1;
                    faction = "332nd_Faction";
                    icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "332nd_NCO";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "332nd_Medic";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "332nd_Medic";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "332nd_Rilfeman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
