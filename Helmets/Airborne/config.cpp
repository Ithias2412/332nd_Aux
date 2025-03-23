class CfgPatches {
	class 332nd_Helmets_AB {
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
    class ItemInfo;
	class HeadgearItem;
	class SWLB_clone_P2_helmet;
    class SWLB_clone_AB_helmet;
	class 332nd_AB_Base_Helmet: SWLB_clone_AB_helmet
	{
		author="Cherryy";
		scopeArsenal=0;
		side=1;
        picture="\lsd_armor_bluefor\helmet\_ui\icon_gar_airborne_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		displayname="[332nd] AB Helmet (Base)";
		visionMode[]=
		{
			"Normal"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_AB_Helmet_CT.paa"
		};
        class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
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
	class 332nd_Helmet_P2_CR: SWLB_clone_P2_helmet
	{};

	class 332nd_Helmet_JT_CT: 332nd_Helmet_P2_CR
	{
		displayName="[332nd] P2 Helmet (Jump Trooper)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_JT.paa"
		};
	};
    class 332nd_Airborne_Helmet_CT: 332nd_AB_Base_Helmet
    {
        displayName="[332nd] AB Helmet (CT)";
		picture="\lsd_armor_bluefor\helmet\_ui\icon_gar_airborne_helmet_ca.paa";
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_AB_Helmet_CT.paa"
		};
    }
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_AB_Extended
        {
            label = "Airborne / JT Helmets";
            author = "Cherryy";
			options[] = { "Type",};
            class Type
            {
                label = "Type";
				values[] = { "JumpTrooper", "Airborne",};
                changeingame = 0;
                alwaysSelectable = 1;
				class JumpTrooper
                {
                    label = "Jump Trooper";
                    description = "CT+";
                    //image = "xxx";
                };
                class Airborne
                {
                    label = "Airborne";
                    description = "CT+";
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
        class 332nd_Helmet_JT_CT
        {
            model = "332nd_Helmets_AB_Extended";
            Type = "JumpTrooper";
        };
        class 332nd_Airborne_Helmet_CT
        {
            model = "332nd_Helmets_AB_Extended";
            Type = "Airborne";
        };
	};
};

