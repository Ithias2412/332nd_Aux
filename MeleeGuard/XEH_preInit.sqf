mlg_classList  = [];
mlg_classCache = createHashMap;
mlg_wrapped    = [];

mlg_fnc_parseClasses = {
    params [["_text", "", [""]]];
    private _list = [];
    {
        if (isClass (configFile >> "CfgVehicles" >> _x)) then {
            _list pushBackUnique _x;
        } else {
            diag_log text format ["[MLG] Protected classnames: '%1' is not a CfgVehicles class, ignored.", _x];
        };
    } forEach (_text splitString (", ;" + toString [9, 10, 13]));
    mlg_classList  = _list;
    mlg_classCache = createHashMap;
};

[
    "mlg_enabled", "CHECKBOX",
    ["Enable Melee Guard", "When off, every unit can be meleed as normal."],
    "Melee Guard", true, 1
] call CBA_fnc_addSetting;

[
    "mlg_classes", "EDITBOX",
    ["Protected classnames", "Unit classnames that cannot be meleed, separated by commas. Child classes are included, e.g. a base droid class protects every droid that inherits from it."],
    "Melee Guard", "", 1,
    { _this call mlg_fnc_parseClasses }
] call CBA_fnc_addSetting;

mlg_fnc_isProtected = {
    params [["_unit", objNull, [objNull]]];
    if (isNull _unit || {!mlg_enabled}) exitWith { false };
    private _flag = _unit getVariable "mlg_protected";
    if (!isNil "_flag") exitWith { _flag isEqualTo true };
    private _type = typeOf _unit;
    private _hit = mlg_classCache get _type;
    if (isNil "_hit") then {
        _hit = getNumber (configOf _unit >> "mlg_protected") > 0
            || { (mlg_classList findIf { _type isKindOf [_x, configFile >> "CfgVehicles"] }) > -1 };
        mlg_classCache set [_type, _hit];
    };
    _hit
};

mlg_fnc_setProtected = {
    params [["_unit", objNull, [objNull]], ["_on", true, [true]]];
    if (isNull _unit) exitWith {};
    _unit setVariable ["mlg_protected", _on, true];
    if (local _unit) then { _unit call mlg_fnc_syncUnit };
};

mlg_fnc_syncUnit = {
    params [["_unit", objNull, [objNull]]];
    if (isNull _unit) exitWith {};
    if (_unit call mlg_fnc_isProtected) then {
        if (isNil { _unit getVariable "IMS_IsUntouchable" }) then {
            _unit setVariable ["IMS_IsUntouchable", 1, true];
        };
        if (!isPlayer _unit && { isNil { _unit getVariable "IMS_IsUnitInvicibleScripted" } }) then {
            _unit setVariable ["IMS_IsUnitInvicibleScripted", 1, true];
        };
        if !(_unit getVariable ["mlg_flagged", false]) then {
            _unit setVariable ["mlg_flagged", true, true];
        };
    } else {
        if (_unit getVariable ["mlg_flagged", false]) then {
            _unit setVariable ["IMS_IsUntouchable", nil, true];
            _unit setVariable ["IMS_IsUnitInvicibleScripted", nil, true];
            _unit setVariable ["mlg_flagged", nil, true];
        };
    };
};

mlg_fnc_blocked = {
    params ["_args", "_indexes"];
    if !(_args isEqualType []) then { _args = [_args] };
    private _blocked = false;
    {
        private _victim = _args param [_x, objNull];
        if (_victim isEqualType objNull && { _victim call mlg_fnc_isProtected }) exitWith {
            _blocked = (_args findIf { _x isEqualType objNull && { !isNull _x } && { _x isNotEqualTo _victim } }) > -1;
        };
    } forEach _indexes;
    _blocked
};

mlg_fnc_wrap = {
    params ["_name", "_indexes"];
    private _current = missionNamespace getVariable _name;
    if (isNil "_current" || { !(_current isEqualType {}) }) exitWith { false };
    private _guard = compile format [
        "if ([_this, %1] call mlg_fnc_blocked) exitWith {}; _this call mlg_orig_%2",
        _indexes, _name
    ];
    if (_current isEqualTo _guard) exitWith { true };
    missionNamespace setVariable ["mlg_orig_" + _name, _current];
    missionNamespace setVariable [_name, _guard];
    true
};