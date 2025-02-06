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

};

class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 332nd_Uniform_Clone_CR_Veh: SWLB_clone_base_P2
	{
		scope=1;
		uniformClass="332nd_Uniform_Clone_CR";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
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
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_CT.paa",
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
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_SCT.paa",
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
			"332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_VCT.paa",
		};
	};

    class 332nd_Uniform_Clone_NCO_Veh_Medic: 332nd_Uniform_Clone_CT_Veh {
        uniformClass = "332nd_Uniform_Clone_NCO_Medic";
        hiddenSelectionsTextures[] = {
            "332nd_Aux\Uniforms\Tex\332nd_Upper_Armor_NCO_Medic.paa",
            "332nd_Aux\Uniforms\Tex\332nd_Lower_Armor_NCO.paa"
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

};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Extended
        {
            label = "Uniforms";
            author = "Ithias";
			options[] = { "Trooper", "Medic", "Zeus", "Customs", };
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
			class Zeus
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
			};
            class Customs
            {
                label = "Customs";
				values[] = { "Ithias", "Cherryy", };
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
    };
};