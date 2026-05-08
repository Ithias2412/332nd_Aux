class CfgPatches 
{
	class 332nd_Uniforms_Body_Senate_Guard
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
	class UniformItem;
	class JLTS_CloneArmor_SC;
	
// Uniform
	class 332nd_Uniform_Clone_Body_Senate_Guard: JLTS_CloneArmor_SC
	{
		dlc="332nd";
		author="Gizmo";
		scope=2;
		displayName="[Body] OPFOR Senate Armor (Trooper)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Body_Senate_Guard_veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Body_Senate_Guard_Commander: 332nd_Uniform_Clone_Body_Senate_Guard
	{
		displayName="[Body] OPFOR Senate Armor (Commander)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Body_Senate_Guard_Commander_veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class HitPoints;
	class JLTS_Clone_P2_DC15A_SC;
	class 332nd_Uniform_Clone_Body_Senate_Guard_veh: JLTS_Clone_P2_DC15A_SC
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Body_Senate_Guard";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmorSC.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCTrooper_armor1_co.paa",
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCTrooper_armor2_co.paa",
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCTrooper_shoulder_co.paa",
		};
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
				armor = 14; //was 8
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
				armor = 9; //was 6
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
				armor = 9; //was 6
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
				armor = 12; //was 8
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
				armor = 9; //was 6
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
				armor = 9; //was 6
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
				armor = 9; //was 6
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
				armor = 9; //was 6
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
				armor = 9; //was 6
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
	class 332nd_Uniform_Clone_Body_Senate_Guard_Commander_veh: 332nd_Uniform_Clone_Body_Senate_Guard_veh
	{
		uniformClass="332nd_Uniform_Clone_Body_Senate_Guard_Commander";
		hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCCommander_armor1_co.paa",
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCCommander_armor2_co.paa",
			"\332nd_Aux\Uniforms\Tex\332nd_Clone_SCCommander_shoulder_co.paa",
		};
	};
};