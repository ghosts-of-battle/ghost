#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_base_defense_fnc_baseMarker

Description:
    Puts a side-appropriate marker on a defended base.

    Both the icon and the colour follow the side that owns the base, using the
    standard NATO installation symbols, so a map with three defended bases on it
    reads at a glance instead of needing a legend. The marker is global: a base
    is a known place, not intel.

    Created once at module init. It is not maintained afterwards - a base does
    not move, and nothing here should be paying a per-frame cost to redraw a
    static symbol.

Parameters:
    _pos  : ARRAY  - base position.
    _side : SIDE   - who holds it.
    _text : STRING - label. "" for none.

Returns:
    STRING - the marker name, "" on failure.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith { "" };

params [["_pos", [0,0,0], [[]]], ["_side", east, [east]], ["_text", "", [""]]];

if (isNil QGVAR(markerSeq)) then { GVAR(markerSeq) = 0 };
GVAR(markerSeq) = GVAR(markerSeq) + 1;

private _idx = switch (_side) do {
    case west: { 0 };
    case east: { 1 };
    case resistance: { 2 };
    default { 3 };
};

private _name = format [QGVAR(base_%1), GVAR(markerSeq)];
private _mkr = createMarker [_name, _pos];
if (_mkr isEqualTo "") exitWith { "" };

// Built locally, then published once. Every global setMarker* pushes the marker's
// whole state across the network, so setting three of them globally sends the
// same marker three times.
_mkr setMarkerTypeLocal (["b_installation", "o_installation", "n_installation", "c_unknown"] select _idx);
if (_text isNotEqualTo "") then { _mkr setMarkerTextLocal _text };
_mkr setMarkerColor (["ColorWEST", "ColorEAST", "ColorGUER", "ColorCIV"] select _idx);

_mkr
