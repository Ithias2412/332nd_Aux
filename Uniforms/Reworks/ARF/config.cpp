class CfgPatches {
	class 332nd_Uniforms_ARF {
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
	class 332nd_Uniform_ARF_Desert: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] ARF Trooper Armor (Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Desert_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_ARF_Urban: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] ARF Trooper Armor (Urban)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Urban_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_ARF_Winter: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] ARF Trooper Armor (Winter)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Winter_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_ARF_Woodland: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] ARF Trooper Armor (Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Woodland_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

};

class CfgVehicles
{
	class 332nd_Uniform_Clone_CR_Veh;
	class 332nd_Uniform_ARF_Desert_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARF_Desert";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Desert_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Desert_JLTS.paa",
		};
		camouflage = 0.1;
	};
	class 332nd_Uniform_ARF_Urban_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARF_Urban";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Urban_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Urban_JLTS.paa",
		};
		camouflage = 0.1;
	};
	class 332nd_Uniform_ARF_Winter_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARF_Winter";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Winter_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Winter_JLTS.paa",
		};
		camouflage = 0.1;
	};
	class 332nd_Uniform_ARF_Woodland_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARF_Woodland";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Woodland_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Woodland_JLTS.paa",
		};
		camouflage = 0.1;
	};

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_ARF_Extended
        {
            label = "ARF";
            author = "Ithias";
			options[] = { "Camo", };
            class Camo
            {
                label = "Camo";
				values[] = { "Desert", "Urban", "Winter", "Woodland", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Desert
                {
                    label = "Desert";
                    //description = "Recruit";
                    //image = "xxx";
                };
				class Urban
                {
                    label = "Urban";
                    //description = "Trooper";
                    //image = "xxx";
                };
                class Winter
                {
                    label = "Winter";
                    //description = "Senior Trooper";
                    //image = "xxx";
                };
                class Woodland
                {
                    label = "Woodland";
                    //description = "Veteran Trooper";
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
        class 332nd_Uniform_ARF_Desert
        {
            model = "332nd_Uniform_ARF_Extended";
            Camo = "Desert";
        };
        class 332nd_Uniform_ARF_Urban
        {
            model = "332nd_Uniform_ARF_Extended";
            Camo = "Urban";
        };
        class 332nd_Uniform_ARF_Winter
        {
            model = "332nd_Uniform_ARF_Extended";
            Camo = "Winter";
        };
        class 332nd_Uniform_ARF_Woodland
        {
            model = "332nd_Uniform_ARF_Extended";
            Camo = "Woodland";
        };
    };
};