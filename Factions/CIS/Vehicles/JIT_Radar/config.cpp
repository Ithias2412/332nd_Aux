class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_JIT_Radar
	{
		units[] = 
        {
			"332nd_CIS_JIT_Radar",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class Components;
	};
	class StaticWeapon: LandVehicle
	{
		
	};
	class StaticMGWeapon: StaticWeapon
	{
		
	};
	class Radar_System_01_base_F: StaticMGWeapon
	{
		class Components: Components
		{
			
		};
	};
	class 3AS_DF9_Radar: Radar_System_01_base_F
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components;
			};
		};
	};
	class 332nd_CIS_JIT_Radar: 3AS_DF9_Radar
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="JIT-10 (Radar)";
		//armor = 60;
		editorPreview = "";
		crew = "332nd_Droid_B1_Rifleman";
		hiddenSelectionsTextures[] = {"3AS\3as_static\DF9\Data\DF9_RAD_GREY_CO.paa"};
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection="mainGun";
						typeRecognitionDistance=8000;
						maxTrackableSpeed=1388.89;
					};
				};
			};
		};
	};
};