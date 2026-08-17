#include "script_component.hpp"
/*
 * Author: Ghost
 * A side's objectives, as its commander knows them.
 *
 * Keys verified against source (mil_opcom fnc_OPCOM.sqf:2907-2911): the type
 * key is "objectiveType", NOT "type" - reading "type" returns empty forever
 * and every consumer silently sees an untyped world.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * [[id <STRING>, pos <ARRAY>, size <NUMBER>, type <STRING>], ...] <ARRAY>
 * type is ALiVE's own objectiveType text; consumers filter, this translates.
 *
 * Example:
 * [east] call ghost_adapter_alive_fnc_objectivesFor
 */

params [["_side", sideUnknown, [sideUnknown]]];

if (!GVAR(ready) || {_side isEqualTo sideUnknown}) exitWith {[]};

private _out = [];
{
    _x params ["_cside", "", "", "", "_inst"];
    if (_cside isNotEqualTo _side) then {continue};

    {
        private _obj = _x;
        private _id = [_obj, "objectiveID", ""] call ALiVE_fnc_hashGet;
        private _pos = [_obj, "center", []] call ALiVE_fnc_hashGet;
        private _size = [_obj, "size", 150] call ALiVE_fnc_hashGet;
        private _type = [_obj, "objectiveType", ""] call ALiVE_fnc_hashGet;

        // A deleted objective stays in the array with a flag rather than
        // being removed, so it has to be filtered here or the world grows.
        if (([_obj, "deleted", false] call ALiVE_fnc_hashGet)) then {continue};

        if (_id isNotEqualTo "" && {_pos isNotEqualTo []}) then {
            _out pushBack [_id, _pos, _size, _type];
        };
    } forEach ([_inst, "objectives", []] call ALiVE_fnc_hashGet);
} forEach (call FUNC(commanders));

_out
