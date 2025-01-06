class CfgPatches {
	class 332nd_Helmets {
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
	class HeadgearItem;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class lsd_gar_airborne_new;

//Base Start
	class 332nd_Helmet_P2_CT: SWLB_clone_P2_helmet
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] P2 Helmet";
		//displayName="[332nd] P2 Helmet (CT)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT.paa"
		};
		model="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=40;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=40;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};

	class 332nd_Helmet_P2_CR: SWLB_clone_P2_helmet
	{
		displayName="[332nd] P2 Helmet";
		//displayName="[332nd] P2 Helmet (CR)";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=40;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=40;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};

	class 332nd_Helmet_P2_Pilot: SWLB_clone_pilot_P2_helmet
	{
		scope=2;
		dlc="332nd Aux";
		author="Ithias";
		displayName="[332nd] P2 Helmet";
		//displayName="[332nd] P2 Helmet (Pilot)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Pilot.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1",
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=40;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=40;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};

//Base End
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmet_Extended
        {
            label = "332nd Helmets";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Recruit", "Trooper", "Pilot", };
                changeingame = 0;
                alwaysSelectable = 0;
                class Recruit
                {
                    label = "Recruit";
                    description = "CR";
                    //image = "xxx";
                };
				class Trooper
                {
                    label = "Trooper";
                    description = "CT+";
                    //image = "xxx";
                };
				class Pilot
                {
                    label = "Pilot";
                    description = "CX+";
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
        class 332nd_Helmet_P2_CR
        {
            model = "332nd_Helmet_Extended";
            Type = "Recruit";
        };
        class 332nd_Helmet_P2_CT
        {
            model = "332nd_Helmet_Extended";
            Type = "Trooper";
        };
        class 332nd_Helmet_P2_Pilot
        {
            model = "332nd_Helmet_Extended";
            Type = "Pilot";
        };
	};
};