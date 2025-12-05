class CfgPatches {
	class 332nd_Helmets_P1 {
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
	class HeadgearItem;
	class SEA_Helmet_P1_Base;
	class 332nd_Helmet_P1_Base: SEA_Helmet_P1_Base
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] P1 Helmet (Trooper)";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "JLTS_AE\SEA_Helmet_P1.p3d";
			hiddenSelections[] = 
			{
				"Camo1",
				"Visor"
			};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};	
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_P1_Sgt: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (Sergeant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"\JLTS_EA_Units\data\Phase1\Helmet_Sergeant.paa","\JLTS_EA_Units\data\Phase1\Helmet_Sergeant.paa"};
	};
	class 332nd_Helmet_P1_Lt: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (Lieutenant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"\JLTS_EA_Units\data\Phase1\Helmet_Lieutenant.paa","\JLTS_EA_Units\data\Phase1\Helmet_Lieutenant.paa"};
	};
	class 332nd_Helmet_P1_Cpt: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (Captain)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"\JLTS_EA_Units\data\Phase1\Helmet_Captain.paa","\JLTS_EA_Units\data\Phase1\Helmet_Captain.paa"};
	};
	class 332nd_Helmet_P1_Unit: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (332nd)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P1_CT.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P1_CT.paa",
		};
	};
	class 332nd_Helmet_P1_Pilot: 332nd_Helmet_P1_Base
	{
		model = "JLTS_AE\LS_Helmet_Pilot_P1.p3d";
		displayName="[332nd] P1 Helmet (Pilot)";
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"JLTS_EA_Units\data\P1Pilot\Helmet_Pilot.paa","\JLTS_AE\Data\BaseTextures\Pilot\LifeSupport_CO.paa","JLTS_EA_Units\data\P1Pilot\Helmet_Pilot.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "JLTS_AE\LS_Helmet_Pilot_P1.p3d";
			hiddenSelections[] = {"Camo1","camo2","Visor"};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};	
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};	
			};
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P1_Extended
        {
            label = "Phase 1";
            author = "Ithias";
			options[] = 
			{
				"Early", 
				"Late", 
				//"Customs",
			};
            class Early
            {
                label = "Early P1";
				values[] = { "Trooper", "CS", "CL", "CC", "Pilot",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "CR+";
                    //image = "xxx";
                };
				class CS
                {
                    label = "CS";
                    description = "CS+";
                    //image = "xxx";
                };
                class CL
                {
                    label = "CL";
                    description = "CL+";
                    //image = "xxx";
                };
                class CC
                {
                    label = "CC";
                    description = "CC+";
                    //image = "xxx";
                };
				class Pilot
				{
                    label = "Pilot";
                    //description = "...";
                    //image = "xxx";
				};
            };
			class Late
			{
                label = "Late P1";
				values[] = { "Trooper",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "CR+";
                    //image = "xxx";
                };
			};
			/*
			class Customs
			{
				label = "Customs";
				values[] = 
				{
					"",
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class Test
				{
					label = "Test";
					description = "Test";
					//image = "xxx";
				};
			};
			*/
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_Helmet_P1_Base
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "Trooper";
        };
        class 332nd_Helmet_P1_Sgt
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "CS";
        };
        class 332nd_Helmet_P1_Lt
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "CL";
        };
        class 332nd_Helmet_P1_Cpt
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "CC";
        };
		class 332nd_Helmet_P1_Pilot
		{
            model = "332nd_Helmets_P1_Extended";
            Early = "Pilot";
		};
		class 332nd_Helmet_P1_Unit
		{
            model = "332nd_Helmets_P1_Extended";
            Late = "Trooper";
		};
	};
};