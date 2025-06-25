class CfgPatches
{
	class 332nd_Helmet_Props
	{
		requiredAddons[]=
		{};
		units[]={};
		weapons[]={};
	};
	author="Cherryy";
}; 
class CfgEditorCategories
{
	class 332nd_Props
	{
		displayname="[332nd] Props";
	};
};

class CfgVehicles
{
	class Headgear_Base_F;
	class 332nd_P2_Prop_CT: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		model="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
		editorCategory="332nd_Props";
		editorSubcategory="EdSubcat_332nd_Props_Helmets_P2";
		displayName="[332nd] P2 Helmet (CT)";
		picture="332nd_Aux\Helmets\Tex\Logo_Helmet.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_CT.paa"
		};
	};
	class 332nd_P2_Prop_Medic: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Medic)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Medic.paa",
		};
	};
    class 332nd_RTO_Prop_CT: Headgear_Base_F
	{
		displayName="[332nd] P2 Helmet (RTO)";
        scope=2;
		scopeCurator=2;
		model="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
		editorCategory="332nd_Props";
		editorSubcategory="EdSubcat_332nd_Props_Helmets_P2";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_CT.paa"
		};
	};
    //ARF
    class 332nd_ARF_Prop: Headgear_Base_F
	{
		displayName="[332nd] ARF Helmet";
        scope=2;
		scopeCurator=2;
		model="\SWLB_clones\SWLB_clone_ARF_helmet.p3d";
		editorCategory="332nd_Props";
		editorSubcategory="EdSubcat_332nd_Props_Helmets_ARF";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Base.paa",
			"",
		};
	};
    //ARF Camo
    class 332nd_ARF_Prop_Camo_Desert: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Desert)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Desert.paa",
		};
	};
    class 332nd_ARF_Prop_Camo_Urban: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Urban)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Urban.paa",
		};
	};
    class 332nd_ARF_Prop_Camo_Winter: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Winter)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Winter.paa",
		};
	};
    class 332nd_ARF_Prop_Camo_Woodland: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Woodland.paa",
		};
	};
    //Pilot
    class 332nd_Pilot_Prop: Headgear_Base_F
	{
		displayName="[332nd] Pilot Helmet";
        scope=2;
		scopeCurator=2;
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		editorCategory="332nd_Props";
		editorSubcategory="EdSubcat_332nd_Props_Helmets_Pilots";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot.paa",
		};
	};
    //P2 Customs
    class 332nd_P2_Prop_Body: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Body)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Body.paa",
		};
	};
    class 332nd_P2_Prop_Cherryy: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Cherryy)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Cherryy.paa",
		};
	};
    class 332nd_P2_Prop_Crow: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Crow)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Crow.paa",
		};
	};
    class 332nd_P2_Prop_Denal: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Denal)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Denal.paa",
		};
	};
    class 332nd_P2_Prop_Frankenburg: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Frankenburg)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Frankenburg.paa",
		};
	};
    class 332nd_RTO_Prop_Joker: 332nd_RTO_Prop_CT
	{
		displayName="[332nd] RTO Helmet (Joker)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_Joker.paa",
		};
	};
    class 332nd_P2_Prop_Luci: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Luci)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Luci.paa",
		};
	};
    class 332nd_P2_Prop_Ithias: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Ithias)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Ithias.paa",
		};
	};
    class 332nd_P2_Prop_Roseiry: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Roseiry)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Roseiry.paa",
		};
	};
    class 332nd_P2_Prop_Shark: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Shark)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Shark.paa",
		};
	};
    class 332nd_P2_Prop_Sovereign: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Sovereign)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Sovereign.paa",
		};
	};
    class 332nd_P2_Prop_Tokyo: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Tokyo)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Tokyo.paa",
		};
	};
    class 332nd_P2_Prop_Walkie: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Walkie)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Walkie.paa",
		};
	};
    class 332nd_P2_Prop_Ghost: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Ghost)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Weaver.paa",
		};
	};
    class 332nd_P2_Prop_Lettuce: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Lettuce)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Lettuce.paa",
		};
	};
    class 332nd_RTO_Prop_Ketamine: 332nd_RTO_Prop_CT
	{
		displayName="[332nd] RTO Helmet (Ketamine)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_RTO_Ketamine.paa",
		};
	};
    class 332nd_P2_Prop_Eclipse: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Eclipse)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Eclipse.paa",
		};
	};
    class 332nd_P2_Prop_Social: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Social)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Social.paa",
		};
	};
    class 332nd_P2_Prop_Dovah: 332nd_P2_Prop_CT
	{
		displayName="[332nd] P2 Helmet (Dovah)";
        editorSubcategory="EdSubcat_332nd_Props_Helmets_Customs";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_P2_Dovah.paa",
		};
	};
    //Pilot Customs
    class 332nd_Pilot_Prop_Lawman: 332nd_Pilot_Prop
	{
		displayName="[332nd] Pilot Helmet (Lawman)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Lawman.paa",
		};
	};
    class 332nd_Pilot_Prop_Shadow: 332nd_Pilot_Prop
	{
		displayName="[332nd] Pilot Helmet (Shadow)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_Pilot_Shadow.paa",
		};
	};
    //ARF Customs
    class 332nd_ARF_Prop_Asuka: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Asuka)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Asuka.paa",
		};
	};
    class 332nd_ARF_Prop_Cin: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Cin)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Cin.paa",
		};
	};
    class 332nd_ARF_Prop_Trick: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Trick)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Trick.paa",
		};
	};
    class 332nd_ARF_Prop_Stryker: 332nd_ARF_Prop
	{
		displayName="[332nd] ARF Helmet (Stryker)";
		hiddenSelectionsTextures[]=
		{
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
			"332nd_Aux\Helmets\Tex\332nd_Helmet_ARF_Stryker.paa",
		};
	};
};