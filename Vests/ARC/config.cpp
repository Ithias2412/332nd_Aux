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


	class 332nd_ARC_Vest: SWLB_clone_arc_armor
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
				"camo1",
				"camo2",
			};
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vests_Fun_Ops_Extended
        {
            label = "Fun Operations";
            author = "Ithias";
			options[] = { "ARC", "Commando",};
            class ARC
            {
                label = "ARC";
				values[] = { "ARC",};
                changeingame = 0;
                alwaysSelectable = 1;
                class ARC
                {
                    label = "ARC";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
            class Commando
            {
                label = "Commando";
				values[] = { "Base", "Demolitions", "Sniper", "TL", "TL_Red", "TL_Orange", "Technician", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Base
                {
                    label = "Armor Plating";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Demolitions
                {
                    label = "Demolitions";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Sniper
                {
                    label = "Sniper";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class TL
                {
                    label = "TL";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class TL_Red
                {
                    label = "TL (Red)";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class TL_Orange
                {
                    label = "TL (Orange)";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Technician
                {
                    label = "Technician";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };

            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_ARC_Vest
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            ARC = "ARC";
        };
        class 332nd_Commando_Vest
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "Base";
        };
        class 332nd_Commando_Vest_Demolitions
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "Demolitions";
        };
        class 332nd_Commando_Vest_Sniper
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "Sniper";
        };
        class 332nd_Commando_Vest_TL
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "TL";
        };
        class 332nd_Commando_Vest_TL_Red
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "TL_Red";
        };
        class 332nd_Commando_Vest_TL_Orange
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "TL_Orange";
        };
        class 332nd_Commando_Vest_Technician
        {
            model = "332nd_Vests_Fun_Ops_Extended";
            Commando = "Technician";
        };

	};
};