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
		count = 3;
		displayname = "DLT 3 Round Energy Cell";
		mass = 15;
		scope = 2;
	};
	class 332nd_DC15X_Charged_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_L1_P_X";
		count = 6;
		displayname = "DC-15X 6 Round Charged Energy Cell";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_DC15X_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_L2";
		count = 15;
		displayname = "DC-15X 15 Round Energy Cell";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_Slug_Thrower_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Slug_Thrower_Round";
		count = 20;
		displayname = "Slug Thrower 20 Round Bullet Block";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
		picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
	};
	class 332nd_Firepuncher_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_L3_P";
		count = 20;
		displayname = "Firepuncher 20 Round Energy Cell";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_DW_32S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_L3";
		count = 20;
		displayname = "DW-32S 20 Round Energy Cell";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_DP23_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Scattershot_S1";
		count = 10;
		displayname = "DP-23 10 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_ScatterGun_Scattershot_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Scattershot_S2";
		count = 10;
		displayname = "Scatter-shot 10 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_ScatterGun_Condensedshot_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Condensedshot_S1";
		count = 5;
		displayname = "Condensed-shot 5 Round Energy Cell";
		mass = 8;
		scope = 2;
	};
	class 332nd_ScatterGun_Flamer_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_FlameRound_Scatter";
		count = 5;
		displayname = "Flame-Shot 5 Round Cartridge";
		mass = 8; 
		scope = 2;
		//initSpeed = 25;
		initSpeed = 50;
		lastRoundsTracer = 999;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_flamer.paa";
	};
	class 332nd_DC15L_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_M2_S";
		count = 200;
		displayname = "DC-15L 200 Round Energy Cell";
		mass = 40;
		scope = 2;
	};
	class 332nd_DLT15_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_M1_S";
		count = 300;
		displayname = "DLT-15 300 Round Energy Cell";
		mass = 40;
		scope = 2;
		ACE_isBelt = 1;
	};
	class 332nd_Valken_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_L2";
		count = 20;
		displayname = "Valken 20 Round Energy Cell";
		mass = 13.6;
		scope = 2;
		initSpeed = 1200;
	};
	class 332nd_DC15A_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S1";
		count = 30;
		displayname = "DC-15A 30 Round Energy Cell";
		mass = 10;
		scope = 2;
	};
	class 332nd_DC15LE_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_M2_S";
		count = 100;
		displayname = "DC-15LE 100 Round Energy Cell";
		mass = 10;
		scope = 2;
	};
	class 332nd_EPL_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S1";
		count = 30;
		displayname = "EPL-2 30 Round Energy Cell";
		mass = 10;
		scope = 2;
	};
	class 332nd_DC15C_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S2";
		count = 45;
		displayname = "DC-15C 45 Round Energy Cell";
		mass = 8.3; 
		scope = 2;
	};
	class 332nd_C_24_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S2";
		count = 45;
		displayname = "C-24 45 Round Energy Cell";
		mass = 8.3; 
		scope = 2;
	};
	class 332nd_C_24_Flamer_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_FlameRound";
		count = 10;
		displayname = "C-24 Flame Cartridge";
		mass = 10; 
		scope = 2;
		initSpeed = 25;
		lastRoundsTracer = 999;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_flamer.paa";
	};
	class 332nd_Westar_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S2";
		count = 45;
		displayname = "Westar 45 Round Energy Cell";
		mass = 8.3;
		scope = 2;
	}
	class 332nd_Z6_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_M3_S";
		count = 400;
		displayname = "Z-6 400 Round Energy Cell";
		mass = 40;
		scope = 2;
	};
	class 332nd_DC15S_Low_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S3";
		count = 80;
		displayname = "DC-15S 80 Round Low Power Energy Cell";
		mass = 8.3; 
		scope = 2;
	};
	class 332nd_DC15S_High_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S2";
		count = 40;
		displayname = "DC-15S 40 Round High Power Energy Cell";
		mass = 8.3; 
		scope = 2;
	};
	class 332nd_DC15SA_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S1";
		count = 20;
		displayname = "DC-15SA 20 Round Energy Cell";
		mass = 5;
		scope = 2;
	};
	class 332nd_DC17S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S2";
		count = 30;
		displayname = "DC-17S 30 Round Energy Cell";
		mass = 5;
		scope = 2;
	};
	class 332nd_DC17S_Mag_Dual: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_S1_Dual";
		count = 30;
		displayname = "DC-17S 30 Round Energy Cell";
		mass = 5;
		scope = 2;
	};
	class 332nd_Sidearm_Stun_Mag: 332nd_Base_Mag
	{
		ammo = "JLTS_bullet_stun";
		count = 5;
		displayname = "5 Round Stun Cell";
		mass = 25;
		scope = 2;
		JLTS_stunDuration = 15;
		initSpeed = 50;
	};
	class 332nd_EPL_AT_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_EPL_AT";
		count = 1;
		displayname = "EPL-2 Anti-Tank Cell";
		mass = 8.3;
		scope = 2;
		initSpeed = 1000;
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
	class 332nd_Westar_Rifle_Grenade_Mag: 332nd_HE_LGrenade_Mag
	{
		ammo="332nd_Westar_Rifle_Grenade";
		count=1;
		displayname="Westar Rifle Grenade Charge";
		mass=6;
		//initSpeed = 80;
		initSpeed = 1000;
	};
	class 332nd_Smoke_LauncherGrenade: 3Rnd_Smoke_Grenade_shell
	{
		author="Cherryy";
		count=1;
		displayName="332nd Impact Smoke (White)";
		displayNameShort="White Smoke";
		descriptionShort="Impact Smoke grenade";
		ammo="IDA_smoke_Impact";
		mass=4;
	};
	class 332nd_Smoke_LauncherGrenade_3GL: 3Rnd_Smoke_Grenade_shell
	{
		author="Cherryy";
		count=3;
		displayName="332nd Impact Smoke (White) x3";
		displayNameShort="White Smoke";
		descriptionShort="Impact Smoke grenade";
		ammo="IDA_smoke_Impact";
		mass=12;
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
		mass=4;
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
		mass=4;
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
		mass=4;
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
		mass=4;
	};
	class 332nd_SmokeYellow_LauncherGrenade: 332nd_Smoke_LauncherGrenade
	{
		author="Viper";
		count=1;
		displayName="332nd Impact Smoke (Yellow)";
		displayNameShort="Yellow Smoke";
		descriptionShort="Yellow Impact Smoke grenade";
		ammo="332nd_UGL_Smoke_Yellow";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
		mass=4;
	};
	class 332nd_SmokeOrange_LauncherGrenade: 332nd_Smoke_LauncherGrenade
	{
		author="Viper";
		count=1;
		displayName="332nd Impact Smoke (Orange)";
		displayNameShort="Orange Smoke";
		descriptionShort="Orange Impact Smoke grenade";
		ammo="332nd_UGL_Smoke_Orange";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
		mass=4;
	};
};