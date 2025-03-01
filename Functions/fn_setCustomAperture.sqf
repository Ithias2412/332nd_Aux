params ["_unit"];

if (!(_unit getVariable ["lowLightEnabled", false])) exitWith {
    hint "Low Light Mode is OFF!";
};

// Ensure ACE input dialog is properly called
[
    "Enter Aperture Value (0.6 - 20)",  // Dialog title
    "Set Aperture",                     // Button text
    "",                                  // Default text
    {
        params ["_input"];

        // Convert input to number
        private _value = parseNumber _input;

        // Validate input range
        if (_value < 0.6 || _value > 20) exitWith {
            hint "Invalid input! Enter a number between 0.6 and 20.";
        };

        // Apply the new aperture value
        playerApertureValue = _value;
        setAperture playerApertureValue;

        hint format ["Aperture Set to: %1", playerApertureValue];
    }
] call ace_common_fnc_displayTextInput;
