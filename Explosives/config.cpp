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
	class 332nd_Remote_Charge_Ammo: ACE_DemoCharge_Remote_Ammo
	{
		CraterEffects = "MineNondirectionalCraterSmall";
		defaultMagazine = "332nd_Remote_Charge_Mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		hit = 2500;
		indirectHit = 2500;
		indirectHitRange = 5;
		mineModelDisabled = "ls_weapons\explosives\detPack\ls_explosives_detpack_armed";
		model = "ls_weapons\explosives\detPack\ls_explosives_detpack_armed";
	};
	class 332nd_Detonation_pack_Ammo: ACE_DemoCharge_Remote_Ammo
	{
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "332nd_Detonation_pack_Mag";
		ExplosionEffects = "MineNondirectionalExplosion";
		hit = 5000;
		indirectHit = 5000;
		indirectHitRange = 10;
		mineModelDisabled = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
		model = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
		explosionType = "bomb";
	};

};

class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class 332nd_Remote_Charge_Mag: DemoCharge_Remote_Mag
	{
		scope=2;
		ace_explosives_setupObject = "332nd_Explosives_Place_Remote_Charge";
		ace_explosives_placeable = 1;
		ammo = "332nd_Remote_Charge_Ammo";
		author = "Ithias";
		descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
		displayName = "[332nd] Remote Charge";
		mass = 15;
		model = "ls_weapons\explosives\detPack\ls_explosives_detpack_armed";
		picture = "\OPTRE_weapons\charges\icons\c12.paa";
		
	};
	class 332nd_Detonation_pack_Mag: DemoCharge_Remote_Mag
	{
		scope=2;
		ace_explosives_setupObject = "332nd_Explosives_Place_Detonation_pack";
		ace_explosives_placeable = 1;
		ammo = "332nd_Detonation_pack_Ammo";
		author = "Ithias";
		descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
		displayName = "[332nd] Detonation Pack";
		mass = 30;
		model = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
		picture = "\LF_Weapon_Unit_Explosives\typeabc\ui\type_icon.paa";
		
	};

};

class CfgWeapons
{
	class Default;
    class Put: Default 
	{
        muzzles[]+= 
		{
			"332nd_Remote_Charge_Muzzle",
			"332nd_Detonation_pack_Muzzle",
		};
        class PutMuzzle: Default {};
        class 332nd_Remote_Charge_Muzzle: PutMuzzle 
		{
            magazines[] = 
			{
				"332nd_Remote_Charge_Mag"
			};
        };
        class 332nd_Detonation_pack_Muzzle: PutMuzzle 
		{
            magazines[] = 
			{
				"332nd_Detonation_pack_Mag"
			};
        };
    };

};

class CfgVehicles
{
	class ACE_Explosives_Place;
	class 332nd_Explosives_Place_Remote_Charge: ACE_Explosives_Place
	{
		scope=2;
		displayName = "[332nd] Remote Charge";
		model = "ls_weapons\explosives\detPack\ls_explosives_detpack_armed";
    };
	class 332nd_Explosives_Place_Detonation_pack: ACE_Explosives_Place
	{
		scope=2;
		displayName = "[332nd] Detonation Pack";
		model = "LF_Weapon_Unit_Explosives\typeabc\typea.p3d";
    };
};