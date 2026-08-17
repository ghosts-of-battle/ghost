#include "script_component.hpp"
/*
 * Author: YonV
 * Moves the held-up S23 while it is on screen, when the position sliders
 * change. The layout translated the whole display once at open and cannot be
 * re-run - the remap would move every control a second time - so this shifts
 * everything by the DELTA between what the layout applied and what the
 * sliders now say, and records the new state. With the phone down it does
 * nothing: the next open reads the sliders fresh.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_dspNudge
 */

private _display = uiNamespace getVariable ["cTab_Android_dsp", displayNull];
if (isNull _display) exitWith {};
if !(_display getVariable [QGVAR(laidOut), false]) exitWith {};

(_display getVariable [QGVAR(dspApplied), [GVAR(dspRight), GVAR(dspUp)]]) params ["_oldR", "_oldU"];
(_display getVariable [QGVAR(dspSize), [0, 0]]) params ["_hw", "_hh"];
if (_hw == 0) exitWith {};

private _dx = _hw * (GVAR(dspRight) - _oldR);
private _dy = -_hh * (GVAR(dspUp) - _oldU);
if (abs _dx < 0.0001 && {abs _dy < 0.0001}) exitWith {};

// Top-level controls only: a group child's position is group-relative and
// rides along with its group.
{
    if (isNull ctrlParentControlsGroup _x) then {
        (ctrlPosition _x) params ["_px", "_py", "_pw", "_ph"];
        _x ctrlSetPosition [_px + _dx, _py + _dy, _pw, _ph];
        _x ctrlCommit 0;
    };
} forEach allControls _display;

// The rects deviceSkin re-asserts have all moved with everything else. ALL of
// them: it checks the maps and the screen backdrop against their own stored
// rectangles, so leaving those behind would have it drag both back to where
// the phone used to be, once a second, for as long as the phone was up.
{
    private _rect = _display getVariable [_x, []];
    if (_rect isNotEqualTo []) then {
        _rect params ["_rx", "_ry", "_rw", "_rh"];
        _display setVariable [_x, [_rx + _dx, _ry + _dy, _rw, _rh]];
    };
} forEach [QGVAR(glass), QGVAR(mapRect), QGVAR(bgRect)];

_display setVariable [QGVAR(dspApplied), [GVAR(dspRight), GVAR(dspUp)]];
