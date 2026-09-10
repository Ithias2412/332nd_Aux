/*

class CfgPatches
{
	class 332nd_ATRT
	{
		units[]=
		{
			"332nd_ATRT",
		};
		weapons[]=
		{
			"332nd_ATRT_Cfg_Weapons",
			"332nd_ATRT_Weapon",
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgWeapons 
{
	class ls_uniform_atrt;
	class ls_weapon_atrt_laserCannon;
	class 332nd_ATRT_Cfg_Weapons: ls_uniform_atrt
	{
		class ItemInfo
		{
			containerClass = "Supply80";
			mass = 100;
			scope = 0;
			type = 801;
			uniformClass = "332nd_ATRT";
			uniformModel = "-";
		};
	};
	class 332nd_DC15L;
	class 332nd_ATRT_Weapon: 332nd_DC15L
	{
		baseWeapon = "332nd_ATRT_Weapon";
		displayName = "AT-RT Laser Cannon";
		magazines[] = 
		{
			"332nd_ATRT_Mag",
		};
		magazineWell[] = {};
		model = "\ls\core\addons\weapons_atrt\laserCannon\ls_weapon_atrt_laserCannon.p3d";
		//modes[] = {"FullAuto","Single"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm","ls_atrt_skeleton","\ls\core\addons\animations\data\vehicle\atrt\atrt_standIdle.rtm"};
		modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";
		useModelOptics = 1;
		class OpticsModes
		{
			
		};
	};
};

class CfgMagazines 
{
	class 332nd_Base_Mag;
	class 332nd_ATRT_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Gas_Level_M2";
		count = 100;
		displayname = "[332nd] ATRT 100 Round Energy Cell";
		mass = 1;
		scope = 2;
	};
};

class CfgVehicles 
{
	class ls_vehicle_atrt_base;
    class 332nd_ATRT: ls_vehicle_atrt_base 
	{
		displayName = "[332nd] AT-RT";
        scope = 2;
		author = "Ithias";
        ls_crew = "332nd_Rilfeman_DC15C";
		faction = "332nd_Faction";
		editorSubcategory = "ls_edsubcat_walkers";
		uniformClass = "332nd_ATRT_Cfg_Weapons";
		nakedUniform = "332nd_ATRT_Cfg_Weapons";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = 
		{
			"\332nd_Aux\Vehicles\ATRT\Tex\camo1_co.paa",
			"\ls\core\addons\vehicles_atrt\data\camo2_co.paa",
			"\ls\core\addons\vehicles_atrt\data\camo3_co.paa",
			"\332nd_Aux\Vehicles\ATRT\Tex\camo4_co.paa"
		};
        weapons[] = 
		{
			"332nd_ATRT_Weapon"
		};
        respawnWeapons[] = 
		{
			"332nd_ATRT_Weapon"
		};
        magazines[] = 
		{
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
		};
        respawnMagazines[] = 
		{
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
			"332nd_ATRT_Mag",
		};
    };
};