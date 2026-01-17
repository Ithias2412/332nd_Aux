
/*
 * Author: Crimzonkat
 * Created since there's no easy way to quickly get if the vehicle turret in question a unit is currently in is a copilot
 *
 * NOTES: Please provide proper credits to those who participate in development. This script was developed for Legion Studios Core. 
 * Do not place in any other mod without permission.
 * 
 * Arguments:
 * 0: <OBJECT>: 	object or classname
 * 1: <OBJECT>:		unit
 *
 * Example:
 * [Bob, Mary] call ls_fnc_isCopilot;
 *
 * Return Value:
 * <Boolean>
 *
 */

params [
	"_vehicle",
	"_unit"
];

if (_vehicle == _unit) exitWith {false};

private _turretPath = _vehicle unitTurret _unit;
private _isCopilot = ([typeOf _vehicle, _turretPath] call BIS_fnc_turretConfig >> "isCopilot") call BIS_fnc_getCfgDataBool;

// return statement
_isCopilot