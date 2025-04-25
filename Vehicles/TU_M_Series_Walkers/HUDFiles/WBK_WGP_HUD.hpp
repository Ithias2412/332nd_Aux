class WBK_WRS_WGP_HUD {
    idd = 8213;
    movingenable = false;
    onLoad = "[] execVM '332nd_Aux\Vehicles\TU_M_Series_Walkers\HUDFiles\WRS_WGP_HUD_List.sqf';";
    onUnload = "";
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by WebKnight, v1.063, #Masoni)
		////////////////////////////////////////////////////////

		class wrs_frame: WBK_Box
		{
			idc = 1800;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.704 * safezoneH;
		};
		class WRS_LIST: WBK_RscCombo
		{
			idc = 2100;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.033 * safezoneH;
			font = "PuristaLight";
			onLBSelChanged = "_this call WBK_WGP_HUD_ChangeDescription";
			onLBDblClick = "";
		};
		class WRS_PIP: WBK_RscPicture
		{
			idc = 1200;
			text = "\WRS_Mech\nodata.jpg";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.231 * safezoneH;
		};
		class WRS_TEXT: WBK_RscStructuredText
		{
			idc = 1000;
			text = "NO DATA"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
		};
		class WRS_but1: WBK_RscButton
		{
			idc = 1600;
			text = "Remote Control"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			onMouseEnter = "playSound ['ReadoutHideClick2', true];";
			onMouseExit = "";
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'RemoteControll'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true]; closeDialog 0;";
		};
		class WRS_but2: WRS_but1
		{
			idc = 1601;
			text = "Follow/Stop Following"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'Follow'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true];";
		};
		class WRS_but3: WRS_but1
		{
			idc = 1602;
			text = "Move to"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'MoveSomeWhere'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true]; closeDialog 0;";
		};
		class WRS_But4: WRS_but1
		{
			idc = 1604;
			text = "Enable/Disable"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'Disable'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true];";
		};
		class WGP_But5: WRS_but1
		{
			idc = 1603;
			text = "Disconnect"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'Disconnect'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true]; closeDialog 0;";
		};
		class WGP_But6: WRS_but1
		{
			idc = 1603;
			text = "Aggresive/Passive mode"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; [WBK_WRS_WGP_Current, player, 'Combat'] spawn WBK_WRS_WGP_Controlls; playSound ['ReadoutHideClick2', true];";
		};
		class WGP_But7: WRS_but1
		{
			idc = 1603;
			text = "Change callsign"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; createDialog 'WBK_WRS_WGP_HUD_NameChange'; playSound ['ReadoutHideClick2', true];";
		};
		class WGP_But8: WRS_but1
		{
			idc = 1603;
			text = "SELF DESTRUCT"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,0.1,0,0.9};
			colorText[] = {1,1,1,1};
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; WBK_WRS_WGP_Current setVariable ['WGP_SelfDestruct',true]; WBK_WRS_WGP_Current setDamage 1; playSound ['ReadoutHideClick2', true]; closeDialog 0;";
		};
    };
};



class WBK_WRS_WGP_HUD_NameChange
{
	idd=8214;
	movingenable=false;
	onLoad = "";
	class controls 
	{
		class finish_addInfo: WBK_RscButton
		{
			idc = 1600;
			text = "Add info"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			onMouseEnter = "(_this select 0) ctrlSetTextColor [0, 0, 0, 1]";
			onMouseExit = "(_this select 0) ctrlSetTextColor [1, 1, 1, 1]";
			action = "if (isNull WBK_WRS_WGP_Current) exitWith {}; ((findDisplay 8213) displayCtrl 2100) lbSetText [WBK_WRS_WGP_CurrentIDC, ctrlText 1400]; [WBK_WRS_WGP_Current,ctrlText 1400] remoteExecCall ['setName',0]; WBK_WRS_WGP_Current setGroupId [ctrlText 1400];  closeDialog 0; playSound ['ReadoutHideClick1', true];";
		};
		class AdditionalInfoText_begin: WBK_RscEdit
		{
			idc = 1400;
			text = "";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.044 * safezoneH;
			font = "PuristaLight";
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,1};
		};
	};
};
