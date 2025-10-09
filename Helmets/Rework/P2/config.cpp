class CfgPatches {
	class 332nd_Helmets_P2 {
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
	class JLTS_CloneHelmetP2;
	class 332nd_Helmet_P2_CR: JLTS_CloneHelmetP2
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="New! [332nd] P2 Helmet (CR)";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel= "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class 332nd_Helmet_P2_CT: 332nd_Helmet_P2_CR
	{
		displayName="New! [332nd] P2 Helmet (CT)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT_JLTS.paa"
		};
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_P2_Extended
        {
            label = "Phase 2";
            author = "Ithias";
			options[] = { "Type", "Customs", };
            class Type
            {
                label = "Type";
				values[] = { "Recruit", "Trooper", "Medic", "RTO",};
                changeingame = 0;
                alwaysSelectable = 1;
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
                class Medic
                {
                    label = "Medic";
                    //description = "...";
                    //image = "xxx";
                };
                class RTO
                {
                    label = "RTO";
                    //description = "...";
                    //image = "xxx";
                };
            };
            class Customs
            {
                label = "Customs";
				values[] = { /* "Asuka",*/ "Body", "Cherryy", /* "Cin",*/ "Crow", "Denal", "Frankenburg", "Joker", "Luci", "Ithias", "Roseiry", "Shark", "Seelig", "Sovereign", /* "Spectre", */ /* "Stryker",*/ "Tokyo",  "Walkie", "Ghost", "Lettuce", "Ketamine", "Eclipse", "Social", "Dovah", "Saiko", "Arson", "Jiggs", "Nightmare", "Nebel", "Alpha", "Aqua"};
                changeingame = 0;
                alwaysSelectable = 1;
				/* class Asuka
                {
                    label = "Asuka";
                    description = "Sucks at Destiny";
                    //image = "xxx";
                }; */
				class Body
                {
                    label = "Body";
                    description = "The man the myth the legend";
                    //image = "xxx";
                };
				class Cherryy
                {
                    label = "Cherryy";
                    description = "Piller of the community";
                    //image = "xxx";
                };
				/* class Cin
                {
                    label = "Cin";
                    description = "Where's the 9 Line";
                    //image = "xxx";
                }; */
				class Crow
				{
					label = "Crow";
					description = "On the List";
					//image = "xxx";
				};
				class Denal
				{
					label = "Denal";
					description = "Resident Aussie";
					//image = "xxx";
				};
				class Frankenburg
				{
					label = "Frankenburg";
					description = "In too many S-Shops";
				};
				class Ithias
                {
                    label = "Ithias";
                    description = "Bout to crash out";
                    //image = "xxx";
                };
				class Joker
				{
					label = "Joker";
					description = "Cherryy 2.0";
					//image = "xxx";
				};
				class Luci
				{
					label = "Luci";
					description = "Tup deserved it";
					//image = "xxx";
				};		
				class Roseiry
                {
                    label = "Roseiry";
                    description = "Loves stealing (Also hates custom descriptions)";
                    //image = "xxx";
                };
				class Shark
				{
					label = "Shark";
					description = "50/50 RPS-6 Hit Chance";
					//image = "xxx";
				};	
				class Seelig
                {
                    label = "Seelig";
                    description = "Flight 5342 Pilot";
                    //image = "xxx";
                }; 
				class Sovereign
				{
					label = "Sovereign";
					description = "Dosent know what he wants to do";
					//image = "xxx";
				};	
				/* class Spectre
				{
					label = "Spectre";
					description = "Goon Platoon";
					//image = "xxx";
				}; */	
				/* class Stryker
				{
					label = "Stryker";
					description = "Stryker Eureka";
					//image = "xxx";
				}; */
				class Tokyo
				{
					label = "Tokyo";
					description = "VR Gamer";
					//image = "xxx";
				};
				class Walkie
				{
					label = "Walkie";
					description = "Whispers drugs into my system";
					//image = "xxx";
				}; 
				class Ghost
				{
					label = "Ghost";
					description = "Sleeps on the Sofa (Wife is angry)";
					//image = "xxx";
				};
				class Lettuce
				{
					label = "Lettuce";
					description = "Makes some banger sandwiches";
					//image = "xxx";
				}; 
				class Ketamine
				{
					label = "Ketamine";
					description = "Wears the wrong helmet";
					//image = "xxx";
				};
				class Eclipse
				{
					label = "Eclipse";
					description = "Recently got their named abbreviated";
					//image = "xxx";
				}; 
				class Social 
				{
					label = "Social";
					description = "Sev enthuasist";
					//image = "xxx";
				};
				class Dovah
				{
					label = "Dovah";
					description = "Dovah Prime";
					//image = "xxx";
				};
				class Saiko
				{
					label = "Saiko";
					description = "When Airborne";
					//image = "xxx";
				};
				class Arson
				{
					label = "Arson";
					description = "Flame Thrower Enthusiast";
					//image = "xxx";
				};
				class Jiggs
				{
					label = "Jiggs";
					description = "Twin 1";
					//image = "xxx";
				};
				class Nightmare
				{
					label = "Nightmare";
					description = "Twin 2";
					//image = "xxx";
				};
				class Nebel
				{
					label = "Nebel";
					description = "Keeli Co Visionary";
					//image = "xxx";
				};
				class Alpha
				{
					label = "Alpha";
					description = "Had his name stolen";
					//image = "xxx";
				};
				class Aqua
				{
					label = "Aqua";
					description = "40k Fanatic";
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
            model = "332nd_Helmets_P2_Extended";
            Type = "Recruit";
        };
        class 332nd_Helmet_P2_CT
        {
            model = "332nd_Helmets_P2_Extended";
            Type = "Trooper";
        };
	};
};

