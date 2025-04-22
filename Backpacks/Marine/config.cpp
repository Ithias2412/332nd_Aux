class CfgPatches 
{
	class 332nd_Backpacks 
	{
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles
{
	class SEA_Backpack_GM_Base;

//Base Items


	class 332nd_Marine_Backpack: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Marine Backpack";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=100;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack.paa",
		};
	};
	class 332nd_Marine_Backpack_AR: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Marine Backpack (AR)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack.paa",
		};
	};
	class 332nd_Marine_Backpack_AT: SEA_Backpack_GM_Base
	{
		author="Ithias";
		displayName="[332nd] Marine Backpack (AT)";
		model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		maximumLoad=200;
		mass=40;
		picture = "\332nd_Aux\Backpacks\Tex\Logo_Backpack.paa";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Backpacks\Tex\332nd_Marine_Backpack.paa",
		};
	};
};

class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Marine_Backpack_Extended
        {
            label = "Hazardes";
            author = "Ithias";
			options[] = {"Backpacks", };
            class Backpacks
            {
                label = "Backpacks";
				values[] = { "Rifleman", "AR", "AT", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Rifleman
                {
                    label = "Rifleman";
					//description = "";
                    //image = "xxx";
                };
				class AR
                {
                    label = "Auto-Rifleman";
                    description = "AR";
                    //image = "xxx";
                };
				class AT
                {
                    label = "Anti-Tank";
                    description = "AT";
                    //image = "xxx";
                };
            };
        };
	};
};

class XtdGearInfos
{
    class CfgVehicles
    {
        class 332nd_Marine_Backpack
        {
            model = "332nd_Marine_Backpack_Extended";
            Backpacks = "Rifleman";
        };
        class 332nd_Marine_Backpack_AR
        {
            model = "332nd_Marine_Backpack_Extended";
            Backpacks = "AR";
        };
        class 332nd_Marine_Backpack_AT
        {
            model = "332nd_Marine_Backpack_Extended";
            Backpacks = "AT";
        };
    };
};