#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_antiship_fnc_pickTarget

Description:
    Finds a hull worth a missile.

    Classes are matched by INHERITANCE rather than by exact name. The static
    carrier and destroyer are assembled from dozens of part classes that all
    descend from one base, and "Ship" covers every boat in the game - a list of
    exact names would miss most of a carrier and every mod's vessels.

    Nearest wins. A coastal battery shoots at what is closest to its coast.

Parameters:
    _cfg : HASHMAP - the battery's settings.

Returns:
    OBJECT - the hull, objNull if the sea is empty.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_cfg"];

private _from = _cfg get "pos";
private _classes = _cfg get "targets";
if (_classes isEqualTo []) exitWith { objNull };

private _best = objNull;
private _bestD = -1;

{
    private _obj = _x;
    if (!alive _obj) then { continue };
    if (_classes findIf { _obj isKindOf _x } < 0) then { continue };

    private _d = _from distance2D _obj;
    if (_bestD < 0 || {_d < _bestD}) then { _bestD = _d; _best = _obj };
} forEach (nearestObjects [_from, [], _cfg get "range"]);

if (!isNull _best && {_cfg get "debug"}) then {
    diag_log text format ["[ghost_antiship] target: %1 at %2m, grid %3",
        typeOf _best, round _bestD, mapGridPosition (getPosATL _best)];
};

_best
