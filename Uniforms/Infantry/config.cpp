#include "..\..\332nd_Aux_Macros.hpp"
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
	class UniformItem;
	class JLTS_CloneArmor;

// Uniform
	class 332nd_Uniform_Clone_CR: JLTS_CloneArmor
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (JLTS)";
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
	UNI_ITEM(332nd_Uniform_Clone_CT, "332nd_Uniform_Clone_CT_Veh", "[332nd] Clone Trooper Armor (JLTS)")
	UNI_ITEM(332nd_Uniform_Clone_SCT, "332nd_Uniform_Clone_SCT_Veh", "[332nd] Clone Trooper Armor (JLTS)")
	UNI_ITEM(332nd_Uniform_Clone_CT_Medic, "332nd_Uniform_Clone_CT_Medic_Veh", "[332nd] Clone Trooper Armor (JLTS / Medic)")
	UNI_ITEM(332nd_Uniform_Clone_SCT_Medic, "332nd_Uniform_Clone_SCT_Medic_Veh", "[332nd] Clone Trooper Armor (JLTS / Medic)")
	UNI_ITEM(332nd_Uniform_Clone_Body, "332nd_Uniform_Clone_Body_Veh", "[332nd] Clone Trooper Armor (Body)")
	UNI_ITEM(332nd_Uniform_Clone_Grim, "332nd_Uniform_Clone_Grim_Veh", "[332nd] Clone Trooper Armor (Grim)")
	UNI_ITEM(332nd_Uniform_Clone_Warthog, "332nd_Uniform_Clone_Warthog_Veh", "[332nd] Clone Trooper Armor (Warthog)")
	UNI_ITEM(332nd_Uniform_Clone_Nate, "332nd_Uniform_Clone_Nate_Veh", "[332nd] Clone Trooper Armor (Nate)")
	UNI_ITEM(332nd_Uniform_Clone_Dovah, "332nd_Uniform_Clone_Dovah_Veh", "[332nd] Clone Trooper Armor (Dovah)")
	UNI_ITEM(332nd_Uniform_Clone_Aqua, "332nd_Uniform_Clone_Aqua_Veh", "[332nd] Clone Trooper Armor (Aqua)")
	UNI_ITEM(332nd_Uniform_Clone_Luci, "332nd_Uniform_Clone_Luci_Veh", "[332nd] Clone Trooper Armor (Luci)")
	UNI_ITEM(332nd_Uniform_Clone_Arson, "332nd_Uniform_Clone_Arson_Veh", "[332nd] Clone Trooper Armor (Arson)")
	UNI_ITEM(332nd_Uniform_Clone_Inu, "332nd_Uniform_Clone_Inu_Veh", "[332nd] Clone Trooper Armor (Inu)")
	UNI_ITEM(332nd_Uniform_Clone_Asuka, "332nd_Uniform_Clone_Asuka_Veh", "[332nd] Clone Trooper Armor (Asuka)")
	UNI_ITEM(332nd_Uniform_Clone_Ketamine, "332nd_Uniform_Clone_Ketamine_Veh", "[332nd] Clone Trooper Armor (Ketamine)")
	UNI_ITEM(332nd_Uniform_Clone_Walkie, "332nd_Uniform_Clone_Walkie_Veh", "[332nd] Clone Trooper Armor (Walkie)")
	UNI_ITEM(332nd_Uniform_Clone_Rat, "332nd_Uniform_Clone_Rat_Veh", "[332nd] Clone Trooper Armor (Rat)")
	UNI_ITEM(332nd_Uniform_Clone_Mouse, "332nd_Uniform_Clone_Mouse_Veh", "[332nd] Clone Trooper Armor (Mouse)")
	UNI_ITEM(332nd_Uniform_Clone_Frankenburg, "332nd_Uniform_Clone_Frankenburg_Veh", "[332nd] Clone Trooper Armor (Frankenburg)")
	UNI_ITEM(332nd_Uniform_Clone_Crow, "332nd_Uniform_Clone_Crow_Veh", "[332nd] Clone Trooper Armor (Crow)")
	UNI_ITEM(332nd_Uniform_Clone_Cherryy, "332nd_Uniform_Clone_Cherryy_Veh", "[332nd] Clone Trooper Armor (Cherryy)")
	UNI_ITEM(332nd_Uniform_Clone_Shuck, "332nd_Uniform_Clone_Shuck_Veh", "[332nd] Clone Trooper Armor (Shuck)")
	UNI_ITEM(332nd_Uniform_Clone_Trick, "332nd_Uniform_Clone_Trick_Veh", "[332nd] Clone Trooper Armor (Trick)")
	UNI_ITEM(332nd_Uniform_Clone_Shovie, "332nd_Uniform_Clone_Shovie_Veh", "[332nd] Clone Trooper Armor (Shovie)")
	UNI_ITEM(332nd_Uniform_Clone_Aztec, "332nd_Uniform_Clone_Aztec_Veh", "[332nd] Clone Trooper Armor (Aztec)")
	UNI_ITEM(332nd_Uniform_Clone_Lettuce, "332nd_Uniform_Clone_Lettuce_Veh", "[332nd] Clone Trooper Armor (Lettuce)")
	UNI_ITEM(332nd_Uniform_Clone_Whoops, "332nd_Uniform_Clone_Whoops_Veh", "[332nd] Clone Trooper Armor (Whoops)")
	UNI_ITEM(332nd_Uniform_Clone_Stryker, "332nd_Uniform_Clone_Stryker_Veh", "[332nd] Clone Trooper Armor (Stryker)")
	UNI_ITEM(332nd_Uniform_Clone_Roseiry, "332nd_Uniform_Clone_Roseiry_Veh", "[332nd] Clone Trooper Armor (Roseiry)")
	UNI_ITEM(332nd_Uniform_Clone_VB, "332nd_Uniform_Clone_VB_Veh", "[332nd] Clone Trooper Armor (VB)")
	UNI_ITEM(332nd_Uniform_Clone_Thym, "332nd_Uniform_Clone_Thym_Veh", "[332nd] Clone Trooper Armor (Thym)")
	UNI_ITEM(332nd_Uniform_Clone_Rode, "332nd_Uniform_Clone_Rode_Veh", "[332nd] Clone Trooper Armor (Rode)")
	UNI_ITEM(332nd_Uniform_Clone_Clari, "332nd_Uniform_Clone_Clari_Veh", "[332nd] Clone Trooper Armor (Clari)")
	UNI_ITEM(332nd_Uniform_Clone_Ithias, "332nd_Uniform_Clone_Ithias_Veh", "[332nd] Clone Trooper Armor (Ithias)")
	UNI_ITEM(332nd_Uniform_Clone_Joker, "332nd_Uniform_Clone_Joker_Veh", "[332nd] Clone Trooper Armor (Joker)")
	UNI_ITEM(332nd_Uniform_Clone_Crota, "332nd_Uniform_Clone_Crota_Veh", "[332nd] Clone Trooper Armor (Crota)")
	UNI_ITEM(332nd_Uniform_Clone_Cosmos, "332nd_Uniform_Clone_Cosmos_Veh", "[332nd] Clone Trooper Armor (Cosmos)")
	UNI_ITEM(332nd_Uniform_Clone_Fusion, "332nd_Uniform_Clone_Fusion_Veh", "[332nd] Clone Trooper Armor (Fusion)")
	UNI_ITEM(332nd_Uniform_Clone_Jorge, "332nd_Uniform_Clone_Jorge_Veh", "[332nd] Clone Trooper Armor (Jorge)")
	UNI_ITEM(332nd_Uniform_Clone_Crucial, "332nd_Uniform_Clone_Crucial_Veh", "[332nd] Clone Trooper Armor (Crucial)")
	UNI_ITEM(332nd_Uniform_Clone_Logan, "332nd_Uniform_Clone_Logan_Veh", "[332nd] Clone Trooper Armor (Logan)")
	UNI_ITEM(332nd_Uniform_Clone_Ahri, "332nd_Uniform_Clone_Ahri_Veh", "[332nd] Clone Trooper Armor (Ahri)")
	UNI_ITEM(332nd_Uniform_Clone_Rimuru, "332nd_Uniform_Clone_Rimuru_Veh", "[332nd] Clone Trooper Armor (Rimuru)")
	UNI_ITEM(332nd_Uniform_Clone_Icurus, "332nd_Uniform_Clone_Icurus_Veh", "[332nd] Clone Trooper Armor (Icurus)")
	UNI_ITEM(332nd_Uniform_Clone_Saiko, "332nd_Uniform_Clone_Saiko_Veh", "[332nd] Clone Trooper Armor (Saiko)")
	UNI_ITEM(332nd_Uniform_Clone_Coal, "332nd_Uniform_Clone_Coal_Veh", "[332nd] Clone Trooper Armor (Coal)")
	UNI_ITEM(332nd_Uniform_Clone_Villa, "332nd_Uniform_Clone_Villa_Veh", "[332nd] Clone Trooper Armor (Villa)")
	UNI_ITEM(332nd_Uniform_Clone_Komrk, "332nd_Uniform_Clone_Komrk_Veh", "[332nd] Clone Trooper Armor (Komrk)")
	UNI_ITEM(332nd_Uniform_Clone_Wylder, "332nd_Uniform_Clone_Wylder_Veh", "[332nd] Clone Trooper Armor (Wylder)")
	UNI_ITEM(332nd_Uniform_Clone_Raven, "332nd_Uniform_Clone_Raven_Veh", "[332nd] Clone Trooper Armor (Raven)")
	UNI_ITEM(332nd_Uniform_Clone_Butch, "332nd_Uniform_Clone_Butch_Veh", "[332nd] Clone Trooper Armor (Butch)")
	UNI_ITEM(332nd_Uniform_Clone_Max, "332nd_Uniform_Clone_Max_Veh", "[332nd] Clone Trooper Armor (Max)")
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
		/* =======================================================
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
		======================================================= */
	};
	UNI_VEH(332nd_Uniform_Clone_CT_Veh, "332nd_Uniform_Clone_CT", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_SCT_Veh, "332nd_Uniform_Clone_SCT", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_CT_Medic_Veh, "332nd_Uniform_Clone_CT_Medic", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT_Medic.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_SCT_Medic_Veh, "332nd_Uniform_Clone_SCT_Medic", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT_Medic.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_Body_Veh, "332nd_Uniform_Clone_Body", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Body.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Body.paa")
	UNI_VEH(332nd_Uniform_Clone_Grim_Veh, "332nd_Uniform_Clone_Grim", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Grim.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Grim.paa")
	UNI_VEH(332nd_Uniform_Clone_Warthog_Veh, "332nd_Uniform_Clone_Warthog", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Warthog.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Warthog.paa")
	UNI_VEH(332nd_Uniform_Clone_Nate_Veh, "332nd_Uniform_Clone_Nate", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Nate.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Nate.paa")
	UNI_VEH(332nd_Uniform_Clone_Dovah_Veh, "332nd_Uniform_Clone_Dovah", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Dovah.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Dovah.paa")
	UNI_VEH(332nd_Uniform_Clone_Aqua_Veh, "332nd_Uniform_Clone_Aqua", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Aqua.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Aqua.paa")
	UNI_VEH(332nd_Uniform_Clone_Luci_Veh, "332nd_Uniform_Clone_Luci", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Luci.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Luci.paa")
	UNI_VEH(332nd_Uniform_Clone_Arson_Veh, "332nd_Uniform_Clone_Arson", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Arson.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Arson.paa")
	UNI_VEH(332nd_Uniform_Clone_Inu_Veh, "332nd_Uniform_Clone_Inu", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Inu.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Inu.paa")
	UNI_VEH(332nd_Uniform_Clone_Asuka_Veh, "332nd_Uniform_Clone_Asuka", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Asuka.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Asuka.paa")
	UNI_VEH(332nd_Uniform_Clone_Ketamine_Veh, "332nd_Uniform_Clone_Ketamine", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Ketamine.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Ketamine.paa")
	UNI_VEH(332nd_Uniform_Clone_Walkie_Veh, "332nd_Uniform_Clone_Walkie", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Walkie.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Walkie.paa")
	UNI_VEH(332nd_Uniform_Clone_Rat_Veh, "332nd_Uniform_Clone_Rat", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Rat.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Rat.paa")
	UNI_VEH(332nd_Uniform_Clone_Mouse_Veh, "332nd_Uniform_Clone_Mouse", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Mouse.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Mouse.paa")
	UNI_VEH(332nd_Uniform_Clone_Frankenburg_Veh, "332nd_Uniform_Clone_Frankenburg", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Frankenburg.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Frankenburg.paa")
	UNI_VEH(332nd_Uniform_Clone_Crow_Veh, "332nd_Uniform_Clone_Crow", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Crow.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Crow.paa")
	UNI_VEH(332nd_Uniform_Clone_Cherryy_Veh, "332nd_Uniform_Clone_Cherryy", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Cherryy.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Cherryy.paa")
	UNI_VEH(332nd_Uniform_Clone_Shuck_Veh, "332nd_Uniform_Clone_Shuck", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Shuck.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Shuck.paa")
	UNI_VEH(332nd_Uniform_Clone_Trick_Veh, "332nd_Uniform_Clone_Trick", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Trick.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Trick.paa")
	UNI_VEH(332nd_Uniform_Clone_Shovie_Veh, "332nd_Uniform_Clone_Shovie", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Shovie.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Shovie.paa")
	UNI_VEH(332nd_Uniform_Clone_Aztec_Veh, "332nd_Uniform_Clone_Aztec", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Aztec.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Aztec.paa")
	UNI_VEH(332nd_Uniform_Clone_Lettuce_Veh, "332nd_Uniform_Clone_Lettuce", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Lettuce.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Lettuce.paa")
	UNI_VEH(332nd_Uniform_Clone_Whoops_Veh, "332nd_Uniform_Clone_Whoops", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Whoops.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Whoops.paa")
	UNI_VEH(332nd_Uniform_Clone_Stryker_Veh, "332nd_Uniform_Clone_Stryker", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Stryker.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Stryker.paa")
	UNI_VEH(332nd_Uniform_Clone_Roseiry_Veh, "332nd_Uniform_Clone_Roseiry", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Roseiry.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Roseiry.paa")
	UNI_VEH(332nd_Uniform_Clone_VB_Veh, "332nd_Uniform_Clone_VB", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_VB.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_VB.paa")
	UNI_VEH(332nd_Uniform_Clone_Thym_Veh, "332nd_Uniform_Clone_Thym", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Thym.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Thym.paa")
	UNI_VEH(332nd_Uniform_Clone_Rode_Veh, "332nd_Uniform_Clone_Rode", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Rode.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Rode.paa")
	UNI_VEH(332nd_Uniform_Clone_Clari_Veh, "332nd_Uniform_Clone_Clari", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Clari.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Clari.paa")
	UNI_VEH(332nd_Uniform_Clone_Ithias_Veh, "332nd_Uniform_Clone_Ithias", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Ithias.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_Joker_Veh, "332nd_Uniform_Clone_Joker", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Joker.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Joker.paa")
	UNI_VEH(332nd_Uniform_Clone_Crota_Veh, "332nd_Uniform_Clone_Crota", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Crota.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Crota.paa")
	UNI_VEH(332nd_Uniform_Clone_Cosmos_Veh, "332nd_Uniform_Clone_Cosmos", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Cosmos.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Cosmos.paa")
	UNI_VEH(332nd_Uniform_Clone_Fusion_Veh, "332nd_Uniform_Clone_Fusion", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Fusion.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Fusion.paa")
	UNI_VEH(332nd_Uniform_Clone_Jorge_Veh, "332nd_Uniform_Clone_Jorge", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Jorge.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Jorge.paa")
	UNI_VEH(332nd_Uniform_Clone_Crucial_Veh, "332nd_Uniform_Clone_Crucial", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Crucial.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Crucial.paa")
	UNI_VEH(332nd_Uniform_Clone_Logan_Veh, "332nd_Uniform_Clone_Logan", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Logan.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Logan.paa")
	UNI_VEH(332nd_Uniform_Clone_Ahri_Veh, "332nd_Uniform_Clone_Ahri", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Ahri.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Ahri.paa")
	UNI_VEH(332nd_Uniform_Clone_Rimuru_Veh, "332nd_Uniform_Clone_Rimuru", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Rimuru.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Rimuru.paa")
	UNI_VEH(332nd_Uniform_Clone_Icurus_Veh, "332nd_Uniform_Clone_Icurus", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Icurus.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Icurus.paa")
	UNI_VEH(332nd_Uniform_Clone_Saiko_Veh, "332nd_Uniform_Clone_Saiko", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Saiko.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Saiko.paa")
	UNI_VEH(332nd_Uniform_Clone_Coal_Veh, "332nd_Uniform_Clone_Coal", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Coal.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Coal.paa")
	UNI_VEH(332nd_Uniform_Clone_Villa_Veh, "332nd_Uniform_Clone_Villa", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Villa.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa")
	UNI_VEH(332nd_Uniform_Clone_Komrk_Veh, "332nd_Uniform_Clone_Komrk", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Komrk.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Komrk.paa")
	UNI_VEH(332nd_Uniform_Clone_Wylder_Veh, "332nd_Uniform_Clone_Wylder", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Wylder.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Wylder.paa")
	UNI_VEH(332nd_Uniform_Clone_Raven_Veh, "332nd_Uniform_Clone_Raven", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Raven.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Raven.paa")
	UNI_VEH(332nd_Uniform_Clone_Butch_Veh, "332nd_Uniform_Clone_Butch", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Butch.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Butch.paa")
	UNI_VEH(332nd_Uniform_Clone_Max_Veh, "332nd_Uniform_Clone_Max", "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Max.paa", "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Max.paa")
};

class XtdGearModels
{
	class CfgWeapons
	{
		class 332nd_Uniform_Extended
		{
			label = "Uniforms";
			author = "Ithias";
			options[] = { "Trooper", "Medic", "Customs", };
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
			class Customs
			{
				label = "Customs";
				values[] = 
				{
					"Ithias", 
					"Cherryy", 
					"Crow", 
					"Ghost", 
					"Asuka", 
					"Frankenburg", 
					"Seelig",
					"Trick", 
					"Joker",
					"Denal", 
					"Walkie",
					"Cin", 
					"Body", 
					"Tokyo", 
					"Stryker", 
					"Dovah", 
					"Shark", 
					"Aqua", 
					"Ketamine",
					"Lettuce",
					"Grim", 
					"Warthog", 
					"Nate",
					"Luci",
					"Arson",
					"Inu",
					"Rat",
					"Mouse",
					"Shuck",
					"Shovie",
					"Aztec",
					"Whoops",
					"Roseiry",
					"VB",
					"Thym",
					"Rode",
					"Clari",
					"Crota",
					"Cosmos",
					"Fusion",
					"Jorge",
					"Crucial",
					"Logan",
					"Ahri",
					"Rimuru",
					"Icurus",
					"Saiko",
					"Coal",
					"Villa",
					"Komrk",
					"Wylder",
					"Raven",
					"Butch",
					"Max",
				};
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
					description = "Remade his custom 4 times";
					//image = "xxx";
				};
				class Crow
				{
					label = "Crow";
					description = "On a List Somewhere 2x";
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
					description = "Not Broke";
					//image = "xxx";
				};
				class Frankenburg
				{
					label = "Frankenburg";
					description = "S-7 Slave";
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
					description = "BWA BWA Actual";
					//image = "xxx";
				};
				class Grim
				{
					label = "Grim";
					description = "Named Ghoul";
					//image = "xxx";
				};
				class Warthog
				{
					label = "Warthog";
					description = "Khorn Enthusiast";
					//image = "xxx";
				};
				class Nate
				{
					label = "Nate";
					description = "Warthog's #1 Hater";
					//image = "xxx";
				};
				class Luci
				{
					label = "Luci";
					description = "DC-15LE Enjoyer";
					//image = "xxx";
				};
				class Arson
				{
					label = "Arson";
					description = "Abtholutely dethpicable";
					//image = "xxx";
				};
				class Inu
				{
					label = "Inu";
					description = "RAHHHHHHHHHHHHHH I LOVE WAR";
					//image = "xxx";
				};
				class Rat
				{
					label = "Rat";
					description = "SATURDAY IS DRINKING DAY!!!";
					//image = "xxx";
				};
				class Mouse
				{
					label = "Mouse";
					description = "Hates Quebec";
					//image = "xxx";
				};
				class Shuck
				{
					label = "Shuck";
					description = "Unc Status";
					//image = "xxx";
				};
				class Shovie
				{
					label = "Shovie";
					description = "JROTC Warrior";
					//image = "xxx";
				};
				class Aztec
				{
					label = "Aztec";
					description = "Men Impregnater";
					//image = "xxx";
				};
				class Whoops
				{
					label = "Whoops";
					description = "Will friendly fire you";
					//image = "xxx";
				};
				class Roseiry
				{
					label = "Roseiry";
					description = "Fun Police / Webtoon Enjoyer";
					//image = "xxx";
				};
				class VB
				{
					label = "VB";
					description = "Medic Mommy";
					//image = "xxx";
				};
				class Thym
				{
					label = "Thym";
					description = "Very big updates, very good updates, but not for this armor";
					//image = "xxx";
				};
				class Rode
				{
					label = "Rode";
					description = "This bad boy can fit so many crayons";
					//image = "xxx";
				};
				class Clari
				{
					label = "Clari";
					description = "Zesty Clone";
					//image = "xxx";
				};
				class Crota
				{
					label = "Crota";
					description = "Son of Oryx";
					//image = "xxx";
				};
				class Cosmos
				{
					label = "Cosmos";
					description = "CAGmos";
					//image = "xxx";
				};
				class Fusion
				{
					label = "Fusion";
					description = "Avalonian";
					//image = "xxx";
				};
				class Jorge
				{
					label = "Jorge";
					description = "Is into Frieren a little too much";
					//image = "xxx";
				};
				class Crucial
				{
					label = "Crucial";
					description = "Jailer from DbD";
					//image = "xxx";
				};
				class Logan
				{
					label = "Logan";
					description = "Never got Ilvl for raid";
					//image = "xxx";
				};
				class Ahri
				{
					label = "Ahri";
					description = "L*ague of L*gends Reference";
					//image = "xxx";
				};
				class Rimuru
				{
					label = "Rimuru";
					description = "Reincarnated as a Chud";
					//image = "xxx";
				};
				class Icurus
				{
					label = "Icurus";
					description = "Company's biggest opposition";
					//image = "xxx";
				};
				class Saiko
				{
					label = "Saiko";
					description = "Leeroy Enthusiast";
					//image = "xxx";
				};
				class Coal
				{
					label = "Coal";
					description = "King Chud";
					//image = "xxx";
				};
				class Villa
				{
					label = "Villa";
					description = "BWA BWA";
					//image = "xxx";
				};
				class Komrk
				{
					label = "Komrk";
					description = "Missing a vowel";
					//image = "xxx";
				};
				class Wylder
				{
					label = "Wylder";
					description = "John Dark Souls";
					//image = "xxx";
				};
				class Raven
				{
					label = "Raven";
					description = "Hex 2.0";
					//image = "xxx";
				};
				class Butch
				{
					label = "Butch";
					description = "The one and only Butch Deloria";
					//image = "xxx";
				};
				class Max
				{
					label = "Max";
					description = "Opposite of Min";
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
		XTD_INFO(332nd_Uniform_Clone_CR, "332nd_Uniform_Extended", Trooper, "CR")
		XTD_INFO(332nd_Uniform_Clone_CT, "332nd_Uniform_Extended", Trooper, "CT")
		XTD_INFO(332nd_Uniform_Clone_SCT, "332nd_Uniform_Extended", Trooper, "SCT")
		XTD_INFO(332nd_Uniform_Clone_CT_Medic, "332nd_Uniform_Extended", Medic, "CT")
		XTD_INFO(332nd_Uniform_Clone_SCT_Medic, "332nd_Uniform_Extended", Medic, "SCT")
		XTD_INFO(332nd_Uniform_Clone_Body, "332nd_Uniform_Extended", Customs, "Body")
		XTD_INFO(332nd_Uniform_Clone_Grim, "332nd_Uniform_Extended", Customs, "Grim")
		XTD_INFO(332nd_Uniform_Clone_Warthog, "332nd_Uniform_Extended", Customs, "Warthog")
		XTD_INFO(332nd_Uniform_Clone_Nate, "332nd_Uniform_Extended", Customs, "Nate")
		XTD_INFO(332nd_Uniform_Clone_Dovah, "332nd_Uniform_Extended", Customs, "Dovah")
		XTD_INFO(332nd_Uniform_Clone_Aqua, "332nd_Uniform_Extended", Customs, "Aqua")
		XTD_INFO(332nd_Uniform_Clone_Luci, "332nd_Uniform_Extended", Customs, "Luci")
		XTD_INFO(332nd_Uniform_Clone_Arson, "332nd_Uniform_Extended", Customs, "Arson")
		XTD_INFO(332nd_Uniform_Clone_Inu, "332nd_Uniform_Extended", Customs, "Inu")
		XTD_INFO(332nd_Uniform_Clone_Asuka, "332nd_Uniform_Extended", Customs, "Asuka")
		XTD_INFO(332nd_Uniform_Clone_Ketamine, "332nd_Uniform_Extended", Customs, "Ketamine")
		XTD_INFO(332nd_Uniform_Clone_Walkie, "332nd_Uniform_Extended", Customs, "Walkie")
		XTD_INFO(332nd_Uniform_Clone_Rat, "332nd_Uniform_Extended", Customs, "Rat")
		XTD_INFO(332nd_Uniform_Clone_Mouse, "332nd_Uniform_Extended", Customs, "Mouse")
		XTD_INFO(332nd_Uniform_Clone_Frankenburg, "332nd_Uniform_Extended", Customs, "Frankenburg")
		XTD_INFO(332nd_Uniform_Clone_Crow, "332nd_Uniform_Extended", Customs, "Crow")
		XTD_INFO(332nd_Uniform_Clone_Cherryy, "332nd_Uniform_Extended", Customs, "Cherryy")
		XTD_INFO(332nd_Uniform_Clone_Shuck, "332nd_Uniform_Extended", Customs, "Shuck")
		XTD_INFO(332nd_Uniform_Clone_Shovie, "332nd_Uniform_Extended", Customs, "Shovie")
		XTD_INFO(332nd_Uniform_Clone_Aztec, "332nd_Uniform_Extended", Customs, "Aztec")
		XTD_INFO(332nd_Uniform_Clone_Trick, "332nd_Uniform_Extended", Customs, "Trick")
		XTD_INFO(332nd_Uniform_Clone_Lettuce, "332nd_Uniform_Extended", Customs, "Lettuce")
		XTD_INFO(332nd_Uniform_Clone_Whoops, "332nd_Uniform_Extended", Customs, "Whoops")
		XTD_INFO(332nd_Uniform_Clone_Stryker, "332nd_Uniform_Extended", Customs, "Stryker")
		XTD_INFO(332nd_Uniform_Clone_Roseiry, "332nd_Uniform_Extended", Customs, "Roseiry")
		XTD_INFO(332nd_Uniform_Clone_VB, "332nd_Uniform_Extended", Customs, "VB")
		XTD_INFO(332nd_Uniform_Clone_Thym, "332nd_Uniform_Extended", Customs, "Thym")
		XTD_INFO(332nd_Uniform_Clone_Rode, "332nd_Uniform_Extended", Customs, "Rode")
		XTD_INFO(332nd_Uniform_Clone_Clari, "332nd_Uniform_Extended", Customs, "Clari")
		XTD_INFO(332nd_Uniform_Clone_Ithias, "332nd_Uniform_Extended", Customs, "Ithias")
		XTD_INFO(332nd_Uniform_Clone_Joker, "332nd_Uniform_Extended", Customs, "Joker")
		XTD_INFO(332nd_Uniform_Clone_Crota, "332nd_Uniform_Extended", Customs, "Crota")
		XTD_INFO(332nd_Uniform_Clone_Cosmos, "332nd_Uniform_Extended", Customs, "Cosmos")
		XTD_INFO(332nd_Uniform_Clone_Fusion, "332nd_Uniform_Extended", Customs, "Fusion")
		XTD_INFO(332nd_Uniform_Clone_Jorge, "332nd_Uniform_Extended", Customs, "Jorge")
		XTD_INFO(332nd_Uniform_Clone_Crucial, "332nd_Uniform_Extended", Customs, "Crucial")
		XTD_INFO(332nd_Uniform_Clone_Logan, "332nd_Uniform_Extended", Customs, "Logan")
		XTD_INFO(332nd_Uniform_Clone_Ahri, "332nd_Uniform_Extended", Customs, "Ahri")
		XTD_INFO(332nd_Uniform_Clone_Rimuru, "332nd_Uniform_Extended", Customs, "Rimuru")
		XTD_INFO(332nd_Uniform_Clone_Icurus, "332nd_Uniform_Extended", Customs, "Icurus")
		XTD_INFO(332nd_Uniform_Clone_Saiko, "332nd_Uniform_Extended", Customs, "Saiko")
		XTD_INFO(332nd_Uniform_Clone_Coal, "332nd_Uniform_Extended", Customs, "Coal")
		XTD_INFO(332nd_Uniform_Clone_Villa, "332nd_Uniform_Extended", Customs, "Villa")
		XTD_INFO(332nd_Uniform_Clone_Komrk, "332nd_Uniform_Extended", Customs, "Komrk")
		XTD_INFO(332nd_Uniform_Clone_Wylder, "332nd_Uniform_Extended", Customs, "Wylder")
		XTD_INFO(332nd_Uniform_Clone_Raven, "332nd_Uniform_Extended", Customs, "Raven")
		XTD_INFO(332nd_Uniform_Clone_Butch, "332nd_Uniform_Extended", Customs, "Butch")
		XTD_INFO(332nd_Uniform_Clone_Max, "332nd_Uniform_Extended", Customs, "Max")
	};
};