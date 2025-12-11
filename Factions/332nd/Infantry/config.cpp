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
			"332nd_Rilfeman_DC15S",
			"332nd_Rilfeman_DC15C",
			"332nd_Grenadier",
			"332nd_Grenadier_DC15C",
			"332nd_Grenadier_DC15S",
			"332nd_Marksman",
			"332nd_Marksman_DW32S",
			"332nd_Marksman_FP",
			"332nd_AutoRifleman",
			"332nd_AutoRifleman_Z6",
			"332nd_AmmoBearer",
			"332nd_AT",
			"332nd_RTO",
			"332nd_Engineer",
			"332nd_Medic",
			"332nd_Medic_DC15S",
			"332nd_NCO",
			"332nd_CO",
			"332nd_CSM",
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
		displayName = "[332nd] Rifleman (DC-15A)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Back_AI_DC15A";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Rilfeman_DC15S: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Rifleman (DC-15S)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Back_AI_DC15S";
		weapons[] = {"332nd_DC15S","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15S","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15S_Low_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
		class 332nd_Rilfeman_DC15C: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Rifleman (DC-15C)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Back_AI_DC15C";
		weapons[] = {"332nd_DC15C","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15C","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15C_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Grenadier: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Grenadier (DC-15A)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_DC15A";
		weapons[] = {"332nd_DC15A_GL","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A_GL","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag","332nd_HE_UGLGrenade_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Grenadier_DC15C: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Grenadier (DC-15C)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_DC15C";
		weapons[] = {"332nd_DC15C_GL","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15C_GL","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		mmagazines[] = {"332nd_DC15C_Mag","332nd_HE_UGLGrenade_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Grenadier_DC15S: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Grenadier (DC-15S)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_DC15S";
		weapons[] = {"332nd_DC15S_GL","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15S_GL","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15S_Low_Mag","332nd_HE_UGLGrenade_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Marksman: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Marksman";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_Valken";
		weapons[] = {"332nd_Valken","Throw","Put"};
		respawnWeapons[] = {"332nd_Valken","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_Valken_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Marksman_DW32S: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Marksman (DW-32S)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_DW32S";
		weapons[] = {"332nd_DW_32S","Throw","Put"};
		respawnWeapons[] = {"332nd_DW_32S","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DW32S_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Marksman_FP: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Marksman (Firepuncher)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_GRN_MRK_AI_FP";
		weapons[] = {"332nd_Firepuncher","Throw","Put"};
		respawnWeapons[] = {"332nd_Firepuncher","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_Firepuncher_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};

	class 332nd_AutoRifleman: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Auto Rifleman (DC-15L)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_AR_AI_DC15L";
		weapons[] = {"332nd_DC15L","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15L","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15L_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_AutoRifleman_Z6: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Auto Rifleman (Z6)";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Bag_AR_AI_Z6";
		weapons[] = {"332nd_Z6","Throw","Put"};
		respawnWeapons[] = {"332nd_Z6","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_Z6_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_AmmoBearer: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Ammo Bearer";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_AI";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		magazines[] = {"332nd_DC15A_Mag"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","332nd_RPS6_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag","ace_splint","ace_tourniquet"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_AT: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Anti-Tank";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_AT_AI";
		weapons[] = {"332nd_DC15A","332nd_RPS6","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","332nd_RPS6","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","332nd_RPS6_Mag","332nd_RPS6_Mag","332nd_RPS6_Mag","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag","332nd_RPS6_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_RTO: 332nd_Spawn_Unit
	{
		displayName = "[332nd] RTO";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Back_AI_RTO";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ace_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Engineer: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Engineer";
		uniformClass = "332nd_Uniform_Clone_CT";
		backpack = "332nd_Backpack_Engineer_AI";
		canDeactivateMines = true;
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ACE_splint","ACE_DefusalKit","ACE_Clacker"};
		magazines[] = {"332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Medic: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Medic (DC-15A)";
		uniformClass = "332nd_Uniform_Clone_CT_Medic";
		backpack = "332nd_Backpack_Medic_AI_DC15A";
		attendant = 1;
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_Medic_DC15S: 332nd_Spawn_Unit
	{
		displayName = "[332nd] Medic (DC-15S)";
		uniformClass = "332nd_Uniform_Clone_CT_Medic";
		backpack = "332nd_Backpack_Medic_AI_DC15S";
		attendant = 1;
		weapons[] = {"332nd_DC15S","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15S","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_splint","ACE_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15S_Low_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_Trooper_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_NCO: 332nd_Spawn_Unit
	{
		displayName = "[332nd] NCO";
		uniformClass = "332nd_Uniform_Clone_SCT";
		backpack = "332nd_Back_Radio_AI";
		weapons[] = {"332nd_DC15A","Throw","Put"};
		respawnWeapons[] = {"332nd_DC15A","Throw","Put"};
		items[] = {"332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","332nd_Acti_Bandage_Weap","32nd_Painkiller_Weap","32nd_Painkiller_Weap","ACE_splint","ace_tourniquet"};
		magazines[] = {"332nd_DC15A_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_CS_Vest","332nd_Helmet_P2_CT","332nd_NVG_Chip"};
	};
	class 332nd_CSM: 332nd_NCO
	{
		displayName = "[332nd] CSM";
		uniformClass = "332nd_Uniform_Clone_SCT";
		backpack = "332nd_Back_Radio_AI";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_CSM_Vest","332nd_Helmet_P2_CT","332nd_NVG_Rangefinder"};
	};
	class 332nd_CO : 332nd_NCO
	{
		displayName = "[332nd] CO";
		uniformClass = "332nd_Uniform_Clone_SCT";
		backpack = "332nd_Back_Radio_AI";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","332nd_CC_Vest","332nd_Helmet_P2_CT","332nd_NVG_Commander"};
	};

};

class CfgGroups
{
    class West
    {
        name = "BLUFOR";

        class 332nd_Faction
        {
            name = "[332nd] Raxshir Company";

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
                        vehicle = "332nd_Medic_DC15S";
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
                        vehicle = "332nd_AutoRifleman_Z6";
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
                        vehicle = "332nd_Rilfeman_DC15S";
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
                        vehicle = "332nd_Rilfeman_DC15C";
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
                        vehicle = "332nd_Medic_DC15S";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "332nd_Rilfeman_DC15S";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

				class 332nd_Platoon_HQ
				{
					name = "[332nd] Platoon HQ";
					side = 1;
					faction = "332nd_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 1;
						vehicle = "332nd_CO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "332nd_CSM";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "332nd_RTO";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "332nd_medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
            };
        };
    };
};
