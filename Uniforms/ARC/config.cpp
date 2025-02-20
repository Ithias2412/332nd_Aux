class CfgPatches {
	class 332nd_Uniforms_ARC {
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
	
// Uniform
class 332nd_Uniform_ARC_Base: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias + Cherryy";
		scope=2;
		displayName="[332nd] ARC Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (CR)";
		picture="332nd_Aux\Uniforms\Tex\Logo_Uniform.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARC_Base_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class 332nd_Uniform_Clone_CR_Veh;
	class 332nd_Uniform_ARC_Base_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARC_Base";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARC.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARC.paa",
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Fun_Op_Extended
        {
            label = "Fun Operations";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "ARC", "Commando",};
                changeingame = 0;
                alwaysSelectable = 1;
                class ARC
                {
                    label = "ARC";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Commando
                {
                    label = "Commando";
                    description = "With Zeus Approval";
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
        class 332nd_Uniform_ARC_Base
        {
            model = "332nd_Uniform_Fun_Op_Extended";
            Type = "ARC";
        };
        class 332nd_Uniform_Commando
        {
            model = "332nd_Uniform_Fun_Op_Extended";
            Type = "Commando";
        };
    };
};

