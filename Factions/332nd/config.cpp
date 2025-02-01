class CfgPatches {
	class 332nd_Faction_Config {
		units[] = 
        {
			"",
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"

class cfgFactionClasses
{
	class 332nd_Faction
	{
		icon="";
		displayName="332nd";
		side=1;
		priority=1;
	};
    class 332nd_Droids_Faction {
        displayName = "332nd Auxiliary Droids";
        priority = 2;
        side = 0; // OPFOR
    };
};

class CfgEditorCategories
{
	class 332nd_EditorCategory
	{
		displayName="332nd";
	};
    class 332nd_Droids_Subcategory {
        displayName = "332nd Auxiliary Droids";  // This will appear in the Eden Editor under the Units section
    };
};