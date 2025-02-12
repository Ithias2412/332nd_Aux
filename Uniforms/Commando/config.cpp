/*
class CfgPatches 
{
	class 332nd_Uniforms_Commando 
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

class CfgVehicles
{
    class B_Soldier_base_F;
	class B_Soldier_F: B_Soldier_base_F
	{
		class HitPoints;
	};
    
	class 3AS_Rep_Commando_base_F;
	class UniformInfo;
	class SlotsInfo;
    class 332nd_Rep_Commando_base_F: 3AS_Rep_Commando_base_F
    {
        displayName = "[332nd] Republic Commando";
        class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.3;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 12;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
        };
        hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Armor_Standard_CO.paa","\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"};
    };
    class 332nd_Rep_Commando_F: 332nd_Rep_Commando_base_F
	{
		scope = 2;
		displayName = "[332nd] Republic Commando";
		weapons[] = {"Throw","Put","3AS_DC17M_F"};
	};

    class 332nd_Katarn_Backpack_Base: 3AS_Katarn_Backpack_Base
    {
        model = "\3AS\3AS_Characters\Commando\3AS_Katarn_BackPack.p3d";
		displayName = "[332nd] Republic Katarn Backpack";
		picture = "3AS\3AS_Characters\Commando\data\UI\Katarn_Backpack_Unmarked_UI_ca.paa";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"};
    };

    class 332nd_B_Katarn_Backpack: 332nd_Katarn_Backpack_Base
    {
        scope = 2;
		displayName = "[332nd] Republic Katarn Backpack";
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"};
    };

};

class cfgWeapons
{
    class 332nd_U_Rep_Katarn_Armor: 3AS_U_Rep_Katarn_Armor
    {
        scope = 2;
        displayName = "[332nd] Republic Katarn Armor";
        tas_is_commando = 1;
		picture = "3AS\3AS_Characters\Commando\data\UI\Katarn_Uniform_Unmarked_UI_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "3AS_Rep_Commando_F";
			containerClass = "Supply150";
			mass = 40;
		};

    };

    class 332nd_Katarn_Helmet_Base: 3AS_Katarn_Helmet_Base
    {
        scope = 0;
		weaponPoolAvailable = 1;
		displayName = "[332nd] Republic Katarn Helmet";
		picture = "3AS\3AS_Characters\Commando\data\UI\Katarn_Helmet_Unmarked_UI_ca.paa";
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa","\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"};
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 15;
					passThrough = 0.5;
				};
			};
		};
		subItems[] = {"3AS_Katarn_Integrated_NVG_TI_F"};

    };
    class 3AS_H_Katarn_Helmet: 3AS_Katarn_Helmet_Base
	{
		scope = 2;
		displayName = "[332nd] Republic Katarn Helmet";
		hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa","\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"};
	};
};