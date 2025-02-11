class CfgPatches 
{
	class 332nd_Faction_Uniforms_CIS_Human 
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
    class ItemInfo;
    class UniformItem;
	class 3AS_U_CIS_Light_Armor;
	
// Uniform
class 332nd_Uniform_CIS_Human_Light: 3AS_U_CIS_Light_Armor
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] CIS Light Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_CIS_Human_Light_Veh";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
};

class CfgVehicles
{
	class 3AS_U_CIS_Light;
	class HitPoints;
	class 332nd_Uniform_CIS_Human_Light_Veh: 3AS_U_CIS_Light
	{
		scope=1;
		uniformClass="332nd_Uniform_CIS_Human_Light";
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				depends = "";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				depends = "";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms: HitBody
			{
				armor = 6;
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 6;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				depends = "0";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 3;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
			class HitLeftArm
			{
				armor = 6;
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				visual = "injury_hands";
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				explosionShielding = 3;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};	
		};
	};
};