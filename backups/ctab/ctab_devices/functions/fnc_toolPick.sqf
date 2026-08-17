#include "script_component.hpp"
/*
 * Author: YonV
 * Hands a map tool to whichever map the open device is showing, and takes the
 * device back to that map so the tool has something to draw on - picking a
 * tool and being left staring at another page would look like nothing
 * happened. The drawer closes behind the pick, so the tool has a clear map to
 * work on; the map switches beside them leave it up, because those are things
 * you flick through.
 *
 * cTab keeps two map controls per device, satellite and topographic, and shows
 * one; the tool has to go on the one that is up.
 *
 * Arguments:
 * 0: Tool name, or "" to clear <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["compass"] call ghost_ctab_devices_fnc_toolPick
 */

params [["_tool", "", [""]]];

if (isNil QEFUNC(ctab_tools,setTool)) exitWith {};

private _ifName = call FUNC(ifName);
if (_ifName isEqualTo "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// Back to the map first: the fork shows the map control under mode BFT on
// every one of these devices - the tablet's DESKTOP is its dashboard, not its
// map - and a tool attached to a hidden control draws nothing.
uiNamespace setVariable [QGVAR(toolsOpen), false];
[_ifName, [["mode", "BFT"]], true, true] call cTab_fnc_setSettings;

private _idc = S7_IDC_MAP;
private _topo = _display displayCtrl S7_IDC_MAPTOPO;
if (!isNull _topo && {ctrlShown _topo}) then {
    _idc = S7_IDC_MAPTOPO;
};

[_tool, _display, _idc] call EFUNC(ctab_tools,setTool);
