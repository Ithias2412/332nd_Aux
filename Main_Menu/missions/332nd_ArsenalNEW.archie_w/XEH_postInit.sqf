#include "script_component.hpp"
#include "\z\ace\addons\arsenal\defines.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

enableSaving [false, false];
cba_diagnostic_projectileMaxLines = 10;

[QGVAR(displayOpened), {
    private _player = player;

    if ((_player getVariable ["CBA_projectile_firedEhId", -1]) != -1) then {
        _player call CBA_fnc_removeUnitTrackProjectiles;
    };
    _player switchMove "Acts_AidlPercMstpSloWWpstDnon_warmup_1";
    _player setFatigue 0;

    // Esc to close mission
    {
        private _display = findDisplay IDD_ace_arsenal;

        _display displayAddEventHandler ["KeyDown", {
            params ["_display", "_key", "_shift"];

            if (_key isEqualTo DIK_ESCAPE && {!_shift}) then {
                [_display] spawn {
                    disableSerialization;

                    params ["_display"];

                    private _return = [
                        localize "str_sure",
                        localize "str_a3_rscdisplaymain_buttonexit",
                        true, true,
                        _display, false, true
                    ] call BIS_fnc_GUImessage;

                    if (_return) then {
                        // Save loadout for next time arsenal mission is played
                        profileNamespace setVariable [QGVAR(missionLastLoadout), [player] call CBA_fnc_getLoadout];

                        // Quit mission
                        _display closeDisplay IDC_CANCEL;
                        findDisplay IDD_MISSION closeDisplay 0;
                    };
                };

                true
            };
        }];

        (_display displayCtrl IDC_menuBarClose) ctrlSetText localize "str_a3_rscdisplayarsenal_buttonok";
    } call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;

[QGVAR(displayClosed), {
    private _player = player;
    _player switchMove "";
    // Unhide everthing
    private _unit = objNull;

    // Update VR unit gear
    

    _player call CBA_fnc_addUnitTrackProjectiles;
}] call CBA_fnc_addEventHandler;
