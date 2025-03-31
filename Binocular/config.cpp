class CfgPatches {
	class 332nd_Binocular {
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
    class ItemInfo;
	class SWLB_clone_binocular;
	class Rangefinder;

//Primary
	class 332nd_Binocular_Base : Rangefinder
	{
		scope = ;
		author = "Frankie";
		displayName = "[332nd] Binocular Base";
		descriptionShort = "Binocular Base";
		model = "\SWLB_equipment\binoculars\SWLB_clone_binocular.p3d";
		modelOptics = "\SWLB_equipment\binoculars\SWLB_clone_commander_binocular_optic.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLB_equipment\binoculars\data\SWLB_clone_binocular_co.paa"};
		picture = "\SWLB_equipment\binoculars\data\ui\icon_SWLB_clone_commander_binocular_ca.paa";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		opticsZoomMin = 0.01;
        opticsZoomMax = 0.2;
        opticsZoomInit = 0.2;

        distanceZoomMin = 100;
        distanceZoomMax = 3000;

        // Optional: enable zoom in steps
        discreteDistance[] = {100, 200, 300, 400, 500, 1000, 2000, 3000};
        discreteDistanceInitIndex = 0;

        ACE_Override = 1; // If using ACE
		ace_rangefinder_enabled = 1;          // ENABLE rangefinder mode
        ace_rangefinder_maxRange = 5000;      // Set maximum range in meters
        ace_rangefinder_minRange = 1;         // Minimum range

        ace_rangefinder_accuracy = 1;         // Higher = more accurate (1 = best)
        ace_rangefinder_compass = 1;          // Enable compass overlay
	};
	class 332nd_Binocular: SWLB_clone_binocular
	{
		author="Ithias";
		displayName="[332nd] Binocular";
	};
	class 332nd_Binocular_2: SWLB_clone_binocular
	{
		author="Frankie";
		scope=0;
		displayName="[332nd] Binocular (NCO)";
		 // Enable laser designator functionality
		laserDesignator = 1;
		laser = 1;
		ace_laserpointer_enabled = 1;
		// Disable ammo requirement
		magazines[] = {}; // No Laserbatteries required
		magazineReloadTime = 0;
		reloadAction = "";
		
	};
};