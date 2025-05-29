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
	class SWLB_clone_P2_helmet;

	class 332nd_Helmet_P2_CR: SWLB_clone_P2_helmet
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] P2 Helmet (CR)";
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
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT.paa"
		};
	};
	class 332nd_Helmet_P2_Medic: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Medic)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Medic.paa"
		};
	};
	/* class 332nd_P2_Test: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Testing)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Test.paa"
		};
	}; */
//Customs

	/* class 332nd_Helmet_P2_Asuka: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Asuka)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Asuka.paa"
		};
	}; */
	class 332nd_Helmet_P2_Body: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Body)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Body.paa"
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
	class 332nd_Helmet_P2_Crow: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Crow)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Crow.paa"
		};
	};
	class 332nd_Helmet_P2_Denal: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Denal)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Denal.paa"
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
	class 332nd_Helmet_P2_Ithias: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Ithias)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ithias.paa"
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
	class 332nd_Helmet_P2_Roseiry: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Roseiry)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Roseiry.paa"
		};
	};
	class 332nd_Helmet_P2_Shark: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Shark)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shark.paa"
		};
	};
	class 332nd_Helmet_P2_Sovereign: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Sovereign)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Sovereign.paa"
		};
	};
	/* class 332nd_Helmet_P2_Spectre: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Spectre)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Spectre.paa"
		};
	};
	class 332nd_Helmet_P2_Stryker: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Stryker)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Stryker.paa"
		};
	}; */
	class 332nd_Helmet_P2_Tokyo: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Tokyo)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Tokyo.paa"
		};
	};
	/* class 332nd_Helmet_P2_Walkie: 332nd_Helmet_P2_CR
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
	}; */
	class 332nd_Helmet_P2_Weaver: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Weaver)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Weaver.paa"
		};
	};
	class 332nd_Helmet_P2_Lettuce: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Lettuce)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Lettuce.paa"
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
				values[] = { /* "Asuka",*/ "Body", "Cherryy", /* "Cin",*/ "Crow", "Denal", "Frankenburg", "Joker", "Luci", "Ithias", "Roseiry", "Shark", "Seelig", "Sovereign", /* "Spectre", */ /* "Stryker",*/ "Tokyo", /* "Walkie", */ "Weaver", "Lettuce", "Ketamine",};
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
				/* class Walkie
				{
					label = "Walkie";
					description = "Whispers drugs into my system";
					//image = "xxx";
				}; */
				class Weaver
				{
					label = "Weaver";
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
		class 332nd_Helmet_P2_Medic
		{
            model = "332nd_Helmets_P2_Extended";
            Type = "Medic";
        };
		class 332nd_Helmet_RTO_CT
        {
            model = "332nd_Helmets_P2_Extended";
            Type = "RTO";
        };
		//customs
		/* class 332nd_Helmet_P2_Asuka
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Asuka";
        }; */
		class 332nd_Helmet_P2_Body
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Body";
        };
		class 332nd_Helmet_P2_Cherryy
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Cherryy";
        };
		/* class 332nd_Helmet_RTO_Cin
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Cin";
        }; */
	    class 332nd_Helmet_P2_Crow
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Crow";
        }; 
		class 332nd_Helmet_P2_Denal
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Denal";
        };
		class 332nd_Helmet_P2_Frankenburg
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Frankenburg";
        };
        class 332nd_Helmet_P2_Ithias
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Ithias";
        };
		class 332nd_Helmet_RTO_Joker
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Joker";
        };
		class 332nd_Helmet_P2_Luci
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Luci";
        };
        class 332nd_Helmet_P2_Roseiry
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Roseiry";
        };
		class 332nd_Helmet_P2_Shark
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Shark";
        };
		class 332nd_Helmet_RTO_Seelig
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Seelig";
        };
		class 332nd_Helmet_P2_Sovereign
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Sovereign";
        };	
		/* class 332nd_Helmet_P2_Spectre
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Spectre";
        };
		class 332nd_Helmet_P2_Stryker
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Stryker";
        }; */
		class 332nd_Helmet_P2_Tokyo
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Tokyo";
        };
		/* class 332nd_Helmet_P2_Walkie
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Walkie";
        }; */
		class 332nd_Helmet_P2_Weaver
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Weaver";
        };
		class 332nd_Helmet_P2_Lettuce
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Lettuce";
        };
		class 332nd_Helmet_P2_Ketamine
        {
            model = "332nd_Helmets_P2_Extended";
            Customs = "Ketamine";
        };
	};
};

