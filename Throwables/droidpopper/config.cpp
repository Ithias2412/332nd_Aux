class CfgPatches
{
    class 332nd_DroidPopper
    {
        author = "332nd";
        requiredAddons[] =
        {
            "A3_Weapons_F",
            "A3_Characters_F"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
        magazines[] =
        {
            "332nd_DroidPopper_x1_mag"
        };
    };
};
class cfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] +=
        {
            "332nd_DroidPopperMuzzle"
        };
        class ThrowMuzzle;
        class 332nd_DroidPopperMuzzle: ThrowMuzzle
        {
            magazines[] =
            {
                "332nd_DroidPopper_x1_mag"
            };
        };
    };
};

class cfgAmmo
{
    class GrenadeHand;
    class 332nd_DroidPopper_ammo: GrenadeHand
    {
        displayName = "[332nd] Droid Popper";
        model = "\Indecisive_Armoury_Ammos\Data\Thermal_Detonator\IDA_Thermal_Detonator.p3d";
        hit=0;
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        indirectHit = 0;
        indirectHitRange = 10;
		dangerRadiusHit=5;
		suppressionRadiusHit=5;
        ExplosionEffects = "Droid_Popper_GrenadeExplosion"; 
        SoundSetExplosion[] = {"Droidpopper_Soundset"}; 
        class EventHandlers {
            Fired="_unit = _this select 0; if (local _unit) then {_this spawn fnc_SB_DroidPopper};"
        };
    };
};

class CfgMagazines
{
    class HandGrenade;
    class 332nd_DroidPopper_x1_mag: HandGrenade
    {
        author = "332nd";
        displayName = "[332nd] Droid Popper";
        displayNameShort = "Droid Popper";
        count = 1;
        ammo = "332nd_DroidPopper_ammo";
		mass = 8;
		value = 1;
		model = "\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		picture = "\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
		type = 256;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.000316228,1};
		descriptionShort = "Droid Popper";
    };
};

class Droid_Popper_GrenadeExplosion
{
	class EMPGlexpfx
	{
		intensity = 1;
		interval = 3;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "EMPGL_CLExp";
	};
	class GrenadeExp1
	{
		intensity = 1;
		interval = 0.25;
		lifeTime = 0.25;
		particleFSLoop = 0;
		position[] = {0,0,0};
		simulation = "particles";
		type = "Droidpopper_GrenadeExp";
	};
	class GrenadeLight1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.85;
		position[] = {0,0,0};
		simulation = "light";
		type = "Droidpopper_GrenadeLight";
	};
	class refraction
	{
		intensity = 1;
		interval = "3 * 1";
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "EMPGL_Refract";
	};
	class sparks_large
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.75;
		position[] = {0,0,0};
		simulation = "particles";
		type = "EMPGL_sparks_Large";
	};
	class sparks_small_round
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.75;
		position[] = {0,0,0};
		simulation = "particles";
		type = "EMPGL_SparksSmallRound";
	};
};

class CfgSoundSets
{
	class Droidpopper_Soundset
	{
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		soundShaders[] = {"EMP_sparks_SoundShader_GL"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 2;
	};
};

class CfgCloudlets
{
	class Default;
	class Droidpopper_GrenadeExp: Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		//beforeDestroyScript = "\EMP_Systems\WNZ_EMP_12m\scripts\emp_effect.sqf";
		circleRadius = "intensity";
		circleVelocity[] = {0,0,0};
		color[] = {{0,0,0,0}};
		colorVar[] = {0,0,0,0.02};
		interval = "0.007 * interval + 0.007";
		lifeTime = 0.5;
		lifeTimeVar = 0;
		moveVelocity[] = {0,0,0};
		MoveVelocityVar[] = {1.75,1.75,1.75};
		onTimerScript = "";
		particleFSFrameCount = 2;
		particleFSIndex = 13;
		particleFSLoop = 0;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleType = "Billboard";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 0.08;
		randomDirectionIntensityVar = 0.1;
		randomDirectionPeriod = 0.01;
		randomDirectionPeriodVar = 2;
		rotationVelocity = 0;
		rotationVelocityVar = 1;
		rubbing = 0;
		size[] = {10,10};
		sizeVar = 0;
		timerPeriod = 0.05;
		volume = 1;
		weight = 4;
	};
};

class CfgLights
{
	class Droidpopper_GrenadeLight
	{
		ambient[] = {0.1,0.1,1,1};
		brightness = 1;
		color[] = {0.1,0.1,1,1};
		dayLight = 1;
		diffuse[] = {0,0,1,1};
		flareMaxDistance = 2000;
		flareSize = 1;
		position[] = {0,0,0};
		useFlare = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 15;
			hardLimitStart = 0;
			linear = 0;
			quadratic = 0.4;
			start = 0;
		};
	};
};