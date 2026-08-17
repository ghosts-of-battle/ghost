#include "script_component.hpp"
/*
 * Author: YonV
 * A marker colour class name to the colour itself, for the tools that draw
 * their own shapes rather than placing a marker.
 *
 * Some CfgMarkerColors entries hold expressions rather than numbers - the
 * default colour reads the player's own UI background - so each component is
 * compiled when it is a string. The result is cached: this runs inside a Draw
 * handler, which is every frame the map is up.
 *
 * The returned array is the cached one. Callers that modify it - several want
 * the alpha forced to 1 - must copy it first.
 *
 * Arguments:
 * 0: CfgMarkerColors class name <STRING>
 *
 * Return Value:
 * Colour <ARRAY> - [r, g, b, a], black if the name is unknown
 *
 * Example:
 * "ColorRed" call ghost_ctab_tools_fnc_markerRGBA
 */

params [["_name", "", [""]]];

private _cache = uiNamespace getVariable [QGVAR(colourCache), createHashMap];

if (_name in _cache) exitWith {_cache get _name};

private _cfg = configFile >> "CfgMarkerColors" >> _name;
if (!isClass _cfg) exitWith {[0, 0, 0, 1]};

private _colour = (getArray (_cfg >> "color")) apply {
    if (_x isEqualType "") then {call compile _x} else {_x};
};
if (count _colour < 4) then {
    _colour = [0, 0, 0, 1];
};

_cache set [_name, _colour];
uiNamespace setVariable [QGVAR(colourCache), _cache];

_colour
