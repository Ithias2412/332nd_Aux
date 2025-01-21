class CfgPatches {
	class 332nd_Optics {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemCore;
	class ItemInfo;
	class optic_Yorris: ItemCore
	{
		class ItemInfo;
	};
//Custom
	class 332nd_Mode_A_Zoom_2: optic_Yorris
	{
		displayName="[332nd] Mode A (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A.p3d";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		class ItemInfo: ItemInfo
		{
			mass=1;
			optics=1;
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
	class 332nd_Mode_B_Zoom_2: optic_Yorris
	{
		displayName="[332nd] Mode B (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B.p3d";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		class ItemInfo: ItemInfo
		{
			mass=1;
			optics=1;
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
	class 332nd_Mode_C_Zoom_2: optic_Yorris
	{
		displayName="[332nd] Mode C (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C.p3d";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		class ItemInfo: ItemInfo
		{
			mass=1;
			optics=1;
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
	class 332nd_Mode_D_Zoom_2: optic_Yorris
	{
		displayName="[332nd] Mode D (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D.p3d";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		class ItemInfo: ItemInfo
		{
			mass=1;
			optics=1;
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
	class 332nd_Mode_Seelig_Point_Zoom_2: optic_Yorris
	{
		displayName="[332nd] Seelig Point (2x)";
		model="332nd_Aux\Misc\Optics\Seelig_Point.p3d";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		class ItemInfo: ItemInfo
		{
			mass=1;
			optics=1;
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
					modelOptics[] = {"\332nd_Aux\Misc\Optics\Seelig_Point_Zoom"};
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

//3AS

	class 3AS_optic_acog_DC15C;
	class 3AS_optic_reflex_DC15C;
	class 3AS_optic_holo_DC15S;

	class 332nd_3AS_C_Acog: 3AS_optic_acog_DC15C
	{
		displayName = "[3AS] ACOG";
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class IronOnTopOfMyOptics
				{
					cameraDir = "";
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					discretefov[] = {};
					discreteInitIndex = 0;
					distanceZoomMax = 1000;
					distanceZoomMin = 100;
					memoryPointCamera = "eye";
					modelOptics[] = {"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"};
					nFovLimit = 0.07;
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.375;
					useModelOptics = 0;
					visionMode[] = {"Normal","NVG"};
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
					modelOptics[] = {"\332nd_Aux\Misc\Optics\Seelig_Point_Zoom"};
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

	class 332nd_3AS_C_Reflex: 3AS_optic_reflex_DC15C
	{
		displayName = "[3AS] Reflex";
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class aco
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.25;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
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
					modelOptics[] = {"\332nd_Aux\Misc\Optics\Seelig_Point_Zoom"};
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

	class 332nd_3AS_S_Holo: 3AS_optic_holo_DC15S
	{
		displayName = "[3AS] Holo";
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class aco
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"Default"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.25;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
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
					modelOptics[] = {"\332nd_Aux\Misc\Optics\Seelig_Point_Zoom"};
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




};