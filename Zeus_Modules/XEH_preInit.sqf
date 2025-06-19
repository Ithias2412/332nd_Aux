#include "\a3\ui_f\hpp\defineDIKCodes.inc"
[
	["332nd Aux Mod","Lowlights"],
	"aux_lowLightBind", 
	["Low Light Toggle", "Turns On/Off Lowlights"], 
	{call AuxMod_332nd_aceActions_fnc_toggleLowLight},
	{}, 
	[DIK_L, [true, false, false]]
] call cba_fnc_addKeybind;

[
	["332nd Aux Mod","Lowlights"],
	"aux_lowLightBindUp",
	["Increase Aperture","Increase Brightness"],
	{call AuxMod_332nd_aceActions_fnc_increaseAperture},
	{},
	[DIK_EQUALS, [true, false, false]]
] call cba_fnc_addKeybind;

[
	["332nd Aux Mod","Lowlights"],
	"aux_lowLightBindDown",
	["Decrease Aperture","Decrease Brightness"],
	{call AuxMod_332nd_aceActions_fnc_decreaseAperture},
	{},
	[DIK_MINUS, [true, false, false]]
] call cba_fnc_addKeybind;