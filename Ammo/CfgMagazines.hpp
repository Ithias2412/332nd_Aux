class CfgMagazines 
{
	class CA_Magazine;
	class JLTS_RPS6_mag;
	class JLTS_PLX1_AP_mag;
	class 1Rnd_HE_Grenade_shell;
	class IDA_Smoke_LauncherGrenade;
	class 3Rnd_Smoke_Grenade_shell;

	
	
	//Start Base Mag Classes
	class 332nd_Base_Mag: CA_Magazine
	{
		scope=1;
		displayname="Base Mag";
		tracersEvery=1;
		maxLeadSpeed=25;
		mass=10;
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		descriptionShort = "";
		displayNameShort = "";
		initSpeed = 800;
	};



	//Rifle Mags 
	class 332nd_DLT_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_950mm_Ball";
		count = 1;
		displayname = "DLT 1 Round Energy Cell";
		mass = 15;
		scope = 2;
	};
	class 332nd_DC15X_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_50_BMG_Ball";
		count = 5;
		displayname = "DC-15X 5 Round Energy Cell";
		mass = 15;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_DP23_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_12g_Pellets";
		count = 10;
		displayname = "DP-23 10 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_DC15L_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_762x51_Ball";
		count = 200;
		displayname = "DC-15L 200 Round Energy Cell";
		mass = 40;
		scope = 2;
	};
	class 332nd_Valken_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_338_Lapua_Ball";
		count = 20;
		displayname = "Valken 20 Round Energy Cell";
		mass = 13.6;
		scope = 2;
	};
	class 332nd_DC15A_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_762x39_Ball";
		count = 30;
		displayname = "DC-15A 30 Round Energy Cell";
		mass = 10;
		scope = 2;
	};
	class 332nd_DC15C_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_556x45_Ball";
		count = 45;
		displayname = "DC-15C 45 Round Energy Cell";
		mass = 8.3;
		scope = 2;
	};
	class 332nd_Westar_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_556x45_Ball";
		count = 60;
		displayname = "Westar 60 Round Energy Cell";
		mass = 8;
		scope = 2;
	}
	class 332nd_Z6_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_556x45_Ball";
		count = 400;
		displayname = "Z-6 400 Round Energy Cell";
		mass = 40;
		scope = 2;
	};
	class 332nd_DC15S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_45ACP";
		count = 60;
		displayname = "DC-15S 60 Round Energy Cell";
		mass = 6.6;
		scope = 2;
	};
	class 332nd_DC17S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_45ACP";
		count = 30;
		displayname = "DC-17S 30 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_DC17S_Mag_Dual: 332nd_Base_Mag
	{
		ammo = "332nd_45ACP_Dual";
		count = 30;
		displayname = "DC-17S 30 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_DC17S_Stun_Mag: 332nd_Base_Mag
	{
		ammo = "JLTS_bullet_stun";
		count = 5;
		displayname = "DC-17S 5 Round Stun Cell";
		mass = 8;
		scope = 2;
		JLTS_stunDuration = 15;
		initSpeed = 50;
	};


	//AT Mags
	class 332nd_RPS6_Mag: JLTS_RPS6_mag
	{
		ammo = "332nd_RPS6_Ammo_AT";
		count = 1;
		descriptionShort = "";
		displayname = "RPS-6 AT Rocket";
		displayNameShort = "AT";
		mass = 11.1;
		scope = 2;
	};
	class 332nd_RPS6_NLAW_Mag: JLTS_RPS6_mag
	{
		ammo = "332nd_RPS6_Ammo_NLAW";
		count = 1;
		descriptionShort = "";
		displayname = "RPS-6 AT NLAW";
		displayNameShort = "NLAW";
		mass = 22;
		scope = 2;
	};
	class 332nd_Dispo_Mag: JLTS_RPS6_mag
	{
		ammo = "332nd_Dispo_Ammo_NLAW";
		count = 1;
		descriptionShort = "";
		displayname = "Dispo AT NLAW";
		displayNameShort = "NLAW";
		mass = 22;
		scope = 2;
	};
	class 332nd_PLX1_Mag: JLTS_PLX1_AP_mag
	{
		ammo = "332nd_PLX1_Ammo_AT";
		count = 2;
		descriptionShort = "";
		displayname = "PLX-1 AT Rocket";
		displayNameShort = "AT";
		mass = 50;
		scope = 2;
	};


	//UGL Grenades & Smokes Mags
	class 332nd_HE_LGrenade_Mag: 1Rnd_HE_Grenade_shell
	{
		ammo="332nd_HE_LGrenade";
		count=1;
		descriptionShort="";
		displayname="332nd 1 Round HE";
		displayNameShort="";
		mass=4;
		scope=2;
	};
	class 332nd_Smoke_LauncherGrenade: 3Rnd_Smoke_Grenade_shell
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (White)";
		displayNameShort="White Smoke";
		descriptionShort="Impact Smoke grenade";
		ammo="IDA_smoke_Impact";
		mass=2;
	};
	class 332nd_SmokeRed_LauncherGrenade: IDA_Smoke_LauncherGrenade
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (Red)";
		displayNameShort="Red Smoke";
		descriptionShort="Red Impact Smoke grenade";
		ammo="IDA_smoke_Impact_Red";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		mass=2;
	};
	class 332nd_SmokeGreen_LauncherGrenade: 332nd_Smoke_LauncherGrenade
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (Green)";
		displayNameShort="Green Smoke";
		descriptionShort="Green Impact Smoke grenade";
		ammo="IDA_smoke_Impact_Green";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		mass=2;
	};
	class 332nd_SmokeBlue_LauncherGrenade: 332nd_Smoke_LauncherGrenade
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (Blue)";
		displayNameShort="Blue Smoke";
		descriptionShort="Blue Impact Smoke grenade";
		ammo="IDA_smoke_Impact_Blue";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
		mass=2;
	};
	class 332nd_SmokePurple_LauncherGrenade: 332nd_Smoke_LauncherGrenade
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (Purple)";
		displayNameShort="Purple Smoke";
		descriptionShort="Purple Impact Smoke grenade";
		ammo="IDA_smoke_Impact_Purple";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
		mass=2;
	};
};