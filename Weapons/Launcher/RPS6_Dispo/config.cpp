class CfgPatches {
	class 332nd_Dispo {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Dispo_F",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CBA_DisposableLaunchers
{
	332nd_Dispo_Base[]=
	{
		"332nd_Dispo_F",
		"332nd_Dispo_Used"
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_RPS6_Base;
	class WeaponSlotsInfo;
	
	class 332nd_Dispo_Base: 3AS_RPS6_Base
	{
		author="Ithias";
		displayName="[332nd] Disposible Launcher (RFL)";	
	};
	class 332nd_Dispo_F: 332nd_Dispo_Base
	{
		scope=2;
		baseWeapon="332nd_Dispo_F";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class 332nd_Dispo_Used: 332nd_Dispo_Base
	{
		scope=1;
		displayName="[332nd] Used Disposible Launcher";	
		baseWeapon="332nd_Dispo_Used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
};