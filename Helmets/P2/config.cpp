#include "..\..\332nd_Aux_Macros.hpp"
#define P2_HELM(NAME,DISP,TEX) class NAME: 332nd_Helmet_P2_CR { displayName = DISP; hiddenSelections[] = { "camo1" }; hiddenSelectionsTextures[] = { TEX }; };
class CfgPatches 
{
	class 332nd_Helmets_P2 
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
class CfgWeapons 
{
	class HeadgearItem;
	class JLTS_CloneHelmetP2;
	class 332nd_Helmet_P2_CR: JLTS_CloneHelmetP2
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] P2 Helmet (CR)";
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
	P2_HELM(332nd_Helmet_P2_CT, "[332nd] P2 Helmet (CT)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT_JLTS.paa")
	P2_HELM(332nd_Helmet_P2_Body, "[332nd] P2 Helmet (Body)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Body_JLTS.paa")
	P2_HELM(332nd_Helmet_P2_Frankenburg, "[332nd] P2 Helmet (Frankenburg)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Frankenburg.paa")
	P2_HELM(332nd_Helmet_P2_Dovah, "[332nd] P2 Helmet (Dovah)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Dovah.paa")
	P2_HELM(332nd_Helmet_P2_Grim, "[332nd] P2 Helmet (Grim)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Grim.paa")
	P2_HELM(332nd_Helmet_P2_Walkie, "[332nd] P2 Helmet (Walkie)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Walkie.paa")
	P2_HELM(332nd_Helmet_P2_Warthog, "[332nd] P2 Helmet (Warthog)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Warthog.paa")
	P2_HELM(332nd_Helmet_P2_Rat, "[332nd] P2 Helmet (Rat)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Rat.paa")
	P2_HELM(332nd_Helmet_P2_Joker, "[332nd] P2 Helmet (Joker)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Joker.paa")
	/*
	P2_HELM(332nd_Helmet_P2_Aztec, "[332nd] P2 Helmet (Aztec)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Aztec.paa")
	*/
	P2_HELM(332nd_Helmet_P2_Aqua, "[332nd] P2 Helmet (Aqua)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Aqua.paa")
	P2_HELM(332nd_Helmet_P2_Nate, "[332nd] P2 Helmet (Nate)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Nate.paa")
	P2_HELM(332nd_Helmet_P2_Thym, "[332nd] P2 Helmet (Thym)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Thym.paa")
	P2_HELM(332nd_Helmet_P2_Shovie, "[332nd] P2 Helmet (Shovie)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shovie.paa")
	P2_HELM(332nd_Helmet_P2_Luci, "[332nd] P2 Helmet (Luci)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Luci.paa")
	P2_HELM(332nd_Helmet_P2_Arson, "[332nd] P2 Helmet (Arson)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Arson.paa")
	P2_HELM(332nd_Helmet_P2_Charger, "[332nd] P2 Helmet (Charger)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Charger.paa")
	P2_HELM(332nd_Helmet_P2_Ketamine, "[332nd] P2 Helmet (Ketamine)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ketamine.paa")
	P2_HELM(332nd_Helmet_P2_Inu, "[332nd] P2 Helmet (Inu)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Inu.paa")
	P2_HELM(332nd_Helmet_P2_Mouse, "[332nd] P2 Helmet (Mouse)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Mouse.paa")
	/* P2_HELM(332nd_Helmet_P2_Fusion, "[332nd] P2 Helmet (Fusion)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Fusion.paa") */
	/* P2_HELM(332nd_Helmet_P2_Cherryy, "[332nd] P2 Helmet (Cherryy)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Cherryy.paa") */
	P2_HELM(332nd_Helmet_P2_Shuck, "[332nd] P2 Helmet (Shuck)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shuck.paa")
	P2_HELM(332nd_Helmet_P2_Crow, "[332nd] P2 Helmet (Crow)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Crow.paa")
	P2_HELM(332nd_Helmet_P2_Rode, "[332nd] P2 Helmet (Rode)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Rode.paa")
	P2_HELM(332nd_Helmet_P2_Rimuru, "[332nd] P2 Helmet (Rimuru)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Rimuru.paa")
	P2_HELM(332nd_Helmet_P2_Clari, "[332nd] P2 Helmet (Clari)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Clari.paa")
	P2_HELM(332nd_Helmet_P2_Lettuce, "[332nd] P2 Helmet (Lettuce)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Lettuce.paa")
	P2_HELM(332nd_Helmet_P2_Mark, "[332nd] P2 Helmet (Mark)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Mark.paa")
	P2_HELM(332nd_Helmet_P2_Whoops, "[332nd] P2 Helmet (Whoops)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Whoops.paa")
	P2_HELM(332nd_Helmet_P2_VB, "[332nd] P2 Helmet (VB)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_VB.paa")
	P2_HELM(332nd_Helmet_P2_Crota, "[332nd] P2 Helmet (Crota)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Crota.paa")
	P2_HELM(332nd_Helmet_P2_Ghoul, "[332nd] P2 Helmet (Ghoul)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ghoul.paa")
	P2_HELM(332nd_Helmet_P2_Roseiry, "[332nd] P2 Helmet (Roseiry)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Roseiry.paa")
	P2_HELM(332nd_Helmet_P2_Crucial, "[332nd] P2 Helmet (Crucial)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Crucial.paa")
	class 332nd_Helmet_P2_Ithias: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Ithias)";
		332nd_Has_Lowlight = 1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ithias.paa"
		};
	};
	P2_HELM(332nd_Helmet_P2_Icurus, "[332nd] P2 Helmet (Icurus)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Icurus.paa")
	P2_HELM(332nd_Helmet_P2_Alpha, "[332nd] P2 Helmet (Alpha)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Alpha.paa")
	P2_HELM(332nd_Helmet_P2_Oddball, "[332nd] P2 Helmet (Oddball)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Oddball.paa")
	P2_HELM(332nd_Helmet_P2_Logan, "[332nd] P2 Helmet (Logan)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Logan.paa")
	P2_HELM(332nd_Helmet_P2_Komrk, "[332nd] P2 Helmet (Komrk)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Komrk.paa")
	P2_HELM(332nd_Helmet_P2_Coal, "[332nd] P2 Helmet (Coal)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Coal.paa")
	P2_HELM(332nd_Helmet_P2_Wesker, "[332nd] P2 Helmet (Wesker)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Wesker.paa")
	P2_HELM(332nd_Helmet_P2_Butch, "[332nd] P2 Helmet (Butch)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Butch.paa")
	P2_HELM(332nd_Helmet_P2_Blackjack, "[332nd] P2 Helmet (Blackjack)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Blackjack.paa")
	P2_HELM(332nd_Helmet_P2_Ahri, "[332nd] P2 Helmet (Ahri)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ahri.paa")
	P2_HELM(332nd_Helmet_P2_Saiko, "[332nd] P2 Helmet (Saiko)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Saiko.paa")
	P2_HELM(332nd_Helmet_P2_Wylder, "[332nd] P2 Helmet (Wylder)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Wylder.paa")
	P2_HELM(332nd_Helmet_P2_Raven, "[332nd] P2 Helmet (Raven)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Raven.paa")
	P2_HELM(332nd_Helmet_P2_Max, "[332nd] P2 Helmet (Max)", "332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Max.paa")

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
				values[] = 
				{
					// "Asuka",
					"Body", 
					/* "Cherryy",  */
					// "Cin",
					"Crow", 
					"Denal", 
					"Frankenburg", 
					"Joker", 
					"Luci", 
					"Ithias", 
					"Roseiry", 
					"Shark", 
					"Seelig", 
					"Sovereign", 
					"Tokyo",  
					"Walkie", 
					"Ghost", 
					"Lettuce", 
					"Ketamine", 
					"Eclipse", 
					"Social", 
					"Dovah", 
					"Saiko", 
					"Arson", 
					"Jiggs", 
					"Nightmare", 
					"Nebel", 
					"Alpha", 
					"Aqua", 
					"Grim", 
					"Warthog", 
					"Rat", 
					"Aztec", 
					"Nate", 
					"Thym",
					"Shovie",
					"Charger",
					"Inu",
					"Mouse",
					"Shuck",
					/* "Fusion", */
					"Rode",
					"Rimuru",
					"Clari",
					"Mark",
					"Whoops",
					"VB",
					"Crota",
					"Ghoul",
					"Crucial",
					"Icurus",
					"Oddball",
					"Logan",
					"Komrk",
					"Coal",
					"Wesker",
					"Butch",
					"Blackjack",
					"Ahri",
					"Wylder",
					"Raven",
					"Max",
				};
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
				/* class Cherryy
                {
                    label = "Cherryy";
                    description = "Piller of the community";
                    //image = "xxx";
                }; */
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
					description = "CAG / JSOC Inspired";
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
					description = "Still working on Jokers Custom";
					//image = "xxx";
				};
				class Grim
				{
					label = "Grim";
					description = "Artificially Intelligent";
					//image = "xxx";
				};
				// Kill Roseiry
				class Warthog
				{
					label = "Warthog";
					description = "E-Dater";
					//image = "xxx";
				};
				class Rat
				{
					label = "Rat";
					description = "So big and inflated";
					//image = "xxx";
				};
				class Aztec
				{
					label = "Aztec";
					description = "Brazilian or something idk";
					//image = "xxx";
				};
				class Nate
				{
					label = "Nate";
					description = "Hates Everyone in 1-3";
					//image = "xxx";
				};
				class Thym
				{
					label = "Thym";
					description = "Operation Feedback Novelist";
					//image = "xxx";
				};
				class Shovie
				{
					label = "Shovie";
					description = "Cross Country Dox Specialist";
					//image = "xxx";
				};
				class Charger
				{
					label = "Charger";
					description = "Engrish";
					//image = "xxx";
				};
				class Inu
				{
					label = "Inu";
					description = "A Handsome Guy";
					//image = "xxx";
				};
				class Mouse
				{
					label = "Mouse";
					description = "[Redacted]'s Boy Toy";
					//image = "xxx";
				};
				class Shuck
				{
					label = "Shuck";
					description = "Waited 3 months for this";
					//image = "xxx";
				};
				/* class Fusion
				{
					label = "Fusion";
					description = "Awaiting Rimuru DM";
					//image = "xxx";
				}; */
				class Rode
				{
					label = "Rode";
					description = "Aye Lance Corporal!";
					//image = "xxx";
				};
				class Rimuru
				{
					label = "Rimuru";
					description = "They're right behind me, arent they";
					//image = "xxx";
				};
				class Clari
				{
					label = "Clari";
					description = "bīngqílín";
					//image = "xxx";
				};
				class Mark
				{
					label = "Mark";
					description = "Goodnight 332nd";
					//image = "xxx";
				};
				class Whoops
				{
					label = "Whoops";
					description = "Your next";
					//image = "xxx";
				};
				class VB
				{
					label = "VB";
					description = "YO in Aurebesh";
					//image = "xxx";
				};
				class Crota
				{
					label = "Crota";
					description = "Son of Oryx";
					//image = "xxx";
				};
				class Ghoul
				{
					label = "Ghoul";
					description = "Ithias' Son";
					//image = "xxx";
				};
				class Crucial
				{
					label = "Crucial";
					description = "N/A";
					//image = "xxx";
				};
				class Icurus
				{
					label = "Icurus";
					description = "And Icarus laughed as he fell, for he knew to fall means to once have soared...";
					//image = "xxx";
				};
				class Oddball
				{
					label = "Oddball";
					description = "I like balls - Roseiry";
					//image = "xxx";
				};
				class Logan
				{
					label = "Logan";
					description = "Needs to get Ilvl 230";
					//image = "xxx";
				};
				class Komrk
				{
					label = "Komrk";
					description = "Com-rk (slaps knee)";
					//image = "xxx";
				};
				class Coal
				{
					label = "Coal";
					description = "King of the Chuds";
					//image = "xxx";
				};
				class Wesker
				{
					label = "Wesker";
					description = "7 Minutes";
					//image = "xxx";
				};
				class Butch
				{
					label = "Butch";
					description = "His Lordship";
					//image = "xxx";
				};
				class Blackjack
				{
					label = "Blackjack";
					description = "CLAPX5";
					//image = "xxx";
				};
				class Ahri
				{
					label = "Ahri";
					description = "Ear Revision #9999";
					//image = "xxx";
				};
				class Wylder
				{
					label = "Wylder";
					description = "Not Peter";
					//image = "xxx";
				};
				class Raven
				{
					label = "Raven";
					description = "Work-a-holic";
					//image = "xxx";
				};
				class Max
				{
					label = "Max";
					description = "Forever Applicant";
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
        XTD_INFO(332nd_Helmet_P2_CR, "332nd_Helmets_P2_Extended", Type, "Recruit")
        XTD_INFO(332nd_Helmet_P2_CT, "332nd_Helmets_P2_Extended", Type, "Trooper")
		XTD_INFO(332nd_Helmet_P2_Body, "332nd_Helmets_P2_Extended", Customs, "Body")
		XTD_INFO(332nd_Helmet_P2_Frankenburg, "332nd_Helmets_P2_Extended", Customs, "Frankenburg")
		XTD_INFO(332nd_Helmet_P2_Dovah, "332nd_Helmets_P2_Extended", Customs, "Dovah")
		XTD_INFO(332nd_Helmet_P2_Grim, "332nd_Helmets_P2_Extended", Customs, "Grim")
		XTD_INFO(332nd_Helmet_P2_Walkie, "332nd_Helmets_P2_Extended", Customs, "Walkie")
		// Kill Roseiry
		XTD_INFO(332nd_Helmet_P2_Warthog, "332nd_Helmets_P2_Extended", Customs, "Warthog")
		XTD_INFO(332nd_Helmet_P2_Rat, "332nd_Helmets_P2_Extended", Customs, "Rat")
		XTD_INFO(332nd_Helmet_P2_Joker, "332nd_Helmets_P2_Extended", Customs, "Joker")
		XTD_INFO(332nd_Helmet_P2_Aztec, "332nd_Helmets_P2_Extended", Customs, "Aztec")
		XTD_INFO(332nd_Helmet_P2_Nate, "332nd_Helmets_P2_Extended", Customs, "Nate")
		XTD_INFO(332nd_Helmet_P2_Aqua, "332nd_Helmets_P2_Extended", Customs, "Aqua")
		XTD_INFO(332nd_Helmet_P2_Thym, "332nd_Helmets_P2_Extended", Customs, "Thym")
		XTD_INFO(332nd_Helmet_P2_Shovie, "332nd_Helmets_P2_Extended", Customs, "Shovie")
		XTD_INFO(332nd_Helmet_P2_Luci, "332nd_Helmets_P2_Extended", Customs, "Luci")
		XTD_INFO(332nd_Helmet_P2_Arson, "332nd_Helmets_P2_Extended", Customs, "Arson")
		XTD_INFO(332nd_Helmet_P2_Charger, "332nd_Helmets_P2_Extended", Customs, "Charger")
		XTD_INFO(332nd_Helmet_P2_Ketamine, "332nd_Helmets_P2_Extended", Customs, "Ketamine")
		XTD_INFO(332nd_Helmet_P2_Inu, "332nd_Helmets_P2_Extended", Customs, "Inu")
		XTD_INFO(332nd_Helmet_P2_Mouse, "332nd_Helmets_P2_Extended", Customs, "Mouse")
		/* XTD_INFO(332nd_Helmet_P2_Cherryy, "332nd_Helmets_P2_Extended", Customs, "Cherryy") */
		XTD_INFO(332nd_Helmet_P2_Shuck, "332nd_Helmets_P2_Extended", Customs, "Shuck")
		/* XTD_INFO(332nd_Helmet_P2_Fusion, "332nd_Helmets_P2_Extended", Customs, "Fusion") */
		XTD_INFO(332nd_Helmet_P2_Crow, "332nd_Helmets_P2_Extended", Customs, "Crow")
		XTD_INFO(332nd_Helmet_P2_Rode, "332nd_Helmets_P2_Extended", Customs, "Rode")
		XTD_INFO(332nd_Helmet_P2_Rimuru, "332nd_Helmets_P2_Extended", Customs, "Rimuru")
		XTD_INFO(332nd_Helmet_P2_Clari, "332nd_Helmets_P2_Extended", Customs, "Clari")
		XTD_INFO(332nd_Helmet_P2_Lettuce, "332nd_Helmets_P2_Extended", Customs, "Lettuce")
		XTD_INFO(332nd_Helmet_P2_Mark, "332nd_Helmets_P2_Extended", Customs, "Mark")
		XTD_INFO(332nd_Helmet_P2_Whoops, "332nd_Helmets_P2_Extended", Customs, "Whoops")
		XTD_INFO(332nd_Helmet_P2_VB, "332nd_Helmets_P2_Extended", Customs, "VB")
		XTD_INFO(332nd_Helmet_P2_Crota, "332nd_Helmets_P2_Extended", Customs, "Crota")
		XTD_INFO(332nd_Helmet_P2_Ghoul, "332nd_Helmets_P2_Extended", Customs, "Ghoul")
		XTD_INFO(332nd_Helmet_P2_Roseiry, "332nd_Helmets_P2_Extended", Customs, "Roseiry")
		XTD_INFO(332nd_Helmet_P2_Crucial, "332nd_Helmets_P2_Extended", Customs, "Crucial")
		XTD_INFO(332nd_Helmet_P2_Ithias, "332nd_Helmets_P2_Extended", Customs, "Ithias")
		XTD_INFO(332nd_Helmet_P2_Icurus, "332nd_Helmets_P2_Extended", Customs, "Icurus")
		XTD_INFO(332nd_Helmet_P2_Alpha, "332nd_Helmets_P2_Extended", Customs, "Alpha")
		XTD_INFO(332nd_Helmet_P2_Oddball, "332nd_Helmets_P2_Extended", Customs, "Oddball")
		XTD_INFO(332nd_Helmet_P2_Logan, "332nd_Helmets_P2_Extended", Customs, "Logan")
		XTD_INFO(332nd_Helmet_P2_Komrk, "332nd_Helmets_P2_Extended", Customs, "Komrk")
		XTD_INFO(332nd_Helmet_P2_Coal, "332nd_Helmets_P2_Extended", Customs, "Coal")
		XTD_INFO(332nd_Helmet_P2_Wesker, "332nd_Helmets_P2_Extended", Customs, "Wesker")
		XTD_INFO(332nd_Helmet_P2_Butch, "332nd_Helmets_P2_Extended", Customs, "Butch")
		XTD_INFO(332nd_Helmet_P2_Blackjack, "332nd_Helmets_P2_Extended", Customs, "Blackjack")
		XTD_INFO(332nd_Helmet_P2_Ahri, "332nd_Helmets_P2_Extended", Customs, "Ahri")
		XTD_INFO(332nd_Helmet_P2_Saiko, "332nd_Helmets_P2_Extended", Customs, "Saiko")
		XTD_INFO(332nd_Helmet_P2_Wylder, "332nd_Helmets_P2_Extended", Customs, "Wylder")
		XTD_INFO(332nd_Helmet_P2_Raven, "332nd_Helmets_P2_Extended", Customs, "Raven")
		XTD_INFO(332nd_Helmet_P2_Max, "332nd_Helmets_P2_Extended", Customs, "Max")
	};
};