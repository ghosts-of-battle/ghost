#include "script_component.hpp"
/*
 * Author: YonV
 * Lays an S23 out. Its case has a different glass to the S7 - x 163, y 659,
 * 1609 x 729 of the 2048 art against the S7's 452, 713, 1134 x 624 - so the
 * controls this display inherited from the S7 land in the wrong place until
 * they are moved. Sharing the S7's dialog and hoping the art matched is what
 * made the S23 unusable.
 *
 * Everything is derived from that one rectangle, so a nudge to the art moves
 * the whole screen with it.
 *
 * Runs once per display, from deviceOpen.
 *
 * Arguments:
 * 0: The S23 display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_s7_fnc_s23Layout
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (_display getVariable [QGVAR(laidOut), false]) exitWith {};
_display setVariable [QGVAR(laidOut), true];

// The art is square and drawn on the phone's grid.
private _bh = safeZoneH * 1.4;
private _bw = _bh * 3/4;
private _bx = safeZoneX + (safeZoneW - _bw) / 2;
private _by = safeZoneY + (safeZoneH - _bh) / 2;

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (!isNull _bezel) then {
    _bezel ctrlSetPosition [_bx, _by, _bw, _bh];
    _bezel ctrlCommit 0;
};

// the lit glass, as a fraction of the art
private _sx = _bx + _bw * (163 / 2048);
private _sy = _by + _bh * (659 / 2048);
private _sw = _bw * (1609 / 2048);
private _sh = _bh * (729 / 2048);

private _fnc_place = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    _ctrl ctrlCommit 0;
};

// screen backdrop, both map controls and the full-screen pages fill the glass
{
    [_x, _sx, _sy, _sw, _sh] call _fnc_place;
} forEach [S7_IDC_SCREENBG, 1201, 1202, IDC_S7_CAMPIC, IDC_S7_INFOPAGE];

// the OSD strip along the top
private _hdr = _sh * 0.085;
[1, _sx, _sy, _sw, _hdr] call _fnc_place;
[IDC_S7_CAMLABEL, _sx, _sy, _sw, _hdr] call _fnc_place;

// the camera page's feed picker, along the bottom of the glass
[IDC_S7_CAMLIST, _sx + _sw * 0.03, _sy + _sh * 0.86, _sw * 0.94, _sh * 0.10] call _fnc_place;

// app page text: a centred column under the header
[IDC_S7_INFOTEXT, _sx + _sw * 0.22, _sy + _hdr * 1.5, _sw * 0.56, _sh * 0.5] call _fnc_place;

// condition glyph and drone compass, centred below the text
private _gl = _sh * 0.3;
{
    [_x, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.62, _gl * 0.75, _gl] call _fnc_place;
} forEach [IDC_S7_WXICON, IDC_S7_COMPASS, IDC_S7_NEEDLE];

// the menu key, top-right of the glass
private _kw = _sw * 0.07;
private _kh = _hdr * 1.1;
[IDC_S23_MENUBTN, _sx + _sw - _kw - _sw * 0.015, _sy + _hdr * 1.2, _kw, _kh] call _fnc_place;
[467396, _sx + _sw - _kw - _sw * 0.015 + _kw * 0.22, _sy + _hdr * 1.2 + _kh * 0.18,
    _kw * 0.56, _kh * 0.64] call _fnc_place;

// the card menu on the right of the glass, as on the S7
private _mw = _sw * 0.45;
[IDC_S7_MENU, _sx + _sw - _mw, _sy + _hdr, _mw, _sh - _hdr] call _fnc_place;
[467421, 0, 0, _mw, _sh - _hdr] call _fnc_place;

// three columns, four rows of cards inside it
private _pad = _mw * 0.03;
private _tw = (_mw - _pad * 4) / 3;
private _th = ((_sh - _hdr) - _pad * 6) / 4.6;
private _top = _pad + _th * 0.45;
{
    private _col = _forEachIndex % 3;
    private _row = floor (_forEachIndex / 3);
    [_x, _pad + _col * (_tw + _pad), _top + _row * (_th + _pad), _tw, _th] call _fnc_place;
    // the live face sits on the card
    [467450 + _forEachIndex,
        _pad + _col * (_tw + _pad) + _tw * 0.06,
        _top + _row * (_th + _pad) + _th * 0.06,
        _tw * 0.88, _th * 0.88] call _fnc_place;
} forEach [467605, 467606, 467607, 467602, 467603, 467610,
           467600, 467601, 467604, 467608, 467609, 467611];

// the scanner readout rows, top-left of the map
private _rowH = _sh * 0.075;
{
    [_x, _sx + _sw * 0.02, _sy + _hdr * 1.2 + _forEachIndex * _rowH, _sw * 0.3, _rowH] call _fnc_place;
} forEach [467700, 467701, 467702, 467703];

// alarm buttons, swatches and the map-tool row along the bottom
private _bwid = _sw * 0.155;
{
    [_x, _sx + _sw * 0.03 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.74, _bwid, _sh * 0.08] call _fnc_place;
} forEach [467500, 467501, 467502, 467503, 467504];
{
    [_x, _sx + _sw * 0.03 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.63, _bwid, _sh * 0.08] call _fnc_place;
} forEach [467505, 467506, 467507, IDC_S7_ALARMAT, IDC_S7_ALARMSET];

private _swW = _sw * 0.12;
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.52, _swW, _sh * 0.08] call _fnc_place;
} forEach [467510, 467511, 467512, 467513, 467514, 467515, 467516];
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.63, _swW, _sh * 0.08] call _fnc_place;
} forEach [467520, 467521, 467522, 467523];
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.74, _swW, _sh * 0.08] call _fnc_place;
} forEach [467530, 467531, 467532, 467533];
