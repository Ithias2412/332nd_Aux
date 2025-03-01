params ["_unit"];

if (!(_unit getVariable ["lowLightEnabled", false])) exitWith {
    hint "Low Light Mode is OFF!";
};

// Define step based on current value
private _step = if (playerApertureValue <= 1) then {0.2} else {2};

// Decrease aperture value
playerApertureValue = playerApertureValue - _step;

// Ensure it does not go below min limit
if (playerApertureValue < 0.6) then { 
    playerApertureValue = 0.6;
};

setAperture playerApertureValue;
hint format ["Aperture Decreased: %1", playerApertureValue];
