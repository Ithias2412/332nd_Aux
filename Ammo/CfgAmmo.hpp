class SensorTemplateIR;
class CfgAmmo 
{
	class BulletBase;
	class ShotgunBase;
	class SubmunitionBase;
	class IDA_blasterbolt;
	//class IDA_blasterbolt_scatter;
	class R_PG32V_F;
	class 3AS_R_MK41_AT;
	class M_Titan_AT;
	class 3AS_M_MK43_AT;
	class ACE_NLAW;
	class G_40mm_HE;
	class smokeshell;
	class FlameRound;
	class FlameRound_sub;
	class 3as_LAAT_Medium_Energy_shell;



	//Start Base Ammo Classes
	class 332nd_Balistic_Bullet_Base: BulletBase
	{
		airFriction = -0.00018;
		airLock = 1;
		audibleFire = 45;
		coefGravity = 0.01;
		deflecting = 0;
		deflectionSlowDown = 1.0;
		typicalspeed = 800;
		//muzzleEffect = "";
	};
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
		suppressionRadiusBulletClose = -1; // was 6
		suppressionRadiusHit = -1; // was 8
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 0.975;
		tracerStartTime = 0;
		typicalspeed = 800;
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
		soundSetSonicCrack[] = {};
		caliber = 1;
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
		//suppressionRadiusBulletClose = 6;
		//suppressionRadiusHit = 8;
		timeToLive = 10;
		tracerEndTime = 10;
		tracerScale = 1;
		tracerStartTime = 0;
		typicalspeed = 800;
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
	class 332nd_FlameRound: FlameRound
	{
		//submunitionAmmo = "FlameRound_sub";
		//submunitionConeAngle = 4;
		//submunitionConeType[] = {"poissondisc",4};
		submunitionAmmo = "332nd_FlameRound_sub";
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissondisc",1};
		explosionEffects = "332nd_Flame_Explosion";
	};
	class 332nd_FlameRound_Scatter: 332nd_FlameRound
	{
		submunitionAmmo = "332nd_FlameRound_sub";
		submunitionConeAngle = 3;
		submunitionConeType[] = {"random",5};
		explosionEffects = "332nd_Flame_Explosion";
	};
	class 332nd_FlameRound_sub: FlameRound_sub
	{
		explosionEffects = "332nd_Flame_Explosion";
	};
	//Ammo Overhaul x2
	class 332nd_Slug_Thrower_Round: 332nd_Balistic_Bullet_Base
	{
		// B1=2 B2=6
		hit = 20;
		caliber = 3;
		typicalspeed = 1200;
	};
	class 332nd_Gas_Level_L1: 332nd_Base_Ammo_IDA
	{
		// B1=1 B2=2
		hit = 60;
		caliber = 3;
		typicalspeed = 1200;
	};
	class 332nd_Gas_Level_L1_P_X: 332nd_Base_Ammo_IDA
	{
		// B1=1 B2=2
		hit = 180; // Was 60
		caliber = 12.5; // was 25
		typicalspeed = 1200;
		tracerscale = 5;
		tracerEndTime = 10000;
	};
	class 332nd_Gas_Level_L2: 332nd_Base_Ammo_IDA
	{
		// B1=1 B2=4
		hit = 25;
		caliber = 3;
		typicalspeed = 1200;
	};
	class 332nd_Gas_Level_L3: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=6 
		hit = 20;
		caliber = 3;
		typicalspeed = 1200;
	};
	class 332nd_Gas_Level_L3_P: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=6
		hit = 20;
		caliber = 25;
		typicalspeed = 1200;
	};
	class 332nd_Gas_Level_M1: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=6 
		hit = 20;
		caliber = 2;
	};
	class 332nd_Gas_Level_M1_S: 332nd_Gas_Level_M1
	{
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
	};
	class 332nd_Gas_Level_M2: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=12
		hit = 15;
		caliber = 2;
	};
	class 332nd_Gas_Level_M2_S: 332nd_Gas_Level_M2
	{
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
	};
	class 332nd_Gas_Level_M3: 332nd_Base_Ammo_IDA
	{
		// B1=3 B2=18
		hit = 10;
		caliber = 2;
	};
	class 332nd_Gas_Level_M3_S: 332nd_Gas_Level_M3
	{
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
	};
	class 332nd_Gas_Level_S1: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=12
		hit = 15;
	};
	class 332nd_Gas_Level_S1_Dual: 332nd_Base_Ammo_IDA
	{
		// B1=2 B2=12
		hit = 15;
		model = "\3AS\3AS_Weapons\Data\tracer_blue_dual.p3d";
	};
	class 332nd_Gas_Level_S2: 332nd_Base_Ammo_IDA
	{
		// B1=3 B2=20
		hit = 10;
	};
	class 332nd_Gas_Level_S3: 332nd_Base_Ammo_IDA
	{
		// B1=4 b2=22
		hit = 7;
	};
	class 332nd_Scattershot_S2: 332nd_Base_Ammo_IDA //IDA_blasterbolt_scatter
	{
		submunitionAmmo = "332nd_Scattershot_S1_Sub";
		submunitionConeAngle = 0.50;
		submunitionConeType[] = {"random",18};
		triggerTime = 1e-09;
	};
	class 332nd_Scattershot_S1: 332nd_Base_Ammo_IDA //IDA_blasterbolt_scatter
	{
		submunitionAmmo = "332nd_Scattershot_S1_Sub";
		submunitionConeAngle = 0.25;
		submunitionConeType[] = {"random",12};
		triggerTime = 1e-09;
	};
	class 332nd_Scattershot_S1_Sub: 332nd_Base_Ammo_IDA
	{
		hit = 10;
	};
	class 332nd_Condensedshot_S1: 332nd_Base_Ammo_IDA
	{
		hit = 35;
	};
	class 332nd_EPL_AT: 332nd_Base_Ammo_IDA
	{
		//caliber = 1;
		hit = 600;
		indirectHit = 20;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		multiSoundHit[] = {"soundHit1",0.13,"soundHit2",0.13,"soundHit3",0.13,"soundHit4",0.13,"soundHit5",0.12,"soundHit6",0.12,"soundHit7",0.12,"soundHit8",0.12};
		ExplosionEffects = "HEShellExplosion";
		submunitionAmmo = "3AS_ammo_Penetrator_MK41";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		typicalspeed = 1000;
		EffectFly = "ArtilleryTrails";
		explosive = 1;
		fuseDistance = 5;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",3.16228,1,2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",3.16228,1,2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_3",3.16228,1,2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_4",3.16228,1,2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_5",3.16228,1,2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_6",3.16228,1,2000};
		soundHit7[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_7",3.16228,1,2000};
		soundHit8[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_8",3.16228,1,2000};
	};
	//AT Ammo
	//RPS6 / Dispo
	class 332nd_RPS6_Ammo_AT: 3AS_R_MK41_AT
	{
		//ExplosionEffects = "MortarExplosion";
		hit=300;
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		indirectHit = 20;
		indirectHitRange = 2;
		fuseDistance = 5;
	};
	class 332nd_RPS6_Ammo_NLAW: ACE_NLAW 
	{
		//ExplosionEffects = "MortarExplosion";
		hit=300;
		fuseDistance = 5;
	};
	class 332nd_Dispo_Ammo_NLAW: ACE_NLAW 
	{
		//ExplosionEffects = "MortarExplosion";
		hit=300;
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		indirectHit = 20;
		indirectHitRange = 2;
		fuseDistance = 5;
		submunitionAmmo = "3AS_ammo_Penetrator_MK41";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		
		explosive = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		proximityExplosionDistance = 0;
	};
	//PLX1
	class 332nd_PLX1_Ammo_AT: 3AS_M_MK43_AT
	{
		//ExplosionEffects = "MortarExplosion";
		hit=900;
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		indirectHit = 20;
		indirectHitRange = 2;
		fuseDistance = 5;
	};
	//UGL Grenades & Smokes
	class 332nd_HE_UGLGrenade: G_40mm_HE
	{
		ace_frag_enabled=1;
		indirectHitRange=5;
		indirectHit=40;
		effectflare="FlareShell";
		effectfly="IDA_BlasterBoltGlow_Blue_Fly";
		fuseDistance = 5;
		ExplosionEffects="GrenadeExplosion";
		CraterEffects="GrenadeCrater";
		lightcolor[]={0,0,1};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
	class 332nd_DroidPopper_UGLGrenade: 332nd_HE_UGLGrenade
	{
		ace_frag_enabled=0;
		indirectHitRange=10;
        hit=0;
		indirectHit=0;
        ace_frag_skip = 1;
		dangerRadiusHit=5;
		suppressionRadiusHit=5;
        ExplosionEffects = "Droid_Popper_GrenadeExplosion"; 
        SoundSetExplosion[] = {"Droidpopper_Soundset"}; 
        class EventHandlers 
		{
            Fired="_unit = _this select 0; if (local _unit) then {_this spawn fnc_SB_DroidPopper};"
        };
		effectflare="FlareShell";
		effectfly="IDA_BlasterBoltGlow_Blue_Fly";
		CraterEffects="GrenadeCrater";
		lightcolor[]={0,0,1};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
	class 332nd_Westar_Rifle_Grenade: 332nd_HE_UGLGrenade
	{
		coefGravity = 0.01;
		deflecting = 0;
		airFriction = -0.00018;
		indirectHitRange=2.5;
		indirectHit=40;
		typicalspeed = 1000;
		//IDA Rifle Grenade Bellow
		model = "Indecisive_Armoury_Ammos\Data\RifleGrenade\IDA_RifleGrenade.p3d";
		effectfly = "IDA_BlasterBoltGlow_Medium_Blue_Fly";
		effectflare = "FlareShell";
		Lightcolor[] = {1,0,0};
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
	class Sh_155mm_AMOS;
	class 3AS_82mm_HE_Mortar;
	class 3AS_230mm_fly;
	class 332nd_HAGM_Shell_Harmless: Sh_155mm_AMOS
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly = "IDA_BlasterBoltGlow_Large_Red_Fly";
		hit=0;
		indirectHit=0;
		indirectHitRange=30;
		ace_frag_enabled = 0;
	};
	class 332nd_82mm_Shell_Harmless: 3AS_82mm_HE_Mortar
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=30;
		ace_frag_enabled = 0;
	};
	class 332nd_Hailfire_Rocket_Harmless: 3AS_230mm_fly
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=30;
		ace_frag_enabled = 0;
	};
};

class CfgCloudlets
{
	class ExploAmmoSmoke;
	class 332nd_flamesExplosion: ExploAmmoSmoke
	{
		interval="0.015";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\a3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0.050000001,0};
		rotationVelocity=0;
		weight=0.075000003;
		volume=0.050000001;
		rubbing=0.050000001;
		size[]={0.5,0.5,0.5,0.5};
		sizeCoef=2.5;
		color[]=
		{
			{0.69999999,1,0.60000002,0.60000002},
			{0.69999999,1,0.60000002,0.40000001},
			{0.69999999,1,0.60000002,0.22},
			{0.69999999,1,0.60000002,0.1},
			{0.69999999,1,0.60000002,0}
		};
		colorCoef[]={0.69999999,1,0.60000002,1};
		animationSpeed[]={1.7,0.60000002,0.40000001,0.30000001,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		lifeTimeVar=1.7;
		positionVar[]=
		{
			"1 + 1.1 * intensity",
			0.30000001,
			"1 + 1.1 * intensity"
		};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		constantDistance=1.6;
		//Fire Damage
		damageType="Fire";
		damageTime=0.1;
		coreIntensity = 2;
		coreDistance = 5.0;
	};
};

class 332nd_Flame_Explosion
{
	class flame_Light
	{
		simulation="light";
		type="FiredLightMed";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class Flame_sound
	{
		simulation="sound";
		type="Fire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class 332nd_flamesExplosion
	{
		simulation="particles";
		type="BigDestructionFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
};