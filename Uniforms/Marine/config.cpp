class CfgPatches {
	class 332nd_Uniforms_Marine {
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
	class SEA_Uniform_GM_Plastic_21;
	
// Uniform
class 332nd_Uniform_Marine_CT: SEA_Uniform_GM_Plastic_21
	{
		dlc="332nd";
		author="Cherryy + Ithias + Frankenburg";
		scope=2;
		displayName="[332nd] Hazardous Environment Armor";
		//displayName="[332nd] Hazardous Environment Armor (CT)";
		//picture="332nd_Aux\Uniforms\Tex\Logo_Uniform.paa";
		model = "JLTS_AE_GM\SEA_Uniform_GM_plastic.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Marine_CT_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	
class 332nd_Uniform_Marine_NCO: 332nd_Uniform_Marine_CT
	{
		dlc="332nd";
		author="Cherryy + Ithias + Frankenburg";
		scope=2;
		displayName="[332nd] Hazardous Environment Armor";
		//displayName="[332nd] Hazardous Environment Armor (NCO)";
		//picture="332nd_Aux\Uniforms\Tex\Logo_Uniform.paa";
		model = "JLTS_AE_GM\SEA_Uniform_GM_plastic.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Marine_NCO_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class SEA_GM_Base_21_Plastic;
	class 332nd_Uniform_Marine_CT_Veh: SEA_GM_Base_21_Plastic
	{
		scope=1;
		uniformClass="332nd_Uniform_Marine_CT";
		model = "JLTS_AE_GM\SEA_Uniform_GM_Plastic.p3d";
		class HitPoints
		{
			class HitAbdomen //vest
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				Name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitArms //vest
			{				
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				Name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitBody //vest
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
			class HitChest //vest
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitDiaphragm //vest
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitFace //helm
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitHands //vest
			{
				name = "hands";
				armor = 1;
				passThrough = 0.1;
				explosionShielding = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHead //helm
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
			class HitLeftArm //vest
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				visual = "injury_hands";
			};
			class HitLeftLeg //vest
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitLegs //vest
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class HitNeck //helm
			{
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitPelvis //vest
			{
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitRightArm //vest
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				visual = "injury_hands";
			};
			class HitRightLeg //vest
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia",
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Uniforms\Tex\332nd_Upper_Marine_CT.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Plastic\BodyLower_ca.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa",
		};
	};
	
	class 332nd_Uniform_Marine_NCO_Veh: SEA_GM_Base_21_Plastic
	{
		scope=1;
		uniformClass="332nd_Uniform_Marine_NCO";
		model = "JLTS_AE_GM\SEA_Uniform_GM_Plastic.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia",
		};
		hiddenSelectionsTextures[]=
		{
			"\332nd_Aux\Uniforms\Tex\332nd_Upper_Marine_NCO.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Plastic\BodyLower_ca.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa",
		};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Marine_Extended
        {
            label = "Hazardous Environment";
            author = "Ithias";
			options[] = { "Type", };
            class Type
            {
                label = "Type";
				values[] = { "Trooper", "NCO", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    //description = "Recruit";
                    //image = "xxx";
                };
				class NCO
                {
                    label = "NCO";
                    //description = "Trooper";
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
        class 332nd_Uniform_Marine_CT
        {
            model = "332nd_Uniform_Marine_Extended";
            Type = "Trooper";
        };
        class 332nd_Uniform_Marine_NCO
        {
            model = "332nd_Uniform_Marine_Extended";
            Type = "NCO";
        };
    };
};