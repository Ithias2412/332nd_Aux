class CfgPatches 
{
	class 332nd_Vests 
	{
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
	class JLTS_CloneVestHolster;



	class 332nd_Trooper_Vest: JLTS_CloneVestHolster
	{
		author="Ithias";
		displayName = "New! [332nd] Vest (Trooper)";
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
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

	class 332nd_CSP_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CSP)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_suspender_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			hiddenSelections[] = 
			{
				"camo1"
			};
		};
	};

	class 332nd_CP_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CP)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
		hiddenSelections[] = 
		{
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Airborne_JLTS.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			hiddenSelections[] = 
			{
				"camo2"
			};
		};
	};

	class 332nd_CS_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CS)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			hiddenSelections[] = 
			{
				"camo1"
			};
		};
	};

	class 332nd_CSS_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CSS)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
			"332nd_Aux\Vests\Tex\332nd_Vest_Airborne_JLTS.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
		};
	};

	class 332nd_CSM_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CSM)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			hiddenSelections[] = 
			{
				"camo1",
			};
		};
	};

	class 332nd_CC_Vest: 332nd_Trooper_Vest
	{
		displayName="New! [332nd] Vest (CC)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_JLTS.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
			hiddenSelections[] = 
			{
				"camo1",
			};
		};
	};

};


class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vest_Extended
        {
            label = "Vests";
            author = "Ithias";
			options[] = { "Rank", "custom",};
            class Rank
            {
                label = "Rank";
				values[] = { "CR", "CSP", "CP", "CS", "CSS", "CSM", "CC", };
                changeingame = 0;
                alwaysSelectable = 1;
                class CR
                {
                    label = "CR+";
                    description = "Trooper";
                    //image = "xxx";
                };
                class CSP
                {
                    label = "CSP";
                    description = "Specialist";
                    //image = "xxx";
                };
                class CP
                {
                    label = "CP";
                    description = "Corporal";
                    //image = "xxx";
                };
                class CS
                {
                    label = "CS";
                    description = "Sergeant";
                    //image = "xxx";
                };
                class CSS
                {
                    label = "CSS";
                    description = "Staff Sergeant";
                    //image = "xxx";
                };
                class CSM
                {
                    label = "CSM";
                    description = "Sergeant Major";
                    //image = "xxx";
                };
                class CC
                {
                    label = "CC";
                    description = "Captain";
                    //image = "xxx";
                };
            };
			class custom
            {
                label = "Customs";
                values[] = { "Cherryy", "Asuka", "Ithias", "Joker", "Body", "Crow", "Frankenburg", "Walkie"};
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
				class Walkie
                {
                    label = "Walkie";
                    description = "We hate the French";
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
        class 332nd_Trooper_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CR";
        };
        class 332nd_CSP_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CSP";
        };
        class 332nd_CP_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CP";
        };
        class 332nd_CS_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CS";
        };
        class 332nd_CSS_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CSS";
        };
        class 332nd_CSM_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CSM";
        };
        class 332nd_CC_Vest
        {
            model = "332nd_Vest_Extended";
            Rank = "CC";
        };
	};
};