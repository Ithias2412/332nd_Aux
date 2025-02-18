class CfgPatches 
{
	class 332nd_LAAT_C 
	{
		requiredAddons[] = {};
		units[] = 
        {
			"332nd_LAAT_C",
        };
		weapons[] = 
        {
            "",
        };
	};
};

class CfgVehicles
{
	class lsd_heli_laatc;
	class 332nd_LAAT_C: lsd_heli_laatc
	{
		displayname = "[332nd] LAAT/c";
		faction = "332nd_Faction";
		hiddenSelectionsTextures[] = 
		{
			"\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Cockpit.paa",
			"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Hull.paa",
			"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Wings.paa",
		};
		ls_impulsor_boostSpeed_1=300;
		ls_impulsor_fuelDrain_1=0.00005; 
		ls_impulsor_fuelDrain_2=0.00010; 
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
		};
		class TextureSources
		{
			class 332nd_Base_tex
			{
				displayname="332nd Base";
				author="Ithias";
				textures[]=
				{
					"\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Cockpit.paa",
					"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Hull.paa",
					"\332nd_Aux\Aircraft\LAAT_C\Tex\332nd_LAAT_C_Wings.paa",
				};
				factions[]=
				{
					"332nd_Faction"
				};
			};
		};
		textureList[]=
		{
			"332nd_Base_tex",
			1,
		};
	};
};