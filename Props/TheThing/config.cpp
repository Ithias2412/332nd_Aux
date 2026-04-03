class CfgPatches
{
	class 332nd_Thing
	{
		units[] = {"332nd_Thing"};
		requiredAddons[] = {"A3_Data_F","3AS_Terrain_Universal","A3_Data_F_Tank_Loadorder"};
		weapons[] = {};
		version = 1;
		fileName = "the thing";
		author = "Cosmos";
	};
	
};
class CfgVehicles
{
	class 3AS_Prop_Base;
	class 332nd_Thing: 3AS_Prop_Base
    {
        model = "332nd_Aux\Props\TheThing\Thing.p3d"; 
        displayName = "the thing";
        editorCategory = "332nd_Thing_Test_Cat";
		editorSubcategory = "332nd_Thing_Test_Sub";
        //editorPreview = "CM_Main\Assets\theCube\theCube.jpg";
		vehicleClass = "Prop";
        scope = 2;
        scopecurator = 2;
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Props\TheThing\Thing.paa",
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
    };
};

class CfgEditorSubcategories
{
    class 332nd_Thing_Test_Sub
    {
        displayName = "Thing";
    };
};

class CfgEditorCategories
{
	class 332nd_Thing_Test_Cat
	{
		displayName = "[332nd] Thing"; 
	};
};