#include "script_component.hpp"
/*
 * Author: Ghost
 * A cache died: that side's ceiling drops to the reduced number for a random
 * window.
 *
 * Windows EXTEND rather than stack - a second kill while the first outage
 * runs pushes the end out if its own window is longer, but two kills can
 * never multiply into a permanent grounding. The sky is supposed to come
 * back; that is what makes hitting supply a raid rather than a win button.
 *
 * Arguments:
 * 0: The cache <OBJECT>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_cache", objNull, [objNull]]];

private _side = _cache getVariable [QGVAR(cacheSide), sideUnknown];
if (_side isEqualTo sideUnknown) exitWith {};

private _lo = GVAR(windowMin);
private _hi = GVAR(windowMax) max _lo;
private _window = _lo + random (_hi - _lo);
private _until = (CBA_missionTime + _window) max (GVAR(outages) getOrDefault [str _side, -1]);

GVAR(outages) set [str _side, _until];

INFO_3("cache killed: %1 ceiling %2 for %3s",_side,round GVAR(reducedMax),round _window);
["SUPPLY", format ["%1 drone supply hit - their air thins out for a while.", _side]]
    call EFUNC(notify,broadcast);
