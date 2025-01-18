class CfgPatches {
	class 332nd_Helmets_Pilot {
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
	class 332nd_Helmet_Pilot: SWLB_clone_pilot_P2_helmet
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
					armor = 15;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor = 15;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};

//Customs

	class 332nd_Helmet_Pilot_Asuka: 332nd_Helmet_Pilot
	{
		scope=2;
		dlc="332nd Aux";
		author="Ithias";
		displayName="[332nd] Pilot Helmet (Asuka)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Asuka.paa",
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
        class 332nd_Helmets_Pilot_Extended
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
				values[] = { "Asuka",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Asuka
                {
                    label = "Asuka";
                    description = "LAAT Enjoyer";
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
        class 332nd_Helmet_Pilot
        {
            model = "332nd_Helmets_Pilot_Extended";
            Type = "Pilot";
        };
        class 332nd_Helmet_Pilot_Asuka
        {
            model = "332nd_Helmets_Pilot_Extended";
            Customs = "Asuka";
        };
	};
};