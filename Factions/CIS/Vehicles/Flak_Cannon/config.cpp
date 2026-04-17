class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Flak_Cannon
	{
		units[] = 
        {
            "332nd_CIS_Flak_Cannon",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class SensorTemplatePassiveRadar {};
class SensorTemplateAntiRadiation: SensorTemplatePassiveRadar {};
class SensorTemplateActiveRadar: SensorTemplateAntiRadiation {};

class CfgVehicles
{
	class All;
	class AllVehicles: All 
	{
		
	};
	class Land: AllVehicles 
	{
		
	};
	class LandVehicle: Land 
	{
		class Components 
		{
			
		};
	};
	class StaticWeapon: LandVehicle 
	{
		
	};
	class StaticMGWeapon: StaticWeapon 
	{
		
	};
	class 3as_FlakCannon_Base: StaticMGWeapon 
	{
		
	};
	class 3as_FlakCannon: 3as_FlakCannon_Base 
	{
		class Components: Components 
		{
			class SensorsManagerComponent 
			{
				class Components 
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar 
					{
						
					};
				};
			};
		};
	};

	class 332nd_CIS_Flak_Cannon: 3as_FlakCannon
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Flak Cannon";
		editorPreview = "";
		crew = "332nd_Droid_B1_Crewman";
		crewVulnerable = 0; //was 1
		crewExplosionProtection = 1; // was 0
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