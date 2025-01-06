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

//Primary
	class 332nd_Binocular: SWLB_clone_binocular
	{
		author="Ithias";
		displayName="[332nd] Binocular";
	};
};