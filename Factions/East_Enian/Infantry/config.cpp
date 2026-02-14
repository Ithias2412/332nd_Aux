class CfgPatches 
{
    class 332nd_East_Enia_Faction_Infantry 
	{
        author = "Ithias";
        name = "332nd Aux East Enian Infantry";
        requiredAddons[] = 
		{
			"3AS_CIS_Infantry",
		};
        weapons[] = {};
        units[] = 
		{
            "332nd_Enia_Base",
			"332nd_Enia_AT",
			"332nd_Enia_Grenadier",
			"332nd_Enia_Support_Gunner",
			"332nd_Enia_Medic",
			"332nd_Enia_Officer",
        };
    };
};
class CfgVehicles 
{
    class 3AS_U_CIS_Light;
	class HitPoints;
	class IDA_Imperial_Backpack;

    class 332nd_Enia_Base: 3AS_U_CIS_Light 
	{
        scope = 2;
        displayName = "Rifleman";
        faction = "332nd_East_Enia_Faction";
        editorSubcategory = "EdSubcat_332nd_Human_Division";
        uniformClass = "332nd_Uniform_East_Enian";
        backpack = "IDA_Imperial_Backpack";
        weapons[] = {"332nd_AD4", "Throw", "Put"}; 
        respawnWeapons[] = {"332nd_AD4", "Throw", "Put"};
        magazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
        respawnMagazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
        linkedItems[] = {"332nd_Vest_East_Enian", "332nd_Helmet_East_Enian", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"332nd_Vest_East_Enian", "332nd_Helmet_East_Enian", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
		glassesEnabled = 0;
		model = "\JMSLLTE_empire_m\officerCoat.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"JMSLLTE_empire\data\body\of_body_mudtrooper_co.paa",
			"332nd_Aux\Factions\East_Enian\Infantry\Tex\East_Enian_Uniform.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 14; //was 8
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 9; //was 6
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 9; //was 6
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 12; //was 8
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 9; //was 6
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 9; //was 6
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 9; //was 6
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 9; //was 6
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 9; //was 6
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};	
    };
	
	
	//AT JLTS_RPS6
	class 332nd_Enia_AT: 332nd_Enia_Base
	{
        displayName = "Anti-Tank";
		backpack = "332nd_Enia_AT_Backpack";
        weapons[] = {"332nd_AD4", "JLTS_RPS6", "Throw", "Put"};
        respawnWeapons[] = {"332nd_AD4", "JLTS_RPS6", "Throw", "Put"};
        magazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
        respawnMagazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
	};
	class 332nd_Enia_AT_Backpack: IDA_Imperial_Backpack
	{
        scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		displayName = "Enian AT Backpack";
		class TransportMagazines
		{
			class _xx_JLTS_RPS6_mag
			{
				count = 2;
				magazine = "JLTS_RPS6_mag";
			};
		};
	};
	//Grenadier 3AS_ThermalDetonator
	class 332nd_Enia_Grenadier: 332nd_Enia_Base
	{
        displayName = "Grenadier";
        weapons[] = {"332nd_AD4", "Throw", "Put"};	
        respawnWeapons[] = {"332nd_AD4", "Throw", "Put"};		
        magazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag","332nd_AD4_Mag","332nd_AD4_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};		
        respawnMagazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag","332nd_AD4_Mag","332nd_AD4_Mag", "3AS_ThermalDetonator", "3AS_ThermalDetonator",};
	};
	//Support Gunner needs backpack with ammo (only carries 2 mags as is)
	class 332nd_Enia_Support_Gunner: 332nd_Enia_Base
	{
        displayName = "Support Gunner";
		backpack = "332nd_Enia_AR_Backpack";
        weapons[] = {"332nd_AD4_M", "Throw", "Put"};	
        respawnWeapons[] = {"332nd_AD4_M", "Throw", "Put"};		
        magazines[] = {"332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag","332nd_AD4_M_Mag","332nd_AD4_M_Mag",};		
        respawnMagazines[] = {"332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag", "332nd_AD4_M_Mag","332nd_AD4_M_Mag","332nd_AD4_M_Mag",};
	};
	class 332nd_Enia_AR_Backpack: IDA_Imperial_Backpack
	{
        scope = 1;
		scopearsenal = 1;
		scopecurator = 1;
		displayName = "Enian AR Backpack";
		class TransportMagazines
		{
			class _xx_332nd_AD4_M_Mag
			{
				count = 5;
				magazine = "332nd_AD4_M_Mag";
			};
		};
	};
	//Medic
    class 332nd_Enia_Medic: 332nd_Enia_Base 
	{
        displayName = "Medic";
        weapons[] = {"332nd_AD4", "Throw", "Put"}; 
        respawnWeapons[] = {"332nd_AD4", "Throw", "Put"};
        magazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
        respawnMagazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
		RespawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", };
	};
	//Officer (Need cap retexture)
    class 332nd_Enia_Officer: 332nd_Enia_Base 
	{
        displayName = "Officer";
        backpack = "JMSLLTE_back_stcape_dirty";
        weapons[] = {"332nd_AD4", "Throw", "Put"}; 
        respawnWeapons[] = {"332nd_AD4", "Throw", "Put"};
        magazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
        respawnMagazines[] = {"332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", "332nd_AD4_Mag", };
        linkedItems[] = {"332nd_Vest_East_Enian_Light", "332nd_Beret_East_Enian", "G_Bandanna_aviator", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"};
        respawnLinkedItems[] = {"332nd_Vest_East_Enian_Light", "332nd_Beret_East_Enian", "G_Bandanna_aviator", "ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "332nd_NVG_Chip"}; 
	};
	class 332nd_Enia_Delete: 332nd_Enia_Base
	{
        displayName = "DELETE";
	};
};

class CfgGroups 
{
    class East 
	{
        class 332nd_East_Enia_Faction 
		{
            name = "[332nd] East Enia";

            class Enian_Infantry 
			{
                name = "Enian Guard";

                class 332nd_Patrol
				{
                    name = "Patrol";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                };
                class 332nd_Fireteam 
				{
                    name = "Fireteam";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_Medic";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Grenadier_Team 
				{
                    name = "Grenadier Fireteam";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Grenadier";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_Grenadier";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_AT_Fireteam 
				{
                    name = "AT Fireteam";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_AT";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_AT";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
                class 332nd_Rifle_Squad 
				{
                    name = "Rifle Squad";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
						position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
						position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
						position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
						position[] = {20, -20, 0};
                    };
                    class Unit8 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
						position[] = {-20, -20, 0};
                    };
                };
                class 332nd_Defensive_Garrison 
				{
                    name = "Defensive Garrison [Rose's Game Crashers 2]";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Officer";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-15, -15, 0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {20, -20, 0};
                    };
                    class Unit8 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-20, -20, 0};
                    };
                    class Unit9 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {25, -25, 0};
                    };
                    class Unit10 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-25, -25, 0};
                    };
                    class Unit11 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {30, -30, 0};
                    };
                    class Unit12 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-30, -30, 0};
                    };
                    class Unit13 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {35, -35, 0};
                    };
                    class Unit14 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-35, -35, 0};
                    };
                    class Unit15 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {40, -40, 0};
                    };
                    class Unit16 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-40, -40, 0};
                    };
                    class Unit17 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {45, -45, 0};
                    };
                    class Unit18 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-45, -45, 0};
                    };
                    class Unit19 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {50, -50, 0};
                    };
                    class Unit20 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-50, -50, 0};
                    };
                    class Unit21 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {55, -55, 0};
                    };
                    class Unit22 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-55, -55, 0};
                    };
                    class Unit23 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {60, -60, 0};
                    };
                    class Unit24 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-60, -60, 0};
                    };
                    class Unit25 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {65, -65, 0};
                    };
                    class Unit26 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-65, -65, 0};
                    };
                    class Unit27 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {70, -70, 0};
                    };
                    class Unit28 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-70, -70, 0};
                    };
                    class Unit29 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {75, -75, 0};
                    };
                    class Unit30 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-75, -75, 0};
                    };
                    class Unit31 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {80, -80, 0};
                    };
                };
				class 332nd_Officer_Escort
				{
                    name = "Officer Escort";
                    faction = "332nd_East_Enia_Faction";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle = "332nd_Enia_Officer";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "332nd_Enia_Base";
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "332nd_Enia_Support_Gunner";
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
				};
			};
		};
	};
};