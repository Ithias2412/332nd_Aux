class CfgPatches
{
	class 332nd_Rho_Class
	{
		requiredAddons[] ={};
		units[] =
        {
			"332nd_Rho_Class",
			"332nd_Transport_Rho_Crate",
        };
		weapons[] =
        {
            "",
        };
		requiredVersion = 0.100000;
	};
};

class Extended_init_EventHandlers
{
	class 332nd_Rho_Class
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
};

class CfgVehicles 
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class 3AS_Rho_Base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				
			};
			class CopilotTurret2;
		};
	};
	class 3AS_Rho_REP_F: 3AS_Rho_Base_F
	{
		class ACE_SelfActions;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				
			};
			class CopilotTurret2: CopilotTurret2
			{
				
			};
		};
	}; 
	class 332nd_Rho_Class: 3AS_Rho_REP_F
	{
		faction="332nd_Faction";
		displayname="[332nd] Rho-Class [WIP]";
		ls_hasImpulse = 1;
		ls_impulsor_boostSpeed_1 = 300;
		ls_impulsor_boostSpeed_2 = 600;
		ls_impulsor_fuelDrain_1=0.00005;
		ls_impulsor_fuelDrain_2=0.00010;
		armor = 400;
		transportSoldier=34;
		textureList[] = {"Republic",0,"Imperial",0,"Medical",0};
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"332nd_Aux\Aircraft\Rho_Class\tex\332nd_Rho_Hull_co.paa","3as\3as_republic_heli\nu_class\data\hull_front_co.paa","3as\3as_republic_heli\rho_class\data\wings_rho_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa","3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"};
		weapons[] =
		{
			"332nd_Rho_Cannon",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"332nd_Rho_Cannon_Mag",
			"332nd_Rho_Cannon_Mag",
			"332nd_Rho_Cannon_Mag"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				weapons[] = 
				{
					"332nd_Rho_Cannon",
				};	
				magazines[] = 
				{
					"332nd_Rho_Cannon_Mag",
					"332nd_Rho_Cannon_Mag",
				};
			};
			class CopilotTurret2: CopilotTurret2
			{
				weapons[] = 
				{
					"332nd_Rho_Cannon",
				};	
				magazines[] = 
				{
					"332nd_Rho_Cannon_Mag",
					"332nd_Rho_Cannon_Mag",
				};
			};
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
		};
	};
	class 3AS_Rho_Crate_Base_F;
	class 3AS_Rho_Crate_REP_Transport: 3AS_Rho_Crate_Base_F
	{
		class ACE_SelfActions;
	};
	class 332nd_Transport_Rho_Crate: 3AS_Rho_Crate_REP_Transport
	{
		faction="332nd_Faction";
		displayName = "[332nd] Rho Crate (Transport) [WIP]";
		armor = 1000;
		transportSoldier=34;
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				condition = "true";
				displayName = "Intercom Channel";
				icon = "";
				statement = "";
				class TFAR_IntercomChannel_1
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "Infantry";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "Crew";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_3
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Command";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_disabled
				{
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
			};
		};
	};
};