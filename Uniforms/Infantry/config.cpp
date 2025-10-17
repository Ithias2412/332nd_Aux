class CfgPatches {
	class 332nd_Uniforms {
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
	class JLTS_CloneArmor;
	
// Uniform
	class 332nd_Uniform_Clone_CR: JLTS_CloneArmor
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="New! [332nd] Clone Trooper Armor (JLTS)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CR_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_CT: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] Clone Trooper Armor (JLTS)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CT_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_SCT: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] Clone Trooper Armor (JLTS)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_SCT_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_CT_Medic: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] Clone Trooper Armor (JLTS / Medic)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CT_Medic_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_SCT_Medic: 332nd_Uniform_Clone_CR
	{
		displayName="New! [332nd] Clone Trooper Armor (JLTS / Medic)";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_SCT_Medic_Veh";
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
	class 332nd_Uniform_Clone_CR_Veh: JLTS_Clone_P2_DC15A
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CR";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
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
				armor = 6; 
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
				armor = 1;	
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
				armor = 1; 
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
				armor = 1; 
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
				armor=1000;
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
				armor = 3; 
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
				armor = 1; 
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
				armor = 3; 
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
	class 332nd_Uniform_Clone_CT_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CT";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_JLTS.paa",
		};
	};
	class 332nd_Uniform_Clone_SCT_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_SCT";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_JLTS.paa",
		};
	};
	class 332nd_Uniform_Clone_CT_Medic_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CT_Medic";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT_Medic_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_JLTS.paa",
		};
	};
	class 332nd_Uniform_Clone_SCT_Medic_Veh: 332nd_Uniform_Clone_CR_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_SCT_Medic";
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT_Medic_JLTS.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_JLTS.paa",
		};
	};

};

class XtdGearModels
{
	class CfgWeapons 
	{
		class 332nd_Uniform_Extended
		{
			label = "Uniforms";
			author = "Ithias";
			options[] = { "Trooper", "Medic", /* "Zeus", */ "Customs", };
			class Trooper
			{
				label = "Trooper";
				values[] = { "CR", "CT", "SCT", "VCT", "NCO", };
				changeingame = 0;
				alwaysSelectable = 1;
				class CR
				{
					label = "CR";
					description = "Recruit";
					//image = "xxx";
				};
				class CT
				{
					label = "CT";
					description = "Trooper";
					//image = "xxx";
				};
				class SCT
				{
					label = "SCT";
					description = "Senior Trooper";
					//image = "xxx";
				};
				class VCT
				{
					label = "VCT";
					description = "Veteran Trooper";
					//image = "xxx";
				};
				class NCO
				{
					label = "NCO";
					description = "Leadership";
					//image = "xxx";
				};
			};
			class Medic
			{
				label = "Medic";
				values[] = { "CT", "SCT", "VCT", "MedicNCO" };
				changeingame = 0;
				alwaysSelectable = 1;
				class CT
				{
					label = "CT";
					description = "Trooper";
					//image = "xxx";
				};
				class SCT
				{
					label = "SCT";
					description = "Senior Trooper";
					//image = "xxx";
				};
				class VCT
				{
					label = "VCT";
					description = "Veteran Trooper";
					//image = "xxx";
				};
				class MedicNCO
				{
					label = "NCO";
					description = "Leadership";
					//image = "xxx";
				};
			};
		/*	class Zeus
			{
				label = "Zeus";
				values[] = { "Zeus","ZeusNCO", };
				changeingame = 0;
				alwaysSelectable = 1;
				class Zeus
				{
					label = "CPO";
					description = "Zeus";
					//image = "xxx";
				};
				class ZeusNCO
				{
					label = "CMDR";
					description = "Zeus";
					//image = "xxx";
				};
			}; */
			class Customs
			{
				label = "Customs";
				values[] = { "Ithias", "Cherryy", "Crow", "Ghost", "Asuka", "Frankenburg", "Seelig", "Trick", "Joker","Denal", "Walkie","Cin", "Body", "Tokyo", "Stryker", "Dovah", "Shark", "Aqua", "Ketamine", "Lettuce"};
				changeingame = 0;
				alwaysSelectable = 1;
				class Ithias
				{
					label = "Ithias";
					description = "His weiner is 10 ft long";
					//image = "xxx";
				};
				class Cherryy
				{
					label = "Cherryy";
					description = "Remade his custom 3 times";
					//image = "xxx";
				};
				class Crow
				{
					label = "Crow";
					description = "On a List Somewhere";
					//image = "xxx";
				};
				class Ghost
				{
					label = "Ghost";
					description = "IDA Enjoyer";
					//image = "xxx";
				};
				class Asuka
				{
					label = "Asuka";
					description = "Sucks at Destiny";
					//image = "xxx";
				};
				class Frankenburg
				{
					label = "Frankenburg";
					description = "Aux Mod Slave";
					//image = "xxx";
				};  
				class Seelig
				{
					label = "Seelig";
					description = "Delayed forever";
					//image = "xxx";
				}; 
				class Trick
				{
					label = "Trick";
					description = "He's a scary phantom";
					//image = "xxx";
				}; 
				class Joker
				{
					label = "Joker";
					description = "Not the original";
					//image = "xxx";
				}; 
				class Denal
				{
					label = "Denal";
					description = "Discovered a new spider";
					//image = "xxx";
				};
				class Walkie
				{
					label = "Walkie";
					description = "Walkie Texas Ranger";
					//image = "xxx";
				};
				class Cin
				{
					label = "Cin";
					description = "Something something 9-Line";
					//image = "xxx";
				};
				class Body
				{
					label = "Body";
					description = "Master of Lego's";
					//image = "xxx";
				};
				class Tokyo
				{ 
					label = "Tokyo";
					description = "VR Chat Enthusiast";
					//image = "xxx";
				};
				class Stryker
				{
					label = "Stryker";
					description = "Ithias's E-Kitten";
					//image = "xxx";
				};
				class Dovah
				{
					label = "Dovah";
					description = "Proffesional Achoholic";
					//image = "xxx";
				};
				class Shark
				{
					label = "Shark";
					description = "Resident Suicide Squad";
					//image = "xxx";
				};
				class Aqua
				{
					label = "Aqua";
					description = "Aqua Vilde";
					//image = "xxx";
				};
				class Ketamine
				{
					label = "Ketamine";
					description = "Obtained illegally";
					//image = "xxx";
				};
				class Lettuce
				{
					label = "Lettuce";
					description = "Cardboard Desk";
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
		class 332nd_Uniform_Clone_CR
		{
			model = "332nd_Uniform_Extended";
			Trooper = "CR";
		};
		class 332nd_Uniform_Clone_CT
		{
			model = "332nd_Uniform_Extended";
			Trooper = "CT";
		};
		class 332nd_Uniform_Clone_SCT
		{
			model = "332nd_Uniform_Extended";
			Trooper = "SCT";
		};
		class 332nd_Uniform_Clone_CT_Medic
		{
			model = "332nd_Uniform_Extended";
			Medic = "CT";
		};
		class 332nd_Uniform_Clone_SCT_Medic
		{
			model = "332nd_Uniform_Extended";
			Medic = "SCT";
		};
	}; 
};