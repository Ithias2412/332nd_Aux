// Register a simple keypress to an action
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[
	"332nd Aux Mod", 
	"aux_lowLightBind", 
	["Low Light Toggle", "Turns On/Off Lowlights"], 
	{call fn_toggleLow_Light},
	{}, 
	[DIK_L, [true, false, false]]
] call cba_fnc_addKeybind;