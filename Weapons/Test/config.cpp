class CfgPatches
{
	class 332nd_DC17_Shield
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			""
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class Mode_SemiAuto;
class WeaponSlotsInfo;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_FullAuto;

class CfgWeapons 
{
	class JLTS_DC17SA_shield;
	class ItemCore;
	class 332nd_DC17_Shield: JLTS_DC17SA_shield
	{
		baseWeapon = "332nd_DC17_Shield";
		displayName = "[332nd] DC-17SA + shield (TEST)";
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"};
		JLTS_hasEMPProtection = 1;
		scope = 2;
		class LinkedItems
		{
			class LinkedItemsBipod
			{
				slot="UnderBarrelSlot";
				item="JLTS_riot_shield_attachment";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = 
				{
					"JLTS_riot_shield_attachment"
				};
			};
		};
	};
	class JLTS_riot_shield_attachment: ItemCore
	{
		scope = 2;
	};
};

class CfgVehicles 
{
	
};