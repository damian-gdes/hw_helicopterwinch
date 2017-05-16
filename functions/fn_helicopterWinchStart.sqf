private ["_unit", "_ropeInitalPoint", "_v"];

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_ropeInitalPoint = [_this, 1] call BIS_fnc_param;
_v = vehicle _unit;

_myRope = ropeCreate [_v, _ropeInitalPoint, 1];