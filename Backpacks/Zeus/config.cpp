class CfgPatches 
{
	class 332nd_Backpacks_Zeus
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
	class 332nd_Radio;

//Base Items


	class 332nd_Zeus_Backpack: 332nd_Radio
	{
		displayName="[332nd] Naval Radio Pouches";
		model = "3AS\3AS_Characters_Imperial\Vests\Model\3AS_Stormtrooper_vest_addons.p3d";
		hiddenSelections[] = 
		{
			"camo_pouldron",
			"camo_bandolier",
			"camo_mudguard",
			"camo_ammo_shoulder",
			"camo_ammo_belt"
		};
		hiddenSelectionsTextures[] = 
		{
			"",
			"",
			"",
			"",
			"3AS\3AS_Characters_Imperial\Vests\data\Ammo_Pack_Belt\Ammo_Pack_2_co.paa"
		};
	};
};

class XtdGearModels
{
    class CfgVehicles
    {
        class 332nd_Zeus_Backpack_Extended
        {
            label = "Naval Radios";
            author = "Ithias";
			options[] = {"Type", };
            class Type
            {
                label = "Type";
				values[] = { "Radio", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Radio
                {
                    label = "Radio Pouches";
					//description = "";
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
        class 332nd_Zeus_Backpack
        {
            model = "332nd_Zeus_Backpack_Extended";
            Type = "Radio";
        };
    };
};