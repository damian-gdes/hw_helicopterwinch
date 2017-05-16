private ["_logic", "_units", "_activated", "_offsetX", "_offsetY", "_offsetZ"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

_offsetX = _logic getVariable "offsetX";

_offsetY = _logic getVariable "offsetY";

_offsetZ = _logic getVariable "offsetZ";

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {

	{
		[_x, _offsetX, _offsetY, _offsetZ] call HW_fnc_helicopterWinchStart;
	} forEach _units;

};

true;