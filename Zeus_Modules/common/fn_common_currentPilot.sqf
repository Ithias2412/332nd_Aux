
/*
 * Author: Crimzonkat
 * Created to account for UAV control
 *
 * NOTES: Please provide proper credits to those who participate in development. This script was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <OBJECT>: 	Controllable vehicle
 *
 * Example:
 * [Bob] call ls_fnc_common_currentPilot;
 *
 * Return Value:
 * <Unit object>
 *
 */

params [
	["_vehicle", objNull, [objNull]]
];

if (isNull _vehicle) exitWith {};

_isDriver = currentPilot _vehicle;

if (unitIsUAV _vehicle) then {
	_connections = UAVControl _vehicle;
	_index = _connections findIf {_x isEqualTo "DRIVER"};
	if(_index == -1) exitWith {};
	_isDriver = _connections select (_index -1);
};

// return Statement
_isDriver