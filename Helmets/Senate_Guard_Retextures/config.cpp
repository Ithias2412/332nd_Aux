class CfgPatches 
{
	class 332nd_Helmet_Body_Senate_Guard
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
	class JLTS_CloneHelmetSC_SC;
	class JLTS_CloneHelmetSCC_SC;
	
// Uniform
	class 332nd_Helmet_Body_Senate_Guard: JLTS_CloneHelmetSC_SC
	{
		author="Gizmo";
		displayName="[Body] OPFOR Senate Helmet (Trooper)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Helmets\Tex\332nd_Clone_SCTrooper_helmet_co.paa"
		};
	};
	class 332nd_Helmet_Body_Senate_Guard_Officer: JLTS_CloneHelmetSCC_SC
	{
		author="Gizmo";
		displayName="[Body] OPFOR Senate Helmet (Officer)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Helmets\Tex\332nd_Clone_SCOfficer_helmet_co.paa"
		};
	};
	class 332nd_Helmet_Body_Senate_Guard_Commander: JLTS_CloneHelmetSCC_SC
	{
		author="Gizmo";
		displayName="[Body] OPFOR Senate Helmet (Commander)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Helmets\Tex\332nd_Clone_SCCommander_helmet_co.paa"
		};
	};
};