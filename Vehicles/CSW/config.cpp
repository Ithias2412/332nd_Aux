class CfgPatches
{
	class 332nd_CSW
	{
		requiredAddons[] = {};
		units[] = 
		{
			"332nd_CSW_Heavy_Repeater",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ace_csw_baseTripod;
	class 332nd_CSW_Heavy_Repeater_Baseplate: ace_csw_baseTripod
	{
		scope = 2;
		displayName = "[332nd] Heavy Repeater (Baseplate)";
		editorPreview = "\z\ace\addons\csw\data\ace_csw_mortarBaseplate.jpg";
		model = "\3AS\3AS_structures\FOB\turret_base.p3d";
		class ace_csw
		{
			disassembleTo = "332nd_CSW_Heavy_Repeater_Baseplate_W";
		};
	};
	
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_HeavyRepeater_Base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
			};
		};
	};
	class 332nd_CSW_Heavy_Repeater: 3AS_HeavyRepeater_Unarmoured
	{
		faction = "332nd_Faction";
		displayName = "[332nd] Heavy Repeater";
		crew = "JLTS_Clone_P2_DC15S";
		class ace_csw
		{
			ammoLoadTime = 5;
			ammoUnloadTime = 2.5;
			desiredAmmo = 1000;
			disassembleTurret = "332nd_CSW_Heavy_Repeater_Baseplate_W";
			disassembleWeapon = "332nd_CSW_Heavy_Repeater_W";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'magazine'";
			//magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "332nd_Heavy_Repeater_W";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_Heavy_Repeater_W"
				};
				magazines[] = {};
			};
		};
	};
};

class CfgWeapons
{
	class Launcher_Base_F;
	class 332nd_CSW_Heavy_Repeater_Baseplate_W: Launcher_Base_F
	{
		scope = 2;
		displayName = "[332nd] Heavy Repeater Baseplate";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture = "\z\ace\addons\csw\UI\Tripod_Icon.paa";
		class ace_csw
		{
			deploy = "332nd_CSW_Heavy_Repeater_Baseplate";
			deployTime = 5;
			pickupTime = 2.5;
			type = "mount";
		};
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
			mass = 290;
		};
	};
	class 332nd_CSW_Heavy_Repeater_W: Launcher_Base_F
	{
		scope = 2;
		displayName = "[332nd] Heavy Repeater";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture = "\SWLW_clones\machineguns\z7\data\ui\SWLW_z7_ui.paa";
		class ace_csw
		{
			deployTime = 15;
			pickupTime = 10;
			type = "weapon";
			class assembleTo
			{
				332nd_CSW_Heavy_Repeater_Baseplate = "332nd_CSW_Heavy_Repeater";
			};
		};
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
			mass = 620;
		};
	};
	class 3AS_HeavyRepeater_W;
	class 332nd_Heavy_Repeater_W: 3AS_HeavyRepeater_W
	{
        magazineReloadTime = 0.5;
		displayName = "[332nd] Heavy Repeater";
		magazines[] = 
		{
			"332nd_Heavy_Repeater_Mag"
		};
		
	};
};

class CfgMagazines
{
	class 3AS_HeavyRepeater_1000Rnd_mag;
	class 332nd_Heavy_Repeater_Mag: 3AS_HeavyRepeater_1000Rnd_mag
	{
		ammo = "332nd_Gas_Level_S3";
		count = 1000;
		displayName = "Heavy Repeater 1000 Round Energy Cell";
		initSpeed = 800;
		maxLeadSpeed=25;
		scope = 2;
		scopeCurator = 2;
		mass = 40;
		type = 256;
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
	};
};

class ACE_CSW_Groups 
{
	class 332nd_Heavy_Repeater_Mag 
	{ 
		332nd_Heavy_Repeater_Mag = 1;    // Vehicle magazine that will be loaded when loading this magazine
	};
};


/*
Vehicle
3AS_HeavyRepeater_Unarmoured
10 second baseplate
20 second gun mount
ammo needs to be held on an Ammo bearer
no suppression value
high ROF, lowest possible dmg (22 LR type shit)

Weapon
ace_csw_staticMortarCarry
ace_csw_carryMortarBaseplate
*/