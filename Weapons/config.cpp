class CfgPatches {
	class 332nd_Weapons {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
//Secondary


//Launcher

};
class CfgAmmo
{
	class BulletBase;
	class ShotgunBase;
	class SubmunitionBase;
	class IDA_blasterbolt;

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

	
};
class CfgMagazines
{
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
};