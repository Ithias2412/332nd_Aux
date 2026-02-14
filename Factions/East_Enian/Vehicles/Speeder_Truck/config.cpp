class CfgPatches 
{
    class 332nd_East_Enia_Faction_Vehicles_Speeder_Truck
	{
        author = "Ithias";
        name = "East Enian Speeder Truck";
        weapons[] = {};
		requiredAddons[] = 
		{
			"JMSLLTE_vehgr_AA5",
		};
        units[] = 
		{
            "332nd_East_Enia_Speeder_Truck",
        };
    };
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class ViewOptics;
class Optics_Armored;

class CfgVehicles 
{
	class Car_F;
	class JMSLLTE_veh_AA5_base:Car_F
	{
		class Turrets;
	};
	class JMSLLTE_veh_AA5mk2_base:JMSLLTE_veh_AA5_base
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
	};
	class JMSLLTE_O_veh_AA5mk2_reb_F:JMSLLTE_veh_AA5mk2_base
	{
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints;
			};
		};
	};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				memoryPointGun[]=
				{
					"usti hlavne"
				};
				selectionFireAnim="zasleh1";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"332nd_East_Enia_Speeder_Truck_Gun"
				};
				magazines[]=
				{
					"332nd_East_Enia_Speeder_Truck_Mag",
					"332nd_East_Enia_Speeder_Truck_Mag",
					"332nd_East_Enia_Speeder_Truck_Mag",
					"332nd_East_Enia_Speeder_Truck_Mag",
					"332nd_East_Enia_Speeder_Truck_Mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				gunnerAction="driver_low01";
				gunnerInAction="driver_low01";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				forceHideGunner=0;
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnereye";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				usePip=0;
				minElev=-10;
				maxElev=10;
				initElev=0;
				minTurn=-100;
				maxTurn=100;
				initTurn=0;
				gunnerForceOptics=0;
				class ViewOptics: RCWSOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=15;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.25;
						isTurret=1;
					};
				};
			};
		};
	};
};

class CfgWeapons
{
	class JMSLLTE_vg_mk2turret_gun;
	class 332nd_East_Enia_Speeder_Truck_Gun: JMSLLTE_vg_mk2turret_gun
	{
		displayName = "Mk2";
		magazines[] = 
		{
			"332nd_East_Enia_Speeder_Truck_Mag"
		};
	};
};

class CfgMagazines
{
	class JMSLLTE_100Rnd_mk2turret_mag;
	class 332nd_East_Enia_Speeder_Truck_Mag: JMSLLTE_100Rnd_mk2turret_mag
	{
		ammo = "332nd_East_Enia_Speeder_Truck_Ammo";
		initSpeed = 800;
	};
};

class CfgAmmo
{
	class 332nd_Base_Ammo_IDA;
	class 332nd_East_Enia_Speeder_Truck_Ammo: 332nd_Base_Ammo_IDA
	{
		hit = 15;
		effectfly = "IDA_BlasterBoltGlow_Green_Fly";
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
	};
};