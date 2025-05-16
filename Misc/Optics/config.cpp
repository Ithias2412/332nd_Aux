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
	class 332nd_Mode_A_Raised_Forward: optic_Yorris
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
	class 332nd_Mode_A_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode A";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Raised_2.p3d";
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
	class 332nd_Mode_B_Raised_Forward: optic_Yorris
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
	class 332nd_Mode_B_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode B";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Raised_2.p3d";
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
	class 332nd_Mode_C_Raised_Forward: optic_Yorris
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
	class 332nd_Mode_C_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode C";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Raised_2.p3d";
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
	class 332nd_Mode_D_Raised_Forward: optic_Yorris
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
	class 332nd_Mode_D_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode D";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Raised_2.p3d";
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
	class 332nd_Mode_Seelig_Point_Raised_2: optic_Yorris
	{
		displayName="[332nd] Seelig Point";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Raised_2.p3d";
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
	class 332nd_Mode_A_Zoom_2_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode A (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_A_Raised_2.p3d";
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
	class 332nd_Mode_B_Zoom_2_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode B (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_B_Raised_2.p3d";
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
	class 332nd_Mode_C_Zoom_2_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode C (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_C_Raised_2.p3d";
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
	class 332nd_Mode_D_Zoom_2_Raised_2: optic_Yorris
	{
		displayName="[332nd] Mode D (2x)";
		model="332nd_Aux\Misc\Optics\332nd_Mode_D_Raised_2.p3d";
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
	class 332nd_Mode_Seelig_Point_Zoom_2_Raised_2: optic_Yorris
	{
		displayName="[332nd] Seelig Point (2x)";
		model="332nd_Aux\Misc\Optics\Seelig_Point_Raised_2.p3d";
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
//3AS


	class 3AS_optic_VK38X_F: ItemCore
	{
		class ItemInfo;
	};
	class InventoryOpticsItem_Base_F;
	class optic_lrps;

	class 332nd_JLTS_DC15X_scope: optic_lrps
	{
		displayName="[JLTS] DC-15X Scope";
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_scope_ui_ca.paa";
		descriptionShort="$STR_JLTS_descs_DC15X_scope";
		model="\MRC\JLTS\weapons\DC15X\DC15X_scope.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.015625;
					opticsZoomMax=0.03125;
					opticsZoomInit=0.03125;
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=2400;
					//discretefov[]={0.03125,0.015625};
					//discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
	};

	class 332nd_3AS_VK38X: 3AS_optic_VK38X_F
	{
		scope=2;
		displayName="[3AS] VK-38X Optic";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acco_VK38X_Scope_F.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass = 14;
			modelOptics = "\3AS\3AS_Weapons\Republic\ACC\3AS_reticle_VK38X_F";
			class OpticsModes
			{
				class 3AS_VK38X_Optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]={};
					opticsZoomMin=0.03125;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 0;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					//discretefov[] = {0.03125,0.0625};
					//discreteInitIndex=0;
					modelOptics[] = {"\332nd_Aux\Misc\Optics\332nd_Zoom"};
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
		};
	};
};