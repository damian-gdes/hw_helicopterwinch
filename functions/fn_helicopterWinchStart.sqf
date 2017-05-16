private ["_unit", "_offsetX", "_offsetY", " _offsetZ" , "_v"];

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_oX = [_this, 1] call BIS_fnc_param;
_oY = [_this, 2] call BIS_fnc_param;
_oZ = [_this, 3] call BIS_fnc_param;
_v = vehicle _unit;

_myRope = ropeCreate [_v, [_oX, _oY, _oZ], 1];