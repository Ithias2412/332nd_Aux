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
				values[] = { "Ithias", "Cherryy", };
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
	};
};