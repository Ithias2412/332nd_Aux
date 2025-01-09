class CfgPatches
{
	class 332nd_Main
	{
		author="Falx";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class 332nd_LoadingPicture: RscPicture
		{
			idc=1000;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\332nd_Aux\Main_Menu\Logo.paa";
		};
	};
};
class RscDisplayConfigure
{
	enableDisplay=1;
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
	enableDisplay=1;
	text="\332nd_Aux\Main_Menu\Logo.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		class Spotlight1
		{
		};
		class Spotlight2
		{
		};
		class Spotlight3
		{
		};
		class BackgroundSpotlightRight
		{
		};
		class BackgroundSpotlightLeft
		{
		};
		class BackgroundSpotlight
		{
		};
		class B_Credits
		{
		};
		class ConnectDiscord: RscButton
		{
			idc=-1;
			text="Discord";
			tooltip="You should already be in here :)";
			style=2;
			url="https://discord.gg/ztx9A6rUPj";
			colorBackground[]={0,0,0,0.5};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="SafeZoneXAbs + 0.425 * SafeZoneW";
			y="1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w="12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ConnectServerMain: RscButton
		{
			idc=-1;
			text="Main Server";
			tooltip="Click this button every Friday at 8pm EST";
			style=2;
			onbuttonclick="connectToServer ['136.175.187.107', 2306, '332nd']";
			colorBackground[]={0,0,0,0.5};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="SafeZoneXAbs + 0.425 * SafeZoneW";
			y="-1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w="12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ConnectAceArs: RscButton
		{
			idc=-1;
			text="Ace Arsenal";
			tooltip="Barbie Time";
			style=2;
			onbuttonclick = "playMission ['', '\z\ace\addons\arsenal\missions\Arsenal.VR']";
			colorBackground[]={0,0,0,0.5};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="SafeZoneXAbs + 0.425 * SafeZoneW";
			y="0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w="12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Editor: RscButton
		{
			idc=142;
			colorBackground[]={0,0,0,0.5};
			colorBackgroundActive[]={1,0,0,0,2};
			text="$STR_A3_RscDisplayMain_ButtonEditor";
			tooltip="We love our mission builders";
			x="SafeZoneXAbs + 0.425 * SafeZoneW";
			//y="-1.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			y="-0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w="12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onbuttonclick="";
		};
	};
	class controlsBackground
	{
		class 332nd_LoadingPicture: RscPicture
		{
			idc=1;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\332nd_Aux\Main_Menu\Logo.paa";
		};
	};
};

class cfgMods
{
	//author="";
	timepacked="1689021010";
};