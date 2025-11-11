class CfgPatches 
{
	class 332nd_CIS_Faction_Infantry_Uniforms
	{
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class UniformItem;
	class 3AS_U_CIS_Light_Armor;
	class 3AS_U_CIS_Heavy_Armor;
	
// Uniform
class 332nd_Uniform_CIS_Human_Light: 3AS_U_CIS_Light_Armor
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] CIS Light Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_CIS_Hum";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
class 332nd_Uniform_CIS_Human_Medical: 3AS_U_CIS_Light_Armor
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] CIS Medical Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_CIS_Hum_Med";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
class 332nd_Uniform_CIS_Human_Officer: 3AS_U_CIS_Light_Armor
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] CIS Officer Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_CIS_Hum_Officer";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
class 332nd_Uniform_CIS_Human_Heavy: 3AS_U_CIS_Heavy_Armor
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] CIS Heavy Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_CIS_Hum_AT";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
};