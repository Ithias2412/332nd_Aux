class CfgPatches {
	class 332nd_Vests_Marine {
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
	class SEA_Vest_GM_21;


	class 332nd_Marine_Vest: SEA_Vest_GM_21
	{
		author="Cherryy + Ithias";
		displayName = "[332nd] Hazardous Environment Vest";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Vests\Tex\332nd_Vest_Marine.paa",
		};
		class ItemInfo: VestItem
		{
			uniformModel = "JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
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
				"camo1"
			};
		};
	};


};