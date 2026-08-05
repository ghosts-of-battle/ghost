#include "script_component.hpp"
/*
 * Author: YonV
 * Lays the GFT-1 out. Its screen aperture is a different rectangle to
 * cTab's tablet - x 246, y 666, 1574 x 948 of the 2048 art - so the controls
 * this display inherited land in the wrong place until they are moved.
 *
 * Everything is derived from that one rectangle, the way the hacking tablet
 * does it: nudging the art later moves the whole screen with it instead of
 * desynchronising thirty hardcoded positions.
 *
 * Runs once per display, from deviceOpen.
 *
 * Arguments:
 * 0: The ITC display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_s7_fnc_gftLayout
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (_display getVariable [QGVAR(laidOut), false]) exitWith {};
_display setVariable [QGVAR(laidOut), true];

// The art is square and drawn on the tablet's own grid, so the bezel is a
// square control and the aperture is a fraction of it.
private _bh = safeZoneH * 1.2;
private _bw = _bh * 3/4;
private _bx = safeZoneX + (safeZoneW - _bw) / 2;
private _by = safeZoneY + (safeZoneH - _bh) / 2;

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (!isNull _bezel) then {
    _bezel ctrlSetText QPATHTOF(data\gft_screen_ca.paa);
    _bezel ctrlSetPosition [_bx, _by, _bw, _bh];
    _bezel ctrlCommit 0;
};

// the lit glass, as a fraction of the art
private _sx = _bx + _bw * (246 / 2048);
private _sy = _by + _bh * (666 / 2048);
private _sw = _bw * (1574 / 2048);
private _sh = _bh * (948 / 2048);

private _fnc_place = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    _ctrl ctrlCommit 0;
};

// the screen backdrop and both map controls fill the glass
{
    [_x, _sx, _sy, _sw, _sh] call _fnc_place;
} forEach [S7_IDC_SCREENBG, 1201, 1202, IDC_S7_CAMPIC, IDC_S7_INFOPAGE];

// the OSD strip along the top of the glass
private _hdr = _sh * 0.055;
[1, _sx, _sy, _sw, _hdr] call _fnc_place;
[IDC_S7_CAMLABEL, _sx, _sy, _sw, _hdr] call _fnc_place;

// app page text: a centred column under the header
[IDC_S7_INFOTEXT, _sx + _sw * 0.25, _sy + _hdr * 1.6, _sw * 0.5, _sh * 0.52] call _fnc_place;

// the condition glyph and the drone compass, centred below the text
private _gl = _sh * 0.26;
[IDC_S7_WXICON, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.66, _gl * 0.75, _gl] call _fnc_place;
[IDC_S7_COMPASS, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.66, _gl * 0.75, _gl] call _fnc_place;
[IDC_S7_NEEDLE, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.66, _gl * 0.75, _gl] call _fnc_place;

// the menu key, top-right of the glass, clear of cTab's OSD readouts
private _kw = _sw * 0.062;
private _kh = _hdr * 1.15;
[467390, _sx + _sw - _kw - _sw * 0.012, _sy + _hdr * 1.25, _kw, _kh] call _fnc_place;
[467391, _sx + _sw - _kw - _sw * 0.012 + _kw * 0.22, _sy + _hdr * 1.25 + _kh * 0.18,
    _kw * 0.56, _kh * 0.64] call _fnc_place;

// the app menu fills the glass under the header
private _mx = _sx + _sw * 0.06;
private _my = _sy + _hdr * 1.5;
private _mw = _sw * 0.88;
private _mh = _sh * 0.86;
[467320, _mx, _my, _mw, _mh] call _fnc_place;
[467321, 0, 0, _mw, _mh] call _fnc_place;

// tiles: three columns, four rows, then a full-width settings bar
private _pad = _mw * 0.02;
private _tw = (_mw - _pad * 4) / 3;
private _th = (_mh - _pad * 6) / 5;
private _top = _pad * 2 + _th * 0.35;
{
    private _col = _forEachIndex % 3;
    private _row = floor (_forEachIndex / 3);
    [_x,
        _pad + _col * (_tw + _pad),
        _top + _row * (_th + _pad),
        _tw, _th] call _fnc_place;
} forEach [467660, 467661, 467662, 467663, 467664, 467665,
           467666, 467667, 467668, 467669, 467670, 467671];

[467672, _pad, _top + 4 * (_th + _pad), _mw - _pad * 2, _th * 0.5] call _fnc_place;

// alarm buttons and the settings swatches sit along the bottom of the glass
private _bwid = _sw * 0.15;
{
    [_x, _sx + _sw * 0.06 + _forEachIndex * (_bwid + _sw * 0.01), _sy + _sh * 0.80, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467500, 467501, 467502, 467503, 467504];

// short fuses, the time-of-day field and its button, on the row above
{
    [_x, _sx + _sw * 0.06 + _forEachIndex * (_bwid + _sw * 0.01), _sy + _sh * 0.71, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467505, 467506, 467507, IDC_S7_ALARMAT, IDC_S7_ALARMSET];

private _swW = _sw * 0.115;
{
    [_x, _sx + _sw * 0.05 + _forEachIndex * (_swW + _sw * 0.006), _sy + _sh * 0.70, _swW, _sh * 0.07] call _fnc_place;
} forEach [467510, 467511, 467512, 467513, 467514, 467515, 467516];
{
    [_x, _sx + _sw * 0.05 + _forEachIndex * (_swW + _sw * 0.006), _sy + _sh * 0.79, _swW, _sh * 0.07] call _fnc_place;
} forEach [467520, 467521, 467522, 467523];
{
    [_x, _sx + _sw * 0.05 + _forEachIndex * (_swW + _sw * 0.006), _sy + _sh * 0.88, _swW, _sh * 0.07] call _fnc_place;
} forEach [467530, 467531, 467532, 467533];
