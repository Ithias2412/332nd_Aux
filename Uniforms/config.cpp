
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
			class HitHead //helm
			{
				name = "head";
				armor = 1;
				passThrough = 0.1;
			};
			class HitFace //helm
			{
				name = "face_hub";
				armor = 1;
				passThrough = 0.1;
			};
			class HitNeck //helm
			{
				name = "neck";
				armor = 1;
				passThrough = 0.1;
			};
			class HitChest //vest
			{
				name = "spine3";
				armor = 1;
				passThrough = 0.1;
			};
			class HitDiaphragm //vest
			{
				name = "spine2";
				armor = 1;
				passThrough = 0.1;
			};
			class HitAbdomen //vest
			{
				Name = "spine1";
				armor = 1;
				passThrough = 0.1;
			};
			class HitPelvis //vest
			{
				name = "pelvis";
				armor = 1;
				passThrough = 0.1;
			};
			class HitArms //vest
			{
				Name = "arms";
				armor = 1;
				passThrough = 0.1;
			};
			class HitHands //vest
			{
				name = "hands";
				armor = 1;
				passThrough = 0.1;
			};
			class HitLegs //vest
			{
				name = "legs";
				armor = 1;
				passThrough = 0.1;
			};
			class HitBody //vest
			{
				Name = "body";
				armor = 1;
				passThrough = 0.1;
			};
			//Wierd shit
			class HitLeftArm //vest
			{
				name = "hand_l";
				armor = 1;
				passThrough = 0.1;
			};
			class HitLeftLeg //vest
			{
				name = "leg_l";
				armor = 1;
				passThrough = 0.1;
			};
			class HitRightArm //vest
			{
				name = "hand_r";
				armor = 1;
				passThrough = 0.1;
			};
			class HitRightLeg //vest
			{
				name = "leg_r";
				armor = 1;
				passThrough = 0.1;
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
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Uniform_Extended
        {
            label = "332nd Uniforms";
            author = "Ithias";
			options[] = { "Rank", "variant" };
            class Rank
            {
                label = "Rank";
				values[] = { "CR", "CT", "SCT", "VCT", "NCO", };
                changeingame = 0;
                alwaysSelectable = 0;
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
            class variant
            {
                label = "variant";
                values[] = { "Trooper", "Medic", };
                changeingame = 0;
                alwaysSelectable = 0;
                class Trooper
                {
                    label = "Trooper";
                    description = "No MOS";
                    // image = "xxx";
                };
                class Medic
                {
                    label = "Medic";
                    description = "Medic MOS";
                    // image = "xxx";
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
            Rank = "CR";
            variant = "Trooper";
        };
        class 332nd_Uniform_Clone_CT
        {
            model = "332nd_Uniform_Extended";
            Rank = "CT";
            variant = "Trooper";
        };
        class 332nd_Uniform_Clone_SCT
        {
            model = "332nd_Uniform_Extended";
            Rank = "SCT";
            variant = "Trooper";
        };
        class 332nd_Uniform_Clone_VCT
        {
            model = "332nd_Uniform_Extended";
            Rank = "VCT";
            variant = "Trooper";
        };
        class 332nd_Uniform_Clone_CT_Medic
        {
            model = "332nd_Uniform_Extended";
            Rank = "CT";
            variant = "Medic";
        };
        class 332nd_Uniform_Clone_SCT_Medic
        {
            model = "332nd_Uniform_Extended";
            Rank = "SCT";
            variant = "Medic";
        };
        class 332nd_Uniform_Clone_VCT_Medic
        {
            model = "332nd_Uniform_Extended";
            Rank = "VCT";
            variant = "Medic";
        };
        class 332nd_Uniform_Clone_NCO
        {
            model = "332nd_Uniform_Extended";
            Rank = "NCO";
            variant = "Trooper";
        };
    };
};