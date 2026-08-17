#include "script_component.hpp"
/*
 * Author: Ghost
 * The asymmetric commander's installations - the physical network the intel
 * economy points at (new.md section 5).
 *
 * ALiVE's asymmetric OPCOM records its installations as objectives carrying a
 * type; the four that matter are the ones the design names. A conventional
 * commander has none of these, so a map with no asymmetric commander returns
 * empty and every consumer stays quiet rather than inventing targets.
 *
 * Arguments:
 * 0: Types wanted <ARRAY of STRING> (optional, default the design's four)
 *
 * Return Value:
 * [[id <STRING>, pos <ARRAY>, size <NUMBER>, type <STRING>], ...] <ARRAY>
 *
 * Example:
 * [] call ghost_adapter_alive_fnc_installations
 */

params [["_want", ["factory", "hq", "depot", "roadblocks"], [[]]]];

if (!GVAR(ready)) exitWith {[]};

_want = _want apply { toLower _x };

private _out = [];
{
    _x params ["_side", "_ctype"];
    if (_ctype isNotEqualTo "asymmetric") then {continue};

    {
        _x params ["_id", "_pos", "_size", "_type"];
        // ALiVE's objectiveType is a displayName, so the match is a CONTAINS
        // rather than an equality - "IED Factory" has to answer to "factory".
        private _low = toLower _type;
        if ((_want findIf {_low find _x > -1}) < 0) then {continue};
        _out pushBack [_id, _pos, _size, _low];
    } forEach ([_side] call FUNC(objectivesFor));
} forEach (call FUNC(commanders));

_out
