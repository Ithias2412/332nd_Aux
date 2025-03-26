class CfgPatches {
	class 332nd_AB_Vests {
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
    class SWLB_clone_basic_armor;
	class SWLB_clone_airborne_armor : SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_airborne_nco_armor : SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class ls_blueforVest_base;
	class ls_gar_airborneOfficer_vest : ls_blueforVest_base
	{
		class ItemInfo;
	};
	class 332nd_AB_Trooper_Base_Vest: SWLB_clone_basic_armor
	{
		author="Ithias";
		scope=0;
		displayName = "[332nd] AB Vest (Base)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
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
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"ammo",
				"pauldron"
			};
		};
	};
	class 332nd_AB_Vest_variant_1: 332nd_AB_Trooper_Base_Vest
	{
		author="Cherryy";
		scope=2;
		displayName="[332nd] Airborne Vest (CT)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"ammo",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa",
			"",
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa",
		};
	};
    //NCO Start
    class 332nd_AB_NCO_Vest_variant_1: SWLB_clone_airborne_nco_armor
	{
		displayName="[332nd] Airborne Vest (NCO)";
		scope=2;
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa",
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa",
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa", //Pauldron Flap
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
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
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"ammo",
				"pauldron"
			};
		};
	};
    //Officer Start
    class 332nd_AB_Officer_Vest_variant_1: 332nd_AB_Vest_variant_1
	{
		displayName="[332nd] AB Vest ( Officer / Variant 1)";
		scope=2;
		model="ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
		uniformModel="ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
		hiddenSelections[]=
		{
			"ammo",
			"camo1",
			"camo2",
			"ammo",
			"pauldron"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa", //
			"332nd_Aux\Vests\Tex\332nd_AB_Heavy_Acc.paa", //Strap & Bag
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa", //kama
			"", //idk what this is
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Half_K_Black.paa" //im honestly lost
		};
        class ItemInfo: ItemInfo
		{
			uniformModel="ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
			containerClass="Supply60";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"camo3",
				"pauldron"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_AB_Vest_Extended
        {
            label = "332nd AB Vests";
            author = "Cherryy";
			options[] = { "Rank", /* "variant", */ };
            class Rank
            {
                label = "Rank";
				values[] = { "CT", "NCO", "Officer", };
                changeingame = 0;
                alwaysSelectable = 0;
                class CT
                {
                    label = "CT";
                    description = "Trooper";
                    //image = "xxx";
                };
                class NCO
                {
                    label = "NCO";
                    description = "NCO+";
                    //image = "xxx";
                };
                class Officer
                {
                    label = "Officer";
                    description = "Officer";
                    //image = "xxx";
                };
            };
           /*  class variant
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
            }; */
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons 
    {
		//CT
        class 332nd_AB_Vest_variant_1
        {
            model = "332nd_AB_Vest_Extended";
            Rank = "CT";
            //variant = "variant1";
        };
        class 332nd_AB_NCO_Vest_variant_1
        {
            model = "332nd_AB_Vest_Extended";
            Rank = "NCO";
            //variant = "variant1";
        };
        class 332nd_AB_Officer_Vest_variant_1
        {
            model = "332nd_AB_Vest_Extended";
            Rank = "Officer";
            //variant = "variant1";
        };
    };
};