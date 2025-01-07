class CfgPatches {
	class 332nd_Helmets_Customs
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
class cfgWeapons 
{
    class 332nd_Helmet_P2_CT;
    class HeadgearItem;

//Start
	class 332nd_Helmet_P2_Ithias: 332nd_Helmet_P2_CT
	{
		displayName="[332nd] P2 Helmet (Custom)";
		//displayName="[332nd] P2 Helmet (Ithias)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ithias.paa"
		};
	};
	
	class 332nd_Helmet_P2_Cherryy: 332nd_Helmet_P2_CT
	{
		displayName="[332nd] P2 Helmet (Custom)";
		//displayName="[332nd] P2 Helmet (Cherryy)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Cherryy.paa"
		};
	};
	
	class 332nd_Helmet_P2_Roseiry: 332nd_Helmet_P2_CT
	{
		displayName="[332nd] P2 Helmet (Custom)";
		//displayName="[332nd] P2 Helmet (Roseiry)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Roseiry.paa"
		};
	};

	class 332nd_Helmet_P2_Body: 332nd_Helmet_P2_CT
	{
		displayName="[332nd] P2 Helmet (Custom)";
		//displayName="[332nd] P2 Helmet (Body)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Body.paa"
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Custom_Helmet_Extended
        {
            label = "332nd Custom Helmet";
            author = "Ithias";
			options[] = { "Person", };
            class Person
            {
                label = "Person";
				values[] = { "Ithias", "Cherryy", "Roseiry", "Body", };
                changeingame = 0;
                alwaysSelectable = 0;
                class Ithias
                {
                    label = "Ithias";
                    description = "His weiner is 10 ft long";
                    //image = "xxx";
                };
				class Cherryy
                {
                    label = "Cherryy";
                    description = "Remade his custom 3 times";
                    //image = "xxx";
                };
				class Roseiry
                {
                    label = "Roseiry";
                    description = "Does not like custom descriptions";
                    //image = "xxx";
                };
				class Body
                {
                    label = "Body";
                    description = "The man the myth the legend";
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
        class 332nd_Helmet_P2_Ithias
        {
            model = "332nd_Custom_Helmet_Extended";
            Person = "Ithias";
        };
        class 332nd_Helmet_P2_Cherryy
        {
            model = "332nd_Custom_Helmet_Extended";
            Person = "Cherryy";
        };
        class 332nd_Helmet_P2_Roseiry
        {
            model = "332nd_Custom_Helmet_Extended";
            Person = "Roseiry";
        };
        class 332nd_Helmet_P2_Body
        {
            model = "332nd_Custom_Helmet_Extended";
            Person = "Body";
        };
	};
};