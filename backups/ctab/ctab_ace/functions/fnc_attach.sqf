#include "script_component.hpp"
/*
 * Author: YonV
 * Puts the gesture draw on both of a device's map controls, once per display.
 *
 * cTab keeps a satellite map and a topographic one and shows whichever the
 * player picked, so both get the handler - attaching only to the visible one
 * would lose the pointers the moment somebody switched map type.
 *
 * Arguments:
 * 0: The device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_ace_fnc_attach
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (!GVAR(pointers)) exitWith {};

// ACE map gestures is a soft dependency: without it there is nothing to draw
if (isNil "ace_map_gestures_fnc_getProximityPlayers") exitWith {};

// A display's controls die with it, so the handlers do too - but a second
// call on the same display would stack them.
if (_display getVariable [QGVAR(attached), false]) exitWith {};
_display setVariable [QGVAR(attached), true];

{
    private _map = _display displayCtrl _x;
    if (isNull _map) then {continue};
    _map ctrlAddEventHandler ["Draw", {_this call FUNC(onDraw)}];
} forEach [IDC_CTAB_MAP, IDC_CTAB_MAPTOPO];
