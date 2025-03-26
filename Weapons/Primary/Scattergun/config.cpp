class CfgPatches {
	class 332nd_Scattergun {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Scattergun",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class Mode_SemiAuto;
class GunParticles;
class cfgWeapons 
{
    class ItemInfo;
	class Rifle_Base_F;
	class 3AS_ScatterGun_F;

//Primary

	class 332nd_Scattergun: Rifle_Base_F
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "";
		scope=2;
		displayName="[332nd] Scattergun (ENG)";
		model="3as\3AS_Weapons\Scattergun\3AS_Scattergun_F.p3d";
		picture="3AS\3AS_Weapons\Data\UI\3as_scattergun.paa";
		weaponInfoType="RscWeaponZeroing";
		author="$STR_3as_Studio";
		magazines[]=
		{
			"332nd_ScatterGun_Scattershot_Mag"
		};
		magazineWell[]={};
		reloadAction="3AS_GestureReloadScatterGun";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="3as_recoil_heavy";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		initSpeed=-1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="3AS_GestureReloadScatterGunRack";
			sound="";
			soundLocation="LeftHandMiddle1";
			delay=0;
			onEmpty=0;
			hasOptic=1;
			soundEmpty="";
			soundLocationEmpty="";
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="Scattergun, 3rd Army Studios ";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Scattergun\Data\anims\Scattergun_handanim.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={7,110,176};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		muzzles[]=
		{
			"this",
			"Alternative_Barrel",
		};
		class Alternative_Barrel: 3AS_ScatterGun_F
		{
			displayName="Alternative Barrel";
			magazines[]=
			{
				"332nd_ScatterGun_Condensedshot_Mag",
			};
			magazineWell[]={};
			modelOptics = "\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
			class OpticsModes
			{
				class Nozoom
				{
					opticsPPEffects[]={};
					opticsID=1
					distanceZoomMax=600;
					distanceZoomMin=100;
					memoryPointCamera="eye";
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsFlare=0;
					opticsZoomInit=0.75;
					opticsZoomMax=1.25;
					opticsZoomMin=0.25;
					useModelOptics=0;
					visionMode[]={};
				};
				class Yeszoom
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
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1.5;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Scattergun_SoundSet"
				};
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
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
		modelOptics = "\332nd_Aux\Misc\Optics\332nd_Zoom.p3d";
		class OpticsModes
		{
			class Nozoom
			{
				opticsPPEffects[]={};
				opticsID=1
				distanceZoomMax=600;
				distanceZoomMin=100;
				memoryPointCamera="eye";
				modelOptics="\A3\Weapons_F\empty";
				opticsDisablePeripherialVision=0;
				opticsFlare=0;
				opticsZoomInit=0.75;
				opticsZoomMax=1.25;
				opticsZoomMin=0.25;
				useModelOptics=0;
				visionMode[]={};
			};
			class Yeszoom
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
		};
	};
};