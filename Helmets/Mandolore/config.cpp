#include "..\..\332nd_Aux_Macros.hpp"
#define MANDO_HELM(NAME,DISP,TEX) class NAME: 332nd_Helmet_Neo_Crusader_RM { author = "Ithias"; displayName = DISP; hiddenSelectionsTextures[] = { TEX }; };
class CfgPatches
{
	class 332nd_Helmet_Butch_Deloria_Mandolore
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
	class SFA_Revanite_Battler_Helmet;
	class SFA_Neo_Crusader_Helmet_RM;
	class HeadgearItem;

// Uniform
	class 332nd_Helmet_Revanite_Battler: SFA_Revanite_Battler_Helmet
	{
		author="Ithias";
		displayName="[Butch Deloria] Revanite Battler helmet";
	};
	class 332nd_Helmet_Neo_Crusader_RM: SFA_Neo_Crusader_Helmet_RM
	{
		author="Ithias";
		displayName="[Butch Deloria] Neo-Crusader Rally Master Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel = "SFA_Main\SFA_Equipment_N\Mandalorians\Neo\Neo_Helmet.p3d";
			hiddenSelections[] = {"camo1"};
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
	MANDO_HELM(332nd_Helmet_Neo_Crusader_FM, "[Butch Deloria] Neo-Crusader Field Marshal Helmet", "SFA_Main\SFA_Equipment_N\Mandalorians\Neo\data\Neo_Helmet_FM_co.paa")
	MANDO_HELM(332nd_Helmet_Neo_Crusader_Vet, "[Butch Deloria] Neo-Crusader Veteran Helmet", "SFA_Main\SFA_Equipment_N\Mandalorians\Neo\data\Neo_Helmet_Vet_co.paa")
	MANDO_HELM(332nd_Helmet_Neo_Crusader, "[Butch Deloria] Neo-Crusader Helmet", "SFA_Main\SFA_Equipment_N\Mandalorians\Neo\data\Neo_Helmet_blue_co.paa")
};
