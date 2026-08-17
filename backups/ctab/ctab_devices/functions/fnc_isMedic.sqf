#include "script_component.hpp"
/*
 * Author: YonV
 * Is this unit trained enough for the MEDICAL app - a medic or a doctor?
 *
 * Read exactly the way ACE reads it in its own isMedic: the medicClass
 * variable, falling back to the engine's "medic" unit trait when the mission
 * has not set one. 1 is a medic, 2 a doctor; 0 is everybody else.
 *
 * Arguments:
 * 0: Unit <OBJECT> (optional, default the cTab player)
 *
 * Return Value:
 * Trained <BOOL>
 *
 * Example:
 * [] call ghost_ctab_devices_fnc_isMedic
 */

params [["_unit", objNull, [objNull]]];
if (isNull _unit) then {_unit = cTab_player};
if (isNull _unit) exitWith {false};

private _class = _unit getVariable
    ["ace_medical_medicClass", parseNumber (_unit getUnitTrait "medic")];

_class >= 1
