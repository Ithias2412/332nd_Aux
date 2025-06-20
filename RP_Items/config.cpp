class CfgPatches {
	class 332nd_RP_Items {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Droid_Voice_Modulator",
			"332nd_reconnaissance_Camping_Kit",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

//#include "xtdGear.hpp"

class cfgWeapons
{
    class ItemCore;
	class InventoryWeapon_Base_F;
	class 332nd_Droid_Voice_Modulator: ItemCore
	{
		scope=2;
		author="Ithias";
		displayName="[332nd] Droid Voice Modulator";
		descriptionShort = "Replicates the iconic Droid voice over radios";
		model = "\MRC\JLTS\contraband\Intel\trackingfob.p3d";
		picture = "\MRC\JLTS\contraband\Intel\data\ui\trackingfob_ui_ca.paa";
		type = 4096;
		simulation = "ItemMineDetector";
		detectRange = -1;
		class ItemInfo: InventoryWeapon_Base_F 
		{
			mass = 25;
        };
	};

	class 332nd_reconnaissance_Camping_Kit: 332nd_Droid_Voice_Modulator
	{
		displayName="[332nd] Reconnaissance Camping Kit";
		descriptionShort = "All the supplies needed to stay overnight in an AO";
		model = "\MRC\JLTS\weapons\Core\repairkit_mini.p3d";
		picture = "\MRC\JLTS\weapons\Core\data\ui\repairkit_mini_ui_ca.paa";
		class ItemInfo: InventoryWeapon_Base_F 
		{
			mass = 50;
        };
	};
};