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
	class optic_Yorris: ItemCore
	{
		class ItemInfo;
	};

	class 332nd_Optics_Seelig_Point: optic_Yorris
	{
		author="Dutch + Ithias";
		scope=2;
		displayName="Seelig Point";
		picture="332nd_Aux\Misc\Optics\Test_Optic.paa";
		model="332nd_Aux\Misc\Optics\332nd_Optic_Test.p3d";
		descriptionShort="We making shit";
		class ItemInfo: ItemInfo
		{
			mass=2;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class Nozoom
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0;
	};
	
	class 332nd_Optics_Seelig_Point_Zoom: optic_Yorris
	{
		author="Ithias";
		scope=2;
		displayName="Seelig Point 2x-4x";
		picture="332nd_Aux\Misc\Optics\Test_Optic.paa";
		model="332nd_Aux\Misc\Optics\332nd_Optic_Test.p3d";
		descriptionShort="We making shit";
		class ItemInfo: ItemInfo
		{
			mass=1;
			opticType=1;
			optics=1;
			class OpticsModes
			{
				class Nozoom
				{
					modelOptics="\A3\Weapons_F\empty";
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class Yeszoom
				{
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
					};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistanceInitIndex=1;
					distanceZoomMin = 300;
					discreteInitIndex = 0;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					//memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir=""; 
				};
			};
		};
		inertia=0.1;
	};
};