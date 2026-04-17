class CfgPatches
{
	class 332nd_CSW_Mortar
	{
		requiredAddons[] = {};
		units[] = 
		{
			"332nd_CSW_Mortar",
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ace_csw_baseTripod;
	class 332nd_CSW_Mortar_Baseplate: ace_csw_baseTripod
	{
		scope = 2;
		displayName = "[332nd] Mortar (Baseplate)";
		editorPreview = "\z\ace\addons\csw\data\ace_csw_mortarBaseplate.jpg";
		model = "\3AS\3AS_structures\FOB\turret_base.p3d";
		class ace_csw
		{
			disassembleTo = "332nd_CSW_Mortar_Baseplate_W";
		};
	};

	class All;
	class AllVehicles: All 
	{
		class NewTurret;
	};
	class Land: AllVehicles 
	{
		class NewTurret: NewTurret 
		{
			
		};
	};
	class LandVehicle: Land 
	{
		class NewTurret: NewTurret 
		{
			
		};
	};
	class StaticWeapon: LandVehicle 
	{
		class Turrets 
		{
			class MainTurret: NewTurret 
			{
				
			};
		};
	};
	class StaticMortar: StaticWeapon 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class Mortar_01_base_F: StaticMortar 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};
	class B_Mortar_01_F: Mortar_01_base_F 
	{
		
	};
	class 3AS_Republic_Mortar: B_Mortar_01_F 
	{
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				
			};
		};
	};

	class 332nd_CSW_Mortar: 3AS_Republic_Mortar
	{
		faction = "332nd_Faction";
		displayName = "[332nd] Mortar";
		crew = "JLTS_Clone_P2_DC15S";
		armor = 50;
		hiddenSelectionsTextures[] = 
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\332nd_Aux\Vehicles\Mortar\tex\332nd_Mortar_Tube.paa",
		};
		class assembleInfo
		{
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {""};
			primary = 0;
		};
		class ace_csw
		{
			allowFireOnLoad = 1;
			ammoLoadTime = 3;
			ammoUnloadTime = 3;
			desiredAmmo = 1;
			disassembleTurret = "332nd_CSW_Mortar_Baseplate_W";
			disassembleWeapon = "332nd_CSW_Mortar_W";
			enabled = 1;
			magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon";
			//proxyWeapon = "332nd_Heavy_Repeater_W";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"332nd_Mortar_W"
				};
				magazines[] = {};
			};
		};
	};
};

class CfgWeapons
{
	class Launcher_Base_F;
	class 332nd_CSW_Mortar_Baseplate_W: Launcher_Base_F
	{
		scope = 2;
		displayName = "[332nd] Mortar Baseplate";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture = "\z\ace\addons\csw\UI\Tripod_Icon.paa";
		class ace_csw
		{
			deploy = "332nd_CSW_Mortar_Baseplate";
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
	class 332nd_CSW_Mortar_W: Launcher_Base_F
	{
		scope = 2;
		displayName = "[332nd] Mortar Tube";
		model = "\z\ace\addons\apl\ACE_CSW_Bag.p3d";
		picture = "\SWLW_clones\machineguns\z7\data\ui\SWLW_z7_ui.paa";
		class ace_csw
		{
			deployTime = 15;
			pickupTime = 10;
			type = "weapon";
			class assembleTo
			{
				332nd_CSW_Mortar_Baseplate = "332nd_CSW_Mortar";
			};
		};
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
			mass = 620;
		};
	};
	class 3AS_mortar_82mm;
	class 332nd_Mortar_W: 3AS_mortar_82mm
	{
        magazineReloadTime = 1;
		displayName = "[332nd] Mortar";
		magazines[] = 
		{
			"332nd_Mortar_Mag",
			"332nd_Mortar_Flare_Mag",
			"332nd_Mortar_Smoke_Mag",
		};
	};
};

class CfgMagazines
{
	class 3AS_8Rnd_82mm_Mo_shells;
	class 3AS_8Rnd_82mm_Mo_Flare_white;
	class 3AS_8Rnd_82mm_Mo_Smoke_white;
	
	class 332nd_Mortar_Mag: 3AS_8Rnd_82mm_Mo_shells
	{
		ammo = "332nd_Mortar_Ammo";
		count = 1;
		displayName = "[332nd] Mortar Shell (HE)";
		scope = 2;
		scopeCurator = 2;
		mass = 8;
		//type = 256;
		//picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
	};
	class 332nd_Mortar_Flare_Mag: 3AS_8Rnd_82mm_Mo_Flare_white
	{
		ammo = "332nd_Mortar_Flare_Ammo";
		count = 1;
		displayName = "[332nd] Mortar Shell (Flare)";
		scope = 2;
		scopeCurator = 2;
		mass = 8;
		//type = 256;
		//picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
	};
	class 332nd_Mortar_Smoke_Mag: 3AS_8Rnd_82mm_Mo_Smoke_white
	{
		ammo = "332nd_Mortar_Smoke_Ammo";
		count = 1;
		displayName = "[332nd] Mortar Shell (Smoke)";
		scope = 2;
		scopeCurator = 2;
		mass = 8;
		//type = 256;
		//picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
	};
};

class CfgAmmo
{
	class 3AS_82mm_HE_Mortar; 
	class 3AS_82mm_Flare_White;
	class 3AS_82mm_Smoke_White;
	class 332nd_Mortar_Ammo: 3AS_82mm_HE_Mortar
	{
		caliber = 1;
		dangerRadiusHit = 60;
		displayname = "Republic HE Mortar Shell";
		explosive = 1;
		hit = 10; // was 80
		indirectHit = 20;
		indirectHitRange = 7.5;
		suppressionRadiusHit = 24;
	};
	class 332nd_Mortar_Flare_Ammo: 3AS_82mm_Flare_White
	{
		displayname = "Republic Flare Mortar Shell";
	};
	class 332nd_Mortar_Smoke_Ammo: 3AS_82mm_Smoke_White
	{
		displayname = "Republic Smoke Mortar Shell";
	};
};

class ACE_CSW_Groups 
{
	class 332nd_Mortar_Mag 
	{ 
		332nd_Mortar_Mag = 1;    // Vehicle magazine that will be loaded when loading this magazine
	};
};

