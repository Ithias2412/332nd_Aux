class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Raptor
	{
		units[] = 
        {
            "332nd_CIS_Raptor",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Hitpoints;
	};
	class Car_F: Car
	{
		class HitPoints: Hitpoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets;
		class NewTurret;
		class EventHandlers;
		class AnimationSources;
	};
	class UGV_01_base_F: Car_F
	{
		class Turrets;
		class HitPoints;
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Components;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitEngine;
			class HitFuel;
			class HitBody;
		};
	};
	class ls_vehicle_agtRaptor_base: UGV_01_rcws_base_F
	{
		class HitPoints: HitPoints
		{
			
		};
	};
	class 332nd_CIS_Raptor: ls_vehicle_agtRaptor_base
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Light_Vics";
		displayName="Raptor Light UGV";
		armor = 7.5;
		scope = 2;
		side = 0;
		class HitPoints: HitPoints
		{
			class HitRFWheel
			{
				armor=1;
				explosionShielding=4;
				armorComponent="hit_fr_wheel";
				material=-1;
				passThrough=0.30000001;
				name="wheel_fr_point";
				visual="wheel_fr_destruct";
			};
			class HitLFWheel: HitRFWheel
			{
				armorComponent="hit_fl_wheel";
				name="wheel_fl_point";
				visual="wheel_fl_destruct";
			};
			class HitLF2Wheel: HitRFWheel
			{
				armorComponent="hit_bl_wheel";
				name="wheel_bl_point";
				visual="wheel_bl_destruct";
			};
			class HitRF2Wheel: HitRFWheel
			{
				armorComponent="hit_br_wheel";
				name="wheel_br_point";
				visual="wheel_br_destruct";
			};
			class HitEngine: HitEngine
			{
				visual="engine_destruct";
				name="engine_point";
				armorComponent="hit_engine";
				armor=0.5;
				material=-1;
				passThrough=0.30000001;
			};
			class HitFuel: HitFuel
			{
				visual="fuel_destruct";
			};
			class HitBody: HitBody
			{
				name="karoserie";
				visual="zbytek";
				armor=0.5;
				material=-1;
				passThrough=0.30000001;
			};
		};
	};
};