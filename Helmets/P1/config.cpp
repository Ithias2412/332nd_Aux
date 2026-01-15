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
		displayName="[332nd] P1 Helmet (Squad Lead)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"\JLTS_EA_Units\data\Phase1\Helmet_Sergeant.paa","\JLTS_EA_Units\data\Phase1\Helmet_Sergeant.paa"};
	};
	class 332nd_Helmet_P1_Lt: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (Platoon Leader)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"\JLTS_EA_Units\data\Phase1\Helmet_Lieutenant.paa","\JLTS_EA_Units\data\Phase1\Helmet_Lieutenant.paa"};
	};
	class 332nd_Helmet_P1_Cpt: 332nd_Helmet_P1_Base
	{
		displayName="[332nd] P1 Helmet (Company Staff)";
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

	class 332nd_Helmet_ARF_Base;
	class 332nd_Helmet_P1_ARF: 332nd_Helmet_ARF_Base
	{
		displayName="[332nd] P1 Helmet (ARF)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_White.paa",
			"",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_White.paa",
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
				values[] = { "Trooper", "SL", "PL", "CO", "ARF", "Pilot",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "CR+";
                    //image = "xxx";
                };
				class SL
                {
                    label = "SL";
                    description = "Squad Leader";
                    //image = "xxx";
                };
                class PL
                {
                    label = "PL";
                    description = "Platoon Leader";
                    //image = "xxx";
                };
                class CO
                {
                    label = "CO";
                    description = "Company Staff";
                    //image = "xxx";
                };
				class ARF
				{
                    label = "ARF";
                    //description = "CR+";
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
            Early = "SL";
        };
        class 332nd_Helmet_P1_Lt
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "PL";
        };
        class 332nd_Helmet_P1_Cpt
        {
            model = "332nd_Helmets_P1_Extended";
            Early = "CO";
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
		class 332nd_Helmet_P1_ARF
		{
            model = "332nd_Helmets_P1_Extended";
            Early = "ARF";
		};
	};
};