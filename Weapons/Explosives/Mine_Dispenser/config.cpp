class CfgPatches 
{
	class 332nd_Explosives_Mine_Dispenser
	{
		units[] = 
        {
			"",
        };
		weapons[] = 
        {
            "",
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
	class APERSMineDispenser_Ammo;
	class APERSMineDispenser_Deploy;
	class APERSMineDispenser_Mine_Ammo;
	class 332nd_Mine_Dispenser_Ammo: APERSMineDispenser_Ammo
	{
		defaultMagazine = "332nd_Mine_Dispenser_Mag";
		mineModelDisabled = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		submunitionAmmo[] = {"332nd_Mine_Dispenser_Ammo_Deploy", 1};
	};
	class 332nd_Mine_Dispenser_Ammo_Deploy: APERSMineDispenser_Deploy
	{
		submunitionAmmo = "332nd_Mine_Dispenser_Ammo_Deploy_Mine";
	};
	class 332nd_Mine_Dispenser_Ammo_Deploy_Mine: APERSMineDispenser_Mine_Ammo
	{
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 3;
	};
};

class CfgMagazines
{
	class APERSMineDispenser_Mag;
	class 332nd_Mine_Dispenser_Mag: APERSMineDispenser_Mag
	{
		scope=2;
		ace_explosives_setupObject = "332nd_Explosives_Place_Mine_Dispenser";
		ace_explosives_placeable = 1;
		ammo = "332nd_Mine_Dispenser_Ammo";
		author = "Ithias";
		descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
		displayName = "[332nd] Mine Dispenser (ARF)";
		mass = 15;
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_i";
		picture = "\A3\Weapons_F_Orange\Explosives\Data\UI\gear_APERSmineDispenser_CA.paa";
		
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
		};
        class PutMuzzle: Default {};
        class 332nd_Remote_Charge_Muzzle: PutMuzzle 
		{
            magazines[] = 
			{
				"332nd_Mine_Dispenser_Mag"
			};
        };
    };

};

class CfgVehicles
{
	class ACE_Explosives_Place;
	class 332nd_Explosives_Place_Mine_Dispenser: ACE_Explosives_Place
	{
		scope=2;
		displayName = "[332nd] Mine Dispenser (ARF)";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_i";
    };
};