class CfgPatches {
	class 332nd_Zeus_Modules {
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"WBK_DroidsSw",
		};
	};
};

class Extended_PostInit_EventHandlers
{
    class SB_332nd_Vehicle_spawner_postInit
    {
        init="call compile preprocessFileLineNumbers '332nd_Aux\Zeus_Modules\XEH_postInit.sqf'";
    };
};
class Extended_PreInit_EventHandlers
{
	class SB_332nd_Vehicle_spawner_preInit
	{
		init="call compile preprocessFileLineNumbers '332nd_Aux\Zeus_Modules\XEH_preInit.sqf'";
	};
};