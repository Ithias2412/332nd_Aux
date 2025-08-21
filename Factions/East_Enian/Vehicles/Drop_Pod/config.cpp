class CfgPatches 
{
    class 332nd_East_Enia_Faction_Vehicles_Drop_Pods
	{
        author = "Ithias";
        name = "East Enian Drop Pods";
        requiredAddons[] = 
		{
			"TKE_DropPods",
		};
        weapons[] = {};
        units[] = 
		{
            "332nd_East_Enia_Drop_Pod",
        };
    };
};

class CfgVehicles 
{
	class Helicopter;
	class Helicopter_F: Helicopter
	{
		class HitPoints;
	};
	class Drop_Base: Helicopter_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class TKE_Drop_Pod_Base: Drop_Base
	{
		unitInfoType="RscUnitInfoAir";
		simulation="carx";
		scope=1;
		scopeCurator=1;
		faction="TKE_UCN_Drop_Pods";
		editorSubcategory="EdSubcat_UCN_Drop1";
		side=1;
		displayName="UCN Drop Pod";
		author="Dosiel";
		model="TKE_Kuiper_Engagements\TKE_DropPods\TKE_DropPod.p3d";
		armor=900000;
		crewCrashProtection=0;
		crewExplosionProtection=0;
		crewVulnerable=0;
		destrType="DestructNo";
		driverAction="passenger_apc_generic01";
		driverCanEject=1;
		fuelCapacity=0;
		fuelConsumptionRate=1;
		fuelExplosionPower=0;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		getinRadius=3.5;
		magazines[]={};
		transportSoldier=0;
		weapons[]={};
		memoryPointsGetInCargo="mem1";
		memoryPointsGetInCargoDir="mem1";
		memoryPointsGetInDriver="mem1";
		cargoAction[]=
		{
			"passenger_apc_generic01"
		};
		class DestructionEffects
		{
		};
		class Eventhandlers
		{
			init="_this select 0 allowDamage false";
		};
		class Turrets
		{
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\CAS_01\getin_wipeout",
			1,
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			1,
			1,
			40
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			3.1622801,
			1,
			900
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",
			3.1622801,
			1,
			900
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",
			3.1622801,
			1,
			900
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",
			3.1622801,
			1,
			900
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundSetSonicBoom[]=
		{
			"Plane_Fighter_SonicBoom_SoundSet"
		};
		class Sounds
		{
			soundSets[]=
			{
				"Plane_Fighter_04_EngineLowExt_SoundSet",
				"Plane_Fighter_04_EngineHighExt_SoundSet",
				"Plane_Fighter_04_ForsageExt_SoundSet",
				"Plane_Fighter_04_WindNoiseExt_SoundSet",
				"Plane_Fighter_04_EngineExt_Dist_Front_SoundSet",
				"Plane_Fighter_04_EngineExt_Middle_SoundSet",
				"Plane_Fighter_04_EngineExt_Dist_Rear_SoundSet",
				"Plane_Fighter_04_EngineLowInt_SoundSet",
				"Plane_Fighter_04_EngineHighInt_SoundSet",
				"Plane_Fighter_04_ForsageInt_SoundSet",
				"Plane_Fighter_04_WindNoiseInt_SoundSet",
				"Plane_Fighter_04_VelocityInt_SoundSet"
			};
		};
		class RainExt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\noises\rain1_ext",
				1.77828,
				1,
				100
			};
			frequency=1;
			volume="camPos * rain * (speed factor[50, 0])";
		};
		class RainInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\noises\rain1_int",
				1,
				1,
				100
			};
			frequency=1;
			volume="(1-camPos) * rain * (speed factor[50, 0])";
		};
	};
	class TKE_Drop_Pod: TKE_Drop_Pod_Base
	{
		scope=2;
		scopeCurator=2;
		author="Rogue771";
		model="TKE_Kuiper_Engagements\TKE_DropPods\TKE_DropPod.p3d";
		displayName="[UCN] Personal Drop Pod";
		crew="C_man_pilot_F";
		class UserActions
		{
			class Launch
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND !(this getvariable [""DOS_P_Pod_Launched"",false])";
				displayName="<t color='#FE2E2E'>Launch Drop Pod";
				displayNameDefault="<t color='#FE2E2E'>Launch Drop Pod";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn Dosiel_P_FnC_fnc_PDropLaunch";
				textToolTip="<t color='#FE2E2E'>Launch Drop Pod";
				userActionID=54;
			};
		};
	};
	
	
	
	class 332nd_East_Enia_Drop_Pod: TKE_Drop_Pod
	{
		author = "Ithias";
		transportSoldier = 1;
		displayName = "Enian Drop Pod";
		editorSubcategory = "EdSubcat_332nd_Drop_Pods";
		faction = "332nd_East_Enia_Faction";
		side = 0;
		//vehicleClass = "Car";
		//vehicleClass = "Air";
		//simulation = "carx";
		//simulation = "helicopterrtd";
		crew = "332nd_Enia_Base";
		mainRotorSpeed = 0;
		maxMainRotorDive = 0;
		altFullForce = 0;
		altNoForce = 0;
		enginePower = 0;
		maxSpeed = 0;
	};

};