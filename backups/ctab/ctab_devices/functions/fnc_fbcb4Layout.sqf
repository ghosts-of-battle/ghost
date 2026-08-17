#include "script_component.hpp"
/*
 * Author: YonV
 * Lays the FBCB4 out. The new border's glass is a different rectangle to the
 * one cTab laid the FBCB2 out for - x 238, y 574, 1571 x 874 of the 2048 grid
 * against cTab's 810 x 810 at 685, 608 - so every control is moved into it.
 * That is also why the map comes out considerably bigger than the FBCB2's: the
 * new screen is nearly twice as wide.
 *
 * The case is fitted to the safe zone the way the GFT's is, rather than left on
 * cTab's FBCB2 grid of safezoneH * 1.6: the art's opaque content is 1394 of its
 * 2048 canvas, so on that grid the unit stood 109% of the screen tall and the
 * top of the map ran off the top edge.
 *
 * Everything is derived from that one rectangle, so nudging the art later moves
 * the whole screen with it.
 *
 * Runs once per display, from deviceOpen.
 *
 * Arguments:
 * 0: The FBCB4 display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_fbcb4Layout
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (_display getVariable [QGVAR(laidOut), false]) exitWith {};
_display setVariable [QGVAR(laidOut), true];

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (isNull _bezel) exitWith {};

// where cTab put the case - the rect every config position in this dialog
// assumes, and the one the remap has to translate FROM
private _oldRect = ctrlPosition _bezel;

// cTab's OSD icons as cTab authored them - battery, signal, satellite. The
// remap's x scale runs well ahead of its y scale on this glass (1571 wide
// over an authored 810 square), which is what stretched the battery wide;
// the pre-remap shape is kept so it can be restored after.
[_display] call FUNC(osdCapture);

// the case, refitted so its opaque content sits inside the safe zone
private _gh = CASE_FILL * safeZoneH * 2048 / FBCB4_ART_H;
private _gw = _gh * 3/4;
private _gx = safeZoneX + (safeZoneW - _gw) / 2;
private _gy = safeZoneY + safeZoneH * CASE_TOP - _gh * (FBCB4_ART_TOP / 2048);

_bezel ctrlSetPosition [_gx, _gy, _gw, _gh];
_bezel ctrlCommit 0;

// The refit target, for FUNC(deviceSkin)'s position assert - this case is
// refitted like the GFT's, so it is open to the same dlgIfPosition drag-back.
_display setVariable [QGVAR(bezelRect), [_gx, _gy, _gw, _gh]];

// the glass, as a fraction of the border art
private _sx = _gx + _gw * (FBCB4_GLASS_X / 2048);
private _sy = _gy + _gh * (FBCB4_GLASS_Y / 2048);
private _sw = _gw * (FBCB4_GLASS_W / 2048);
private _sh = _gh * (FBCB4_GLASS_H / 2048);
// deviceSkin re-asserts this rect against whatever repositions the map
_display setVariable [QGVAR(glass), [_sx, _sy, _sw, _sh]];

// cTab authored the FBCB2's furniture around a square map at 685,608 sized
// 810 - the hook readout was floating mid-glass until it was moved with the
// rest. The remap carries everything; the explicit placements below then
// refine our own surfaces.
[_display, _oldRect, [_gx, _gy, _gw, _gh], [685, 608, 810, 810],
    [FBCB4_GLASS_X, FBCB4_GLASS_Y, FBCB4_GLASS_W, FBCB4_GLASS_H]] call FUNC(remapControls);

// the map-tools readout, stacked bottom-left of the glass like cTab's own
{
    private _hb = _display displayCtrl _x;
    if (!isNull _hb) then {
        _hb ctrlSetPosition [
            _sx + _sw * 0.015,
            _sy + _sh * (0.70 + 0.065 * _forEachIndex),
            _sw * 0.14, _sh * 0.06
        ];
        _hb ctrlCommit 0;
    };
} forEach [2617, 2618, 2619, 2620];

private _fnc_place = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    _ctrl ctrlCommit 0;
};

// The maps take the glass EXACTLY and the screen backdrop is inset a hair
// behind them - see FUNC(androidLayout) for why round this way. It shows worst
// on THIS screen: the vehicle display never hides its map, so a map bled past
// the glass drew a live ring of terrain around all four sides of the frame,
// under the dashboard and under every page.
private _bleed = _sh * 0.006;
[S7_IDC_SCREENBG, _sx + _bleed, _sy + _bleed, _sw - _bleed * 2, _sh - _bleed * 2] call _fnc_place;
_display setVariable [QGVAR(bgRect), [_sx + _bleed, _sy + _bleed, _sw - _bleed * 2, _sh - _bleed * 2]];

private _mapRect = [_sx, _sy, _sw, _sh];
_display setVariable [QGVAR(mapRect), _mapRect];
{
    [_x] + _mapRect call _fnc_place;
} forEach [1201, 1202];

// The OSD strip across the top of the glass, overlapping its top edge by a
// hair: placed exactly at _sy a sliver of bright map shows above it, the seam
// you get rounding a float rect to pixels.
private _hdr = _sh * 0.07;
private _hdrTop = _sy - _sh * HDR_OVER;
[1, _sx, _hdrTop, _sw, _hdr + (_sy - _hdrTop)] call _fnc_place;
[IDC_S7_CAMLABEL, _sx, _sy, _sw, _hdr] call _fnc_place;

// The app pages start BELOW the strip: at full glass their opaque backgrounds
// covered it, and an open app then had no heading, clock or grid in front of
// you - which is most of the reason to have the screen up at all.
{
    [_x, _sx, _sy + _hdr, _sw, _sh - _hdr] call _fnc_place;
} forEach [IDC_S7_CAMPIC, IDC_S7_INFOPAGE];

// The OSD icons - battery, signal, satellite - put back to the shape cTab
// drew them at ("a little stretched"): height kept from the remap, width
// re-derived from the saved ratio. Battery keeps its left edge, the two
// right-enders keep their right edge, so nothing else in the strip moves.
[_display] call FUNC(osdRestore);

// the camera page's feed picker, along the bottom
[IDC_S7_CAMLIST, _sx + _sw * 0.25, _sy + _sh * 0.88, _sw * 0.5, _sh * 0.09] call _fnc_place;

// app page text: a centred column under the header
[IDC_S7_INFOTEXT, _sx + _sw * 0.3, _sy + _hdr * 1.8, _sw * 0.4, _sh * 0.55] call _fnc_place;

// the condition glyph and the drone compass, centred below the text
private _gl = _sh * 0.24;
{
    [_x, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.68, _gl * 0.75, _gl] call _fnc_place;
} forEach [IDC_S7_WXICON, IDC_S7_WXDETAIL, IDC_S7_COMPASS, IDC_S7_NEEDLE];

// The menu key sits just UNDER the header rather than in it - in the strip it
// crowded cTab's own readouts. It still draws over every page, because it is
// declared after them, so it stays reachable inside an app; on this screen it
// is the ONLY navigation there is.
private _kw = _sw * 0.028;
private _kh = _hdr * 0.8;
private _kx = _sx + _sw - _kw - _sw * 0.012;
private _mky = _sy + _hdr + _sh * 0.015;

[467392, _kx, _mky, _kw, _kh] call _fnc_place;
[467393, _kx + _kw * 0.22, _mky + _kh * 0.18,
    _kw * 0.56, _kh * 0.64] call _fnc_place;

private _tky = _sy + _sh - _kh - _sh * 0.03;
[IDC_FBCB4_TOOLKEY, _kx, _tky, _kw, _kh] call _fnc_place;
[IDC_FBCB4_TOOLGLYPH, _kx + _kw * 0.22, _tky + _kh * 0.18,
    _kw * 0.56, _kh * 0.64] call _fnc_place;

// The power key painted on the case art, bottom right of the unit outside the
// glass. It is only paint, so an invisible catcher is laid over it and given
// the meaning it looks like it has - this screen has no other way out.
[IDC_FBCB4_POWER,
    _gx + _gw * (1873 / 2048),
    _gy + _gh * (1533 / 2048),
    _gw * (92 / 2048),
    _gh * (87 / 2048)] call _fnc_place;

// The F1-F3 keys painted down the art's left edge, wired the same way:
// F1 map, F2 messages, F3 settings. Rects measured off the art.
{
    _x params ["_idc", "_kpx", "_kpy", "_kpw", "_kph"];
    [_idc,
        _gx + _gw * (_kpx / 2048),
        _gy + _gh * (_kpy / 2048),
        _gw * (_kpw / 2048),
        _gh * (_kph / 2048)] call _fnc_place;
} forEach [
    [IDC_FBCB4_KEYF1, 80, 563, 97, 99],
    [IDC_FBCB4_KEYF2, 80, 720, 98, 101],
    [IDC_FBCB4_KEYF3, 80, 883, 97, 98]
];

// --- the message page, grafted from the tablet ---------------------------
// The group fills the glass under the header; inside it, inbox on the top
// half (list left third, body beside it), compose below (recipients left,
// text and the button row right). Group children, so child coordinates.
private _mgX = _sx;
private _mgY = _sy + _hdr;
private _mgW = _sw;
private _mgH = _sh - _hdr;
[4650, _mgX, _mgY, _mgW, _mgH] call _fnc_place;

private _mPad = _mgW * 0.012;
private _mPadY = _mgH * 0.02;
private _listW = _mgW * 0.30;
// inbox: frame, list, body
[14, _mPad, _mPadY, _mgW - _mPad * 2, _mgH * 0.50] call _fnc_place;
[15000, _mPad * 2, _mPadY * 2.2, _listW, _mgH * 0.50 - _mPadY * 3] call _fnc_place;
[18510, _mPad * 2 + _listW + _mPad, _mPadY * 2.2,
    _mgW - (_mPad * 5 + _listW), _mgH * 0.50 - _mPadY * 3] call _fnc_place;
// compose: frame, recipients, text
[15, _mPad, _mgH * 0.54, _mgW - _mPad * 2, _mgH * 0.44] call _fnc_place;
[15010, _mPad * 2, _mgH * 0.57, _listW, _mgH * 0.38] call _fnc_place;
[14000, _mPad * 2 + _listW + _mPad, _mgH * 0.57,
    _mgW - (_mPad * 5 + _listW), _mgH * 0.28] call _fnc_place;
// the button row along the compose area's foot
private _mBtnW = _mgW * 0.12;
private _mBtnH = _mgH * 0.07;
private _mBtnY = _mgH * 0.89;
{
    [_x, _mPad * 2 + _listW + _mPad + _forEachIndex * (_mBtnW + _mPad), _mBtnY,
        _mBtnW, _mBtnH] call _fnc_place;
} forEach [16150, 16140, 16130, 16120];

// readable text sizes for the grafted page
{
    private _mc = _display displayCtrl _x;
    if (!isNull _mc) then {
        _mc ctrlSetFontHeight (_sh * 0.045);
        _mc ctrlCommit 0;
    };
} forEach [15000, 18510, 15010, 14000];

// The list's config onLBSelChanged may not survive the merge - config
// dispatch on merged controls has form here - so the same handler goes on
// at runtime as belt and braces. Selection is not a click, so the display-
// level catcher walk cannot stand in for it.
private _mList = _display displayCtrl 15000;
if (!isNull _mList && {!(_mList getVariable [QGVAR(lbWired), false])}) then {
    _mList setVariable [QGVAR(lbWired), true];
    _mList ctrlAddEventHandler ["LBSelChanged", {_this call cTab_msg_get_mailTxt}];
};

// --- the dashboard, built like the GFT's ---------------------------------
// The whole glass under the OSD strip, its own header, then a grid of glass
// cards. It is a mode of its own now, so nothing draws through it.
private _mx = _sx;
private _my = _sy + _hdr;
private _mw = _sw;
private _mh = _sh - _hdr;
[467330, _mx, _my, _mw, _mh] call _fnc_place;
[467331, 0, 0, _mw, _mh] call _fnc_place;

// the header band: title left, unit mark centred, as on the GFT
private _mHdr = _mh * 0.10;
[IDC_S7_MENUTITLE, _mw * 0.02, _mHdr * 0.22, _mw * 0.5, _mHdr * 0.6] call _fnc_place;
private _title = _display displayCtrl IDC_S7_MENUTITLE;
if (!isNull _title) then {
    _title ctrlSetFontHeight (_mHdr * 0.5);
    _title ctrlCommit 0;
};

private _lh = _mh * 0.10;
private _lw = _lh * 3/4;
[IDC_S7_LOGO, _mx + (_mw - _lw) / 2, _my + _mHdr * 0.10, _lw, _lh] call _fnc_place;

// Twelve tiles: FIVE across, three rows, with MEDICAL standing TALL in the
// right-hand column over the first two rows - the shape it has on the GFT. It
// carries a squad roster, and a one-cell tile has room for four names and a
// "+3 more". No mesh or alarms aboard, and messaging reaches this screen from
// the F2 key on the case rather than a tile.
//
// Every tile names its own card, glyph and live readout rather than sharing an
// index with them: the grid no longer runs straight down the list, and index
// arithmetic would happily put the drone readout on the map card.
private _pad = _mw * 0.015;
// vertical gaps take their own number - x and y units differ on screen
private _padY = _mh * 0.022;
private _gridY = _mHdr;
private _tw = (_mw - _pad * 6) / 5;
private _th = (_mh - _gridY - _padY * 4) / 3;
private _icn = _th * 0.34;

private _fnc_tile = {
    params ["_tile", "_card", "_glyph", "_live", "_col", "_row", "_span"];
    private _tx = _pad + _col * (_tw + _pad);
    private _ty = _gridY + _padY + _row * (_th + _padY);
    private _hh = _th * _span + _padY * (_span - 1);

    // the glass card first, then the tile that sits on it
    [_card, _tx, _ty, _tw, _hh] call _fnc_place;
    [_tile, _tx, _ty, _tw, _hh] call _fnc_place;
    // The glyph, centred across the tile. Sized off ONE row's height whatever
    // the tile's own - off _hh, the tall tile's cross came out twice the size
    // of every other glyph on the dashboard.
    [_glyph, _tx + (_tw - _icn * 3/4) / 2, _ty + _th * 0.10,
        _icn * 3/4, _icn] call _fnc_place;
    // the live face: under the glyph, and down to this tile's own foot, so a
    // tall tile gets a tall readout to list people in
    private _ly = _ty + _th * 0.50;
    [_live, _tx + _tw * 0.06, _ly, _tw * 0.88, _ty + _hh - _mh * 0.02 - _ly] call _fnc_place;
};

{
    _x call _fnc_tile;
} forEach [
    //  tile    card    glyph   live    col row span
    [467680, 467800, 467860, 467470, 0, 0, 1],   // map
    [467681, 467801, 467861, 467471, 1, 0, 1],   // uav
    [467683, 467802, 467863, 467473, 2, 0, 1],   // intel
    [467684, 467803, 467864, 467474, 3, 0, 1],   // drone
    [467685, 467804, 467865, 467475, 0, 1, 1],   // jam
    [467686, 467805, 467866, 467476, 1, 1, 1],   // mesh
    [467687, 467806, 467867, 467477, 2, 1, 1],   // weather
    [467688, 467807, 467868, 467478, 3, 1, 1],   // radio
    [467690, 467808, 467870, 467480, 0, 2, 1],   // settings
    [467691, 467809, 467871, 467481, 1, 2, 1],   // log
    [467693, 467811, 467873, 467483, 2, 2, 1],   // convoy
    [467692, 467810, 467872, 467482, 4, 0, 2]    // medical, two rows tall
];

// The roster tile's card wears the tall art, drawn at that tile's aspect, so
// its corners match the square ones beside it rather than being stretched.
private _medCard = _display displayCtrl 467810;
if (!isNull _medCard) then {
    _medCard ctrlSetText QPATHTOF(data\tiletall_n_ca.paa);
};

// The scanner readout rows, hard under the header and squared up with cTab's
// own map-tools readout - same left edge and width, read off the control that
// was placed above rather than guessed, so the two read as one column.
private _colX = _sx + _sw * 0.015;
private _colW = _sw * 0.22;
private _hook = _display displayCtrl S7_IDC_HOOKGRID;
if (!isNull _hook) then {
    (ctrlPosition _hook) params ["_hkx", "", "_hkw"];
    if (_hkw > 0) then {
        _colX = _hkx;
        _colW = _hkw;
    };
};
private _rowH = _sh * 0.07;
{
    [_x, _colX, _sy + _hdr * 1.2 + _forEachIndex * _rowH, _colW, _rowH] call _fnc_place;
} forEach [467700, 467701, 467702, 467703];

// alarm buttons and the settings rows along the bottom of the glass
private _bwid = _sw * 0.13;
{
    [_x, _sx + _sw * 0.05 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.78, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467500, 467501, 467502, 467503, 467504];
{
    [_x, _sx + _sw * 0.05 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.69, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467505, 467506, 467507, IDC_S7_ALARMAT, IDC_S7_ALARMSET];

private _swW = _sw * 0.1;
{
    [_x, _sx + _sw * 0.04 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.58, _swW, _sh * 0.07] call _fnc_place;
} forEach [467510, 467511, 467512, 467513, 467514, 467515, 467516];
{
    [_x, _sx + _sw * 0.04 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.67, _swW, _sh * 0.07] call _fnc_place;
} forEach [467520, 467521, 467522, 467523];
{
    [_x, _sx + _sw * 0.04 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.76, _swW, _sh * 0.07] call _fnc_place;
} forEach [467530, 467531, 467532, 467533];

// --- the tools drawer, rising from the tools key -------------------------
// cTab's six map switches on the top row, this mod's eight drawing tools
// below - the same drawer both handhelds carry. This screen has no function
// buttons at all, so it is the only way to reach either set.
// Pinned to the BOTTOM OF THE GLASS and moved RIGHT of the map-info readouts
// (grid and scale, bottom left) - flush left it sat on top of them.
private _dPad = _sw * 0.007;
// vertical gaps take their own number - x and y units differ on screen
private _dGap = _sh * 0.012;
private _dBtnW = _sw * 0.078;
private _dBtnH = _sh * 0.075;
private _dX = _sx + _sw * 0.17;
private _dW = _dBtnW * 8 + _dPad * 9;
private _dH = _dBtnH * 2 + _dGap * 3;
private _dY = _sy + _sh - _dH - _sh * 0.02;

[IDC_S7_TOOLSBG, _dX, _dY, _dW, _dH] call _fnc_place;
{
    [_x, _dX + _dPad + _forEachIndex * (_dBtnW + _dPad), _dY + _dGap, _dBtnW, _dBtnH] call _fnc_place;
} forEach [467541, 467542, 467543, 467544, 467545, 467546];
{
    [_x, _dX + _dPad + _forEachIndex * (_dBtnW + _dPad), _dY + _dGap * 2 + _dBtnH, _dBtnW, _dBtnH] call _fnc_place;
} forEach [467550, 467551, 467552, 467553, 467554, 467555, 467556, 467557];

// THE CORNER MASK IS OFF - see FUNC(androidLayout) for why. This screen is not
// a punched hole at all, just dark paint with a 6 px radius, so there is next
// to nothing for a mask to put back.
private _maskCtrl = _display displayCtrl IDC_FBCB4_MASK;
if (!isNull _maskCtrl) then {
    _maskCtrl ctrlShow false;
};
