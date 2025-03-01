params ["_unit"];

if (!(_unit getVariable ["lowLightEnabled", false])) exitWith {
    hint "Low Light Mode is OFF!";
};

// Define step based on current value
private _step = if (playerApertureValue < 1) then {0.2} else {2};

// Increase aperture value
playerApertureValue = playerApertureValue + _step;

// Ensure it does not exceed max limit
if (playerApertureValue > 20) then { 
    playerApertureValue = 20;
};

setAperture playerApertureValue;
hint format ["Aperture Increased: %1", playerApertureValue];
