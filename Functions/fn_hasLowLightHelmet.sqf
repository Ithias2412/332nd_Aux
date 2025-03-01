params ["_unit"];

private _helmet = headgear _unit;
if (_helmet isEqualTo "") exitWith {false}; // No helmet equipped

(getNumber (configFile >> "CfgWeapons" >> _helmet >> "332nd_Has_Lowlight") isEqualTo 1)
