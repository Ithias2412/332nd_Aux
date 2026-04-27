class CfgPatches
{
	class 332nd_Dathomir_House
	{
		units[] = {"332nd_Dathomir_House"};
		requiredAddons[] = {"A3_Data_F","A3_Data_F_Tank_Loadorder"};
		weapons[] = {};
		version = 1;
		author = "Ithias";
	};
	
};

class CfgVehicles
{
	class Strategic;
	class 332nd_Dathomir_House: Strategic
    {
		author = "Ithias";
        model = "332nd_Aux\Props\Dathomir\House\332nd_Dathomir_House.p3d"; 
        displayName = "Small House";
        editorCategory = "332nd_Dathomir_Subcategory";
		editorSubcategory = "332nd_Dathomir_Buildings_Sub";
        //editorPreview = "CM_Main\Assets\theCube\theCube.jpg";
		vehicleClass = "Prop";
		faction = "prop";
        scope = 2;
        scopecurator = 2;
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Props\Dathomir\House\332nd_Dathomir_House.paa",
		};
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.13;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//
		destrType = "DestructNo";
		eden = 1;
		editorPreview = "";
		placement = "vertical";
		//
    };
};

class CfgEditorSubcategories
{
    class 332nd_Dathomir_Buildings_Sub
    {
        displayName = "Buildings";
    };
};

class CfgEditorCategories
{
    class 332nd_Dathomir_Subcategory 
	{
        displayName = "[332nd] Dathomir";
    };
};