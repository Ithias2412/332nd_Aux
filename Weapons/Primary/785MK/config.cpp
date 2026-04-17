class CfgPatches {
	class 332nd_785MK {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_785MK",
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

class cfgWeapons 
{
	class IDA_DC15X;

//Primary
	class 332nd_785MK: IDA_DC15X
	{
		cursor = "332nd_Cursor_Tri";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] 785MK (MRK)";
		recoil="3AS_recoil_DC15A";
		reloadAction = "3AS_GestureReload_DC17M";
		reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",1,1,30};
		reloadSound[] = {"",1,1};
		//picture = "\MRC\JLTS\weapons\DW32S\data\ui\DW32S_ui_ca.paa"; 
		scope = 2;
		weaponInfoType="RscOptics_nightstalker";
		baseWeapon = "332nd_785MK";
		IDA_StunWeapon = "";
		IDA_AltWeapon="";
		magazines[] =
		{
			"332nd_785MK_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
		class Single: Mode_SemiAuto
		{
			reloadTime= 1.0; // was 0.2
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion=0.00018;
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
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",2.5,1,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",1,1,400};
				soundBegin[] = {"begin1",1};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",2.5,1,1800};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",1,1,400};
				soundBegin[] = {"begin1",1};
				soundBeginWater[] = {"beginwater1",1};
				weaponSoundEffect = "";
			};
		};
		modelOptics="\332nd_Aux\Misc\Optics\332nd_Zoom";
		class OpticsModes
		{
			class IDA_DC15X_Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]={};
				opticsZoomMin=0.015625;
				opticsZoomMax=0.03125;
				opticsZoomInit=0.03125;
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=2;
				distanceZoomMin=300;
				distanceZoomMax=2400;
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
			mass=60;
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
				compatibleItems[]=
				{
					"bipod_01_F_blk",
					"3AS_bipod_DC15X_F",
				};
			};
		};
	};
};