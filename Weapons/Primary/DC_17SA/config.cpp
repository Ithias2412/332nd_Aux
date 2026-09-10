/*
class CfgPatches
{
	class 332nd_DC17SA
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			"332nd_DC17SA",
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class Mode_FullAuto;
class Mode_SemiAuto;

class CfgWeapons 
{
	class arifle_MX_Base_F;
	class IDA_DC23: arifle_MX_Base_F
	{
		
	};
	class 332nd_DC17SA: IDA_DC23
	{
		cursor = "332nd_Cursor_Circle";
		cursoraim = "332nd_Cursor_Dot";
		author="Ithias";
		displayName="[332nd] DC-17SA (RFL)";
		baseWeapon = "332nd_DC17SA";
		weaponInfoType="";
		IDA_StunWeapon = "";
		IDA_AltWeapon="";
		recoil = "3AS_recoil_DC15S";
		magazines[] =
		{
			"332nd_DC15S_Low_Mag",
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"Fire",
		};
		class Fire: Mode_FullAuto
		{
			dispersion=0.00262;
			reloadTime=0.0857;
			sounds[]=
			{
				"StandardSound",
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_Mode_A_Zoom_2_Raised_2",
					"332nd_Mode_B_Zoom_2_Raised_2",
					"332nd_Mode_C_Zoom_2_Raised_2",
					"332nd_Mode_D_Zoom_2_Raised_2",
					"332nd_Mode_Seelig_Point_Zoom_2_Raised_2",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
	};
};