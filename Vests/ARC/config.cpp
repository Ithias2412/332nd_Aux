class CfgPatches {
	class 332nd_Vests_ARC {
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
	class SWLB_clone_arc_armor;


	class 332nd_ARC_Vest_1: SWLB_clone_arc_armor
	{
		author="Cherryy + Ithias";
		displayName = "[332nd] ARC Vest (Black Kama)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_ARC.paa",
			"\332nd_Aux\Vests\Tex\332nd_Vest_Officer_P_Grey_K_Grey.paa",
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
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
				"camo1",
				"camo2",
			};
		};
	};



};