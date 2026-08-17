#include "script_component.hpp"
/*
 * Author: YonV
 * Is this unit trained enough for the ENGINEERING app - an engineer or a
 * specialist?
 *
 * Read exactly the way ACE's own isEngineer reads it: the ACE_isEngineer
 * variable, falling back to the engine's "engineer" unit trait. The value can
 * be a BOOL or a number - ACE normalises with [0,1,2] select, which maps
 * false/true to 0/1 and passes 0/1/2 through - so the same normalisation
 * happens here. 1 is an engineer, 2 a specialist; 0 is everybody else.
 *
 * Arguments:
 * 0: Unit <OBJECT> (optional, default the cTab player)
 *
 * Return Value:
 * Trained <BOOL>
 *
 * Example:
 * [] call ghost_ctab_devices_fnc_isEngineer
 */

params [["_unit", objNull, [objNull]]];
if (isNull _unit) then {_unit = cTab_player};
if (isNull _unit) exitWith {false};

private _class = _unit getVariable ["ACE_isEngineer", _unit getUnitTrait "engineer"];

([0, 1, 2] select _class) >= 1
