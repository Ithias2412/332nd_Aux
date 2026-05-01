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
	class VestItem;
	class Hands;
	class Pelvis;
	class JLTS_CloneVestHolster;

	class 332nd_Trooper_Vest: JLTS_CloneVestHolster
	{
		author="Ithias";
		displayName = "[332nd] Vest (Trooper)";
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply60";
			vestType = "Rebreather";
			mass=80;
			hiddenSelections[] = 
			{
				"camo1"
			};
		};
	};

	class 332nd_CSP_Vest: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (CSP)";
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
		displayName="[332nd] Vest (CP)";
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
		displayName="[332nd] Vest (CS)";
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
		displayName="[332nd] Vest (CSS)";
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
		displayName="[332nd] Vest (CSM)";
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
		displayName="[332nd] Vest (CC)";
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

	class 332nd_Vest_Walkie: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Walkie)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		scope = 2
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Walkie.paa",
			"332nd_Aux\Vests\Tex\332nd_Vest_Airborne_Walkie.paa",
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
	
	class 332nd_Vest_Body: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Body)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Body.paa",
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
	class 332nd_Vest_Lettuce: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Lettuce)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Lettuce.paa",
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

	class 332nd_Vest_Crow: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Crow)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Crow.paa",
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
	
	class 332nd_Vest_Dovah: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Dovah)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Dovah.paa",
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
	class 332nd_Vest_Joker: 332nd_Trooper_Vest
	{
		displayName="[332nd] Vest (Joker)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Vests\Tex\332nd_Vest_Officer_Joker.paa",
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
	
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Vest_Extended
        {
            label = "Vests";
            author = "Ithias";
			options[] = { "Rank", "Custom",};
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
			class Custom
            {
                label = "Customs";
                values[] = 
				{
					"Cherryy",
					"Asuka",
					"Ithias",
					"Joker",
					"Body",
					"Crow",
					"Frankenburg",
					"Walkie",
					"Dovah",
					"Lettuce",
				};
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
                    description = "Still isnt the original";
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
				class Dovah
                {
                    label = "Dovah";
                    description = "MEDIC!!!";
                    // image = "xxx";
                };
				class Lettuce
                {
                    label = "Lettuce";
                    description = "Sour dough bread supplier";
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
        class 332nd_Vest_Walkie
        {
            model = "332nd_Vest_Extended";
            Custom = "Walkie";
        };
		class 332nd_Vest_Body
		{
            model = "332nd_Vest_Extended";
            Custom = "Body";
		};
		class 332nd_Vest_Crow
		{
            model = "332nd_Vest_Extended";
            Custom = "Crow";
		};
		class 332nd_Vest_Dovah
		{
            model = "332nd_Vest_Extended";
            Custom = "Dovah";
		};
		class 332nd_Vest_Lettuce
		{
            model = "332nd_Vest_Extended";
            Custom = "Lettuce";
		};
		class 332nd_Vest_Joker
		{
            model = "332nd_Vest_Extended";
            Custom = "Joker";
		};
	};
};