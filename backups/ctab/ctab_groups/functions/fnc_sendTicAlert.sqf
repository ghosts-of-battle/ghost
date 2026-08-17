#include "script_component.hpp"
/*
 * Author: YonV
 * Sender side of a TROOPS IN CONTACT report: drops a global map marker at the
 * reported position (type/color from CBA settings) and raises the alert event
 * that rings every hacking scanner phone. Runs on the reporting client after
 * the cTab message has been sent.
 *
 * Arguments:
 * 0: Generated message result <ARRAY> ([shortTitle, text, messageType, attachments])
 *
 * Return Value:
 * None
 *
 * Example:
 * [_result] call ghost_ctab_groups_fnc_sendTicAlert
 */

params ["_result"];

_result params ["", "", "", "_attachments"];

// reported position: first marker attachment (the Location line), else the sender
private _pos = getPosATL cTab_player;
{
    _x params ["_attType", "", "_center"];
    if (_attType == 0) exitWith {
        _pos = [_center # 0, _center # 1, 0];
    };
} forEach _attachments;

GVAR(reportIndex) = GVAR(reportIndex) + 1;
private _marker = createMarker [format [QGVAR(tic_%1_%2), clientOwner, GVAR(reportIndex)], _pos];
_marker setMarkerTypeLocal GVAR(ticMarkerType);
_marker setMarkerColorLocal GVAR(ticMarkerColor);
_marker setMarkerText format ["TIC %1", groupId group cTab_player]; // last update global to broadcast the full marker

[QGVAR(ticAlert), [name cTab_player, mapGridPosition _pos]] call CBA_fnc_globalEvent;
