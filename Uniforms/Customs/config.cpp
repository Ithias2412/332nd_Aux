class CfgPatches {
	class 332nd_Uniforms {
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
    class UniformItem;
	class 332nd_Uniform_Clone_CR;
	
// Urban Uniform

class 332nd_Uniform_Clone_Ithias: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Ithias)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Ithias_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_Cherryy: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Cherryy)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Cherryy_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class 332nd_Uniform_Clone_CT_Veh;

class 332nd_Uniform_Clone_Ithias_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Ithias";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Ithias.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Ithias.paa",
		};
	};

class 332nd_Uniform_Clone_Cherryy_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Cherryy";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Cherryy.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Cherryy.paa",
		};
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Custom_Uniform_Extended
        {
            label = "332nd Custom Uniforms";
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
        class 332nd_Uniform_Clone_Ithias
        {
            model = "332nd_Custom_Uniform_Extended";
            Person = "Ithias";
        };
        class 332nd_Uniform_Clone_Cherryy
        {
            model = "332nd_Custom_Uniform_Extended";
            Person = "Cherryy";
        };
	};
};