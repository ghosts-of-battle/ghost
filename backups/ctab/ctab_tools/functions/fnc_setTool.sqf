#include "script_component.hpp"
/*
 * Author: YonV
 * Puts one map tool on a map control, taking the last one off first. Only one
 * tool is ever live: they all drive off the same left click and would fight
 * each other for it.
 *
 * The same call serves the main map and a cTab device screen - the tools only
 * ever wanted a display and a map IDC, which is why dropping the PLP mod's
 * radial menu costs nothing.
 *
 * What this does NOT clear is the markers the building and grid tools place.
 * Those are the point of those two tools; they are removed the way the tools
 * remove them, by holding ctrl and right-clicking the area.
 *
 * Arguments:
 * 0: Tool name, or "" to clear <STRING>
 * 1: Display holding the map (optional, defaults to the main map) <DISPLAY>
 * 2: The map control's IDC (optional) <NUMBER>
 *
 * Return Value:
 * Whether a tool is now live <BOOL>
 *
 * Example:
 * ["compass"] call ghost_ctab_tools_fnc_setTool
 */

params [["_tool", "", [""]], ["_display", displayNull, [displayNull]], ["_idc", 51, [0]]];

// ---- take the live tool off, wherever it was ------------------------------
private _live = uiNamespace getVariable [QGVAR(live), []];
if (_live isNotEqualTo []) then {
    _live params ["_oldCtrl", "_oldEH", "_oldDisplay"];
    if (!isNull _oldCtrl) then {
        _oldCtrl ctrlRemoveEventHandler ["Draw", _oldEH];
    };
    // The height tool builds its profile graph with ctrlCreate and never
    // takes it down. Left in place it would both stay on screen and collide
    // with the next one on the same IDC.
    if (!isNull _oldDisplay) then {
        private _graph = _oldDisplay displayCtrl IDC_TOOLS_GRAPH;
        if (!isNull _graph) then {
            ctrlDelete _graph;
        };
    };
};
uiNamespace setVariable [QGVAR(live), []];
uiNamespace setVariable [QGVAR(tool), _tool];

// ---- and every scrap of working state it left behind ----------------------
// The tools keep theirs in localNamespace under their own names. A leftover
// origin point or click timestamp is read by whichever tool looks for that key
// next, so all of it goes - the full list, checked against the tool bodies.
{
    localNamespace setVariable [_x, nil];
} forEach [
    QGVAR(compass_origPos), QGVAR(compass_lastClick),
    QGVAR(distance_distancePoints), QGVAR(distance_lastClick), QGVAR(distance_dragging),
    QGVAR(height_points), QGVAR(height_lastClick),
    QGVAR(Height_MinMax),
    QGVAR(LineOfSight_basePos), QGVAR(LineOfSight_lastClick), QGVAR(LineOfSight_dirDist),
    QGVAR(LineOfSight_calcData), QGVAR(LineOfSight_savedLOS),
    QGVAR(markHouses_lastClick), QGVAR(markHouses_curPoints),
    QGVAR(placeGrid_lastClick), QGVAR(placeGrid_dragging)
];
// Deliberately absent: markHouses_points and placeGrid_points. Those two live
// in missionNamespace, not here, and they hold the marker handles for every
// grid and building set placed so far - clearing them would leave the markers
// on the map with nothing left that knows how to delete them.

if (_tool isEqualTo "") exitWith {false};

// ---- and put the new one on ----------------------------------------------
if (isNull _display) then {
    _display = findDisplay 12;
    _idc = 51;
};
if (isNull _display) exitWith {false};

private _map = _display displayCtrl _idc;
if (isNull _map) exitWith {false};

private _fnc = switch (toLower _tool) do {
    case "compass":  {FUNC(toolCompass)};
    case "distance": {FUNC(toolDistance)};
    case "height":   {FUNC(toolHeight)};
    case "houses":   {FUNC(toolHouses)};
    case "grid":     {FUNC(toolGrid)};
    case "flat":     {FUNC(toolFlat)};
    case "sight":    {FUNC(toolSight)};
    default {{}};
};

[_display, _idc] call _fnc;

// each tool records its handler id under our own key as its last act
private _eh = uiNamespace getVariable [QGVAR(EH), -1];
uiNamespace setVariable [QGVAR(live), [_map, _eh, _display]];

true
