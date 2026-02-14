class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Proton_Cannon
	{
		units[] = 
        {
            "332nd_CIS_Proton_Cannon",
			"332nd_CIS_Proton_Cannon_Flak",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"3AS_Static_J1_Proton_Cannon",
		};
	};
};

class CfgVehicles
{
	class 3AS_J1_Proton_Legged;
	class 332nd_CIS_Proton_Cannon: 3AS_J1_Proton_Legged
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Proton Cannon";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
	};
	class 332nd_CIS_Proton_Cannon_Flak: 332nd_CIS_Proton_Cannon
	{
		displayName="Proton Cannon (Flak)";
        class EventHandlers
		{
			class SB_Flak
			{
				fired="_unit = _this select 0; if (local _unit) then {_this spawn fnc_SB_Flak};";
			};
		}; 
	};
};