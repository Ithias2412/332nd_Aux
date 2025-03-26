
class CfgPatches {
	class 332nd_Westar {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Westar",
			"332nd_Westar_GL"
        };
		requiredAddons[] = {"3AS_Weapons_WestarM5"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgWeapons 
{
	class 3AS_WestarM5_Base_F;
	class UGL_F;
	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
	{
		class WeaponSlotsInfo;
	};
	class 3AS_WestarM5_GL;
	class 332nd_Westar: 3AS_WestarM5_F
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		displayName = "[332nd] Westar-M5";
		magazines[] = {"332nd_Westar_Mag"};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00052;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.05;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_Optic_Scope_WestarM5",
				};
			};
		};
	};
	class 332nd_Westar_GL: 3AS_WestarM5_GL
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		displayName = "[332nd] Westar-M5 GL Rifle";
		magazines[] = {"332nd_Westar_Mag"};
		magazineWell[]={};
		class 3AS_WestarM5_GL_F: UGL_F
		{
			displayName="[3AS] WestarM5-GL";
			descriptionShort="GL for the WestarM5 Platform";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"332nd_HE_LGrenade_Mag",
				"332nd_Smoke_LauncherGrenade",
				"332nd_SmokeRed_LauncherGrenade",
				"332nd_SmokeGreen_LauncherGrenade",
				"332nd_SmokeBlue_LauncherGrenade",
				"332nd_SmokePurple_LauncherGrenade",
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00052;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.05;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_Optic_Scope_WestarM5",
				};
			};
		};
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_Optic_Scope_WestarM5;
	class 332nd_Optic_Scope_WestarM5: 3AS_Optic_Scope_WestarM5
	{
		scope=2;
		displayName="[332nd] Long Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_Scope_Optics
				{
					opticsPPEffects[]={};
					opticsID=1
					discreteDistanceInitIndex=1;
					discreteInitIndex = 0;
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
					opticsDisablePeripherialVision=1;
					opticsFlare=1;
					opticsZoomInit = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomMin = 0.125;
					useModelOptics=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
					};
				};
				class 3AS_OverSights_Optic: 3AS_Scope_Optics
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};
			};
		};
	};
};