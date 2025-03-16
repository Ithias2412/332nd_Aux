class CfgPatches
{
	class 332nd_Chaingun
	{
		addonRootClass="3AS_Weapons";
		requiredAddons[]=
		{
			"3AS_Weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"332nd_Chaingun"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
    class 3AS_Chaingun; 
    class 332nd_Chaingun: 3AS_Chaingun
    {
        author="Cherryy";
		displayName="[332nd] Heavy Chaingun (AR)";
        recoil="3as_recoil_Chaingun";
		magazines[]=
		{
			"332nd_Chaingun_Mag"
		};
		modes[]=
		{
			"FullAuto"
		};
    };
};
class CfgAmmo
{
	class 3AS_Chaingun_Ammo;
	class 332nd_Chaingun_Ammo_762x39: 3AS_Chaingun_Ammo
	{
        model="3AS\3AS_Weapons\Data\tracer_yellow.p3d";
		hit=11;
		caliber=1.2;
		ACE_caliber = 7.823;
		initTime=0;
		fuseDistance=0;
		directionalExplosion=0;
		proximityExplosionDistance=0;
		explosive=0;
		class CamShakeFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
};
class CfgMagazines
{
	class 3AS_Chaingun_Drum_Mag;
	class 332nd_Chaingun_Mag: 3AS_Chaingun_Drum_Mag
	{
		ammo = "332nd_Chaingun_Ammo_762x39";
		count = 500;
		descriptionShort = "";
		displayname = "Chaingun 500 Round Energy Cell";
		displayNameShort = "";
		mass = 80;
		scope = 2;
	};
};