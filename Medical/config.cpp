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
            "332nd_Plasma_2000_Weap",
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
            class Abrasion { effectiveness = 8; reopeningChance = 0.6; reopeningMinDelay = 800; reopeningMaxDelay = 1500; };
            class AbrasionMinor: Abrasion { effectiveness = 8; };
            class AbrasionMedium: Abrasion { effectiveness = 6; reopeningChance = 0.9; };
            class AbrasionLarge: Abrasion { effectiveness = 5; reopeningChance = 1; };

            class Avulsion: Abrasion { effectiveness = 4; reopeningChance = 0.7; reopeningMinDelay = 1000; reopeningMaxDelay = 1600; };
            class AvulsionMinor: Avulsion { effectiveness = 4; };
            class AvulsionMedium: Avulsion { effectiveness = 2.8; };
            class AvulsionLarge: Avulsion { effectiveness = 2; };

            class Contusion: Abrasion { effectiveness = 4; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0; };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion { effectiveness = 4; reopeningChance = 0.5; reopeningMinDelay = 600; reopeningMaxDelay = 1000; };
            class CrushMinor: Crush { effectiveness = 4; reopeningChance = 0.6; };
            class CrushMedium: Crush { effectiveness = 3.4; reopeningChance = 0.7; };
            class CrushLarge: Crush { effectiveness = 3.2; reopeningChance = 0.8; };

            class Cut: Abrasion { effectiveness = 10; reopeningChance = 0.4; reopeningMinDelay = 700; reopeningMaxDelay = 1000; };
            class CutMinor: Cut { effectiveness = 10; reopeningChance = 0.6; };
            class CutMedium: Cut { effectiveness = 7; reopeningChance = 0.7; };
            class CutLarge: Cut { effectiveness = 4; reopeningChance = 0.8; };

            class Laceration: Abrasion { effectiveness = 4; reopeningChance = 0.65; reopeningMinDelay = 500; reopeningMaxDelay = 2000; };
            class LacerationMinor: Laceration { effectiveness = 4; reopeningChance = 0.65; };
            class LacerationMedium: Laceration { effectiveness = 3; reopeningChance = 0.8; };
            class LacerationLarge: Laceration { effectiveness = 2; reopeningChance = 0.9; };

            class VelocityWound: Abrasion { effectiveness = 4.4; reopeningChance = 1; reopeningMinDelay = 800; reopeningMaxDelay = 2000; };
            class VelocityWoundMinor: VelocityWound { effectiveness = 4.4; };
            class VelocityWoundMedium: VelocityWound { effectiveness = 3.5; };
            class VelocityWoundLarge: VelocityWound { effectiveness = 3; };

            class PunctureWound: Abrasion { effectiveness = 5; reopeningChance = 1; reopeningMinDelay = 1000; reopeningMaxDelay = 3000; };
            class PunctureWoundMinor: PunctureWound { effectiveness = 5; };
            class PunctureWoundMedium: PunctureWound { effectiveness = 4; };
            class PunctureWoundLarge: PunctureWound { effectiveness = 3; };
		};
    };
    class IV
    {
        class PlasmaIV;
        class 332nd_Plasma_2000: PlasmaIV
        {
            volume = 2000;           // 2000ml
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
		/*
        class 332nd_Franks_Jungle_Juice
        {
            painReduce = 0.5;
			hrIncreaseLow[] = {10,40};
			hrIncreaseNormal[] = {10,40};
			hrIncreaseHigh[] = {10,30};
			timeInSystem = 150;
			timeTillMaxEffect = 15;
			maxDose = 4;
            dose = 1;
			incompatibleMedication[] = {};
			viscosityChange = 0;
        };
        class 332nd_Zagustin
        {
            painReduce = 0;
			hrIncreaseLow[] = {-5,-15};
			hrIncreaseNormal[] = {-5,-20};
			hrIncreaseHigh[] = {-5,-25};
			timeInSystem = 120;
			timeTillMaxEffect = 20;
			maxDose = 3;
            dose = 1;
			incompatibleMedication[] = {};
			viscosityChange = 50
        };
		*/
	};
};

class ace_medical_treatment_actions
{
    class FieldDressing;
	class Morphine;
	class ApplyTourniquet;
	class RemoveTourniquet;
    class PlasmaIV;
	/*
    class BasicInjector: Morphine
	{
		treatmentLocations = 0;
		litter[] = {{"ACE_MedicalLitter_adenosine"}};
		treatmentTime = 5;
		allowSelfTreatment = 1;
		condition = "";
		consumeItem = 1;
		medicRequired = 0;
	};
	*/
	class 332nd_Acti_Bandage: FieldDressing
	{
		displayName="Acti Bandage";
        displayNameProgress = "Wrapping Acti Bandage";
		items[]=
		{
			"332nd_Acti_Bandage_Weap",
		};
		treatmentTime = 8;
	};
	class 332nd_Bacta_Spray: 332nd_Acti_Bandage
	{
		displayName="Bacta Spray";
        displayNameProgress = "Oozing Bacta Spray";
		medicRequired = 1;
		consumeItem = 0;
		items[]=
		{
			"332nd_Bacta_Spray_Weap",
		};
		treatmentTime = 6;
	};
	class 332nd_Painkiller: Morphine
	{
		displayName="Painkiller";
        displayNameProgress = "Snorting Painkiller";
        allowedSelections[] = {"Head"};
		items[]=
		{
			"332nd_Painkiller_Weap",
		};
		treatmentTime = 6;
	};
    class 332nd_Plasma_2000: PlasmaIV
    {
		displayName = "Give Plasma IV (2000ml)";
		items[] =
		{
			"332nd_Plasma_2000_Weap"
		};
    };
	/*
    class 332nd_Franks_Jungle_Juice: BasicInjector
    {
        displayName="[332nd] Frank's Jungle Juice";
        displayNameProgress = "Time to get fucked up!";
        allowedSelections[] = {"Head"};
        items[]=
        {
            "332nd_Franks_Jungle_Juice_Weap",
        };
    };
    class 332nd_Zagustin: BasicInjector
    {
        displayName="[332nd] Za Gustin";
        displayNameProgress = "Please stop bleeding.";
        allowedSelections[] = {"Head"};
        items[]=
        {
            "332nd_Zagustin_Weap",
        };
    };
	*/
};

class cfgWeapons
{
    class ACE_fieldDressing;
    class ACE_morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_PlasmaIV;
	class ACE_tourniquet;
	/*
    class 332nd_Franks_Jungle_Juice_Weap: ACE_morphine
    {
        scope=2;
        author="Frankie";
        displayName="[332nd] Frank's Jungle Juice";
        descriptionShort = "A special blend of chemicals to help you get through the day.";
        descriptionUse = "Time to get fucked up!";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.5;
        };
    };
    class 332nd_Zagustin_Weap: ACE_morphine
    {
        scope=2;
        author="Frankie";
        displayName="[332nd] Za Gustin";
        descriptionShort = "Please stop bleeding.";
        descriptionUse = "Oh shit, oh fuck.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.5;
        };
    };
	*/
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
			mass = 15;
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
    class 332nd_Plasma_2000_Weap: ACE_PlasmaIV
    {
        displayName = "Plasma IV (500ml)";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 20;           // adjust weight as needed
        };
    };
};