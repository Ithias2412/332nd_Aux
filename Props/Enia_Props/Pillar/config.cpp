class CfgPatches
{
	class 332nd_Enia_Pillar
	{
		units[] = {"332nd_Enia_Pillar"};
		requiredAddons[] = {"A3_Data_F","A3_Data_F_Tank_Loadorder","332nd_East_Enia_Faction"};
		weapons[] = {};
		version = 1;
		author = "Ithias";
	};
	
};

class CfgVehicles
{
	class Strategic;
	class 332nd_Enia_Pillar: Strategic
    {
		author = "Ithias";
        model = "332nd_Aux\Props\Enia_Props\Pillar\332nd_Enia_Pillar.p3d"; 
        displayName = "Pillar";
        editorCategory = "332nd_East_Enia_Subcategory";
		editorSubcategory = "332nd_Enia_Fortifications_Sand_Sub";
        //editorPreview = "CM_Main\Assets\theCube\theCube.jpg";
		vehicleClass = "Prop";
		faction = "prop";
        scope = 1;
        scopecurator = 2;
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Props\Enia_Props\Pillar\332nd_Enia_Pillar.paa",
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
    class 332nd_Enia_Fortifications_Sand_Sub
    {
        displayName = "Fortifications (Sand)";
    };
};