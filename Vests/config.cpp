class CfgPatches {
	class 332nd_Vests {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class VestItem;
	class Hands;
	class Pelvis;
/*	
	class SWLB_clone_recon_armor;
	class SWLB_clone_specialist_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_basic_armor;
	class SWLB_clone_medic_armor;
*/	
	class SWLB_clone_basic_armor;
	class SWLB_clone_medic_armor;

	class SWLB_CEE_ARF_Vest;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_recon_armor;
	class SWLB_clone_specialist_armor;
	
	class SWLB_CEE_Hazard_Vest;
	class SWLB_clone_kama_armor;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_CEE_Tactical_Commander;
	class SWLB_clone_recon_officer_armor;
	
	class SWLB_CEE_Force_Recon_Officer;
	class SWLB_CEE_Recon_Lieutenant;
	class SWLB_CEE_Officer_Tactical;
	class SWLB_clone_commander_armor;
	class SWLB_clone_officer_armor;


	class 332nd_Trooper_Vest: SWLB_clone_basic_armor
	{
		author="Ithias";
		displayName = "[332nd] Vest (Trooper)";
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
				// Wierd shit
				/*
				class hand_l
				{
					hitpointName = "HitLeftArm";
					armor = 15;
					passThrough = 0.1;
				};
				class Leg_l
				{
					hitpointName = "HitLeftLeg";
					armor = 15;
					passThrough = 0.1;
				};
				class hand_r
				{
					hitpointName = "HitRightArm";
					armor = 15;
					passThrough = 0.1;
				};
				class Leg_r
				{
					hitpointName = "HitRightLeg";
					armor = 15;
					passThrough = 0.1;
				};
				*/
            };
			hiddenSelections[] = 
			{
				"",
			};
		};
	};


//Veteran Start

	class 332nd_Veteran_Vest_variant_1: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (VCT+ / variant 1)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"holster",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
		};
	};
	
	class 332nd_Veteran_Vest_variant_2: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (VCT+ / variant 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

	class 332nd_Veteran_Vest_variant_3: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (VCT+ / variant 3)";
		model="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		//uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	
	class 332nd_Veteran_Vest_variant_4: SWLB_clone_cfr_armor
	{
		author="SW Legion Studios";
		//displayName="[332nd] Vest (VCT+ / variant 4)";
		displayName = "[332nd] Vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	

//Sergeant Start

	class 332nd_Sergeant_Vest_variant_1: SWLB_clone_kama_armor
	{
		author="SW Legion Studios";
		//displayName="[332nd] Vest (CS+ / variant 1)";
		displayName = "[332nd] Vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\officer_accessories_co.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};

	class 332nd_Sergeant_Vest_variant_2: SWLB_CEE_Hazard_Vest
	{
		scope=2;
		scopecurator=2;
		//displayName="[332nd] Vest (CS+ / variant 2)";
		displayName = "[332nd] Vest";
		model="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	
	class 332nd_Sergeant_Vest_variant_3: SWLB_clone_recon_officer_armor
	{
		author="SW Legion Studios";
		//displayName="[332nd] Vest (CS+ / variant 3)";
		displayName = "[332nd] Vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};

	class 332nd_Sergeant_Vest_variant_4: SWLB_CEE_Tactical_Commander
	{
		scope=2;
		//displayName="[332nd] Vest (CS+ / variant 4)";
		displayName = "[332nd] Vest";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	
	class 332nd_Sergeant_Vest_variant_5: SWLB_CEE_Force_Recon_NCO
	{
		scope=2;
		//displayName="[332nd] Vest (CS+ / variant 5)";
		displayName = "[332nd] Vest";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	

//CSM Start
	class 332nd_Platoon_Vest_variant_1: SWLB_clone_officer_armor
	{
		author="SW Legion Studios";
		//displayName="[332nd] Vest (CSM+ / variant 1)";
		displayName = "[332nd] Vest";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};

	class 332nd_Platoon_Vest_variant_2: SWLB_clone_commander_armor
	{
		author="SW Legion Studios";
		displayName = "[332nd] Vest";
		//displayName="[332nd] Vest (CSM+ / variant 2)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\officer_accessories_co.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	
	class 332nd_Platoon_Vest_variant_3: SWLB_CEE_Recon_Lieutenant
	{
		scope=2;
		displayName = "[332nd] Vest";
		//displayName="[332nd] Vest (CSM+ / variant 3)";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	
	class 332nd_Platoon_Vest_variant_4: SWLB_CEE_Officer_Tactical
	{
		scope=2;
		displayName = "[332nd] Vest";
		//displayName="[332nd] Vest (CSM+ / variant 4)";
		model="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\officer_accessories_co.paa",
			"SWLB_clones\data\light_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	
	class 332nd_Platoon_Vest_variant_5: SWLB_CEE_Force_Recon_Officer
	{
		scope=2;
		displayName = "[332nd] Vest";
		//displayName="[332nd] Vest (CSM+ / variant 5)";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\officer_accessories_co.paa"
		};
		class ItemInfo: Vestitem
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 15;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};
	

/*
class 332nd_Veteran_Vest: SWLB_clone_recon_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Veteran)";
		descriptionShort = "CT-V";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"holster",
			"pauldron"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
			{
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
			hiddenSelectionsTextures[] = 
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
	};

class 332nd_Corporal_Vest: SWLB_clone_specialist_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Corporal)";
		descriptionShort = "CP";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
	};

class 332nd_Sergeant_Vest: SWLB_clone_kama_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Sergeant)";
		descriptionShort = "CS";
		hiddenSelections[] = 
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"rank"
			};
			hiddenSelectionsTextures[] = 
			{
				"\332nd_Aux\Vests\Tex\332nd_Vest.paa",
				""
			};
		};
	};

class 332nd_Platoon_Sergeant_Vest: SWLB_clone_recon_officer_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Platoon Sergeant)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"332nd_Aux\Vests\Tex\332nd_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};

class 332nd_Platoon_Executive_Officer_Vest: SWLB_clone_officer_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Platoon Executive Officer)";
		descriptionShort = "CL";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
			};
			hiddenSelectionsTextures[] = 
			{
				"332nd_Aux\Vests\Tex\332nd_Vest.paa"
			};
		};
	};

class 332nd_Platoon_Commanding_Officer_Vest: SWLB_clone_commander_armor
	{
		author="Ithias";
		displayName="[332nd] Vest (Platoon Commanding Officer)";
		descriptionShort = "CC";
		hiddenSelections[] = 
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"rank"
			};
			hiddenSelectionsTextures[] = 
			{
				"332nd_Aux\Vests\Tex\332nd_Vest.paa",
				""
			};
		};
	};

class 332nd_Trooper_Vest: SWLB_clone_basic_armor
	{
		author="Ithias";
		displayName = "[332nd] Vest (Trooper)";
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"",
			};
		};
	};

class 332nd_Medic_Vest: SWLB_clone_medic_armor
	{
		author="Ithias";
		displayName = "[332nd] Vest (Medic)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_medic_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 15;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 15;
                    passThrough = 0.1;
                };
            };
		};
	};

*/
};


class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vest_Extended
        {
            label = "332nd Vests";
            author = "Ithias";
			options[] = { "Rank", "variant" };
            class Rank
            {
                label = "Rank";
				values[] = { "CR", "VCT", "CS", "CSM", };
                changeingame = 0;
                alwaysSelectable = 0;
                class CR
                {
                    label = "CR+";
                    description = "Trooper";
                    //image = "xxx";
                };
                class VCT
                {
                    label = "VCT+";
                    description = "Veteran Trooper";
                    //image = "xxx";
                };
                class CS
                {
                    label = "CS+";
                    description = "Sergeant";
                    //image = "xxx";
                };
                class CSM
                {
                    label = "CSM+";
                    description = "Sergeant Major";
                    //image = "xxx";
                };
            };
            class variant
            {
                label = "variant";
                values[] = { "variant1", "variant2", "variant3", "variant4", "variant5", };
                changeingame = 0;
                alwaysSelectable = 0;
                class variant1
                {
                    label = "1";
                    description = "variant 1";
                    // image = "xxx";
                };
                class variant2
                {
                    label = "2";
                    description = "variant 2";
                    // image = "xxx";
                };
                class variant3
                {
                    label = "3";
                    description = "variant 3";
                    // image = "xxx";
                };
                class variant4
                {
                    label = "4";
                    description = "variant 4";
                    // image = "xxx";
                };
                class variant5
                {
                    label = "5";
                    description = "variant 5";
                    // image = "xxx";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons 
    {
		//CR
        class 332nd_Trooper_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CR";
            variant = "variant1";
        };
		//VCT
        class 332nd_Veteran_Vest_variant_1
        {
            model = "332nd_Vest_Extended";
            Rank = "VCT";
            variant = "variant1";
        };
        class 332nd_Veteran_Vest_variant_2
        {
            model = "332nd_Vest_Extended";
            Rank = "VCT";
            variant = "variant2";
        };
        class 332nd_Veteran_Vest_variant_3
        {
            model = "332nd_Vest_Extended";
            Rank = "VCT";
            variant = "variant3";
        };
        class 332nd_Veteran_Vest_variant_4
        {
            model = "332nd_Vest_Extended";
            Rank = "VCT";
            variant = "variant4";
        };
		//CS
        class 332nd_Sergeant_Vest_variant_1
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
            variant = "variant1";
        };
        class 332nd_Sergeant_Vest_variant_2
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
            variant = "variant2";
        };
        class 332nd_Sergeant_Vest_variant_3
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
            variant = "variant3";
        };
        class 332nd_Sergeant_Vest_variant_4
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
            variant = "variant4";
        };
        class 332nd_Sergeant_Vest_variant_5
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
            variant = "variant5";
        };
		//CSM
        class 332nd_Platoon_Vest_variant_1
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
            variant = "variant1";
        };
        class 332nd_Platoon_Vest_variant_2
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
            variant = "variant2";
        };
        class 332nd_Platoon_Vest_variant_3
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
            variant = "variant3";
        };
        class 332nd_Platoon_Vest_variant_4
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
            variant = "variant4";
        };
        class 332nd_Platoon_Vest_variant_5
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
            variant = "variant5";
        };
    };
};