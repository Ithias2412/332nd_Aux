params ["_unit"];

private _isEnabled = _unit getVariable ["lowLightEnabled", false];

if (!_isEnabled) then {
    if (isNil "playerApertureValue") then {
        playerApertureValue = 2;  // Initialize default value
    };

    setAperture playerApertureValue;
    hint format ["Low Light Mode Enabled! Aperture: %1", playerApertureValue];
} else {
    setAperture -1; // Reset aperture
    hint "Low Light Mode Disabled!";
};

// Toggle state
_isEnabled = !_isEnabled;
_unit setVariable ["lowLightEnabled", _isEnabled, true];
