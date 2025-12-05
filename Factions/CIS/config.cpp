class CfgPatches 
{
    class 332nd_CIS_Faction
	{
        author = "Frank";
        name = "332nd Aux CIS";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {};
    };
};

class cfgFactionClasses
{
	class 332nd_CIS_Faction 
	{
		displayName = "[332nd] CIS";
		priority = 2;
		side = 0; // OPFOR
	};
	class 332nd_CIS_Geonosis_Faction 
	{
		displayName = "[332nd] CIS (Geonosis)";
		priority = 2;
		side = 0; // OPFOR
	};
};

class CfgEditorCategories
{
	class 332nd_CIS_Subcategory 
	{
		displayName = "[332nd] CIS";  // This will appear in the Eden Editor under the Units section
	};
};