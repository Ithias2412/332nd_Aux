class CfgPatches {
	class Old_332nd_Helmets_Pilot {
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
	class SWLB_clone_pilot_P2_helmet;

//Base Start
	class Old_332nd_Helmet_Pilot: SWLB_clone_pilot_P2_helmet
	{
		scope=2;
		dlc="332nd Aux";
		author="Ithias";
		displayName="[332nd] Pilot Helmet";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot.paa",
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

//Customs

	/* class 332nd_Helmet_Pilot_Saiko: 332nd_Helmet_Pilot
	{
		scope=2;
		dlc="332nd Aux";
		author="Ithias";
		displayName="[332nd] Pilot Helmet (Saiko)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Saiko.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
	}; */
	class 332nd_Helmet_Pilot_Shadow: Old_332nd_Helmet_Pilot
	{
		scope=2;
		dlc="332nd Aux";
		author="Wasnt pookie Ithias";
		displayName="[332nd] Pilot Helmet (Shadow)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Shadow.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
	};
	class 332nd_Helmet_Pilot_Lawman: Old_332nd_Helmet_Pilot
	{
		scope=2;
		dlc="332nd Aux";
		author="Wasnt pookie Ithias";
		displayName="[332nd] Pilot Helmet (Lawman)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Lawman.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
	};
	class 332nd_Helmet_Pilot_Jorge: Old_332nd_Helmet_Pilot
	{
		scope=2;
		dlc="332nd Aux";
		author="Cherryy";
		displayName="[332nd] Pilot Helmet (Jorge)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Jorge.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class Old_332nd_Helmets_Pilot_Extended
        {
            label = "Pilot";
            author = "Ithias";
			options[] = { "Type", "Customs",};
            class Type
            {
                label = "Type";
				values[] = { "Pilot",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Pilot
                {
                    label = "Pilot";
                    description = "CXC+";
                    //image = "xxx";
                };
            };
            class Customs
            {
                label = "Customs";
				values[] = { /* "Saiko", */ "Shadow", "Lawman", "Jorge"};
                changeingame = 0;
                alwaysSelectable = 1;
				/* class Saiko
                {
                    label = "Saiko";
                    description = "ARC Enjoyer";
                    //image = "xxx";
                }; */
				class Shadow
                {
                    label = "Shadow";
                    description = "Angel who?";
                    //image = "xxx";
                };
				class Lawman
                {
                    label = "Lawman";
                    description = "Is my custom in yet?";
                    //image = "xxx";
                };
				class Jorge
                {
                    label = "Jorge";
                    description = "J-052";
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
        class Old_332nd_Helmet_Pilot
        {
            model = "332nd_Helmets_Pilot_Extended";
            Type = "Pilot";
        };
		/* class 332nd_Helmet_Pilot_Saiko
        {
            model = "332nd_Helmets_Pilot_Extended";
            Customs = "Saiko";
        }; */
		class 332nd_Helmet_Pilot_Shadow
        {
            model = "332nd_Helmets_Pilot_Extended";
            Customs = "Shadow";
        };
		class 332nd_Helmet_Pilot_Lawman
        {
            model = "332nd_Helmets_Pilot_Extended";
            Customs = "Lawman";
        };
		class 332nd_Helmet_Pilot_Jorge
        {
            model = "332nd_Helmets_Pilot_Extended";
            Customs = "Jorge";
        };
	};
};