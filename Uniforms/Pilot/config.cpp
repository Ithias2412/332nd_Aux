/*

class CfgPatches {
	class 332nd_Uniforms_Pilot {
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
class 332nd_Uniform_Clone_Asuka: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias + Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Asuka)";
		picture="332nd_Aux\Uniforms\Tex\Logo_Uniform.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Asuka_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

	class 332nd_Uniform_Clone_CX: 332nd_Uniform_Clone_CR {
        dlc = "332nd";
        author = "Ithias";
        scope = 2;
        displayName = "[332nd] Clone Trooper Armor (CX)";
        class ItemInfo: UniformItem {
            uniformClass = "332nd_Uniform_Clone_CX_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };

    class 332nd_Uniform_Clone_NCO_CX: 332nd_Uniform_Clone_CX {
        displayName = "[332nd] Clone Trooper Armor (NCO / CX)";
        class ItemInfo: UniformItem {
            uniformClass = "332nd_Uniform_Clone_NCO_CX_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
        };
    };
};

class CfgVehicles
{
	class 332nd_Uniform_Clone_CR_Veh;
	class 332nd_Uniform_Clone_Asuka_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Asuka";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Asuka.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Asuka.paa",
		};
	};
	class 332nd_Uniform_Clone_CX_Veh: 332nd_Uniform_Clone_CR_Veh {
        scope = 1;
        uniformClass = "332nd_Uniform_Clone_CX";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CX.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CX.paa"
        };
    };

    class 332nd_Uniform_Clone_NCO_CX_Veh: 332nd_Uniform_Clone_CR_Veh {
        uniformClass = "332nd_Uniform_Clone_NCO_CX";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CX_NCO.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CX_NCO.paa"
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Pilot_Extended
        {
            label = "Pilot";
            author = "Ithias";
			options[] = { "Customs", };
            class Customs
            {
                label = "Customs";
				values[] = { "Asuka", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Asuka
                {
                    label = "Asuka";
                    description = "MY PC!!!";
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
        class 332nd_Uniform_Clone_Asuka
        {
            model = "332nd_Uniform_Pilot_Extended";
            Customs = "Asuka";
        };
    };
};