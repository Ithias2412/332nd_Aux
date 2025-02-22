class CfgPatches
{
	class 332nd_PX10
	{
		requiredAddons[] = {"3AS_Rebel_Armor_PX10"};
		units[] = 
		{
			"332nd_PX10_F",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class Tank_F;
	class 3AS_PX10_Base_F: Tank_F
	{
		class Turrets;
	};
	class 3AS_PX10_F: 3AS_PX10_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_PX10_REP_F: 3AS_PX10_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};

	//  ustom Republic Base Variant
	class 332nd_PX10_F: 3AS_PX10_REP_F
	{
		faction="332nd_Faction";
		displayname="[332nd] PX-10 APC";
		side = 1;
		editorSubcategory = "EdSubcat_APCs";
		//transportSoldier = 4;
		hiddenSelections[] = 
		{
			"Camo",
			"camo2",
			"camo3",
			"camo_Fuel",
			"camo_repair",
		};
		hiddenSelectionsTextures[] =
		{
			"332nd_Aux\Vehicles\PX10\Tex\332nd_PX10.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa",
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","332nd_PX10_Repeater_Mag","SmokeLauncherMag"};
				weapons[] = {"332nd_PX10_Repeater","SmokeLauncher"};
			};
		};
	};
};

class Mode_FullAuto;

class CfgWeapons
{
	class 3AS_MK4ES_Medium_Cannon;
	
	class 332nd_PX10_Repeater: 3AS_MK4ES_Medium_Cannon
	{
		displayName = "[332nd] PX-10 Repeater";
		magazines[] = {"332nd_PX10_Repeater_Mag"};
		magazineReloadTime = 30;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_FullAuto
		{
			dispersion = 0.00073;
			displayName = "Full";
			reloadTime = 0.075;
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1.25,1.015,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1.25,0.985,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1.25,1.01,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1.25,0.995,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DLT-15\DLT15.ogg",1,1,400};
				closure1[] = {};
				closure2[] = {};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
		};
	};
};

class CfgMagazines
{
	class 3AS_250Rnd_MK4ES_shells;
	class 332nd_PX10_Repeater_Mag: 3AS_250Rnd_MK4ES_shells
	{
		ammo = "332nd_DC15A_Ammo_762x39";
		count = 750;
		displayName = "750 Round Repeater Energy Block";
		displayNameShort = "";
		initSpeed = 900;
		maxLeadSpeed = 25;
	};
};