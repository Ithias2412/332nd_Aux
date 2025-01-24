class CfgPatches {
	class 332nd_Medical_Items {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Acti_Bandage_Weap",
			"332nd_Painkiller_Weap",
			"332nd_Bacta_Spray_Weap",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class ace_medical_treatment
{
    class Bandaging
    {
        class FieldDressing;
        class 332nd_Acti_Bandage: FieldDressing 
		{
			class Abrasion 
			{
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion 
			{
                effectiveness = 4;
            };
            class AbrasionMedium: Abrasion 
			{
                effectiveness = 3;
                reopeningChance = 0.9;
            };
            class AbrasionLarge: Abrasion 
			{
                effectiveness = 2.5;
                reopeningChance = 1;
            };

            class Avulsion: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion 
			{
                effectiveness = 2;
            };
            class AvulsionMedium: Avulsion 
			{
                effectiveness = 1.4;
            };
            class AvulsionLarge: Avulsion 
			{
                effectiveness = 1;
            };

            class Contusion: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush 
			{
                effectiveness = 2;
                reopeningChance = 0.6;
            };
            class CrushMedium: Crush 
			{
                effectiveness = 1.7;
                reopeningChance = 0.7;
            };
            class CrushLarge: Crush 
			{
                effectiveness = 1.6;
                reopeningChance = 0.8;
            };

            class Cut: Abrasion 
			{
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut 
			{
                effectiveness = 5;
                reopeningChance = 0.6;
            };
            class CutMedium: Cut 
			{
                effectiveness = 3.5;
                reopeningChance = 0.7;
            };
            class CutLarge: Cut 
			{
                effectiveness = 2;
                reopeningChance = 0.8;
            };

            class Laceration: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.65;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration 
			{
                effectiveness = 2;
                reopeningChance = 0.65;
            };
            class LacerationMedium: Laceration 
			{
                effectiveness = 1.5;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration 
			{
                effectiveness = 1;
                reopeningChance = 0.9;
            };

            class VelocityWound: Abrasion 
			{
                effectiveness = 2.2;
                reopeningChance = 1;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound 
			{
                effectiveness = 2.2;
            };
            class VelocityWoundMedium: VelocityWound 
			{
                effectiveness = 1.75;
            };
            class VelocityWoundLarge: VelocityWound 
			{
                effectiveness = 1.5;
            };

            class PunctureWound: Abrasion 
			{
                effectiveness = 2.5;
                reopeningChance = 1;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound 
			{
                effectiveness = 2.5;
            };
            class PunctureWoundMedium: PunctureWound 
			{
                effectiveness = 2;
            };
            class PunctureWoundLarge: PunctureWound 
			{
                effectiveness = 1.5;
            };
        };
        class 332nd_Bacta_Spray: 332nd_Acti_Bandage 
		{
			//NA
		};
    };
    class Medication
	{
		class Morphine;
        class 332nd_Painkiller: Morphine 
		{
            painReduce = 0.4;
			hrIncreaseLow[] = {0, 0};
			hrIncreaseNormal[] = {0, 0};
			hrIncreaseHigh[] = {0, 0};
            timeInSystem = 900;
            timeTillMaxEffect = 30;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };

	};
};

class ace_medical_treatment_actions
{
    class FieldDressing;
	class Morphine;

	class 332nd_Acti_Bandage: FieldDressing
	{
		displayName="[332nd] Acti Bandage";
        displayNameProgress = "STOP THAT BLEED TROOPER!";
		items[]=
		{
			"332nd_Acti_Bandage_Weap",
		};
	};
	class 332nd_Bacta_Spray: 332nd_Acti_Bandage
	{
		displayName="[332nd] Bacta Spray";
        displayNameProgress = "OH MY GOD IM OOOOOOOZING!";
		medicRequired = 1;
		items[]=
		{
			"332nd_Bacta_Spray_Weap",
			"332nd_Bacta_Spray_Weap",
			"332nd_Bacta_Spray_Weap",
		};
	};
	class 332nd_Painkiller: Morphine
	{
		displayName="[332nd] Painkiller";
        displayNameProgress = "Drugs are great for coping...";
        allowedSelections[] = {"Head"};
		items[]=
		{
			"332nd_Painkiller_Weap",
		};
	};
};

class cfgWeapons
{
    class ACE_fieldDressing;
    class ACE_morphine;
	class CBA_MiscItem_ItemInfo;

	class 332nd_Acti_Bandage_Weap: ACE_fieldDressing
	{
		scope=2;
		author="Ithias";
		displayName="[332nd] Acti Bandage";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 0.3;
        };
	};
	class 332nd_Bacta_Spray_Weap: 332nd_Acti_Bandage_Weap
	{
		scope=2;
		author="Ithias";
		displayName="[332nd] Bacta Spray";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 0.9;
        };
	};
	class 332nd_Painkiller_Weap: ACE_morphine
	{
		scope=2;
		author="Ithias";
		displayName="[332nd] Painkiller";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 0.5;
        };
	};
};