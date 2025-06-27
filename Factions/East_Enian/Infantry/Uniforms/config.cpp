class CfgPatches 
{
	class 332nd_East_Enia_Faction_Infantry_Uniforms
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
    class ItemInfo;
    class UniformItem;
	class JMSLLTE_EmpOfficerCoat_green_F_CombatUniform;
	
// Uniform
class 332nd_Uniform_East_Enian: JMSLLTE_EmpOfficerCoat_green_F_CombatUniform
	{
		dlc="332nd";
		scope=1;
		displayName = "[332nd] East Enian Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="332nd_Enian_Base";
			uniformType = "Neopren";
			containerClass = "Supply150";
		};
	};
};