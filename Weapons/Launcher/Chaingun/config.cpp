class CfgPatches
{
	class 332nd_Chaingun
	{
		addonRootClass="3AS_Weapons";
		requiredAddons[]=
		{
			"3AS_Weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"332nd_Chaingun"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
    class 3AS_Chaingun; 
    class 332nd_Chaingun: 3AS_Chaingun
    {
        author="Cherryy";
		displayName="[332nd] Heavy Chaingun (WIP / Banned [AR] )";
        recoil="3as_recoil_Chaingun";
		magazines[]=
		{
			"332nd_Chaingun_Mag"
		};
		modes[]=
		{
			"FullAuto"
		};
    };
};
class CfgAmmo
{
	class 332nd_Base_Ammo;
	class 332nd_Chaingun_Ammo_762x39: 332nd_Base_Ammo
	{
        model="3AS\3AS_Weapons\Data\tracer_yellow.p3d";
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		caliber=1.2;
		ACE_caliber=0;
		cost=500;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0.0099999998;
		maxSpeed=1050;
		typicalSpeed=1050;
		initTime=0;
		thrustTime=3.4000001;
		thrust=500;
		fuseDistance=0;
		simulationStep=0.02;
		timeToLive=4;
		whistleDist=20;
		triggerOnImpact=1;
		triggerDistance=2.5;
		directionalExplosion=0;
		dangerRadiusBulletClose=-1;
		dangerRadiusHit=-1;
		warheadName="";
		deleteParentWhenTriggered=0;
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		minTimeToLive=0;
		simulation="shotMissile";
		flightProfiles[]=
		{
			"Direct"
		};
		proximityExplosionDistance=5;
		explosive=0.2;
		CraterEffects="ExploAmmoCrater";
		effectFlare="FlareShell";
		effectFly="3AS_PlasmaBolt_Yellow_Fly";
		effectsFire="CannonFire";
		effectsMissile="3AS_PlasmaBolt_Yellow_Fly";
		effectsMissileInit="";
		effectsSmoke="SmokeShellWhite";
		explosionAngle=60;
		explosionEffects="3AS_ImpactPlasma";
		explosionEffectsDir="explosionDir";
		airLock=0;
		aiAmmoUsageFlags="64 + 128 + 256";
		irLock=0;
		maneuvrability=4;
		allowAgainstInfantry=1;
		trackOversteer=1;
		maxControlRange=600;
		class HitEffects
		{
			Hit_Foliage_green="3AS_ImpactPlasma";
			Hit_Foliage_Dead="3AS_ImpactPlasma";
			Hit_Foliage_Green_big="3AS_ImpactPlasma";
			Hit_Foliage_Palm="3AS_ImpactPlasma";
			Hit_Foliage_Pine="3AS_ImpactPlasma";
			hitFoliage="3AS_ImpactPlasma";
			hitGlass="3AS_ImpactPlasma";
			hitGlassArmored="3AS_ImpactPlasma";
			hitWood="3AS_ImpactPlasma";
			hitMetal="3AS_ImpactPlasma";
			hitMetalPlate="3AS_ImpactPlasma";
			hitBuilding="3AS_ImpactPlasma";
			hitPlastic="3AS_ImpactPlasma";
			hitRubber="3AS_ImpactPlasma";
			hitTyre="3AS_ImpactPlasma";
			hitConcrete="3AS_ImpactPlasma";
			hitMan="3AS_ImpactPlasma";
			hitGroundSoft="3AS_ImpactPlasma";
			hitGroundRed="3AS_ImpactPlasma";
			hitGroundHard="3AS_ImpactPlasma";
			hitWater="3AS_ImpactPlasma";
			hitVirtual="3AS_ImpactPlasma";
			default_mat="3AS_ImpactPlasma";
		};
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			150
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			2000
		};
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		SoundSetExplosion[]=
		{
			""
		};
	};
};
class CfgMagazines
{
	class 332nd_Base_Mag;
	class 332nd_Chaingun_Mag: 332nd_Base_Mag
	{
		ammo = "332nd_Chaingun_Ammo_762x39";
		count = 500;
		descriptionShort = "";
		displayname = "Chaingun 500 Round Energy Cell";
		displayNameShort = "";
		mass = 80;
		scope = 2;
	};
};