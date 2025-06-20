class CfgPatches {
	class 332nd_Vests_Zeus {
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
	class JMSLLTE_Officerrank_cdt_armor;
	class JMSLLTE_Officerrank_lt_armor;
	class JMSLLTE_Officerrank_navy_cpt_armor;
	class JMSLLTE_Officerrank_navy_cmdr_armor;


	class 332nd_Zeus_Vest_CPO: JMSLLTE_Officerrank_cdt_armor 
	{
		author="Ithias";
		displayName = "[332nd] Naval Dress Rank (CPO)";
		class ItemInfo: VestItem
		{
			uniformmodel = "\JMSLLTE_empire_m\vests\of_rank_cdt.p3d";
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
			hiddenSelections[] = {};
		};
	};

	class 332nd_Zeus_Vest_ENS: JMSLLTE_Officerrank_lt_armor  
	{
		author="Ithias";
		displayName = "[332nd] Naval Dress Rank (ENS)";
		class ItemInfo: VestItem
		{
			uniformmodel = "\JMSLLTE_empire_m\vests\of_rank_lt.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			overlaySelectionsInfo[] = {"pouches_hide"};
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
			hiddenSelections[] = {};
		};
	};

	class 332nd_Zeus_Vest_LCDR: JMSLLTE_Officerrank_navy_cpt_armor   
	{
		author="Ithias";
		displayName = "[332nd] Naval Dress Rank (LCDR)";
		class ItemInfo: VestItem
		{
			uniformmodel = "\JMSLLTE_empire_m\vests\of_rank_navy_cpt.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			overlaySelectionsInfo[] = {"pouches_hide"};
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
			hiddenSelections[] = {};
		};
	};

	class 332nd_Zeus_Vest_CMDR: JMSLLTE_Officerrank_navy_cmdr_armor   
	{
		author="Ithias";
		displayName = "[332nd] Naval Dress Rank (CMDR)";
		class ItemInfo: VestItem
		{
			uniformmodel = "\JMSLLTE_empire_m\vests\of_rank_navy_cmdr.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			overlaySelectionsInfo[] = {"pouches_hide"};
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
			hiddenSelections[] = {};
		};
	};

};

class XtdGearModels
{
    class cfgWeapons
    {
        class 332nd_Zeus_Vest_Extended
        {
            label = "Naval Ranks";
            author = "Ithias";
			options[] = {"Rank", };
            class Rank
            {
                label = "Rank";
				values[] = { "CPO", "ENS", "LCDR", "CMDR",};
                changeingame = 0;
                alwaysSelectable = 1;
				class CPO
                {
                    label = "CPO";
					//description = "";
                    //image = "xxx";
                };
				class ENS
                {
                    label = "ENS";
					//description = "";
                    //image = "xxx";
                };
				class LCDR
                {
                    label = "LCDR";
					//description = "";
                    //image = "xxx";
                };
				class CMDR
                {
                    label = "CMDR";
					//description = "";
                    //image = "xxx";
                };
            };
        };
	};
};

class XtdGearInfos
{
    class cfgWeapons
    {
        class 332nd_Zeus_Vest_CPO
        {
            model = "332nd_Zeus_Vest_Extended";
            Rank = "CPO";
        };
        class 332nd_Zeus_Vest_ENS
        {
            model = "332nd_Zeus_Vest_Extended";
            Rank = "ENS";
        };
        class 332nd_Zeus_Vest_LCDR
        {
            model = "332nd_Zeus_Vest_Extended";
            Rank = "LCDR";
        };
        class 332nd_Zeus_Vest_CMDR
        {
            model = "332nd_Zeus_Vest_Extended";
            Rank = "CMDR";
        };
    };
};