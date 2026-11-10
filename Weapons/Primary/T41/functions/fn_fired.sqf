// FiredBIS: the fuze counts distance along the flight path, so arcing shots burst at the right spot
params ["_unit", "", "", "", "_ammo", "", "_proj", ["_gunner", objNull]];
if (getNumber (configFile >> "CfgAmmo" >> _ammo >> "nd332_airburst") != 1 || {isNull _proj}) exitWith {};
if (!(_unit isKindOf "CAManBase") && {!isNull _gunner}) then { _unit = _gunner };
if (!local _unit) exitWith {};
if ((_unit getVariable ["nd332_T41_range", 0]) <= 0) exitWith {};

private _range = ((_unit getVariable ["nd332_T41_range", 0]) + (_unit getVariable ["nd332_T41_offset", 0])) max nd332_T41_min;

[{
    params ["_args", "_pfh"];
    _args params ["_proj", "_range", "_last", "_travelled"];
    if (!alive _proj) exitWith { [_pfh] call CBA_fnc_removePerFrameHandler };
    private _pos = getPosASL _proj;
    _travelled = _travelled + (_last vectorDistance _pos);
    _args set [2, _pos];
    _args set [3, _travelled];
    private _step = vectorMagnitude ((velocity _proj) vectorMultiply diag_deltaTime);
    if (_travelled + _step >= _range) then {
        _proj setPosASL (_pos vectorAdd ((vectorNormalized velocity _proj) vectorMultiply (_range - _travelled)));
        triggerAmmo _proj;
        [_pfh] call CBA_fnc_removePerFrameHandler;
    };
}, 0, [_proj, _range, getPosASL _proj, 0]] call CBA_fnc_addPerFrameHandler;
