#include "script_component.hpp"
/*
 * Author: Ghost
 * Picks a deployed kit object up: deletes the world object (server-side) and puts
 * the matching kit item in the unit's inventory.
 *
 * Arguments:
 * 0: Kit object <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_object", objNull, [objNull]], ["_unit", objNull, [objNull]]];
if (isNull _object || {isNull _unit}) exitWith {};

private _item = getText (configOf _object >> "correspondingItem");
if (_item isEqualTo "") exitWith {};

if !(_unit canAdd _item) exitWith {
    [[], ["Patrol Base", 1.1, [1, 0.3, 0.3, 1]], ["No room for the kit."]] call CBA_fnc_notify;
};

[_object] remoteExec ["deleteVehicle", 2];
_unit addItem _item;
