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
		requiredAddons[] = {};
	};
};


class Extended_PreStart_EventHandlers
{
	class ls_deprecated
	{
		init="";
	};
};
class Extended_PreInit_EventHandlers
{
	class ls_deprecated
	{
		init="";
	};
};


class CfgFunctions {
	class ls
	{
		class common
		{
			file="332nd_Aux\Zeus_Modules\common";
			class common_currentPilot
			{
			};
			class isCopilot
			{
			};
		};
	};
	class ls_vehicle
	{
		class scripts
		{
			file="332nd_Aux\Zeus_Modules\vehicles";
			class ImpulsorMonitor
			{
			};
			class ImpulseKey
			{
			};
			class RepulseKey
			{
			};
			class ImpulseJoystick
			{
			};
			class RepulseJoystick
			{
			};
		};
	};
};


class CfgSounds
{
	class LS_Vic_ImpulseOn
	{
		sound[]=
		{
			"332nd_Aux\Zeus_Modules\sounds\Impulsor_On.wss",
			15,
			1,
			500
		};
		name="LS_Vic_ImpulseOn";
		titles[]=
		{
			"LS_Vic_ImpulseOn"
		};
		duration=3;
	};
	class LS_Vic_ImpulseOff
	{
		sound[]=
		{
			"332nd_Aux\Zeus_Modules\sounds\Impulsor_Off.wss",
			15,
			1,
			500
		};
		name="LS_Vic_ImpulseOff";
		titles[]=
		{
			"LS_Vic_ImpulseOff"
		};
		duration=3;
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
