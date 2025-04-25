wbk_wrs_wgp_controlledUnits = [];
disableSerialization;
outlw_MR_blur = ppEffectCreate ["DynamicBlur", 401];
outlw_MR_blur ppEffectEnable true;
outlw_MR_blur ppEffectAdjust [1.5];
outlw_MR_blur ppEffectCommit 0;
((findDisplay 8213) displayCtrl 1000) ctrlSetStructuredText parseText  "<t color='#fcffee' align='center' size='4' font = 'LCD14'>NO DATA</t>";
WBK_WRS_WGP_cam = 'camera' camCreate [0,0,0]; 
WBK_WRS_WGP_cam cameraEffect ['Internal', 'Back', 'uavrtt']; 
WBK_WRS_WGP_cam camSetFov 0.95;
WBK_WRS_WGP_Current = objNull;
WBK_WGP_HUD_ChangeDescription = {
	params ["_control", "_index"];  
	_lbData = call compile (lbData [ctrlIDC _control, _index]);    	
	WBK_WRS_WGP_Current = _lbData;
	WBK_WRS_WGP_CurrentIDC = _index;
	WBK_WRS_WGP_cam attachTo [_lbData, [0,0,0], 'pilot']; 
	((findDisplay 8213) displayCtrl 1200) ctrlSetText '#(argb,512,512,1)r2t(uavrtt,1)';
	((findDisplay 8213) displayCtrl 1200) ctrlCommit 0;  
	playSound ['ReadoutHideClick2', true]; 
	((findDisplay 8213) displayCtrl 1000) ctrlSetStructuredText parseText format ["<t color='#fcffee' align='center' size='2.5' font = 'PuristaLight'>INTEGRITY: %1<br/>AMMO: %2/%3<br/>MISSILES: %4<br/>%5</t>",_lbData getVariable "WBK_SynthHP",_lbData getVariable "WBK_WGP_Rounds",_lbData getVariable "WBK_WGP_Mags",_lbData getVariable "WBK_WGP_Missiles",if (!(isNil {_lbData getVariable "WGP_HoldFire"}) || !(isNil {_lbData getVariable "WGP_ForceHoldFire"}))then{"HOLDING FIRE"}else{"ENGAGING AT WILL"}];
};
///////////Trader Items
_display = findDisplay 8213;
_listBoxAutomaton = _display displayCtrl 2100;
_listBoxAutomaton lbSetColor [0, [0,1,0,1]];
{
	if (_x in WBK_WRS_WGP_ControlledUnits) then {
		_pic = getText (configFile/"CfgVehicles"/typeOf _x/"Icon");
		_index = _listBoxAutomaton lbAdd (name _x);
		_listBoxAutomaton lbSetPicture [_index, _pic];
		_listBoxAutomaton lbSetData [_index, format ["%1", (_x call BIS_fnc_objectVar)]];
		_listBoxAutomaton lbSetPictureColor [_index, [1, 1, 1, 1]];
	};
} forEach units side player;
if (count WBK_WRS_WGP_ControlledUnits > 0) then {
	_listBoxAutomaton lbSetCurSel 0;
};
waitUntil {(!dialog)};
ppEffectDestroy outlw_MR_blur;
WBK_WRS_WGP_cam cameraEffect ["terminate","back"];
camDestroy WBK_WRS_WGP_cam;