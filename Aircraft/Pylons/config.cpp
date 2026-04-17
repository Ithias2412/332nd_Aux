class CfgPatches
{
	class 332nd_Pylons
	{
		units[] =
			{
				"",
				"",
			};
		weapons[] =
			{
				"332nd_Hammer_I",
				"332nd_Hammer_II",
				"332nd_Anvil_I",
				"332nd_Anvil_III",
				"332nd_Anvil_IV",				"332nd_Anvil_X_S",
				"332nd_Forge_III",
				"332nd_Forge_III_Y",
				"332nd_Forge_I",
				"332nd_Forge_X_N",
				"332nd_Forge_X_C",
				"332nd_CIS_A2A_Missile",
				"332nd_CIS_ATG_Missile",
				"332nd_Smoke_RKT_Launcher",
			};
		requiredVersion = 0.100000;
		requiredAddons[] = {"cba_main"}; // cba_main for smoke rockets
	};
};
// #include "xtdGear.hpp"

class Mode_FullAuto;

class CfgWeapons
{
	class missiles_ASRAAM;
	class weapon_AGM_65Launcher;
	class ace_missile_gbu_12;
	class missiles_Zephyr;
	class ace_maverick_L_Launcher;
	class weapon_SDBLauncher; // Forge I
	class FSNB_B61_4_Timed_W; // Forge X-N
	class missiles_DAR;
	class Mk82BombLauncher;
	class weapon_HARMLauncher;

	class 332nd_Hammer_I : missiles_ASRAAM
	{
		displayName = "[332nd] Hammer I";
		magazines[] =
			{
				"332nd_Hammer_I_Mag",
			};
	};
	class 332nd_CIS_A2A_Missile : 332nd_Hammer_I
	{
		displayName = "[332nd] CIS A2A Missile";
		magazines[] =
			{
				"332nd_CIS_A2A_Missile_Mag",
			};
	};
	class 332nd_Hammer_II : missiles_Zephyr // weapon_AMRAAMLauncher
	{
		displayName = "[332nd] Hammer II";
		magazines[] =
			{
				"332nd_Hammer_II_Mag",
			};
	};
	class 332nd_Hammer_II_L : 332nd_Hammer_II
	{
		displayName = "[332nd] Hammer II-L";
		magazines[] =
			{
				"332nd_Hammer_II_L_Mag",
			};
	};
	class 332nd_Anvil_X_S : missiles_DAR
	{
		displayName = "[332nd] Anvil X-S";
		showAimCursorInternal = 0;
		magazines[] =
			{
				"332nd_Anvil_X_S_Mag",
			};
	};
	class 332nd_Anvil_I : weapon_AGM_65Launcher
	{
		displayName = "[332nd] Anvil I";
		magazines[] =
			{
				"332nd_Anvil_I_Mag",
			};
	};
	class 332nd_Anvil_IV : 332nd_Anvil_I
	{
		displayName = "[332nd] Anvil IV";
		magazines[] =
			{
				"332nd_Anvil_IV_Mag",
			};
		canLock = 1;
	};
	class 332nd_CIS_ATG_Missile : 332nd_Anvil_I
	{
		displayName = "[332nd] CIS ATG Missile";
		magazines[] =
			{
				"332nd_CIS_ATG_Missile_Mag",
			};
	};
	class 332nd_Anvil_III : ace_maverick_L_Launcher
	{
		displayName = "[332nd] Anvil III";
		magazines[] =
			{
				"332nd_Anvil_III_Mag",
			};
	};
	class 332nd_Forge_III : ace_missile_gbu_12
	{
		displayName = "[332nd] Forge III";
		magazines[] =
			{
				"332nd_Forge_III_Mag",
			};
	};
	class 332nd_Forge_III_Y : 332nd_Forge_III
	{
		magazines[] =
			{
				"332nd_Forge_III_Mag_Y",
			};
	};
	class 332nd_Forge_I : weapon_SDBLauncher
	{
		displayName = "[332nd] Forge I";
		magazines[] =
			{
				"332nd_Forge_I_Mag",
			};
	};
	class 332nd_Forge_X_N : FSNB_B61_4_Timed_W
	{
		displayName = "[332nd] Forge X-N";
		magazines[] =
			{
				"332nd_Forge_X_N_Mag",
			};
		modes[] =
			{
				"FSNB_YIELD_300",
				//"FSNB_YIELD_1500",
				//"FSNB_YIELD_10000",
				//"FSNB_YIELD_50000",
			};
	};
	class 332nd_Forge_X_C : Mk82BombLauncher
	{
		displayName = "[332nd] Forge X-C";
		magazines[] =
			{
				"332nd_Forge_X_C_Mag",
			};
	};
	class 332nd_Anvil_VI : weapon_HARMLauncher
	{
		displayName = "[332nd] Anvil V";
		magazines[] =
			{
				"332nd_Anvil_VI_Mag",
			};
	};

	// cannon
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F : CannonCore
	{
		class LowROF : Mode_FullAuto
		{
		};
	};
	class 3as_LAAT_Medium_Canon : Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF : LowROF
		{
		};
	};
	class 3AS_BTLB_Heavy_Cannon;
	class 3AS_Z95_Light_Cannon;
	class 3AS_ARC_Light_Canon;
	class LMG_M200;
	class ParticleBeamCannon_Nu : LMG_M200
	{
		class HE;
	};

	class 332nd_LAAT_Cannon : 3as_LAAT_Medium_Canon
	{
		displayName = "[332nd] Energy Cannon";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_LAAT_Cannon_Mag",
			};
	};
	class 332nd_LAAT_Minigun : 3as_LAAT_Medium_Canon
	{
		displayName = "[332nd] Ghillie's Gatling Guns";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_LAAT_Minigun_Mag",
			};
		class LowROF : LowROF
		{
			reloadTime = 0.025; // was 0.05
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1.25, 1, 1800};
				begin2[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1.25, 1.025, 1800};
				begin3[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1.25, 0.95, 1800};
				begin4[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1.25, 1.05, 1800};
				begin5[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1.25, 0.9, 1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg", 1, 1, 400};
				soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
				soundBeginWater[] = {"beginwater1", 1};
				weaponSoundEffect = "";
			};
		};
	};
	class 332nd_Y_Wing_Cannon : 3AS_BTLB_Heavy_Cannon
	{
		displayName = "[332nd] Energy Cannon";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_Y_Wing_Cannon_Mag",
			};
	};
	class 332nd_Z95_Cannon : 3AS_Z95_Light_Cannon
	{
		displayName = "[332nd] Energy Cannon";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_Z95_Cannon_Mag",
			};
	};
	class 332nd_ARC_Cannon : 3AS_ARC_Light_Canon
	{
		displayName = "[332nd] Energy Cannon";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_ARC_Cannon_Mag",
			};
	};
	class 332nd_Rho_Cannon : ParticleBeamCannon_Nu
	{
		displayName = "[332nd] Energy Cannon";
		ballisticsComputer = "4 + 2 + 8";
		magazines[] =
			{
				"332nd_Rho_Cannon_Mag",
			};
		class HE : HE
		{
			magazines[] =
				{
					"332nd_Rho_Cannon_Mag"};
		};
	};
	// Smoke Rockets
	class 332nd_Smoke_RKT_Launcher : missiles_DAR
	{
		magazines[] = {"332nd_Hydra_Smoke_Mag_7_Count"};
		showAimCursorInternal = 0;
		displayName = "[332nd] Smoke Hydra Launcher";
	};
};

class CfgMagazines
{
	class PylonMissile_1Rnd_AAA_missiles;
	class PylonRack_Missile_AGM_02_x1;
	class ace_missile_gbu_gbu12;
	class PylonMissile_1Rnd_GAA_missiles;
	class ace_maverick_L_magazine_x1;
	class PylonRack_Bomb_SDB_x4; // Forge I
	class FSNB_B61_4_Timed_M;	 // Forge X-N
	class PylonRack_12Rnd_missiles;
	class 4Rnd_BombCluster_01_F;
	class PylonMissile_Missile_HARM_x1;

	class 332nd_Hammer_I_Mag : PylonMissile_1Rnd_AAA_missiles
	{
		ammo = "332nd_Hammer_I_Ammo";
		author = "Ithias";
		count = 3;
		descriptionShort = "Short-range, infrared-guided, air-to-air missile with explosive warhead";
		displayName = "[332nd] Hammer I";
		displayNameShort = "IR AA";
		hardpoints[] =
			{
				"332nd_Hammer_I",
			};
		mass = 90;
		maxLeadSpeed = 694.444;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		pylonWeapon = "332nd_Hammer_I";
		weight = 0;
	};
	class 332nd_CIS_A2A_Missile_Mag : 332nd_Hammer_I_Mag
	{
		ammo = "332nd_CIS_A2A_Missile_Ammo";
		count = 1;
		displayName = "[332nd] CIS A2A Missile";
		hardpoints[] =
			{
				"332nd_CIS_A2A_Missile",
			};
		pylonWeapon = "332nd_CIS_A2A_Missile";
	};
	class 332nd_Hammer_II_Mag : PylonMissile_1Rnd_GAA_missiles
	{
		ammo = "332nd_Hammer_II_Ammo";
		author = "Ithias";
		count = 2;
		descriptionShort = "Medium-range, radar-guided, air-to-air missile with explosive warhead";
		displayName = "[332nd] Hammer II";
		displayNameShort = "Radar AA";
		hardpoints[] =
			{
				"332nd_Hammer_II",
			};
		mass = 152;
		maxLeadSpeed = 694.444;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		pylonWeapon = "332nd_Hammer_II";
		weight = 0;
	};
	class 332nd_Hammer_II_L_Mag : 332nd_Hammer_II_Mag
	{
		ammo = "332nd_Hammer_II_L_Ammo";
		descriptionShort = "Medium-range, radar-guided, air-to-air missile with high-explosive warhead";
		displayName = "[332nd] Hammer II-L";
		hardpoints[] =
			{
				"332nd_Hammer_II_L",
			};
		pylonWeapon = "332nd_Hammer_II_L";
	};
	class 332nd_Anvil_X_S_Mag : PylonRack_12Rnd_missiles
	{
		ammo = "332nd_Anvil_X_S_Ammo";
		count = 24;
		descriptionShort = "Unguided rockets with a smaller-explosive warhead";
		displayName = "[332nd] Anvil X-S";
		displayNameShort = "HE";
		hardpoints[] =
			{
				"332nd_Anvil_X_S",
			};
		pylonWeapon = "332nd_Anvil_X_S";
	};
	class 332nd_Anvil_I_Mag : PylonRack_Missile_AGM_02_x1
	{
		ammo = "332nd_Anvil_I_Ammo";
		author = "Ithias";
		count = 2;
		descriptionShort = "Short-range, infrared-guided, air-to-surface missile with explosive anti-tank warhead";
		displayName = "[332nd] Anvil I";
		displayNameShort = "IR AG";
		hardpoints[] =
			{
				"332nd_Anvil_I",
			};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		pylonWeapon = "332nd_Anvil_I";
		weight = 0;
	};
	class 332nd_Anvil_IV_Mag : PylonRack_Missile_AGM_02_x1
	{
		ammo = "332nd_Anvil_IV_Ammo";
		author = "Ithias";
		count = 3;
		descriptionShort = "Short-range, wire-guided, air-to-surface missile with explosive anti-tank warhead";
		displayName = "[332nd] Anvil IV";
		displayNameShort = "Wire AG";
		hardpoints[] =
			{
				"332nd_Anvil_IV",
			};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		pylonWeapon = "332nd_Anvil_IV";
		weight = 0;
	};
	class 332nd_CIS_ATG_Missile_Mag : 332nd_Anvil_I_Mag
	{
		ammo = "332nd_CIS_ATG_Missile_Ammo";
		count = 1;
		displayName = "[332nd] CIS ATG Missile";
		hardpoints[] =
			{
				"332nd_CIS_ATG_Missile",
			};
		pylonWeapon = "332nd_CIS_ATG_Missile";
	};
	class 332nd_Anvil_III_Mag : ace_maverick_L_magazine_x1
	{
		ammo = "332nd_Anvil_III_Ammo";
		author = "Ithias";
		count = 1;
		descriptionShort = "Short-range, laser Guided, air-to-surface missile with explosive anti-tank warhead";
		displayName = "[332nd] Anvil III";
		displayNameShort = "LGM";
		hardpoints[] =
			{
				"332nd_Anvil_III",
			};
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		pylonWeapon = "332nd_Anvil_III";
	};
	class 332nd_Forge_III_Mag : ace_missile_gbu_gbu12
	{
		ammo = "332nd_Forge_III_Ammo";
		author = "Ithias";
		count = 2;
		descriptionShort = "500lb, high-explosive, laser-guided bomb";
		displayName = "[332nd] Forge III";
		displayNameShort = "LGB";
		hardpoints[] =
			{
				"332nd_Forge_III",
			};
		mass = 90;
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		pylonWeapon = "332nd_Forge_III";
		weight = 0;
	};
	class 332nd_Forge_III_Mag_Y : 332nd_Forge_III_Mag
	{
		ammo = "332nd_Forge_III_Ammo_Y";
		count = 4;
		hardpoints[] =
			{
				"332nd_Forge_III_Y",
			};
		pylonWeapon = "332nd_Forge_III_Y";
	};
	class 332nd_Forge_I_Mag : PylonRack_Bomb_SDB_x4
	{
		ammo = "332nd_Forge_I_Ammo";
		author = "Ithias";
		count = 2;
		descriptionShort = "250lb, explosive, infrared-guided bomb";
		displayName = "[332nd] Forge I";
		displayNameShort = "IR Bomb";
		hardpoints[] =
			{
				"332nd_Forge_I",
			};
		model = "\A3\Weapons_F_Sams\Ammo\PylonPod_Bomb_05_x4_F";
		pylonWeapon = "332nd_Forge_I";
		weight = 0;
	};
	class 332nd_Forge_X_N_Mag : FSNB_B61_4_Timed_M
	{
		ammo = "FSNB_B61_4_Timed";
		author = "Ithias";
		count = 1;
		descriptionShort = "0.3 kt, nuclear, un-guided bomb";
		displayName = "[332nd] Forge X-N";
		displayNameShort = "Nuke";
		hardpoints[] =
			{
				"332nd_Forge_X_N",
			};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		pylonWeapon = "332nd_Forge_X_N";
		weight = 0;
	};
	class 332nd_Forge_X_C_Mag : 4Rnd_BombCluster_01_F
	{
		ammo = "332nd_Forge_X_C_Ammo";
		author = "Ithias";
		count = 2;
		descriptionShort = "750lb, un-guided cluster bomb";
		displayName = "[332nd] Forge X-C";
		displayNameShort = "LGB-C";
		hardpoints[] =
			{
				"332nd_Forge_X_C",
			};
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		pylonWeapon = "332nd_Forge_X_C";
		weight = 0;
	};
	class 332nd_Anvil_VI_Mag : PylonMissile_Missile_HARM_x1 // "Sima cant fly for shit" Mouse, c 2026
	{
		ammo = "332nd_Anvil_VI_Ammo";
		author = "Ithias";
		count = 1;
		descriptionShort = "Long-range, anti-radiation missile with explosive warhead";
		displayName = "[332nd] Anvil VI";
		displayNameShort = "ARM";
		hardpoints[] =
			{
				"B_HARM",
			};
		pylonWeapon = "332nd_Anvil_VI";
	};

	// Cannon
	class 3as_LAAT_1000Rnd_Medium_shells;
	class 3AS_BTLB_450Rnd_Heavy_Shells;
	class 3as_Z95_750Rnd_Light_shells;
	class 3as_ARC_500Rnd_Light_Shells;
	class 3AS_Nu_5000Rnd_HE;

	class 332nd_LAAT_Cannon_Mag : 3as_LAAT_1000Rnd_Medium_shells
	{
		ammo = "332nd_LAAT_Cannon_Ammo";
		count = 500;
		displayname = "Energy Cell";
	};
	class 332nd_LAAT_Minigun_Mag : 3as_LAAT_1000Rnd_Medium_shells
	{
		ammo = "332nd_Gas_Level_M1_S";
		count = 2000;
		displayname = "Energy Cell";
	};
	class 332nd_Y_Wing_Cannon_Mag : 3AS_BTLB_450Rnd_Heavy_Shells
	{
		ammo = "332nd_Y_Wing_Cannon_Ammo";
		count = 500;
		displayname = "Energy Cell";
	};
	class 332nd_Z95_Cannon_Mag : 3as_Z95_750Rnd_Light_shells
	{
		ammo = "332nd_Z95_Cannon_Ammo";
		count = 1500;
		displayname = "[332nd] Energy Cannon";
		hardpoints[] =
			{
				"332nd_Z95_Cannon",
			};
		descriptionShort = "Base Z-95 Cannon";
		pylonWeapon = "332nd_Z95_Cannon";
	};
	class 332nd_ARC_Cannon_Mag : 3as_ARC_500Rnd_Light_Shells
	{
		ammo = "332nd_ARC_Cannon_Ammo";
		count = 500;
		displayname = "Energy Cell";
	};
	class 332nd_Rho_Cannon_Mag : 3AS_Nu_5000Rnd_HE
	{
		ammo = "332nd_Rho_Cannon_Ammo";
		count = 500;
		displayname = "Energy Cell";
	};
	// Aircraft Smokes
	class 332nd_Hydra_Smoke_Mag_7_Count : PylonRack_12Rnd_missiles
	{
		scope = 2;
		displayName = "[332nd] Smoke Rocket x7";
		displayNameShort = "Smoke Rocket";
		ammo = "332nd_Hydra_Smoke";
		descriptionShort = "Unguided rocket with white smoke warhead";
		initSpeed = 0;
		count = 7;
		maxLeadSpeed = 300;
		pylonWeapon = "332nd_Smoke_RKT_Launcher";
		mass = 125;
		hardpoints[] =
			{
				"332nd_Smoke_RKT",
			};
	};
};

class CfgAmmo
{
	class M_Air_AA;
	class M_Zephyr;
	class Missile_AGM_02_F;
	class ace_maverick_L;
	class ammo_Penetrator_AGM_02;
	class M_AT;
	class BombCluster_01_Ammo_F;
	class ammo_Bomb_SDB;
	class ace_missile_gbu_12;
	class ammo_Missile_HARM;

	class 332nd_Hammer_I_Ammo : M_Air_AA
	{
		effectsMissile = "332nd_Effect_Hammer";
		proximityExplosionDistance = 7;
		fuseDistance = 5;

		missileLockMaxDistance = 3000; // max distance (meters) target can be locked
		missileLockMinDistance = 200;  // optional: minimum lock distance
		maxControlRange = 5000;		   // optional: how far missile can guide
	};
	class 332nd_CIS_A2A_Missile_Ammo : 332nd_Hammer_I_Ammo
	{
		effectsMissile = "332nd_Effect_CIS_A2A";
		fuseDistance = 5;
	};
	class 332nd_Hammer_II_Ammo : M_Zephyr
	{
		effectsMissile = "332nd_Effect_Hammer_II";
		proximityExplosionDistance = 12;
		fuseDistance = 5;

		missileLockMaxDistance = 9000; // max distance (meters) target can be locked
		missileLockMinDistance = 200;  // optional: minimum lock distance
		maxControlRange = 10000;	   // optional: how far missile can guide
	};
	class 332nd_Hammer_II_L_Ammo : M_Zephyr
	{
		effectsMissile = "332nd_Effect_Hammer_II";
		hit = 750;
		indirectHit = 750;
		proximityExplosionDistance = 12;
		fuseDistance = 5;

		missileLockMaxDistance = 9000; // max distance (meters) target can be locked
		missileLockMinDistance = 200;  // optional: minimum lock distance
		maxControlRange = 10000;	   // optional: how far missile can guide
	};
	class 332nd_Anvil_X_S_Ammo : M_AT
	{
		effectsMissile = "332nd_Effect_Hydra";
		fuseDistance = 5;
	};
	class 332nd_Anvil_I_Ammo : Missile_AGM_02_F
	{
		effectsMissile = "332nd_Effect_Anvil";
		submunitionAmmo = "332nd_Anvil_I_Ammo_Penetrator";
		hit = 400;
		fuseDistance = 5;
	};
	class 332nd_Anvil_IV_Ammo : 332nd_Anvil_I_Ammo
	{
		manualControl = 1;
		maxControlRange = 2000;
		weaponLockSystem = "0";
		// maneuvrability = 27;
		maneuvrability = 30;
		// sideAirFriction = 0.15;
		sideAirFriction = 0.5;
	};
	class 332nd_Anvil_I_Ammo_Penetrator : ammo_Penetrator_AGM_02
	{
		hit = 400;
	};
	class 332nd_CIS_ATG_Missile_Ammo : 332nd_Anvil_I_Ammo
	{
		effectsMissile = "332nd_Effect_CIS_ATG";
		submunitionAmmo = "ammo_Penetrator_AGM_02";
		hit = 400;
		fuseDistance = 5;
	};
	class 332nd_Anvil_III_Ammo : ace_maverick_L
	{
		effectsMissile = "332nd_Effect_Anvil";
		fuseDistance = 5;
	};
	class 332nd_Forge_X_C_Ammo : BombCluster_01_Ammo_F
	{
		submunitionAmmo[] =
			{
				"Mo_cluster_Bomb_01_F",
				/*	0.93,
					"BombCluster_01_UXO_deploy",
					0.07	*/
			};
	};
	class 332nd_Forge_I_Ammo : ammo_Bomb_SDB{

							   };
	class 332nd_Forge_III_Ammo : ace_missile_gbu_12{

								 };
	class 332nd_Forge_III_Ammo_Y : 332nd_Forge_III_Ammo {

	};
	class 332nd_Anvil_VI_Ammo : ammo_Missile_HARM
	{
		displayName = "[332nd] Anvil V";
		effectsMissile = "332nd_Effect_Anvil";
		fuseDistance = 5;
	};

	// cannon
	class 3as_LAAT_Medium_Energy_shell;
	class 3AS_BTLB_Heavy_Energy_Shells;
	class 3as_Z95_Light_Energy_shell;
	class 3as_Arc_Light_Energy_shell;
	class 3AS_Nu_HE;

	class 332nd_LAAT_Cannon_Ammo : 3as_LAAT_Medium_Energy_shell
	{
		hit = 25;
		caliber = 1;
		indirecthit = 50;
		indirecthitrange = 3;
	};
	class 332nd_Y_Wing_Cannon_Ammo : 3AS_BTLB_Heavy_Energy_Shells
	{
		hit = 25;
		caliber = 1;
		indirecthit = 50;
		indirecthitrange = 3;
	};
	class 332nd_Z95_Cannon_Ammo : 3as_Z95_Light_Energy_shell
	{
		hit = 25;
		caliber = 1;
		indirecthit = 50;
		indirecthitrange = 3;
	};
	class 332nd_ARC_Cannon_Ammo : 3as_Arc_Light_Energy_shell
	{
		hit = 25;
		caliber = 1;
		indirecthit = 50;
		indirecthitrange = 3;
	};
	class 332nd_Rho_Cannon_Ammo : 3AS_Nu_HE
	{
		hit = 25;
		caliber = 1;
		indirecthit = 50;
		indirecthitrange = 3;
	};
	// Aircraft Smoke Rockets (SmokeShell on impact) see sqf in pylon/postinitsqf for effect
	class 332nd_Hydra_Smoke : 332nd_Anvil_X_S_Ammo
	{
		effectsMissile = "332nd_Effect_Hydra";
		submunitionAmmo = "332nd_Smoke_Sub";
		submuntionConeAngle = 0;
		triggerDistance = 2;
		hit = 0; // from here to crater effects, it's so the pilots don't truth nuke anybody near point of impact or detonation, because we still use the M_AT. And so there's no crater or explosive effect.
		indirectHit = 0;
		indirectHitRange = 0; 
		ace_frag_enabled = 0;
		explosionEffects = "";
		CraterEffects = "";
	};
	class 332nd_Hydra_Smoke_Red : 332nd_Hydra_Smoke
	{
		submunitionAmmo = "332nd_Smoke_Sub_Red";
	};
	class 332nd_Hydra_Smoke_Green : 332nd_Hydra_Smoke
	{
		submunitionAmmo = "332nd_Smoke_Sub_Green";
	};
	class 332nd_Hydra_Smoke_Blue : 332nd_Hydra_Smoke
	{
		submunitionAmmo = "332nd_Smoke_Sub_Blue";
	};
	// smoke submunitions
	class SmokeShell;
	class 332nd_Smoke_Sub : SmokeShell
	{
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "SmokeShellWhiteEffect";
	};
	class 332nd_Smoke_Sub_Red : 332nd_Smoke_Sub
	{
		smokeColor[] = {0.84380001, 0.1383, 0.1353, 1};
	};
	class 332nd_Smoke_Sub_Green : 332nd_Smoke_Sub
	{
		smokeColor[] = {0.21250001, 0.62580001, 0.48909998, 1};
	};
	class 332nd_Smoke_Sub_Blue : 332nd_Smoke_Sub
	{
		smokeColor[] = {0.1183, 0.1867, 1, 1};
	};
};

// Effect
class 332nd_Effect_Hammer
{
	class 332nd_Light_Hammer
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Blue_Light";
	};
	class 332nd_Smoke_Hammer
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "332nd_Missile_Blue_Smoke";
	};
};

class 332nd_Effect_Hammer_II
{
	class 332nd_Light_Hammer
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Purple_Light";
	};
	class 332nd_Smoke_Hammer
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "332nd_Missile_Purple_Smoke";
	};
};

class 332nd_Effect_CIS_A2A
{
	class 332nd_Light_CIS_A2A
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Red_Light";
	};
	class 332nd_Smoke_CIS_A2A
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "332nd_Missile_Red_Smoke";
	};
};

class 332nd_Effect_Anvil
{
	class 332nd_Light_Anvil
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Green_Light";
	};
	class 332nd_Smoke_Anvil
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "332nd_Missile_Green_Smoke";
	};
};

class 332nd_Effect_Hydra
{
	class 332nd_Light_Hydra
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Green_Light";
	};
	class 332nd_Smoke_Hydra
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "332nd_Missile_Green_Smoke";
	};
};

class 332nd_Effect_CIS_ATG
{
	class 332nd_Light_CIS_ATG
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "332nd_Missile_Pink_Light";
	};
	class 332nd_Smoke_CIS_ATG
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "332nd_Missile_Pink_Smoke";
	};
};