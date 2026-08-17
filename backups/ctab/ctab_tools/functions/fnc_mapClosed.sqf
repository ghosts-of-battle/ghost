#include "script_component.hpp"
/*
 * Author: YonV
 * The main map has closed: drop whatever tool was live.
 *
 * A tool is attached to one map control, and that control dies with its
 * display. Left recorded, the next press finds a handler registered against a
 * null control and the picker looks dead.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_tools_fnc_mapClosed
 */

// A device screen's tool is not this map's business - closing the map must not
// take a tool off a tablet somebody still has open.
private _live = uiNamespace getVariable [QGVAR(live), []];
if (_live isEqualTo []) exitWith {};

_live params ["", "", "_display"];
if (!isNull _display && {_display isNotEqualTo (findDisplay 12)}) exitWith {};

[""] call FUNC(setTool);
