class CfgPatches {
	class 332nd_PLX1 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_PLX1",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_PLX1_AT;

//Launcher
	class 332nd_PLX1: JLTS_PLX1_AT
	{
		author="Ithias";
		displayName="[332nd] PLX-1 (AT)";
		magazines[] =
		{
			"332nd_PLX1_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
		ace_reloadlaunchers_enabled = 1;
		class OpticsModes
		{
			class StepScope
			{
				cameraDir = "look";
				discretefov[] = {0.08333,0.04167};
				discreteInitIndex = 0;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				nFovLimit = 0.08333;
				opticsDisablePeripherialVision = 1;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomInit = 0.08333;
				opticsZoomMax = 0.04167;
				opticsZoomMin = 0.08333;
				thermalMode[] = {0,1};
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG","Ti",};
			};
		};
	};


};