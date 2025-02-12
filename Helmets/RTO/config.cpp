class CfgPatches {
	class 332nd_Helmets_RTO {
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
	class SWLB_P2_SpecOps_Helmet;
	class 332nd_Helmet_RTO_Base: SWLB_P2_SpecOps_Helmet
	{
		author="Cherryy";
		dlc="332nd Aux";
		displayName="[332nd] P2 RTO Helmet (Base)";
		scope=0;
		subItems[] = {};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
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
	class 332nd_Helmet_RTO_CT: 332nd_Helmet_RTO_Base
	{
		displayName="[332nd] P2 RTO Helmet (CT)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_JTAC_P2_Helmet_CT.paa"
		};
	};
//Customs

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P2_RTO_Extended
        {
            label = "RTO";
            author = "Cherryy";
			options[] = { "Type", "Customs", };
            class Type
            {
                label = "Type";
				values[] = { "Trooper",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "CT+";
                    //image = "xxx";
                };
            };
            /*class Customs
            {
                label = "Customs";
				values[] = { "Ithias", "Cherryy", "Roseiry", "Body", "Frankenburg", "Seelig", "Weaver", "Hicks",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Ithias
                {
                    label = "Ithias";
                    description = "Bout to crash out";
                    //image = "xxx";
                };
				class Cherryy
                {
                    label = "Cherryy";
                    description = "Piller of the community";
                    //image = "xxx";
                };
				class Roseiry
                {
                    label = "Roseiry";
                    description = "Loves stealing (Also hates custom descriptions)";
                    //image = "xxx";
                };
				class Body
                {
                    label = "Body";
                    description = "The man the myth the legend";
                    //image = "xxx";
                };
				class Frankenburg
				{
					label = "Frankenburg";
					description = "In too many S-Shops";
				};
				class Seelig
                {
                    label = "Seelig";
                    description = "Flight 5342 Pilot";
                    //image = "xxx";
                };
				class Weaver
				{
					label = "Weaver";
					description = "Sleeps on the Sofa (Wife is angry)";
					//image = "xxx";
				};
				class Hicks
				{
					label = "Hicks";
					description = "Lolcow enjoyer";
					//image = "xxx";
				};

            };*/
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_Helmet_RTO_CT
        {
            model = "332nd_Helmets_P2_RTO_Extended";
            Type = "Trooper";
        };
		//customs
        /*
		class 332nd_Helmet_P2_Ithias
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Ithias";
        };
		*/
	};
};