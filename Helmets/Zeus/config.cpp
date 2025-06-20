class CfgPatches {
	class 332nd_Helmets_Zeus {
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
	class JMSLLTE_EmpOfficerCap2_green_helmet;

//Base Start
	class 332nd_Helmet_Zeus: JMSLLTE_EmpOfficerCap2_green_helmet 
	{
		author="Ithias";
		dlc="332nd Aux";
		displayName="[332nd] Naval Dress Cap";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformmodel = "JMSLLTE_empire_m\helmets\Officer_cap2.p3d";
			hiddenSelections[] = 
			{
				"Camo1"
			};
			modelSides[] = {6};
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
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Helmets_Zeus_Extended
        {
            label = "Naval Cap";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Cap", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Cap
                {
                    label = "Cap";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_Helmet_Zeus
        {
            model = "332nd_Helmets_Zeus_Extended";
            Type = "Cap";
        };
	};
};