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
class FullAuto;

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 3AS_Chaingun: Launcher_Base_F
	{
		author = "3AS";
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Arrow";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "[3AS] Chaingun";
		model = "3AS\3AS_Weapons\Chaingun\Chaingun.p3d";
		picture = "\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
		UiPicture = "\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
		handAnim[] = {"OFP2_ManSkeleton","\3AS\3as_Weapons\data\anim\chaingun_hold.rtm"};
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"",""};
		reloadAction = "ReloadRPG";
		recoil = "3as_recoil_Chaingun";
		maxZeroing = 600;
		modelOptics = "";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
		cameraDir = "look";
		class GunParticles{};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.1083;
				opticsZoomMax = 0.1083;
				opticsZoomInit = 0.1083;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				cameraDir = "look";
				visionMode[] = {"Normal"};
				opticsPPEffects[] = {};
			};
		};
		magazines[] = {"332nd_AutoCannon_Mag"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"3AS\3AS_Main\Sounds\Z6\Z61.ogg",0.95,1,2000};
				soundBegin[] = {"begin1",0.1};
			};
			reloadTime = 0.033;
			dispersion = 0.00174;
			recoil = "recoil_auto_mk200";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			soundBurst = 0;
			burst = 1;
			displayName = "Full";
			textureType = "fullAuto";
		};
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;
	};

	// [332nd] AutoCannon -- functions like the Helldivers 2 Autocannon:
	// semi-automatic, punchy explosive rounds with medium armour penetration,
	// real projectile travel, and a deep cannon report.
	class 332nd_Chaingun: 3AS_Chaingun
	{
		author = "332nd Aux Team";
		displayName = "[332nd] AutoCannon";
		recoil = "3as_recoil_Chaingun";
		magazines[] = {"332nd_AutoCannon_Mag"};
		modes[] = {"FullAuto"};

		// Full-auto, deliberately slow autocannon cadence.
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.3;			// ~200 rpm; raise this number to fire slower
			dispersion = 0.0012;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_mk200";
			minRange = 4;
			minRangeProbab = 0.2;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			soundContinuous = 0;
			soundBurst = 0;
			burst = 1;
			displayName = "Full";
			textureType = "fullAuto";
			// Sound driven through a SoundSet (same mechanism as the mod's working
			// weapons); 332nd_Z6_SoundSet is the rotary-cannon/autocannon report.
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				soundSetShot[] = {"332nd_Z6_SoundSet"};
			};
		};
	};

};
class CfgAmmo
{
	class 3AS_Chaingun_Ammo;
	class 332nd_AutoCannon_Ammo: 3AS_Chaingun_Ammo
	{
		model="3AS\3AS_Weapons\Data\tracer_yellow.p3d";

		effectflare="FlareShell";
		effectfly="IDA_BlasterBoltGlow_Blue_Fly";

		// Direct impact + medium armour penetration
		hit = 40;
		caliber = 3.0;
		typicalSpeed = 420;
		airFriction = -0.0006;
		visibleFire = 18;
		audibleFire = 24;

		// Explosive flak burst on impact
		indirectHit = 22;
		indirectHitRange = 2.2;
		explosive = 0.7;
		initTime = 0;
		fuseDistance = 4;
		directionalExplosion = 0;
		proximityExplosionDistance = 0;
		explosionTime = 0;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		// All camera shake removed (zeroed, so nothing is inherited from the parent ammo).
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayer
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
};
class CfgMagazines
{
	class 3AS_Chaingun_Drum_Mag;
	class 332nd_AutoCannon_Mag: 3AS_Chaingun_Drum_Mag
	{
		ammo = "332nd_AutoCannon_Ammo";
		count = 10;
		initSpeed = 420;
		descriptionShort = "Explosive autocannon energy cell -- medium penetration.";
		displayname = "AutoCannon 10 Round Energy Cell";
		displayNameShort = "";
		mass = 25;
		scope = 2;
	};
};
