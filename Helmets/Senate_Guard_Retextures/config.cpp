#include "..\..\332nd_Aux_Macros.hpp"
#define SG_HELM(NAME,PARENT,DISP,TEX) class NAME: PARENT { author = "Gizmo"; displayName = DISP; hiddenSelections[] = { "camo1" }; hiddenSelectionsTextures[] = { TEX }; };
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
	SG_HELM(332nd_Helmet_Body_Senate_Guard, JLTS_CloneHelmetSC_SC, "[Body] OPFOR Senate Helmet (Trooper)", "\332nd_Aux\Helmets\Tex\332nd_Clone_SCTrooper_helmet_co.paa")
	SG_HELM(332nd_Helmet_Body_Senate_Guard_Officer, JLTS_CloneHelmetSCC_SC, "[Body] OPFOR Senate Helmet (Officer)", "\332nd_Aux\Helmets\Tex\332nd_Clone_SCOfficer_helmet_co.paa")
	SG_HELM(332nd_Helmet_Body_Senate_Guard_Commander, JLTS_CloneHelmetSCC_SC, "[Body] OPFOR Senate Helmet (Commander)", "\332nd_Aux\Helmets\Tex\332nd_Clone_SCCommander_helmet_co.paa")
};
