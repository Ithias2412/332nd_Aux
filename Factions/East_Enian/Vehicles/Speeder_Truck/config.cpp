class CfgPatches 
{
    class 332nd_East_Enia_Faction_Vehicles_Speeder_Truck
	{
        author = "Ithias";
        name = "East Enian Speeder Truck";
        weapons[] = {};
		requiredAddons[] = {};
        units[] = 
		{
            "332nd_East_Enia_Speeder_Truck",
        };
    };
};

class CfgVehicles 
{
	/*
	class JMSLLTE_veh_AA5_base;
	class JMSLLTE_veh_AA5mk2_base: JMSLLTE_veh_AA5_base
	{
		class Turrets;
	};
	class JMSLLTE_O_veh_AA5mk2_reb_F: JMSLLTE_veh_AA5mk2_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	*/
	class JMSLLTE_O_veh_AA5mk2_reb_F;
	class 332nd_East_Enia_Speeder_Truck: JMSLLTE_O_veh_AA5mk2_reb_F
	{
		displayName = "Enian Speeder Truck";
		editorSubcategory = "EdSubcat_332nd_Medium_Vics";
		faction = "332nd_East_Enia_Faction";
		crew = "332nd_Enia_Base";		
		hiddenSelectionsTextures[] = 
		{
			"332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Speeder_Truck.paa"
		};
		class TextureSources
		{
			class Tex_Speeder_Base
			{
				author = "Ithias";
				displayName = "Base";
				factions[] = {"332nd_East_Enia_Faction"};
				textures[] = {"\332nd_Aux\Factions\East_Enian\Vehicles\Tex\East_Enian_Speeder_Truck.paa"};
			};
		};
		/*
		class Turrets
		{
			class MainTurret
			{
				body = "mainTurret";
				castGunnerShadow = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				forceHideGunner = 0;
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerAction = "driver_low01";
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerInAction = "driver_low01";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				initElev = 0;
				initTurn = 0;
				magazines[] = {"JMSLLTE_100Rnd_mk2turret_mag","JMSLLTE_100Rnd_mk2turret_mag","JMSLLTE_100Rnd_mk2turret_mag","JMSLLTE_100Rnd_mk2turret_mag","JMSLLTE_100Rnd_mk2turret_mag"};
				maxElev = 10;
				maxTurn = 100;
				memoryPointGun[] = {"usti hlavne"};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnereye";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				minElev = -10;
				minTurn = -100;
				selectionFireAnim = "zasleh1";
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.177828,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.177828,1,10};
				stabilizedInAxes = 3;
				turretInfoType = "RscOptics_crows";
				usePip = 0;
				viewGunnerInExternal = 1;
				weapons[] = {"JMSLLTE_vg_mk2turret_gun"};
			};
		};
		*/
	};
};