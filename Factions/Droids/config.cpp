class CfgPatches 
{
    class 332nd_Droid_Faction
	{
        author = "Frank";
        name = "332nd Aux Droids";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {};
    };
};

class cfgFactionClasses
{
    class 332nd_Droids_Faction 
	{
        displayName = "332nd Auxiliary Droids";
        priority = 2;
        side = 0; // OPFOR
    };
};

class CfgEditorCategories
{
    class 332nd_Droids_Subcategory 
	{
        displayName = "332nd Auxiliary Droids";  // This will appear in the Eden Editor under the Units section
    };
};