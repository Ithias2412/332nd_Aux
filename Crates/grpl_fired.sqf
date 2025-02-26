if (!isserver) exitWith{};
private _crate = _this select 0;
private _pos = [0, 0, 0];

// This loop keeps checking if the bomb is still alive
while {alive _crate} do {
	_pos = getPosASL _crate;
    sleep 0.1;  // Wait for half a second before checking again
};

// This part will run when the bomb is no longer alive
private _box = "332nd_Resupply_Crate" createVehicle _pos; 
private _smoke = "SmokeShellYellow" createVehicle _pos; 
_smoke attachTo [(_box),[0,0,0]]; 
systemChat "The crate has deployed!";