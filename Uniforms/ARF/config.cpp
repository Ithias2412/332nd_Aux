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
    class UniformItem;
	class 332nd_Uniform_Clone_CR;
	
// Uniform
	class 332nd_Uniform_ARF_Base: 332nd_Uniform_Clone_CR
	{
		displayName="[332nd] ARF Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Base_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_ARF_Base_activeCamo: 332nd_Uniform_Clone_CR
	{
		scope=1;
		displayName="[332nd] ARF Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_ARF_Base_Veh_activeCamo";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Asuka: 332nd_Uniform_Clone_CR
	{
		displayName="[332nd] Clone Trooper Armor (Asuka)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Asuka_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Asuka_activeCamo: 332nd_Uniform_Clone_CR
	{
		scope = 1;
		displayName="[332nd] Clone Trooper Armor (Asuka)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Asuka_Veh_activeCamo";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Aztec: 332nd_Uniform_Clone_CR
	{
		displayName="[332nd] Clone Trooper Armor (Aztec)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Aztec_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Aztec_activeCamo: 332nd_Uniform_Clone_CR
	{
		scope = 1;
		displayName="[332nd] Clone Trooper Armor (Aztec)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Aztec_Veh_activeCamo";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Butch: 332nd_Uniform_Clone_CR
	{
		displayName="[332nd] Clone Trooper Armor (Butch)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Butch_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Butch_activeCamo: 332nd_Uniform_Clone_CR
	{
		scope = 1;
		displayName="[332nd] Clone Trooper Armor (Butch)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Butch_Veh_activeCamo";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_ARF_Desert: 332nd_Uniform_Clone_CR
	{
		scope=1;
		displayName="[332nd] ARF Trooper Armor (Desert)";
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
		scope=1;
		displayName="[332nd] ARF Trooper Armor (Urban)";
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
		scope=1;
		displayName="[332nd] ARF Trooper Armor (Winter)";
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
		scope=1;
		displayName="[332nd] ARF Trooper Armor (Woodland)";
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
	class 332nd_Uniform_ARF_Base_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_ARF_Base";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa",
		};
		camouflage = 0.1;
	};
	class 332nd_Uniform_ARF_Base_Veh_activeCamo: 332nd_Uniform_ARF_Base_Veh
	{
		uniformClass="332nd_Uniform_ARF_Base_activeCamo";
		hiddenSelectionsTextures[] = 
		{
            "\ls\core\addons\data\textures\blank_ca.paa",
            "\ls\core\addons\data\textures\blank_ca.paa",
		};
		hiddenSelectionsMaterials[] = 
		{
            "\ls\core\addons\data\materials\activeCamo.rvmat",
            "\ls\core\addons\data\materials\activeCamo.rvmat",
		};
	};
	class 332nd_Uniform_Clone_Asuka_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Asuka";
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Asuka.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Asuka.paa",
		};
	};
	class 332nd_Uniform_Clone_Asuka_Veh_activeCamo: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Asuka_activeCamo";
		hiddenSelectionsTextures[] = 
		{
            "\ls\core\addons\data\textures\blank_ca.paa",
            "\ls\core\addons\data\textures\blank_ca.paa",
		};
		hiddenSelectionsMaterials[] = 
		{
            "\ls\core\addons\data\materials\activeCamo.rvmat",
            "\ls\core\addons\data\materials\activeCamo.rvmat",
		};
	};
	class 332nd_Uniform_Clone_Aztec_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Aztec";
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Aztec.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Aztec.paa",
		};
	};
	class 332nd_Uniform_Clone_Aztec_Veh_activeCamo: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Aztec_activeCamo";
		hiddenSelectionsTextures[] = 
		{
            "\ls\core\addons\data\textures\blank_ca.paa",
            "\ls\core\addons\data\textures\blank_ca.paa",
		};
		hiddenSelectionsMaterials[] = 
		{
            "\ls\core\addons\data\materials\activeCamo.rvmat",
            "\ls\core\addons\data\materials\activeCamo.rvmat",
		};
	};
	class 332nd_Uniform_Clone_Butch_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Butch";
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Butch.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Butch.paa",
		};
	};
	class 332nd_Uniform_Clone_Butch_Veh_activeCamo: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Butch_activeCamo";
		hiddenSelectionsTextures[] = 
		{
            "\ls\core\addons\data\textures\blank_ca.paa",
            "\ls\core\addons\data\textures\blank_ca.paa",
		};
		hiddenSelectionsMaterials[] = 
		{
            "\ls\core\addons\data\materials\activeCamo.rvmat",
            "\ls\core\addons\data\materials\activeCamo.rvmat",
		};
	};
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
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Desert.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Desert.paa",
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
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Urban.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Urban.paa",
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
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Winter.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Winter.paa",
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
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_ARF_Woodland.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_ARF_Woodland.paa",
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
			options[] = 
			{
				"Default",
				"Camo",
				"Customs",
			};
            class Default
            {
                label = "Default";
				values[] = { "Trooper"};
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Recruit";
                    //image = "xxx";
                };
            };
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
            class Customs
            {
                label = "Customs";
				values[] = 
				{
					"Asuka",
					"Aztec",
					"Butch",
				};
                changeingame = 0;
                alwaysSelectable = 1;
                class Asuka
                {
                    label = "Asuka";
					description = "Not Broke";
                    //image = "xxx";
                };
                class Aztec
                {
                    label = "Aztec";
					description = "Men Impregnater";
                    //image = "xxx";
                };
                class Butch
                {
                    label = "Butch";
					description = "The one and only Butch Deloria";
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
        class 332nd_Uniform_ARF_Base
        {
            model = "332nd_Uniform_ARF_Extended";
            Default = "Trooper";
        };
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
        class 332nd_Uniform_Clone_Asuka
        {
            model = "332nd_Uniform_ARF_Extended";
            Customs = "Asuka";
        };
        class 332nd_Uniform_Clone_Aztec
        {
            model = "332nd_Uniform_ARF_Extended";
            Customs = "Aztec";
        };
        class 332nd_Uniform_Clone_Butch
        {
            model = "332nd_Uniform_ARF_Extended";
            Customs = "Butch";
        };
    };
};