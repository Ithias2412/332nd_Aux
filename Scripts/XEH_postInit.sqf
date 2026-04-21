// ============================================================================
// 332nd Droid Grenade Fix - postInit
// ----------------------------------------------------------------------------
// Overrides WBK_Droid_GrenadeThrow from WBK_DroidsSw to:
//   1. Only allow a B1 to throw a droid nade if it actually carries the
//      WBK_b1_DroidNade magazine in its loadout (toggleable via CBA).
//   2. Consume the magazine on throw so it's finite.
//   3. Apply a 332nd-owned per-droid cooldown, independent of WBK's
//      hardcoded 120s cooldown on B1CanThrowNade.
// ============================================================================

// --- Safety check: WBK not loaded? Bail silently. ---------------------------

if (isNil "WBK_Droid_GrenadeThrow") exitWith {
    diag_log "[332ND] Droid grenade fix: WBK_DroidsSw not loaded, skipping override.";
};

// --- Preserve original so we can still call into it -------------------------

nd332_wbkGrenadeThrow_orig = WBK_Droid_GrenadeThrow;

// --- Override ---------------------------------------------------------------

WBK_Droid_GrenadeThrow = {
    params ["_droid", "_enemy"];

    // 332nd-owned cooldown gate
    if !(isNil {_droid getVariable "nd332_B1NadeCooldown"}) exitWith {};

    // Inventory gate (toggleable via CBA)
    if (nd332_DroidNade_RequireLoadout && {!(WBK_b1_DroidNade in (magazines _droid))}) exitWith {};

    // Consume one grenade from the loadout (only if we're gating on loadout)
    if (nd332_DroidNade_RequireLoadout) then {
        _droid removeMagazine WBK_b1_DroidNade;
    };

    // Start 332nd cooldown
    _droid setVariable ["nd332_B1NadeCooldown", true];
    [_droid] spawn {
        params ["_d"];
        uiSleep nd332_DroidNade_Cooldown;
        if (!isNull _d) then { _d setVariable ["nd332_B1NadeCooldown", nil]; };
    };

    // Hand off to the original throw logic
    _this call nd332_wbkGrenadeThrow_orig;
};

diag_log "[332ND] Droid grenade fix loaded: inventory-gated, CBA-tunable cooldown.";