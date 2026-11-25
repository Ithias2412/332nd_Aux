mlg_wrapTable = [
    [[0], [
        "createDeathS", "createDeathS_Binocular", "WBK_CreateDamage", "WBK_HitByPunch",
        "WBK_CreateMeleeHitAnim", "WBK_CreateHitAnimation", "WBK_CreateCrawlingAway",
        "concentrationToZero", "SW_CountToKillScript",
        "kickButtKill", "Katarn_Damage", "SpaceMarine_Punch_WithRifle_Damage", "bayonettScriptKill",
        "WBK_dobi_1", "WBK_dobi_2", "WBK_dobi_4", "WBK_dobi_5", "WBK_hitNearGeom",
        "HumanExecutionsSelectFrom", "WBK_IMS_AxeStealthKill", "IMS_FistsGenericMelExec",
        "Human_Execution_HeavyWeaponType", "Human_Execution_StompOnHead", "Human_Execution_ChokeOne",
        "Human_Execution_Sword", "Human_Execution_Sword_LightSaber", "Human_Execution_OneHanded",
        "Human_Execution_TwoHandedOnTwoHanded_1", "Human_Execution_TwoHandedOnTwoHanded_2",
        "Human_Execution_TwoHandedOnTwoHanded_LightSaber", "Human_Execution_StompOnHead_unconscious",
        "Human_Execution_StompOnHead_unconscious_Kulaki", "Human_Execution_StompOnHead_WITHPISTOL",
        "Human_Execution_WithShield", "Human_Execution_WithShield_SM", "Human_Execution_BluntWeapon",
        "Human_Execution_AxeWeapon", "SM_Human_Execution_HeavyWeaponType",
        "IMS_KnifeNewExecution_1", "IMS_KnifeNewExecution_2",
        "Fists_execWithHeavy", "Fists_execWithMeleeKnife", "Fists_execWithMelee",
        "coolDeathKnife_back", "coolDeathKnife_backAxe", "coolDeathKnife_blunt", "coolDeathKnife_NoWeapon",
        "coolDeathMoreSkill_1", "coolDeathMoreSkill_2"
    ]],
    [[1], [
        "SM_Execution", "SM_Execution_StompOnHead", "SM_Execution_Sword", "SM_Execution_ThunderHammer",
        "SM_Execution_ChainSaw", "WBK_IMS_GreatSword_Execution", "bayonetScriptExecution",
        "HALOSPECIFIC_Spartan_Execution", "HALOSPECIFIC_Spartan_Execution_1",
        "HALOSPECIFIC_Elite_Execution", "HALOSPECIFIC_Elite_Execution_1",
        "WBK_RifleButtStock_Sync_1", "WBK_RifleButtStock_Sync_2",
        "WBK_RifleButtStock_Sync_OnPlayer_1", "WBK_RifleButtStock_Sync_OnPlayer_2",
        "WBK_RifleButtStock_Sync_Blunt_1", "WBK_RifleButtStock_Sync_Blunt_2",
        "WBK_RifleButtStock_Sync_WithKnifus_1", "WBK_RifleButtStock_Sync_WithKnifus_2",
        "WBK_RifleButtStock_Sync_WithKnifus_3", "WBK_RifleButtStock_Sync_WithKnifus_4",
        "WBK_RifleButtStock_Sync_WithKnifus_5"
    ]]
];

mlg_fnc_wrapAll = {
    private _missing = [];
    mlg_wrapped = [];
    {
        _x params ["_indexes", "_names"];
        {
            if ([_x, _indexes] call mlg_fnc_wrap) then { mlg_wrapped pushBack _x } else { _missing pushBack _x };
        } forEach _names;
    } forEach mlg_wrapTable;
    _missing
};

private _missing = call mlg_fnc_wrapAll;

mlg_kickPatched = false;
if (!isNil "legPunchVertuha") then {
    private _source = toString legPunchVertuha;
    private _needle = "(alive _x) and !(_x == _unitToPlay)";
    if (_needle in _source) then {
        legPunchVertuha = compile ([_source, _needle, "!(_x call mlg_fnc_isProtected) and " + _needle] call CBA_fnc_replace);
        mlg_kickPatched = true;
    };
};

diag_log text format [
    "[MLG] Melee Guard ready: %1 IMS functions guarded, lightsaber kick patched=%2, not found=%3",
    count mlg_wrapped, mlg_kickPatched, _missing
];

mlg_lastRewrap = 0;
[{
    { if (local _x) then { _x call mlg_fnc_syncUnit } } forEach allUnits;
    if (diag_tickTime - mlg_lastRewrap > 15) then {
        mlg_lastRewrap = diag_tickTime;
        call mlg_fnc_wrapAll;
    };
}, 0.5] call CBA_fnc_addPerFrameHandler;

if (hasInterface && { isClass (configFile >> "CfgPatches" >> "zen_custom_modules") }) then {
    ["Melee Guard", "Toggle: cannot be meleed", {
        params ["", "_unit"];
        if (isNull _unit || { !(_unit isKindOf "CAManBase") }) exitWith {
            ["Place the module on a unit"] call zen_common_fnc_showMessage;
        };
        private _on = !(_unit call mlg_fnc_isProtected);
        [_unit, _on] call mlg_fnc_setProtected;
        [["%1 can be meleed again", "%1 can no longer be meleed"] select _on, name _unit] call zen_common_fnc_showMessage;
    }] call zen_custom_modules_fnc_register;
};