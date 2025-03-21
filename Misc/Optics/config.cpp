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
//1x
	class 332nd_Mode_A_Raised: optic_Yorris
	{
		displayName="[332nd] Mode A";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Raised.p3d";
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
			};
		};
	};
	class 332nd_Mode_A_DLT_19L: optic_Yorris
	{
		displayName="[332nd] Mode A";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_DLT_19L.p3d";
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
			};
		};
	};
	class 332nd_Mode_A_Zoom_2_Raised_Forward: optic_Yorris
	{
		displayName="[332nd] Mode A";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Raised_Forward.p3d";
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
			};
		};
	};
	class 332nd_Mode_B_Raised: optic_Yorris
	{
		displayName="[332nd] Mode B";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Raised.p3d";
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
			};
		};
	};
	class 332nd_Mode_B_Zoom_2_Raised_Forward: optic_Yorris
	{
		displayName="[332nd] Mode B";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Raised_Forward.p3d";
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
			};
		};
	};
	class 332nd_Mode_C_Raised: optic_Yorris
	{
		displayName="[332nd] Mode C";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Raised.p3d";
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
			};
		};
	};
	class 332nd_Mode_C_Zoom_2_Raised_Forward: optic_Yorris
	{
		displayName="[332nd] Mode C";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Raised_Forward.p3d";
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
			};
		};
	};
	class 332nd_Mode_D_Raised: optic_Yorris
	{
		displayName="[332nd] Mode D";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Raised.p3d";
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
			};
		};
	};
	class 332nd_Mode_D_Zoom_2_Raised_Forward: optic_Yorris
	{
		displayName="[332nd] Mode D";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Raised_Forward.p3d";
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
			};
		};
	};
	class 332nd_Mode_Seelig_Point_Raised: optic_Yorris
	{
		displayName="[332nd] Seelig Point";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Raised.p3d";
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
			};
		};
	};
	class 332nd_Mode_Seelig_Point_Raised_Forward: optic_Yorris
	{
		displayName="[332nd] Seelig Point";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Raised_Forward.p3d";
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
			};
		};
	};

//2x
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
	class 332nd_Mode_A_Zoom_2_Raised: optic_Yorris
	{
		displayName="[332nd] Mode A (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Raised.p3d";
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
	class 332nd_Mode_A_Zoom_2_Forward: optic_Yorris
	{
		displayName="[332nd] Mode A (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Forward.p3d";
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
	class 332nd_Mode_B_Zoom_2_Raised: optic_Yorris
	{
		displayName="[332nd] Mode B (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Raised.p3d";
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
	class 332nd_Mode_B_Zoom_2_Forward: optic_Yorris
	{
		displayName="[332nd] Mode B (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Forward.p3d";
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
	class 332nd_Mode_C_Zoom_2_Raised: optic_Yorris
	{
		displayName="[332nd] Mode C (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Raised.p3d";
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
	class 332nd_Mode_C_Zoom_2_Forward: optic_Yorris
	{
		displayName="[332nd] Mode C (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Forward.p3d";
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
	class 332nd_Mode_D_Zoom_2_Raised: optic_Yorris
	{
		displayName="[332nd] Mode D (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Raised.p3d";
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
	class 332nd_Mode_D_Zoom_2_Forward: optic_Yorris
	{
		displayName="[332nd] Mode D (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Forward.p3d";
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
	class 332nd_Mode_Seelig_Point_Zoom_2_Forward: optic_Yorris
	{
		displayName="[332nd] Seelig Point (2x)";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Forward.p3d";
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
	class 332nd_Mode_Seelig_Point_Zoom_2_Raised: optic_Yorris
	{
		displayName="[332nd] Seelig Point (2x)";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Raised.p3d";
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

	class 3AS_optic_acog_DC15C: ItemCore
	{
		class ItemInfo;
	};
	class 3AS_optic_reflex_DC15C: ItemCore
	{
		class ItemInfo;
	};
	class 3AS_optic_holo_DC15S: ItemCore
	{
		class ItemInfo;
	};
	class 3AS_Optic_VK38X: ItemCore
	{
		class ItemInfo;
	};
	
	class 332nd_3AS_VK38X: 3AS_Optic_VK38X
	{
		scope=2;
		displayName="[3AS] VK-38X Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="3AS\3AS_Weapons\Valken38X\3AS_VK38X_Scope_f.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass=7;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_VK38X_Optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]={};
					opticsZoomMin=0.02;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					discreteFov[]={0.0625,0.02};
					discreteInitIndex=0;
					modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={1,2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class IronOnTopOfMyOptics: 3AS_VK38X_Optic
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

};