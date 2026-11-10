// Show the scope overlay only while looking through the T-41 scope
private _u = ACE_player;
private _on = cameraView == "GUNNER"
    && {isNull objectParent _u}
    && {!visibleMap}
    && {currentWeapon _u == "332nd_T41"}
    && {((primaryWeaponItems _u) param [2, ""]) == "332nd_T41_Scope"};
private _d = uiNamespace getVariable ["nd332_T41_HUD", displayNull];
if (_on) then {
    if (isNull _d) then {
        nd332_T41_hudLayer cutRsc ["nd332_T41_ScopeHUD", "PLAIN", 0, false];
        _d = uiNamespace getVariable ["nd332_T41_HUD", displayNull];
    };
    if (!isNull _d) then {
        (_d displayCtrl 33212) ctrlSetStructuredText parseText (call nd332_T41_fnc_show);
    };
} else {
    if (!isNull _d) then { nd332_T41_hudLayer cutText ["", "PLAIN", 0, false]; };
};
