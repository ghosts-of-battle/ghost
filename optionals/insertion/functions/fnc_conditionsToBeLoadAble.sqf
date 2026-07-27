#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_conditionsToBeLoadAble

Description:
    Is this object something the cargo loader will accept?

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object"];
//base will only apply to thingX "LandVehicle" "Boat_F"
private _allConditionsCheck = false;
//----detect if there is a planner in the area
private _allNearObjects = _object nearObjects 50;
private _isNearEnough = false;
{
	private _var= _x getVariable [QGVAR(isAirInsertionPlanner_)+ (str side ACE_player),false];
  if(_var) then {_isNearEnough =true};
}forEach _allNearObjects;
//----- mass condition
private _okMass = false;
if (((getMass _object) < 10000) && ((getMass _object) >= 5)) then {_okMass = true};

//-----check that all conditions are met and return verdict
if (_isNearEnough && _okMass) then {_allConditionsCheck = true};
//----FORCE OVERRIDES
/*list of objects to exclude*/
#include "toExclude.inc.sqf"
if ((typeOf _object) in _toExclude) then {_allConditionsCheck = false;};
// Mission makers force an object loadable with the object variable, mod makers
// with the config property. The legacy MRHMT_ names are still honoured so
// missions written against the original keep working.
private _forcedByMission = (_object getVariable [QGVAR(canBeLoaded), false])
    || {_object getVariable ["MRHMT_canBeLoaded", false]};
if (_forcedByMission && _isNearEnough) then {_allConditionsCheck = true};

private _cfg = configOf _object;
private _forcedByConfig = (getNumber (_cfg >> QUOTE(GVAR(canBeLoaded))) == 1)
    || {getNumber (_cfg >> "MRHMT_canBeLoaded") == 1};
if (_forcedByConfig && _isNearEnough) then {_allConditionsCheck = true};

private _prepingDisabled = (_object getVariable [QGVAR(forceUnloadable), false])
    || {_object getVariable ["MRHMT_forceUnloadable", false]};
if (_prepingDisabled) then {_allConditionsCheck = false};

//----------return
_allConditionsCheck
