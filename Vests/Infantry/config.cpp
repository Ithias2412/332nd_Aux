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
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 10;
					passThrough = 0.1;
				};
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
				class Hands
				{
					hitpointName = "HitHands";
					armor = 10;
					passThrough = 0.1;
				};
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 10;
                    passThrough = 0.1;
                };
				// Wierd shit
				/*
				class hand_l
				{
					hitpointName = "HitLeftArm";
					armor = 10;
					passThrough = 0.1;
				};
				class Leg_l
				{
					hitpointName = "HitLeftLeg";
					armor = 10;
					passThrough = 0.1;
				};
				class hand_r
				{
					hitpointName = "HitRightArm";
					armor = 10;
					passThrough = 0.1;
				};
				class Leg_r
				{
					hitpointName = "HitRightLeg";
					armor = 10;
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
			"\SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
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
		model="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
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
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
		};
		class ItemInfo: ItemInfo
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

	class 332nd_Veteran_Vest_variant_4: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (VCT+ / variant 4)";
		model="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
//Sergeant Start

	class 332nd_Sergeant_Vest_variant_1: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CS+ / variant 1)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};

	
	class 332nd_Sergeant_Vest_variant_2: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CS+ / variant 2)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

	class 332nd_Sergeant_Vest_variant_3: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CS+ / variant 3)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	};
	
	class 332nd_Sergeant_Vest_variant_4: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CS+ / variant 4)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
	

//CSM Start
	class 332nd_Platoon_Vest_variant_1: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSM+ / variant 1)";
		model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};

	class 332nd_Platoon_Vest_variant_2: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSM+ / variant 2)";
		model="\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
	
	class 332nd_Platoon_Vest_variant_3: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSM+ / variant 3)";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	
	class 332nd_Platoon_Vest_variant_4: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSM+ / variant 4)";
		model="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"SWLB_clones\data\light_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Officer_Tactical.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	
	class 332nd_Platoon_Vest_variant_5: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSM+ / variant 5)";
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
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};


//Customs
	class 332nd_Ithias_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Ithias)";
		//model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
		model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank",
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_Ithias.paa",
			"\SWLB_clones\data\rank_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			//uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
			uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank",
			};
		};
	};
class 332nd_Cherryy_Custom_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Cherryy)";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Cherryy.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Lieutenant.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
class 332nd_Asuka_Custom_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Asuka)";
		model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Asuka.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
		};
	};
class 332nd_Joker_Custom_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Joker)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Joker.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
/* class 332nd_Body_Custom_Vest: 332nd_Trooper_Vest 
	{
		displayName="[332nd] Vest (Body)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Body.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	}; */
class 332nd_Crow_Custom_Vest: 332nd_Trooper_Vest 
	{
		displayName="[332nd] Vest (Crow)";
		model="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Crow.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
class 332nd_Frankenburg_Custom_Vest: 332nd_Trooper_Vest 
	{
		displayName="[332nd] Vest (Frankenburg)";
		model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Frankenburg.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
		};
	};
/* class 332nd_Walkie_Custom_Vest: 332nd_Trooper_Vest 
	{
		displayName="[332nd] Vest (Walkie)";
		model="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Walkie.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_clones\data\heavy_accessories_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Tactical_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"pauldron"
			};
		};
	}; */

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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
                    armor = 10;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 10;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
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
            label = "Vests";
            author = "Ithias";
			options[] = { "Rank", "variant", "custom",};
            class Rank
            {
                label = "Rank";
				values[] = { "CR", "VCT", "CS", "CSM", };
                changeingame = 0;
                alwaysSelectable = 1;
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
			class custom
            {
                label = "Customs";
                values[] = { "Cherryy", "Asuka", "Ithias", "Joker", "Body", "Crow", "Frankenburg", /* "Walkie" */};
                changeingame = 0;
                alwaysSelectable = 1;
                class Cherryy
                {
                    label = "Cherryy";
                    description = "Been sittin on this one";
                    // image = "xxx";
                };
				class Asuka
                {
                    label = "Asuka";
                    description = "Stuck at CSS";
                    // image = "xxx";
                };
				class Ithias
                {
                    label = "Ithias";
                    description = "Joe";
                    // image = "xxx";
                };
				class Joker
                {
                    label = "Joker";
                    description = "The prodigal son returns";
                    // image = "xxx";
                };
				class Body
                {
                    label = "Body";
                    description = "Sir Lego Himself";
                    // image = "xxx";
                };
				class Crow
                {
                    label = "Crow";
                    description = "Attendence Enthusiast";
                    // image = "xxx";
                };
				class Frankenburg
                {
                    label = "Frankenburg";
                    description = "Tier 1 Rage Baiter";
                    // image = "xxx";
                };
				/* class Walkie
                {
                    label = "Walkie";
                    description = "We hate the French";
                    // image = "xxx";
                }; */
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
//Customs
		class 332nd_Cherryy_Custom_Vest
        {
            model = "332nd_Vest_Extended";
			custom = "Cherryy";
        };
		class 332nd_Asuka_Custom_Vest
        {
            model = "332nd_Vest_Extended";
			custom = "Asuka";
        };
		class 332nd_Ithias_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Ithias";
		};
		class 332nd_Joker_Custom_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Joker";
		};
		class 332nd_Body_Custom_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Body";
		};
		class 332nd_Crow_Custom_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Crow";
		};
		class 332nd_Frankenburg_Custom_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Frankenburg";
		};
		/* class 332nd_Walkie_Custom_Vest
		{
            model = "332nd_Vest_Extended";
			custom = "Walkie";
		}; */
    };
};