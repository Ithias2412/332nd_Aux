["ace_medical_treatment_bandageLocal", {
    params ["_patient", "_bodyPart", "_className"];
    if (_className isEqualTo "332nd_Bacta_Spray") then {
        [_patient, _bodyPart, "332nd_Bacta_Spray"] call ace_medical_treatment_fnc_bandageLocal;
    };
}] call CBA_fnc_addEventHandler;