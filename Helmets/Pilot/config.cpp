#include "..\..\332nd_Aux_Macros.hpp"
#define PILOT_HELM(NAME,DISP,TEX) class NAME: 332nd_Helmet_Pilot { displayName = DISP; hiddenSelectionsTextures[] = { TEX, }; };
class CfgPatches {
	class 332nd_Helmets_Pilot {
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
	class HeadgearItem;
	class ls_gar_phase2Pilot_helmet;

//Base Start
	class 332nd_Helmet_Pilot: ls_gar_phase2Pilot_helmet
	{
		scope=2;
		dlc="332nd Aux";
		author="Ithias";
		displayName="[332nd] Pilot Helmet";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot.paa",
		};
		model = "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		subItems[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel= "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1",
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 10;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor = 10;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	PILOT_HELM(332nd_Helmet_Pilot_Jorge, "[332nd] Pilot Helmet (Jorge)", "332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Jorge.paa")
	PILOT_HELM(332nd_Helmet_Pilot_Cosmos, "[332nd] Pilot Helmet (Cosmos)", "332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Cosmos.paa")
	PILOT_HELM(332nd_Helmet_Pilot_Gizmo, "[332nd] Pilot Helmet (Gizmo)", "332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Gizmo.paa")
	PILOT_HELM(332nd_Helmet_Pilot_Ghillie, "[332nd] Pilot Helmet (Ghillie)", "332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Ghillie.paa")
};

class XtdGearModels
{
    class CfgWeapons
    {
        class 332nd_Helmets_Pilot_Extended
        {
            label = "Pilot";
            author = "Ithias";
			options[] = { "Type", "Customs",};
            class Type
            {
                label = "Type";
				values[] = { "Pilot",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Pilot
                {
                    label = "Pilot";
                    description = "CXC+";
                    //image = "xxx";
                };
            };
            class Customs
            {
                label = "Customs";
				values[] =
				{
					"Jorge",
					"Cosmos",
					"Gizmo",
					"Ghillie",
				};
                changeingame = 0;
                alwaysSelectable = 1;
				class Jorge
                {
                    label = "Jorge";
                    description = "J-052";
                    //image = "xxx";
                };
				class Cosmos
                {
                    label = "Cosmos";
                    description = "Cosmo's*";
                    //image = "xxx";
                };
				class Gizmo
				{
                    label = "Gizmo";
                    description = "Condemned to changing a million pixels to grey";
                    //image = "xxx";
				};
				class Ghillie
				{
                    label = "Ghillie";
                    description = "Weewoo Light enjoyer";
                    //image = "xxx";
				};
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        XTD_INFO(332nd_Helmet_Pilot, "332nd_Helmets_Pilot_Extended", Type, "Pilot")
		XTD_INFO(332nd_Helmet_Pilot_Jorge, "332nd_Helmets_Pilot_Extended", Customs, "Jorge")
		XTD_INFO(332nd_Helmet_Pilot_Cosmos, "332nd_Helmets_Pilot_Extended", Customs, "Cosmos")
		XTD_INFO(332nd_Helmet_Pilot_Gizmo, "332nd_Helmets_Pilot_Extended", Customs, "Gizmo")
		XTD_INFO(332nd_Helmet_Pilot_Ghillie, "332nd_Helmets_Pilot_Extended", Customs, "Ghillie")
	};
};
