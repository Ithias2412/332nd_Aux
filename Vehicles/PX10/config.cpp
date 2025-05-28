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
		class ACE_SelfActions;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};

	//  Custom Republic Base Variant
	class 332nd_PX10_F: 3AS_PX10_REP_F
	{
		faction="332nd_Faction";
		displayname="[332nd] PX-10 APC";
		side = 1;
		editorSubcategory = "EdSubcat_APCs";
		armor = 200; //was 100
		crew = "JLTS_Clone_P2_DC15S";
		transportSoldier = 8;
		canFloat = 1;
		tas_canBlift = 1;
        tas_liftVars = [[[[0,-4.5,-9]]], [0], [0]];
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
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
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
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		waterAngularDampingCoef = 10;
		waterDamageEngine = 0.2;
		waterLeakiness = 2.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterPPInVehicle = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.5;
		waterSpeedFactor = 0.2;
		class manual: Mode_FullAuto
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
				weaponSoundEffect="";
				begin1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1,1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.025,1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.95,1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,1.05,1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1.25,0.9,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",1,1,400};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				soundBeginWater[] = {"beginwater1",1};
			};
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
	};
};

class CfgMagazines
{
	class 3AS_250Rnd_MK4ES_shells;
	class 332nd_PX10_Repeater_Mag: 3AS_250Rnd_MK4ES_shells
	{
		ammo = "332nd_Gas_Level_M1";
		count = 750;
		displayName = "750 Round Repeater Energy Block";
		displayNameShort = "";
		initSpeed = 900;
		maxLeadSpeed = 25;
	};
};