class CfgPatches {
	class 332nd_Firepuncher {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Firepuncher",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class Mode_SemiAuto;
class WeaponSlotsInfo;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_FullAuto;
class GunParticles;

class cfgWeapons 
{
	class IDA_773Firepuncher;

//Primary
	class 332nd_Firepuncher: IDA_773Firepuncher
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		displayName="[332nd] Firepuncher (MRK)";
		descriptionShort="Long range, high power.";
		baseWeapon="332nd_Firepuncher";
		weaponInfoType="RscOptics_nightstalker";
		scope=2;
		IDA_StunWeapon = "";
		IDA_AltWeapon="";
		magazines[]=
		{
			"332nd_Firepuncher_Mag"
		};
		magazineWell[]={};
		reloadAction="ReloadMagazine";
		reloadMagazineSound[] = {
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",
			1,
			1,
			10
		};
		recoil="3AS_recoil_DC15A";
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single"
		};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					5,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.2; // was 0.2
			dispersion=0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom";
		class OpticsModes
		{
			class IDA_773Firepuncher_Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={};
				opticsZoomMin=0.03125;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				//discreteFov[]={0.0625,0.02};
				//discreteInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]=
				{
					"3AS_Bipod_VK38X_f"
				};
			};
		};
	};
};