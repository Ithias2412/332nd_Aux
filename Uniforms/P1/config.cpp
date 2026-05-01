class CfgPatches {
	class 332nd_Uniforms_P1 {
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
	class JLTS_CloneArmor;
	
// Uniform
	class 332nd_Uniform_Clone_CT_P1: JLTS_CloneArmor
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Trooper)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CT_P1_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Sgt: 332nd_Uniform_Clone_CT_P1
	{
		displayName="[332nd] Clone Trooper Armor (Squad Leader)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Sgt_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Lt: 332nd_Uniform_Clone_CT_P1
	{
		displayName="[332nd] Clone Trooper Armor (Platoon Leader)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Lt_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Cpt: 332nd_Uniform_Clone_CT_P1
	{
		displayName="[332nd] Clone Trooper Armor (Company Staff)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Cpt_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

};

class CfgVehicles
{
	class HitPoints;
	class JLTS_Clone_P2_DC15A;
	class 332nd_Uniform_Clone_CT_P1_Veh: JLTS_Clone_P2_DC15A
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CT_P1";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		/*
		hiddenSelectionsMaterials[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_clean.rvmat",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_clean.rvmat",
		};
		*/
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough = 0.8; 
				radius = 0.08; 
				explosionShielding=0.3;
				minimalHit = 0.01; 
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough = 0.8; 
				radius=0.1;
				explosionShielding=1.5;
				minimalHit = 0.01; 
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough = 0.8; 
				radius=0.2;
				explosionShielding=1.5;
				minimalHit = 0.01; 
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 16; 
				material=-1;
				name="pelvis";
				passThrough = 0.8; 
				radius = 0.24; 
				explosionShielding = 3; 
				visual="injury_body";
				minimalHit = 0.01; 
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 11;	
				material=-1;
				name="spine1";
				passThrough = 0.8;	
				radius=0.16;
				explosionShielding = 3;	
				visual="injury_body";
				minimalHit = 0.01;	
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 11; 
				material=-1;
				name="spine2";
				passThrough = 0.8; 
				radius = 0.18; 
				explosionShielding=6;
				visual="injury_body";
				minimalHit = 0.01; 
			};
			class HitChest: HitDiaphragm
			{
				armor = 11; 
				material=-1;
				name="spine3";
				passThrough = 0.8; 
				radius = 0.18; 
				explosionShielding=6;
				visual="injury_body";
				minimalHit = 0.01; 
			};
			class HitBody: HitChest
			{
				armor=1010;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 13; 
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3; 
				visual="injury_hands";
				minimalHit = 0.01; 
				depends="0";
			};
			class HitHands: HitArms
			{
				armor = 11; 
				material=-1;
				name="hands";
				passThrough = 0.1; 
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.01; 
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 13; 
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding = 3; 
				visual="injury_legs";
				minimalHit = 0.01; 
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding = 3; 
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 3; 
				material=-1;
				name="hand_l";
				passThrough=1;
				radius = 0.08; 
				explosionShielding=3;
				visual="injury_hands";
				minimalHit = 0.01; 
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 3; 
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3; 
				visual="injury_legs";
				minimalHit = 0.01; 
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};
	class 332nd_Uniform_Clone_Sgt_Veh: 332nd_Uniform_Clone_CT_P1_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Sgt";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_sergeant_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"
		};
	};
	class 332nd_Uniform_Clone_Lt_Veh: 332nd_Uniform_Clone_CT_P1_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Lt";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_lieutenant_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"
		};
	};
	class 332nd_Uniform_Clone_Cpt_Veh: 332nd_Uniform_Clone_CT_P1_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Cpt";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_captain_armor1_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"
		};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class 332nd_Uniform_P1_Extended
		{
			label = "P1 Uniforms";
			author = "Ithias";
			options[] = { "P1", };
			class P1
			{
				label = "Phase 1";
				values[] = { "CT", "SL", "PL", "CO",};
				changeingame = 0;
				alwaysSelectable = 1;
				class CT
				{
					label = "CT";
					description = "CR+";
					//image = "xxx";
				};
				class SL
				{
					label = "SL";
					description = "Squad Leader";
					//image = "xxx";
				};
				class PL
				{
					label = "PL";
					description = "Platoon Leader";
					//image = "xxx";
				};
				class CO
				{
					label = "CO";
					description = "Company Staff";
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
		class 332nd_Uniform_Clone_CT_P1
		{
			model = "332nd_Uniform_P1_Extended";
			P1 = "CT";
		};
		class 332nd_Uniform_Clone_Sgt
		{
			model = "332nd_Uniform_P1_Extended";
			P1 = "SL";
		};
		class 332nd_Uniform_Clone_Lt
		{
			model = "332nd_Uniform_P1_Extended";
			P1 = "PL";
		};
		class 332nd_Uniform_Clone_Cpt
		{
			model = "332nd_Uniform_P1_Extended";
			P1 = "CO";
		};
	}; 
};