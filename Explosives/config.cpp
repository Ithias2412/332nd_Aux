class CfgPatches {
	class 332nd_Explosives {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			"A3_Weapons_F"
		};
	};
};

class CfgAmmo
{
	class ACE_DemoCharge_Remote_Ammo;
	class C7_Remote_Ammo;
	class 332nd_Demo_Charge_Ammo: ACE_DemoCharge_Remote_Ammo
	{
		//ace_explosives_magazine = "332nd_Demo_Charge_Mag";
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "332nd_Demo_Charge_Mag";
		ExplosionEffects = "MineNondirectionalExplosion";
		hit = 5000;
		indirectHit = 2500;
		indirectHitRange = 10;
		mineModelDisabled = "\OPTRE_Weapons\charges\c12G.p3d";
		model = "\OPTRE_Weapons\charges\c12.p3d";
	};
	
//	class 332nd_Breach_Charge_Ammo: ACE_DemoCharge_Remote_Ammo
//	{
//		
//	};

};

class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class 332nd_Demo_Charge_Mag: DemoCharge_Remote_Mag
	{
		scope=2;
		ace_explosives_setupObject = "332nd_Explosives_Place_Demo_Charge";
		ace_explosives_placeable = 1;
		ammo = "332nd_Demo_Charge_Ammo";
		author = "Ithias";
		descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
		displayName = "[332nd] Demolition Charge";
		mass = 20;
		model = "\OPTRE_Weapons\charges\c12G.p3d";
		picture = "\OPTRE_weapons\charges\icons\c12.paa";
		
	};
	
//	class 332nd_Breach_Charge_Mag: DemoCharge_Remote_Mag
//	{
//		
//	};
};

class CfgWeapons
{
	class Default;
    class Put: Default 
	{
        muzzles[]+= 
		{
			"332nd_Demo_Charge_Muzzle"
		};
        class PutMuzzle: Default {};
        class 332nd_Demo_Charge_Muzzle: PutMuzzle 
		{
            magazines[] = 
			{
				"332nd_Demo_Charge_Mag"
			};
        };
    };

};

class CfgVehicles
{
	class ACE_Explosives_Place;
	class 332nd_Explosives_Place_Demo_Charge: ACE_Explosives_Place
	{
		scope=2;
		displayName = "[332nd] Demolition Charge";
		model = "\OPTRE_Weapons\charges\c12G.p3d";
    };
};