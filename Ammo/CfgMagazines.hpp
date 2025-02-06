class CfgMagazines {
	//Start Base Config Mags
	class CA_Magazine;
	class 332nd_Base_Mag: CA_Magazine
	{
		scope=1;
		displayname="Base Mag";
		tracersEvery=1;
		maxLeadSpeed=25;
		mass=10;
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
	};
	class JLTS_RPS6_mag;
	class JLTS_PLX1_AP_mag;

	//DC-15A Mags
	class 332nd_DC15A_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15A_Ammo_762x39";
		count = 30;
		descriptionShort = "";
		displayname = "DC-15A 30 Round Energy Cell";
		displayNameShort = "";
		mass = 10;
		scope = 2;
	};

	//DC-15C Mags
	class 332nd_DC15C_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15C_Ammo_556x45";
		count = 45;
		descriptionShort = "";
		displayname = "DC-15C 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8.3;
		scope = 2;
	};

	//DC-15L Mag
	class 332nd_DC15L_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15L_Ammo_762x51";
		count = 200;
		descriptionShort = "";
		displayname = "DC-15L 200 Round Energy Cell";
		displayNameShort = "";
		mass = 40;
		scope = 2;
	};

	//DC-15S Mag
	class 332nd_DC15S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_45ACP";
		count = 60;
		descriptionShort = "";
		displayname = "DC-15S 60 Round Energy Cell";
		displayNameShort = "";
		mass = 6.6;
		scope = 2;
	};

	//DC-15X Mag
	class 332nd_DC15X_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC15X_Ammo_50";
		count = 5;
		descriptionShort = "";
		displayname = "DC-15X 5 Round Energy Cell";
		displayNameShort = "";
		mass = 15;
		scope = 2;
		initSpeed = 1000;
	};
	// 332nd_950mm_Ball Mag
	class 332nd_950mm_Ball_1rd_MAG: 332nd_Base_Mag
	{
		ammo = "332nd_950mm_Ball";
		count = 1;
		displayname = "950mm 1 Round Energy Cell";
		mass = 15;
		scope = 2;
	};

	//DP-23 Mag
	class 332nd_DP23_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DP23_Ammo_12g";
		count = 10;
		descriptionShort = "";
		displayname = "DP-23 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};

	//Valken Mag
	class 332nd_Valken_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Valken_Ammo_762x51";
		count = 20;
		descriptionShort = "";
		displayname = "Valken 20 Round Energy Cell";
		displayNameShort = "";
		mass = 13.6;
		scope = 2;
		initSpeed = 1000;
	};

	//Westar Mag
	class 332nd_Westar_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Westar_Ammo_556x45";
		count = 30;
		descriptionShort = "";
		displayname = "Westar 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	}
	//Z-6 Mag
	class 332nd_Z6_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Z6_Ammo_556x45";
		count = 400;
		descriptionShort = "";
		displayname = "Z-6 400 Round Energy Cell";
		displayNameShort = "";
		mass = 40;
		scope = 2;
	};
	//DC-17S Mag
	class 332nd_DC17S_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_DC17S_Ammo_9x19";
		count = 30;
		descriptionShort = "";
		displayname = "DC-17S 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};

	class 332nd_DC17S_45ACP_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_45ACP";
		count = 15;
		descriptionShort = "";
		displayname = "DC-17S 15 Round High Power Energy Cell";
		displayNameShort = "Hi-Pow";
		mass = 8;
		scope = 2;
	};

	//RPS6 Mag
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

	//PLX1 Mag
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

};