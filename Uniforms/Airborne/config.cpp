class CfgPatches {
	class 332nd_AB_Uniforms {
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
	class SWLB_clone_uniform;
	
// Uniform
    class 332nd_Uniform_Clone_CR: SWLB_clone_uniform
	{};

    class 332nd_Uniform_Clone_CT_AB: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Airborne / CT)";
		//displayName="[332nd] Clone Trooper Armor (CT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CT_AB_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
   /*  class 332nd_Uniform_Clone_SCT_AB: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Airborne / SCT)";
		//displayName="[332nd] Clone Trooper Armor (CT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_SCT_AB_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
    class 332nd_Uniform_Clone_VCT_AB: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Airborne / VCT)";
		//displayName="[332nd] Clone Trooper Armor (CT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_VCT_AB_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
    class 332nd_Uniform_Clone_Med_AB: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Airborne / Medic)";
		//displayName="[332nd] Clone Trooper Armor (CT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Med_AB_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	}; */
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class HitPoints;
	class 332nd_Uniform_Clone_CR_Veh: SWLB_clone_base_P2
	{};

    class 332nd_Uniform_Clone_CT_AB_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CT_AB";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT_AB.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa",
		};
	};
    /* class 332nd_Uniform_Clone_SCT_AB_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_SCT_AB";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT_AB.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_SCT.paa",
		};
	};
    class 332nd_Uniform_Clone_VCT_AB_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_VCT_AB";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_VCT_AB.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_VCT.paa",
		};
	};
    class 332nd_Uniform_Clone_Med_AB_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Med_AB";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Medic_AB.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_Medic",
		};
	}; */
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_AB_Extended
        {
            label = "Airborne Uniforms";
            author = "Cherryy";
			options[] = { "Trooper", /* "Medic", */};
            class Trooper
            {
                label = "Trooper";
				values[] = { "CT", /* "SCT", "VCT", "NCO", */ };
                changeingame = 0;
                alwaysSelectable = 1;
				class CT
                {
                    label = "CT";
                    description = "Trooper";
                    //image = "xxx";
                };
                /* class SCT
                {
                    label = "SCT";
                    description = "Senior Trooper";
                    //image = "xxx";
                };
                class VCT
                {
                    label = "VCT";
                    description = "Veteran Trooper";
                    //image = "xxx";
                };
                class NCO
                {
                    label = "NCO";
                    description = "Leadership";
                    //image = "xxx";
                }; */
            }; 
            /* class Medic
            {
                label = "Medic";
                values[] = { "CT", "MedicNCO" };
                changeingame = 0;
                alwaysSelectable = 1;
				class CT
                {
                    label = "CT";
                    description = "Trooper";
                    //image = "xxx";
                };
				class MedicNCO
				{
					label = "NCO";
					description = "Leadership";
					//image = "xxx";
				};
            }; */
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Clone_CT_AB
        {
            model = "332nd_Uniform_AB_Extended";
            Trooper = "CT";
        };
      /*   class 332nd_Uniform_Clone_SCT_AB
        {
            model = "332nd_Uniform_AB_Extended";
            Trooper = "SCT";
        };
        class 332nd_Uniform_Clone_VCT_AB
        {
            model = "332nd_Uniform_AB_Extended";
            Trooper = "VCT";
        };
        class 332nd_Uniform_Clone_Med_AB
        {
            model = "332nd_Uniform_AB_Extended";
            Trooper = "Med";
        }; */
    };
}; 