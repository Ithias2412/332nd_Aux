
class CfgPatches {
	class 332nd_Westar {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Westar",
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
	class animationSources;
	class 332nd_Westar: 3AS_WestarM5_GL
	{
		cursor = "332nd_Cursor_Block";
		cursoraim = "332nd_Cursor_Dot";
		displayName = "[332nd] Westar-M5 GL (GRN)";
		recoil="3AS_recoil_DC15S";
		reloadAction = "GestureReload_JLTS_DC15S";
		magazines[] = {"332nd_Westar_Mag"};
		magazineWell[]={};
		modes[] = {"Single","Burst"};
		muzzles[] = {"this","332nd_WestarM5_GL"};
		class 332nd_WestarM5_GL: UGL_F
		{
			displayName="[3AS] WestarM5-GL";
			descriptionShort="GL for the WestarM5 Platform";
			useModelOptics=0;
			useExternalOptic=1;
			magazines[]=
			{
				"332nd_Westar_Rifle_Grenade_Mag",
			};
			magazineWell[]={};
			cameraDir = "eye";
			memoryPointCamera = "eye";
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
			class Single: Mode_SemiAuto
			{
				maxRange = 400;
				maxRangeProbab = 0.05;
				midRange = 200;
				midRangeProbab = 0.7;
				minRange = 30;
				minRangeProbab = 0.1;
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				class BaseSoundModeType
				{};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500};
					soundBegin[] = {"begin1",1};
					soundSetShot[] = {"Launcher_MRAWS_Shot_SoundSet","Launcher_MRAWS_Tail_SoundSet"};
				};
				class SilencedSound
				{};
			/*	class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
				};
				class SilencedSound
				{};	*/
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
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
			reloadTime=0.12;
			dispersion=0.00087;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
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