#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_serverPick

Description:
    Server end of the choice menu. Builds the snapshot for the chosen product and
    broadcasts the render. Everything that decides WHAT the intel is happens
    here, on one machine, so two clients can never disagree about it.

Parameters:
    _product : STRING - "picture" | "sigint" | "jam" | "detect" | "target".
    _pos     : ARRAY  - where the hack happened.
    _side    : SIDE   - who earned it.
    _caller  : OBJECT - the hacker.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_product", "_pos", "_side", "_caller"];

private _ok = switch (_product) do {
    case "picture": { ([_pos, _side] call FUNC(productLocalPicture)) > 0 };
    case "sigint":  { [_pos, _side] call FUNC(productSigintHint) };
    case "jam":     { [_pos, "jam", _side] call FUNC(productZoneReveal) };
    case "detect":  { [_pos, "detect", _side] call FUNC(productZoneReveal) };
    case "target":  { !isNull ([_caller, _pos] call FUNC(markNearestTarget)) };
    default { false };
};

private _msg = ["Nothing to report.", "Intel plotted - check your map."] select _ok;
[QGVAR(pickResult), [_msg, _side]] call CBA_fnc_globalEvent;

INFO_3("Hacking: product '%1' by %2 -> %3",_product,name _caller,_ok);
