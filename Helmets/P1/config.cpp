#include "..\..\332nd_Aux_Macros.hpp"
#define P1_HELM(NAME,DISP,TEX) class NAME: 332nd_Helmet_P1_Base { displayName = DISP; hiddenSelections[] = { "Camo1", "Visor" }; hiddenSelectionsTextures[] = { TEX, TEX }; };
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
	P1_HELM(332nd_Helmet_P1_Sgt, "[332nd] P1 Helmet (Squad Lead)", "\JLTS_EA_Units\data\Phase1\Helmet_Sergeant.paa")
	P1_HELM(332nd_Helmet_P1_Lt, "[332nd] P1 Helmet (Platoon Leader)", "\JLTS_EA_Units\data\Phase1\Helmet_Lieutenant.paa")
	P1_HELM(332nd_Helmet_P1_Cpt, "[332nd] P1 Helmet (Company Staff)", "\JLTS_EA_Units\data\Phase1\Helmet_Captain.paa")
	P1_HELM(332nd_Helmet_P1_Unit, "[332nd] P1 Helmet (332nd)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P1_CT.paa")
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
        XTD_INFO(332nd_Helmet_P1_Base, "332nd_Helmets_P1_Extended", Early, "Trooper")
        XTD_INFO(332nd_Helmet_P1_Sgt, "332nd_Helmets_P1_Extended", Early, "SL")
        XTD_INFO(332nd_Helmet_P1_Lt, "332nd_Helmets_P1_Extended", Early, "PL")
        XTD_INFO(332nd_Helmet_P1_Cpt, "332nd_Helmets_P1_Extended", Early, "CO")
		XTD_INFO(332nd_Helmet_P1_Pilot, "332nd_Helmets_P1_Extended", Early, "Pilot")
		XTD_INFO(332nd_Helmet_P1_Unit, "332nd_Helmets_P1_Extended", Late, "Trooper")
		XTD_INFO(332nd_Helmet_P1_ARF, "332nd_Helmets_P1_Extended", Early, "ARF")
	};
};
