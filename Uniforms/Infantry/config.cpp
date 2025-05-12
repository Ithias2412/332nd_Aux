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
	class SWLB_clone_uniform;
	
// Uniform
class 332nd_Uniform_Clone_CR: SWLB_clone_uniform
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (CR)";
		picture="332nd_Aux\Uniforms\Tex\Logo_Uniform.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
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
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (CT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
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
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (SCT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_SCT_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_VCT: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (VCT)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_VCT_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_CT_Medic: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (CT / Medic)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_CT_Veh_Medic";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_SCT_Medic: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (SCT / Medic)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_SCT_Veh_Medic";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_VCT_Medic: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (VCT / Medic)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_VCT_Veh_Medic";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_NCO_Medic: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
        displayName = "[332nd] Clone Trooper Armor (NCO / Medic)";
		//displayName="[332nd] Clone Trooper Armor (NCO / Medic)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_NCO_Veh_Medic";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_NCO: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor";
		//displayName="[332nd] Clone Trooper Armor (NCO)";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_NCO_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
/*
    class 332nd_Uniform_Clone_Zeus: 332nd_Uniform_Clone_CR {
        dlc = "332nd";
        author = "Ithias";
        scope = 2;
        displayName = "[332nd] Clone Trooper Armor (Zeus)";
        class ItemInfo: UniformItem {
            uniformClass = "332nd_Uniform_Clone_Zeus_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_Clone_NCO_Zeus: 332nd_Uniform_Clone_CR {
        displayName = "[332nd] Clone Trooper Armor (NCO / Zeus)";
        class ItemInfo: UniformItem {
            uniformClass = "332nd_Uniform_Clone_NCO_Zeus_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
        };
    };
*/
//Customs

class 332nd_Uniform_Clone_Ithias: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Ithias)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Ithias_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_Cherryy: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Cherryy)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Cherryy_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};

class 332nd_Uniform_Clone_Weaver: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Weaver)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Weaver_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Asuka: 332nd_Uniform_Clone_CR
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Weaver)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Asuka_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Frankenburg: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Frankenburg_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Crow: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Not Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Crow_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Seelig: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Seelig)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Seelig_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Spectre: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Spectre)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Spectre_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Joker: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Not Ithias";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Custom)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Joker_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
class 332nd_Uniform_Clone_Denal: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy & Denal";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Denal)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Denal_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Walkie: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Walkie)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Walkie_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
	class 332nd_Uniform_Clone_Cin: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Cin)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Cin_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	};
		/* class 332nd_Uniform_Clone_Peter: 332nd_Uniform_Clone_CR 
	{
		dlc="332nd";
		author="Cherryy";
		scope=2;
		displayName="[332nd] Clone Trooper Armor (Peter)";
		//displayName="[332nd] Clone Trooper Armor (Frankenburg)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Uniform_Clone_Peter_Veh";
			uniformType = "Neopren";
			containerClass="Supply50";
			mass=40;
		};
	}; */
};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class HitPoints;
	class 332nd_Uniform_Clone_CR_Veh: SWLB_clone_base_P2
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CR";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
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
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa",
		};
	};
class 332nd_Uniform_Clone_SCT_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_SCT";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_SCT.paa",
		};
	};

class 332nd_Uniform_Clone_VCT_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_VCT";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_VCT.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_VCT.paa",
		};
	};

class 332nd_Uniform_Clone_CT_Veh_Medic: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CT_Medic";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_CT_Medic.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT_Medic.paa",
		};
	};
class 332nd_Uniform_Clone_SCT_Veh_Medic: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_SCT_Medic";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_SCT_Medic.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_SCT_Medic.paa",
		};
	};

class 332nd_Uniform_Clone_VCT_Veh_Medic: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_VCT_Medic";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_VCT_Medic.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_VCT_Medic.paa",
		};
	};

    class 332nd_Uniform_Clone_NCO_Veh_Medic: 332nd_Uniform_Clone_CT_Veh 
	{
        uniformClass = "332nd_Uniform_Clone_NCO_Medic";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_NCO_Medic.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_NCO_Medic.paa"
        };
    };

class 332nd_Uniform_Clone_NCO_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_NCO";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_NCO.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_NCO.paa",
		};
	};
/*
	class 332nd_Uniform_Clone_Zeus_Veh: 332nd_Uniform_Clone_CT_Veh {
        scope = 1;
        uniformClass = "332nd_Uniform_Clone_Zeus";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Zeus.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Zeus.paa"
        };
    };

    class 332nd_Uniform_Clone_NCO_Zeus_Veh: 332nd_Uniform_Clone_CT_Veh {
        uniformClass = "332nd_Uniform_Clone_NCO_Zeus";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_NCO_Zeus.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_NCO_Zeus.paa"
        };
    };
*/
//Customs

class 332nd_Uniform_Clone_Ithias_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Ithias";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Ithias.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Ithias.paa",
		};
	};

class 332nd_Uniform_Clone_Cherryy_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Cherryy";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Cherryy.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Cherryy.paa",
		};
	};

class 332nd_Uniform_Clone_Weaver_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Weaver";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Weaver.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Weaver.paa",
		};
	};
class 332nd_Uniform_Clone_Asuka_Veh: 332nd_Uniform_Clone_CT_Veh
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Asuka";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Asuka.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Asuka.paa",
		};
	};
class 332nd_Uniform_Clone_Frankenburg_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Frankenburg";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Frankenburg.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Frankenburg.paa",
		};
	}; 
class 332nd_Uniform_Clone_Crow_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Crow";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Crow.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Crow.paa",
		};
	}; 
class 332nd_Uniform_Clone_Seelig_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Seelig";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Seelig.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Seelig.paa",
		};
	};
class 332nd_Uniform_Clone_Spectre_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Spectre";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Spectre.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Spectre.paa",
		};
	};
class 332nd_Uniform_Clone_Joker_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Joker";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Joker.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Joker.paa",
		};
	}; 
class 332nd_Uniform_Clone_Denal_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Denal";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Denal.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Denal.paa",
		};
	};
class 332nd_Uniform_Clone_Walkie_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Walkie";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Walkie.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Walkie.paa",
		};
	};
class 332nd_Uniform_Clone_Cin_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Cin";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Cin.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Cin.paa",
		};
	};
/* class 332nd_Uniform_Clone_Peter_Veh: 332nd_Uniform_Clone_CT_Veh 
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_Peter";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_Peter.paa",
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_Peter.paa",
		};
	}; */
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
				values[] = { "Ithias", "Cherryy", "Crow", "Weaver", "Asuka", "Frankenburg", "Seelig", "Spectre", "Joker","Denal", "Walkie","Cin",};
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
				class Weaver
                {
                    label = "Weaver";
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
				class Spectre
                {
                    label = "Spectre";
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
				/* class Peter
                {
                    label = "Peter";
                    description = "Sniper Check";
                    //image = "xxx";
                }; */
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
        class 332nd_Uniform_Clone_VCT
        {
            model = "332nd_Uniform_Extended";
            Trooper = "VCT";
        };
        class 332nd_Uniform_Clone_NCO
        {
            model = "332nd_Uniform_Extended";
            Trooper = "NCO";
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
        class 332nd_Uniform_Clone_VCT_Medic
        {
            model = "332nd_Uniform_Extended";
            Medic = "VCT";
        };
		class 332nd_Uniform_Clone_NCO_Medic
		{
			model = "332nd_Uniform_Extended";
			Medic = "MedicNCO";
		};
		/*
		class 332nd_Uniform_Clone_Zeus
		{
			model = "332nd_Uniform_Extended";
			Zeus = "Zeus";
		};
		class 332nd_Uniform_Clone_NCO_Zeus
		{
			model = "332nd_Uniform_Extended";
			Zeus = "ZeusNCO";
		};
		*/
        class 332nd_Uniform_Clone_Ithias
        {
            model = "332nd_Uniform_Extended";
            Customs = "Ithias";
        };
        class 332nd_Uniform_Clone_Cherryy
        {
            model = "332nd_Uniform_Extended";
            Customs = "Cherryy";
        };
		class 332nd_Uniform_Clone_Crow
        {
            model = "332nd_Uniform_Extended";
            Customs = "Crow";
        }; 
        class 332nd_Uniform_Clone_Weaver
        {
            model = "332nd_Uniform_Extended";
            Customs = "Weaver";
        };
		class 332nd_Uniform_Clone_Asuka
        {
            model = "332nd_Uniform_Extended";
            Customs = "Asuka";
        };
		class 332nd_Uniform_Clone_Frankenburg
        {
            model = "332nd_Uniform_Extended";
            Customs = "Frankenburg";
        }; 
		class 332nd_Uniform_Clone_Seelig
        {
            model = "332nd_Uniform_Extended";
            Customs = "Seelig";
        }; 
		class 332nd_Uniform_Clone_Spectre
        {
            model = "332nd_Uniform_Extended";
            Customs = "Spectre";
        }; 
		class 332nd_Uniform_Clone_Joker
        {
            model = "332nd_Uniform_Extended";
            Customs = "Joker";
        }; 
		class 332nd_Uniform_Clone_Denal
        {
            model = "332nd_Uniform_Extended";
            Customs = "Denal";
        }; 
		class 332nd_Uniform_Clone_Walkie
        {
            model = "332nd_Uniform_Extended";
            Customs = "Walkie";
        }; 
		class 332nd_Uniform_Clone_Cin
        {
            model = "332nd_Uniform_Extended";
            Customs = "Cin";
        /* };class 332nd_Uniform_Clone_Peter
        {
            model = "332nd_Uniform_Extended";
            Customs = "Peter";
        };
    }; */
};