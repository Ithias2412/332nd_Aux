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