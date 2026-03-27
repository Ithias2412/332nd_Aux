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
	class JLTS_CloneBinocular;
	class SWLB_clone_binocular;
	class SWLB_clone_commander_binocular;
	class Rangefinder;

	class 332nd_Binocular: JLTS_CloneBinocular
	{
		author="Ithias";
		displayName="[332nd] Binocular";
		Laser = 0;
		magazines[] = {};
		weaponInfoType = "RscOptics_LaserDesignator";
	};
	class 332nd_Binocular_RTO: JLTS_CloneBinocular
	{
		author="Ithias";
		displayName="[332nd] Binocular (RTO)";
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","Ti"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_binocular_black_co.paa"};
		Laser = 1;
		magazines[] = {"Laserbatteries"};
		weaponInfoType = "RscOptics_LaserDesignator";
	};
};