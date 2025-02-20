class CfgAmmo {
	class BulletBase;
	class ShotgunBase;
	class SubmunitionBase;
	class IDA_blasterbolt;
	class 3AS_EY30_Pellets_Submunition;
	

	//Start Base Ammo Classes
	class 332nd_Base_Ammo: BulletBase
	{
		ACE_damageType = "bullet";
		ace_vehicle_damage_incendiary = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		airFriction = -0.00018;
		airLock = 1;
		audibleFire = 45;
		caliber = 1.5;
		cartridge = "";
		coefGravity = 0.01;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 12;
		deflecting = 0;
		deflectionSlowDown = 1.0;
		effectFlare = "FlareShell";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		effectsFire = "CannonFire";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 0;
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		muzzleEffect = "";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 0.975;
		tracerStartTime = 0;
		typicalSpeed = 472;
	};

	class 332nd_Base_Ammo_IDA: 332nd_Base_Ammo
	{
		ACE_damageType = "bullet";
		ace_vehicle_damage_incendiary = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		airFriction = -0.00018;
		airLock = 1;
		audibleFire = 45;
		brightness = 1000;
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		bulletFly1[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_1.wss",2.23872,1,100};
		bulletFly2[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_2.wss",2.23872,1,100};
		bulletFly3[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_3.wss",2.23872,1,100};
		bulletFly4[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_4.wss",2.23872,1,100};
		bulletFly5[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_5.wss",2.23872,1,100};
		caliber = 1.5;
		cartridge = "";
		coefGravity = 0.01;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 12;
		deflecting = 0;
		deflectionSlowDown = 1.0;
		effectFlare = "FlareShell";
		effectfly = "IDA_BlasterBoltGlow_Blue_Fly";
		effectsFire = "CannonFire";
		ExplosionEffects = "IDA_ImpactEffect";
		//explosive = 1;
		flaresize = 5;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 0;
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		muzzleEffect = "";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 1;
		tracerStartTime = 0;
		typicalSpeed = 472;
		class HitEffects
		{
			default_mat = "IDA_ImpactEffect";
			Hit_Foliage_Dead = "IDA_ImpactEffect";
			Hit_Foliage_Green = "IDA_ImpactEffect";
			Hit_Foliage_Green_big = "IDA_ImpactEffect";
			Hit_Foliage_Palm = "IDA_ImpactEffect";
			Hit_Foliage_Pine = "IDA_ImpactEffect";
			hitBuilding = "IDA_ImpactEffect";
			hitConcrete = "IDA_ImpactEffect";
			hitFoliage = "IDA_ImpactEffect";
			hitGlass = "IDA_ImpactEffect";
			hitGlassArmoRed = "IDA_ImpactEffect";
			hitGroundHard = "IDA_ImpactEffect";
			hitGroundRed = "IDA_ImpactEffect";
			hitGroundSoft = "IDA_ImpactEffect";
			hitMan = "IDA_ImpactEffect";
			hitMetal = "IDA_ImpactEffect";
			hitMetalPlate = "IDA_ImpactEffect";
			hitPlastic = "IDA_ImpactEffect";
			hitRubber = "IDA_ImpactEffect";
			hitTyre = "IDA_ImpactEffect";
			hitVirtual = "IDA_ImpactEffect";
			hitWater = "IDA_ImpactEffect";
			hitWood = "IDA_ImpactEffect";
		};
	};

	class 332nd_Base_Shotgun_Ammo: ShotgunBase
	{
		ace_vehicle_damage_incendiary = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		airFriction = -0.00018;
		airLock = 1;
		audibleFire = 45;
		caliber = 1;
		cartridge = "FxCartridge_slug";
		coefGravity = 0.01;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 12;
		deflecting = 0;
		deflectionSlowDown = 1.0;
		effectFlare = "FlareShell";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		effectsFire = "CannonFire";
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.5;
		initTime = 0;
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		muzzleEffect = "";
		simulation = "shotSpread";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 0.975;
		tracerStartTime = 0;
		typicalSpeed = 472;
	};

	class 332nd_Base_Shotgun_Ammo_Sub: SubmunitionBase
	{
		ace_vehicle_damage_incendiary = 0.1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		airFriction = -0.00018;
		airLock = 1;
		audibleFire = 45;
		caliber = 1;
		cartridge = "";
		coefGravity = 0.01;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 12;
		deflecting = 0;
		deflectionSlowDown = 1.0;
		effectFlare = "FlareShell";
		effectFly = "3AS_PlasmaBolt_Blue_Fly";
		effectsFire = "CannonFire";
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.5;
		initTime = 0;
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		muzzleEffect = "";
		simulation = "shotSpread";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 472;
		submunitionAmmo = "DBA_85mm_Pellets";
		submunitionConeAngle = 4;
		submunitionConeType[] = {"randomcenter",16};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,0.2};
		submunitionInitSpeed = 415;
		submunitionParentSpeedCoef = 0;
		warheadName = "AP";
	};

	class R_PG32V_F;
	class 3AS_R_MK41_AT;
	class M_Titan_AT;
	class 3AS_M_MK43_AT;
	class ACE_NLAW;
	//UGL Grenades & Smokes
	class G_40mm_HE;
	class smokeshell;
	class 332nd_HE_LGrenade: G_40mm_HE
	{
		ace_frag_enabled=1;
		indirectHitRange=5;
		indirectHit=20;
		effectflare="FlareShell";
		effectfly="IDA_BlasterBoltGlow_Blue_Fly";
		fuseDistance=0;
		ExplosionEffects="GrenadeExplosion";
		CraterEffects="GrenadeCrater";
		lightcolor[]={0,0,1};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
	class 332nd_UGL_Smoke: smokeshell
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
	};
	class 332nd_UGL_Smoke_Red: 332nd_UGL_Smoke
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="SmokeShellRedEffect";
	};
	class 332nd_UGL_Smoke_Green: 332nd_UGL_Smoke
	{
		smokeColor[]={0.21250001,0.62580001,0.48909998,1};
		effectsSmoke="SmokeShellGreenEffect";
	};
	class 332nd_UGL_Smoke_Yellow: 332nd_UGL_Smoke
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
		effectsSmoke="SmokeShellYellowEffect";
	};
	class 332nd_UGL_Smoke_Purple: 332nd_UGL_Smoke
	{
		smokeColor[]={0.4341,0.1388,0.41439998,1};
		effectsSmoke="SmokeShellPurpleEffect";
	};
	class 332nd_UGL_Smoke_Blue: 332nd_UGL_Smoke
	{
		smokeColor[]={0.1183,0.1867,1,1};
		effectsSmoke="SmokeShellBlueEffect";
	};
	class 332nd_UGL_Smoke_Orange: 332nd_UGL_Smoke
	{
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
		effectsSmoke="SmokeShellOrangeEffect";
	};
	//DC-15A Ammo
	class 332nd_DC15A_Ammo_762x39: 332nd_Base_Ammo_IDA
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
        ACE_caliber = 7.823;
		hit=11;
		caliber=1.2;
		typicalspeed=800;
	};

	//DC-15C Ammo
	class 332nd_DC15C_Ammo_556x45: 332nd_Base_Ammo_IDA
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
	};

	//DC-15L Ammo
	class 332nd_DC15L_Ammo_762x51: 332nd_Base_Ammo_IDA
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
		hit = 11.6;
		caliber = 1.6;
		typicalspeed=800;
	};

	//DC-15S Ammo
	class 332nd_DC15S_Ammo_9x19: 332nd_Base_Ammo_IDA
	{
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
		hit=5;
		caliber=0.4;
		typicalspeed=800;
	};


	//DC-15X Ammo
	class 332nd_DC15X_Ammo_50: 332nd_Base_Ammo_IDA
	{
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
        ACE_caliber = 12.954;
		hit = 30;
		caliber = 2.6;
		typicalspeed=800;
	};

	//332nd 950mm_Ball
	class 332nd_950mm_Ball: 332nd_Base_Ammo_IDA
	{
		ACE_caliber = 24.1;
		ACE_bulletLength = 70;
		ACE_bulletMass = 233.276;
		typicalspeed=800;
		hit = 120;
		indirectHit = 10;
		caliber = 80;
		indirectHitRange = 5; 
		deflecting = -1;
	};

	//DP-23 Ammo
	class 332nd_DP23_Ammo_12g: 3AS_EY30_Pellets_Submunition
	{
		//ACE_bulletLength = 28.956;
		//ACE_bulletMass = 7.9704;
		//ACE_caliber = 7.823;
		hit=10;
		caliber=1;
		typicalspeed=800;
		//submunitionAmmo = "CUP_12Gauge_Pellets_Submunition_No00_Buck_Deploy";
	};

	//Valken Ammo
	class 332nd_Valken_Ammo_762x51: 332nd_Base_Ammo_IDA
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
		hit = 11.6;
		caliber = 1.6;
		typicalspeed=800;
	};

	//Westar Ammo
	class 332nd_Westar_Ammo_556x45: 332nd_Base_Ammo
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
		effectFly = "3AS_PlasmaBolt_Yellow_Fly";
		model = "\3AS\3AS_Weapons\Data\tracer_yellow.p3d";
	};

	//Z-6 Ammo
	class 332nd_Z6_Ammo_556x45: 332nd_Base_Ammo_IDA
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
	};

	//DC-17S Ammo
	class 332nd_DC17S_Ammo_9x19: 332nd_Base_Ammo
	{
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
		hit=6;
		caliber=0.4;
		typicalspeed=800;
	};

	//RPS6 Ammo
	class 332nd_RPS6_Ammo_AT: 3AS_R_MK41_AT
	{
		ExplosionEffects = "MortarExplosion";
		hit=300;
	};
	class 332nd_RPS6_Ammo_NLAW: ACE_NLAW 
	{
		ExplosionEffects = "MortarExplosion";
		hit=300;
	};
	class 332nd_Dispo_Ammo_NLAW: ACE_NLAW 
	{
		ExplosionEffects = "MortarExplosion";
		hit=900;
	};


	//PLX1 Ammo
	class 332nd_PLX1_Ammo_AT: 3AS_M_MK43_AT
	{
		ExplosionEffects = "MortarExplosion";
		hit=900;
	};

	//Starting Ammo Config By Caliber and typical

	class 332nd_556x45_Ball: 332nd_Base_Ammo
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
	};
	class 332nd_762x51_Ball: 332nd_Base_Ammo
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
		hit = 11.6;
		caliber = 1.6;
		typicalspeed=800;

	};
	class 332nd_9x19_Ball: 332nd_Base_Ammo
	{
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
		hit=5;
		caliber=0.4;
		typicalspeed=800;
	};
	class 332nd_50_BMG_Ball: 332nd_Base_Ammo
	{
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
        ACE_caliber = 12.954;
		hit = 30;
		caliber = 2.6;
		typicalspeed=800;

	};
	class 332nd_45ACP: 332nd_Base_Ammo{
		ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
		typicalspeed=800;
		caliber = 2.6;
		hit=7;
	};
};