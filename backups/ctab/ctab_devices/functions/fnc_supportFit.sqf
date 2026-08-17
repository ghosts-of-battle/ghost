#include "script_component.hpp"
/*
 * Author: YonV
 * Fits a Simplex SDF page onto the GFT's glass. Simplex draws its request
 * screens at its own size in the middle of the monitor; opened from the
 * tablet they should read as something running ON the tablet, so every
 * control is swept from the page's own bounding box into the glass rect.
 *
 * SELF-CALIBRATING: the page's extent is measured, not assumed - SDF lays
 * its dialogs out from its own grid this addon knows nothing about, and a
 * measured box keeps working when Simplex changes theirs.
 *
 * Runs once per SDF display. Each Simplex page is a fresh dialog, so the
 * watcher in FUNC(supportOpen) calls this for every page of the flow.
 *
 * Arguments:
 * 0: The SDF display <DISPLAY>
 * 1: The glass rect [x, y, w, h] <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_sssDisplay, [0.2, 0.25, 0.6, 0.5]] call ghost_ctab_devices_fnc_supportFit
 */

params [["_display", displayNull, [displayNull]], ["_glass", [], [[]]]];

if (isNull _display || {_glass isEqualTo []}) exitWith {};
if (_display getVariable [QGVAR(fitted), false]) exitWith {};
_display setVariable [QGVAR(fitted), true];

_glass params ["_gx", "_gy", "_gw", "_gh"];

// the page's own extent - top-level, visible, sized controls only
private _minX = 10;
private _minY = 10;
private _maxX = -10;
private _maxY = -10;
private _tops = [];
{
    if (!isNull ctrlParentControlsGroup _x) then {continue};
    (ctrlPosition _x) params ["_cx", "_cy", "_cw", "_ch"];
    if (_cw <= 0 || {_ch <= 0}) then {continue};
    _tops pushBack _x;
    _minX = _minX min _cx;
    _minY = _minY min _cy;
    _maxX = _maxX max (_cx + _cw);
    _maxY = _maxY max (_cy + _ch);
} forEach allControls _display;

if (_tops isEqualTo [] || {_maxX <= _minX} || {_maxY <= _minY}) exitWith {};

private _fx = _gw / (_maxX - _minX);
private _fy = _gh / (_maxY - _minY);

{
    (ctrlPosition _x) params ["_cx", "_cy", "_cw", "_ch"];
    private _nw = _cw * _fx;
    private _nh = _ch * _fy;
    _x ctrlSetPosition [
        _gx + (_cx - _minX) * _fx,
        _gy + (_cy - _minY) * _fy,
        _nw, _nh
    ];
    _x ctrlCommit 0;

    // a controls group does not scale its children - they keep their authored
    // offsets and hang out of the shrunken group unless swept with it
    if (ctrlType _x == 15 && {_cw > 0} && {_ch > 0}) then {
        private _grp = _x;
        private _cfx = _nw / _cw;
        private _cfy = _nh / _ch;
        {
            if (ctrlParentControlsGroup _x isEqualTo _grp) then {
                (ctrlPosition _x) params ["_kx", "_ky", "_kw", "_kh"];
                _x ctrlSetPosition [_kx * _cfx, _ky * _cfy, _kw * _cfx, _kh * _cfy];
                _x ctrlCommit 0;
            };
        } forEach allControls _display;
    };
} forEach _tops;
