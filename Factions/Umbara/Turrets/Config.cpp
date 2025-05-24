class CfgPatches
{
	class 332nd_Umbaran_AA
	{
		requiredAddons[]=
		{"3AS_Reoublic_Static_Keeradak"};
		units[]=
		{
			"332nd_Umbara_AA_Gun"
		};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class EventHandlers;
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class 3AS_Keeradak_Base_F: StaticMGWeapon 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class 332nd_Umbara_AA_Gun: 3AS_Keeradak_Base_F
	{
		author="Cherryy";
		editorPreview="\3as\3as_static\images\3AS_HeavyRepeater_Unarmoured.jpg";
		_generalMacro="B_HMG_01_F";
        displayName="Umbaran AA Gun";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="332nd_Umbara_Faction";
        editorSubcategory = "332nd_Umbara_Subcategory";
		crew="332nd_Droid_B1_Rifleman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"3AS_500Rnd_Keeradak_shells",
					"3AS_500Rnd_Keeradak_shells",
					"3AS_500Rnd_Keeradak_shells",
					"3AS_500Rnd_Keeradak_shells"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo0",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3as\3as_republic_static\keeradak\data\Imp_aa_base_co.paa",
			"332nd_Aux\Factions\Umbara\tex\332nd_Umbara_AA_Gun.paa"
		};
	};
};