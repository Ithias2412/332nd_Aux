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
	class 332nd_Helmet_P2_CT: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (CT)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT_JLTS.paa"
		};
	};
	class 332nd_Helmet_P2_Body: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Body)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Body_JLTS.paa"
		};
	};
	class 332nd_Helmet_P2_Frankenburg: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Frankenburg)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Frankenburg.paa"
		};
	};
	class 332nd_Helmet_P2_Dovah: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Dovah)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Dovah.paa"
		};
	};
	class 332nd_Helmet_P2_Grim: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Grim)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Grim.paa"
		};
	};
	class 332nd_Helmet_P2_Walkie: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Walkie)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Walkie.paa"
		};
	};
	class 332nd_Helmet_P2_Warthog: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Warthog)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Warthog.paa"
		};
	};
	class 332nd_Helmet_P2_Rat: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Rat)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Rat.paa"
		};
	};
	class 332nd_Helmet_P2_Joker: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Joker)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Joker.paa"
		};
	};
	class 332nd_Helmet_P2_Aztec: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Aztec)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Aztec.paa"
		};
	};
	class 332nd_Helmet_P2_Aqua: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Aqua)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Aqua.paa"
		};
	};
	class 332nd_Helmet_P2_Nate: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Nate)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Nate.paa"
		};
	};
	class 332nd_Helmet_P2_Thym: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Thym)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Thym.paa"
		};
	};
	class 332nd_Helmet_P2_Shovie: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Shovie)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shovie.paa"
		};
	};
	class 332nd_Helmet_P2_Luci: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Luci)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Luci.paa"
		};
	};
	class 332nd_Helmet_P2_Arson: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Arson)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Arson.paa"
		};
	};
	class 332nd_Helmet_P2_Charger: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Charger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Charger.paa"
		};
	};
	class 332nd_Helmet_P2_Ketamine: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Ketamine)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ketamine.paa"
		};
	};
	class 332nd_Helmet_P2_Inu: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Inu)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Inu.paa"
		};
	};
	class 332nd_Helmet_P2_Mouse: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Mouse)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Mouse.paa"
		};
	};
	class 332nd_Helmet_P2_Fusion: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Fusion)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Fusion.paa"
		};
	};
	class 332nd_Helmet_P2_Cherryy: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Cherryy)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Cherryy.paa"
		};
	};
	class 332nd_Helmet_P2_Shuck: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Shuck)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shuck.paa"
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
				values[] = 
				{
					// "Asuka",
					"Body", 
					"Cherryy", 
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
					"Fusion",
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
					description = "40k Fanatic";
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
					description = "Havok's Boy Toy";
					//image = "xxx";
				};
				class Shuck
				{
					label = "Shuck";
					description = "Waited 3 months for this";
					//image = "xxx";
				};
				class Fusion
				{
					label = "Fusion";
					description = "Awaiting Rimuru DM";
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
		class 332nd_Helmet_P2_Body
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Body";
		};
		class 332nd_Helmet_P2_Frankenburg
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Frankenburg";
		};
		class 332nd_Helmet_P2_Dovah
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Dovah";
		};
		class 332nd_Helmet_P2_Grim
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Grim";
		};
		class 332nd_Helmet_P2_Walkie
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Walkie";
		};
		// Kill Roseiry
		class 332nd_Helmet_P2_Warthog
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Warthog";
		};
		class 332nd_Helmet_P2_Rat
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Rat";
		};
		class 332nd_Helmet_P2_Joker
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Joker";
		};
		class 332nd_Helmet_P2_Aztec
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Aztec";
		};
		class 332nd_Helmet_P2_Nate
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Nate";
		};
		class 332nd_Helmet_P2_Aqua
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Aqua";
		};
		class 332nd_Helmet_P2_Thym
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Thym";
		};
		class 332nd_Helmet_P2_Shovie
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Shovie";
		};
		class 332nd_Helmet_P2_Luci
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Luci";
		};
		class 332nd_Helmet_P2_Arson
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Arson";
		};
		class 332nd_Helmet_P2_Charger
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Charger";
		};
		class 332nd_Helmet_P2_Ketamine
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Ketamine";
		};
		class 332nd_Helmet_P2_Inu
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Inu";
		};
		class 332nd_Helmet_P2_Mouse
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Mouse";
		};
		class 332nd_Helmet_P2_Cherryy
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Cherryy";
		};
		class 332nd_Helmet_P2_Shuck
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Shuck";
		};
		class 332nd_Helmet_P2_Fusion
		{
            model = "332nd_Helmets_P2_Extended";
            Customs = "Fusion";
		};
	};
};