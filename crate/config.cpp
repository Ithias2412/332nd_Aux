#include "cfgPatches.hpp"

class CfgVehicles
{
	class ReammoBox_F;
	class 332nd_Crate_New: ReammoBox_F
	{
		scope=2;
		scopecurator=2;
		model="crate\332_Crates.p3d";
		displayName="I like crate!";
		editorCategory="332nd_Crates";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"332nd_Aux\crate\tex\Crate_CO.paa"};
		faction="prop";
		maximumLoad=2000;
	};
	class 332nd_Crate_New_Medical: 332nd_Crate_New
	{
		displayName="I like crate, but medical!";
		model="crate\332_Crates.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"332nd_Aux\crate\tex\Crate_Medical_CO.paa"};
		
	};
	class 332nd_Crate_New_Ammo: 332nd_Crate_New
	{
		displayName="I like crate, but ammo";
		model="crate\332_Crates.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"332nd_Aux\crate\tex\Crate_Ammo_CO.paa"};
	};
	/* class 332nd_Crate_New_Medical: ReammoBox_F
	{
		scope=2;
		scopecurator=2;
		model="crate\332_Crates.p3d";
		displayName="I like crate, but medical!";
		editorCategory="332nd_Crates";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		faction="prop";
		maximumLoad=2000;
	}; */
	/* class 332nd_Crate_Alt_New: ReammoBox_F
	{
		scope=2;
		scopecurator=2;
		model="crate\332_Crates_Alt.p3d";
		displayName="I like crate but not a crate!";
		editorCategory="332nd_Crates";
		editorSubcategory="3AS_EditorSubcategory_Crates";
		faction="prop";
		maximumLoad=2000;
	}; */
};