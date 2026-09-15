["ls_droids_addShieldEH", {
    params ["_shield"];

    [{
        params ["_args", "_handle"];
        _args params ["_shield", "_tries"];

        if (isNull _shield || _tries > 10) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

        private _owner = attachedTo _shield;
        if (isNull _owner) then { _owner = _shield getVariable ["ls_droids_owner", objNull] };
        if (isNull _owner) exitWith { _args set [1, _tries + 1] };

        [_handle] call CBA_fnc_removePerFrameHandler;

        if (getNumber (configFile >> "CfgVehicles" >> typeOf _owner >> "aux332_uglOnlyShield") != 1) exitWith {};

        _shield removeAllEventHandlers "HandleDamage";

        _shield addEventHandler ["HandleDamage", {
            private _proj = _this select 4;
            if !(_proj in aux332_uglAmmo) exitWith { 0 };
            _this call ls_droids_fnc_shieldHandleDamage
        }];

    }, 0, [_shield, 0]] call CBA_fnc_addPerFrameHandler;

}] call CBA_fnc_addEventHandler;