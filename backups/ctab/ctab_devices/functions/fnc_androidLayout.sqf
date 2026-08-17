#include "script_component.hpp"
/*
 * Author: YonV
 * Lays the S23 handset out - the dialog and the held-up HUD both.
 *
 * The bezel is never RESIZED: cTab scales it for each display, and the two use
 * different grids - the dialog is centred at safezoneH*1.4, the HUD phone is
 * pinned bottom-left at its own scale. Forcing the dialog's rect onto the HUD
 * is what blew that phone up to fullscreen in game. The HUD's bezel is only
 * translated, by a fraction of its own size, to lift the case clear of the
 * bottom edge and the chat lines. Everything else here is derived from wherever
 * the bezel ends up, so the same code lays out both displays.
 *
 * The glass rectangle is the art's own screen, measured off the alpha as the
 * run where the case stops being solid - S23_GLASS_* in script_component.hpp.
 * cTab's controls were authored for its S7 art (S7_OLD_*), so the whole set is
 * remapped proportionally first, then our own surfaces are placed exactly.
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
 * [_display] call ghost_ctab_devices_fnc_androidLayout
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (_display getVariable [QGVAR(laidOut), false]) exitWith {};
_display setVariable [QGVAR(laidOut), true];

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (isNull _bezel) exitWith {};

// where cTab put the bezel - the rect every config position assumes
private _bOld = ctrlPosition _bezel;
private _b = _bOld;

// The held-up phone only: cTab pins it hard into the bottom-left corner, where
// the case runs off the bottom of the screen and the chat lines cross it. It is
// nudged up and right by a fraction of its OWN size, so the scale cTab chose -
// which is the whole difference between the two displays - survives. Forcing
// the DIALOG's rect onto this display is the thing that blew the phone up to
// fullscreen; a translation is not that.
// How far comes from the CBA settings, so the player can put the phone where
// they want it - and CBA's own per-setting reset is the way back. Changing
// the sliders while the phone is up moves it live via FUNC(dspNudge).
if (ctrlIDD _display == IDD_S23_HUD) then {
    _bOld params ["_hx", "_hy", "_hw", "_hh"];
    _b = [_hx + _hw * GVAR(dspRight), _hy - _hh * GVAR(dspUp), _hw, _hh];
    _bezel ctrlSetPosition _b;
    _bezel ctrlCommit 0;
    // what is applied now, so a later slider change can move by the delta
    _display setVariable [QGVAR(dspApplied), [GVAR(dspRight), GVAR(dspUp)]];
    _display setVariable [QGVAR(dspSize), [_hw, _hh]];
};

_b params ["_bx", "_by", "_bw", "_bh"];

// the OSD icons' authored shape, before the remap stretches them
[_display] call FUNC(osdCapture);

// every cTab control, moved from the S7's screen into the S23's glass - and,
// on the HUD, off the old bezel rect onto the nudged one
[_display, _bOld, _b,
    [S7_OLD_X, S7_OLD_Y, S7_OLD_W, S7_OLD_H],
    [S23_GLASS_X, S23_GLASS_Y, S23_GLASS_W, S23_GLASS_H]
] call FUNC(remapControls);

// the glass, in screen coordinates
private _sx = _bx + _bw * (S23_GLASS_X / 2048);
private _sy = _by + _bh * (S23_GLASS_Y / 2048);
private _sw = _bw * (S23_GLASS_W / 2048);
private _sh = _bh * (S23_GLASS_H / 2048);
_display setVariable [QGVAR(glass), [_sx, _sy, _sw, _sh]];

// cTab's drag handles for the held-up phone (idc 5-8). The remap made them
// reachable for the first time, and dragging shifts every control off this
// layout - so they go. Nothing is lost: they were unreachable before.
{
    private _h = _display displayCtrl _x;
    if (!isNull _h) then {
        _h ctrlShow false;
        _h ctrlEnable false;
    };
} forEach [5, 6, 7, 8];

private _fnc_place = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    _ctrl ctrlCommit 0;
};

// The maps take the glass EXACTLY and the screen backdrop overshoots it a
// hair on every edge, so no rounding seam can ever open between the two.
//
// The overspill used to be forbidden - it landed on the case and read as a
// ring of backdrop around the screen - and the backdrop was INSET instead,
// which swapped the seam for a hairline of bare punched-hole along the edges:
// the "gaps" on the UAV feed, where the backdrop is all there is to see.
// Both problems die together now that the case is painted back OVER the
// content (the overlay at the end of this file): spill lands UNDER the
// opaque case and is simply never seen.
private _bleed = _sh * 0.006;
private _bleedX = _bleed * 0.75;
[S7_IDC_SCREENBG, _sx - _bleedX, _sy - _bleed, _sw + _bleedX * 2, _sh + _bleed * 2] call _fnc_place;
// what deviceSkin asserts the backdrop back to, so its drift check does not
// drag it back to the bare glass every second
_display setVariable [QGVAR(bgRect), [_sx - _bleedX, _sy - _bleed, _sw + _bleedX * 2, _sh + _bleed * 2]];

private _mapRect = [_sx, _sy, _sw, _sh];
_display setVariable [QGVAR(mapRect), _mapRect];
{
    [_x] + _mapRect call _fnc_place;
} forEach [S7_IDC_MAP, S7_IDC_MAPTOPO];

// the OSD strip along the top of the glass - the remap has already spread
// cTab's readouts across it, this just squares the bar itself away
// The strip overlaps the top edge of the glass by a hair. Placed exactly at
// _sy a sliver of bright map showed above it - the seam you get rounding a
// float rect to pixels - and the overspill lands on the black inner frame of
// the case, where a black bar is invisible.
private _hdr = _sh * 0.085;
private _hdrTop = _sy - _sh * HDR_OVER;
[1, _sx, _hdrTop, _sw, _hdr + (_sy - _hdrTop)] call _fnc_place;

// THE PAGE HEADING SITS UNDER THE STRIP, not in it. Across the strip it was
// drawn straight over the battery and the readouts - "label covers top bar" -
// and the strip is the one row that is supposed to survive an app being open.
// It is declared after the pages, so it still draws on top of them.
[IDC_S7_CAMLABEL, _sx + _sw * 0.03, _sy + _hdr + _sh * 0.008,
    _sw * 0.70, _hdr * 0.72] call _fnc_place;

// The battery, signal and satellite icons back to the shape cTab drew them at.
// The tablet and the FBCB4 have always done this; the handset never did, so its
// battery has been drawn wide by the glass's x/y scale mismatch all along.
[_display] call FUNC(osdRestore);

// And held CLEAR OF THE CORNER ARCS. This screen's arc eats ~64 of 2048 canvas
// px into each corner and the case art draws OVER these icons, so the
// satellite glyph hard against the top-right corner was clipped by the case.
// Shapes stay as osdRestore set them; only x moves, y centres in the strip.
private _arcIn = _sw * (75 / S23_GLASS_W);
private _bat = _display displayCtrl 2;
if (!isNull _bat) then {
    (ctrlPosition _bat) params ["", "", "_ow", "_oh"];
    _bat ctrlSetPosition [_sx + _arcIn, _sy + (_hdr - _oh) / 2, _ow, _oh];
    _bat ctrlCommit 0;
};
private _osdR = _sx + _sw - _arcIn;
{
    private _osd = _display displayCtrl _x;
    if (isNull _osd) then {continue};
    (ctrlPosition _osd) params ["", "", "_ow", "_oh"];
    _osd ctrlSetPosition [_osdR - _ow, _sy + (_hdr - _oh) / 2, _ow, _oh];
    _osd ctrlCommit 0;
    _osdR = _osdR - _ow - _sw * 0.006;
} forEach [S7_IDC_SAT, S7_IDC_SIGNAL];

// The app pages start BELOW the strip: at full glass their opaque backgrounds
// covered it, and an open app then had no heading, clock or grid in front of
// you - which is most of the reason to have the device up at all.
//
// They are INSET from the glass edges. The comment here used to say the corner
// mask painted the case's rounded corners back over them so no inset was
// needed - that stopped being true when the mask was switched off at the end
// of this function, and square page corners have been poking into the screen's
// arcs ever since.
//
// PAGES FILL THE GLASS EXACTLY. Not inset, not guttered - both were tried and
// both are worse than what they fixed:
//
//   A right-hand gutter, to keep the menu key uncovered, carved a visible empty
//   strip down the side of every app. The key is declared after the pages and
//   draws over them anyway, so it never needed the room.
//
//   An all-round inset, to keep square page corners out of the screen's arcs,
//   IS the gap - a fifth of the glass height's 3.5% on every edge, which reads
//   as the page floating inside the screen rather than being it.
//
// So the page background meets the arcs, which is invisible: it is dark and so
// is the case. What has to stay out of a corner is anything that DRAWS there -
// see the feed picker below.
//
// cTab's message page does NOT take the taskbar stretch: it already subtracts
// the taskbar from its own height, so stretching it pushed its buttons off the
// bottom of the screen.
{
    _x params ["_idc", "_stretch"];
    private _page = _display displayCtrl _idc;
    if (isNull _page) then {continue};

    private _pw = _sw;
    private _ph = _sh - _hdr;

    (ctrlPosition _page) params ["", "", "_cw", "_ch"];
    [_idc, _sx, _sy + _hdr, _pw, _ph] call _fnc_place;

    if (ctrlType _page != 15 || {_cw <= 0} || {_ch <= 0}) then {continue};

    private _gfx = _pw / _cw;
    private _gfy = (_ph / _ch) / ([1, 1 - CTAB_TASKBAR_FRAC] select _stretch);
    {
        if (ctrlParentControlsGroup _x isEqualTo _page) then {
            (ctrlPosition _x) params ["_cx", "_cy", "_cwid", "_chgt"];
            _x ctrlSetPosition [_cx * _gfx, _cy * _gfy, _cwid * _gfx, _chgt * _gfy];
            _x ctrlCommit 0;
        };
    } forEach allControls _display;
} forEach [
    // [page, does it need the hidden taskbar's band stretched out of it]
    [IDC_S7_CAMPIC, false], [IDC_S7_INFOPAGE, false],
    [S7_IDC_PAGE_MESSAGE, false],
    // The handset's dashboard is IDC_S7_MENU. It was never placed by this
    // layout at all - only the tablet's was, and the tablet's is a DIFFERENT
    // group (IDC_S7_DESKMENU, 467310), which does not exist on this device.
    // Naming that one here was a no-op: displayCtrl returned null and the loop
    // skipped it, so the tile grid kept whatever the proportional sweep left.
    [IDC_S7_MENU, false]
];

// The two on-glass keys, both held clear of the rounded corners: this screen's
// arc eats about 70 of 2048 canvas px, so a key hard into a corner is cut by
// the case. The menu key sits just UNDER the header rather than in it - in the
// strip it fouled the top-right arc - and it still draws over every page,
// because it is declared after them, so it stays reachable inside an app.
private _kw = _sw * 0.031;
private _kh = _hdr * 0.8;
private _kx = _sx + _sw - _kw - _sw * 0.022;
private _mky = _sy + _hdr + _sh * 0.015;

[IDC_S23_MENUKEY, _kx, _mky, _kw, _kh] call _fnc_place;
[IDC_S23_MENUGLYPH, _kx + _kw * 0.2, _mky + _kh * 0.18,
    _kw * 0.6, _kh * 0.64] call _fnc_place;

private _tky = _sy + _sh - _kh - _sh * 0.055;
[IDC_S23_TOOLKEY, _kx, _tky, _kw, _kh] call _fnc_place;
[IDC_S23_TOOLGLYPH, _kx + _kw * 0.2, _tky + _kh * 0.18,
    _kw * 0.6, _kh * 0.64] call _fnc_place;

// the camera page's feed picker, along the bottom of the glass
// HELD OFF THE BOTTOM CORNERS. The page under it fills the glass, corners and
// all, which is invisible - but this row has TEXT in it, and at 0.03/0.94 the
// feed name sat inside the bottom-left arc and was clipped by the case. It is
// the drawn content that has to clear the curve, not the page behind it.
[IDC_S7_CAMLIST, _sx + _sw * 0.07, _sy + _sh * 0.83, _sw * 0.86, _sh * 0.09] call _fnc_place;

// app page text: a centred column under the header
[IDC_S7_INFOTEXT, _sx + _sw * 0.22, _sy + _hdr * 1.5, _sw * 0.56, _sh * 0.5] call _fnc_place;

// condition glyph and drone compass, centred below the text
private _gl = _sh * 0.3;
{
    [_x, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.62, _gl * 0.75, _gl] call _fnc_place;
} forEach [IDC_S7_WXICON, IDC_S7_WXDETAIL, IDC_S7_COMPASS, IDC_S7_NEEDLE];

// --- the dashboard, built like the GFT's ---------------------------------
// It used to be a strip down the right-hand 45% of the glass, over the live
// map. It is a mode of its own now and takes the whole screen, which is what
// stopped the scanner rows and cTab's readouts drawing through it.
private _mw = _sw;
private _mh = _sh - _hdr;
[IDC_S7_MENU, _sx, _sy + _hdr, _mw, _mh] call _fnc_place;
[467421, 0, 0, _mw, _mh] call _fnc_place;

// the header band: title left, unit mark centred, as on the GFT
private _mHdr = _mh * 0.11;
[IDC_S7_MENUTITLE, _mw * 0.035, _mHdr * 0.2, _mw * 0.5, _mHdr * 0.6] call _fnc_place;
private _title = _display displayCtrl IDC_S7_MENUTITLE;
if (!isNull _title) then {
    _title ctrlSetFontHeight (_mHdr * 0.46);
    _title ctrlCommit 0;
};

private _lh = _mh * 0.115;
private _lw = _lh * 3/4;
[IDC_S7_LOGO, _sx + (_mw - _lw) / 2, _sy + _hdr + _mHdr * 0.06, _lw, _lh] call _fnc_place;

// Six columns, three rows of glass cards. Each row pairs the tile with the
// live readout widgetTick writes for it: the two are listed together so
// re-ordering the grid can never silently put the drone readout on the map
// card, which index arithmetic alone would allow.
// THE HANDSET'S SCREEN IS A ROUNDED RECTANGLE and the glass rect above is
// only its bounding box: the arc eats about 70 of 2048 canvas px into each
// corner (the GFT's and the FBCB4's are barely 10, which is why only this
// device showed it), so a tile pushed into a corner is cut by the case.
// _edgeX/_edgeY hold the grid inside the arc - a corner needs roughly 0.3r of
// inset to clear it, and these are comfortably past that in both axes.
// x and y take separate numbers throughout: one figure for both is wrong here,
// because an x unit and a y unit are not the same size on screen.
#define S23_COLS 6
#define S23_ROWS 3

private _grid = [
    [467600, 467456], [467601, 467457], [467602, 467453], [467603, 467454], [467604, 467458], [467605, 467450],
    [467606, 467451], [467607, 467452], [467608, 467459], [467609, 467460], [467610, 467455], [467611, 467461],
    [467612, 467462], [467613, 467463], [467614, 467464], [467615, 467465]
];

private _padX = _mw * 0.010;
private _padY = _mh * 0.028;
private _edgeX = _mw * 0.022;
private _edgeY = _mh * 0.045;
// A strip the width of the menu key is kept clear down the right-hand side,
// for the buttons that will live there later. The tiles shrink to make room
// rather than the grid running under it.
private _spacer = _mw * 0.050;
private _tw = (_mw - _edgeX * 2 - _spacer - _padX * (S23_COLS - 1)) / S23_COLS;
private _th = (_mh - _mHdr - _edgeY - _padY * (S23_ROWS - 1)) / S23_ROWS;
private _icn = _th * 0.34;
// MEDICAL is a DOUBLE-HEIGHT tile in the last column: it carries a roster,
// which a one-cell tile has no room for. The rest fill the remaining cells in
// order, left to right - a short bottom row now lines up under the columns
// above it instead of being centred under them.
private _medTile = 467613;
private _medLive = 467463;
private _medCol = S23_COLS - 1;

private _cells = [];
for "_r" from 0 to (S23_ROWS - 1) do {
    for "_c" from 0 to (S23_COLS - 1) do {
        // the two the roster tile occupies are not up for grabs
        if !(_c == _medCol && {_r < 2}) then {_cells pushBack [_c, _r]};
    };
};

private _fnc_cell = {
    params ["_c", "_r"];
    [_edgeX + _c * (_tw + _padX), _mHdr + _r * (_th + _padY)]
};

// A plain counter into the free cells, rather than arithmetic off the loop
// index: the roster tile is skipped, so the two run at different rates.
private _slot = 0;
{
    _x params ["_tile", "_live"];
    if (_tile != _medTile) then {
        (_cells param [_slot, [0, 0]]) params ["_c", "_r"];
        ([_c, _r] call _fnc_cell) params ["_tx", "_ty"];
        _slot = _slot + 1;

        [467820 + _forEachIndex, _tx, _ty, _tw, _th] call _fnc_place;
        [_tile, _tx, _ty, _tw, _th] call _fnc_place;
        [467840 + _forEachIndex, _tx + (_tw - _icn * 3/4) / 2, _ty + _th * 0.10,
            _icn * 3/4, _icn] call _fnc_place;
        [_live, _tx + _tw * 0.06, _ty + _th * 0.50, _tw * 0.88, _th * 0.44] call _fnc_place;
    };
} forEach _grid;

// the roster tile, two cells tall in the last column
([_medCol, 0] call _fnc_cell) params ["_mx2", "_my2"];
private _medH = _th * 2 + _padY;
[467833, _mx2, _my2, _tw, _medH] call _fnc_place;
[_medTile, _mx2, _my2, _tw, _medH] call _fnc_place;
[467853, _mx2 + (_tw - _icn * 3/4) / 2, _my2 + _medH * 0.04, _icn * 3/4, _icn] call _fnc_place;
[_medLive, _mx2 + _tw * 0.06, _my2 + _medH * 0.22, _tw * 0.88, _medH * 0.74] call _fnc_place;

// The scanner readout rows, under the header - squared up with cTab's own
// map-tools readout so the two blocks read as one column of instruments
// instead of two boxes from two different mods. Same left edge, same width:
// read off cTab's control rather than guessed, so it holds if cTab moves it.
private _colX = _sx + _sw * 0.015;
private _colW = _sw * 0.17;
private _hook = _display displayCtrl S7_IDC_HOOKGRID;
if (!isNull _hook) then {
    (ctrlPosition _hook) params ["_hkx", "", "_hkw"];
    if (_hkw > 0) then {
        _colX = _hkx;
        _colW = _hkw;
    };
};
private _rowH = _sh * 0.075;
{
    [_x, _colX, _sy + _hdr * 1.2 + _forEachIndex * _rowH, _colW, _rowH] call _fnc_place;
} forEach [467700, 467701, 467702, 467703];

// alarm buttons along the bottom
private _bwid = _sw * 0.155;
{
    [_x, _sx + _sw * 0.03 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.74, _bwid, _sh * 0.08] call _fnc_place;
} forEach [467500, 467501, 467502, 467503, 467504];
{
    [_x, _sx + _sw * 0.03 + _forEachIndex * (_bwid + _sw * 0.008), _sy + _sh * 0.63, _bwid, _sh * 0.08] call _fnc_place;
} forEach [467505, 467506, 467507, IDC_S7_ALARMAT, IDC_S7_ALARMSET];
// the DEL keys, one per roster row, above the fuse rows - narrower, six across
private _dwid = _sw * 0.125;
{
    [_x, _sx + _sw * 0.03 + _forEachIndex * (_dwid + _sw * 0.008), _sy + _sh * 0.52, _dwid, _sh * 0.07] call _fnc_place;
} forEach [467560, 467561, 467562, 467563, 467564, 467565];

// The settings rows. Two more rows of tools used to sit under these and ran
// off the bottom of the glass; with the tools gone to their own drawer the
// three that are left come up to clear the edge.
private _swW = _sw * 0.12;
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.48, _swW, _sh * 0.08] call _fnc_place;
} forEach [467510, 467511, 467512, 467513, 467514, 467515, 467516];
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.59, _swW, _sh * 0.08] call _fnc_place;
} forEach [467520, 467521, 467522, 467523];
{
    [_x, _sx + _sw * 0.02 + _forEachIndex * (_swW + _sw * 0.005), _sy + _sh * 0.70, _swW, _sh * 0.08] call _fnc_place;
} forEach [467530, 467531, 467532, 467533];

// --- the tools drawer -----------------------------------------------------
// cTab's six map switches on the top row, this mod's eight drawing tools
// below. Sized from the buttons rather than guessed, and pinned to the BOTTOM
// OF THE GLASS - hung off the tools key it ran past the bottom edge and half
// the drawer was on the case. Moved RIGHT of the map-info readouts (grid and
// scale, bottom left) - flush left it sat on top of them - and it still stops
// short of the key's column so the two never overlap.
private _dPad = _sw * 0.008;
// vertical gaps take their own number: an x unit and a y unit are not the
// same size on screen, and one figure for both makes the rows sit wrong
private _dGap = _sh * 0.012;
private _dBtnW = _sw * 0.082;
private _dBtnH = _sh * 0.085;
private _dX = _sx + _sw * 0.20;
private _dW = _dBtnW * 8 + _dPad * 9;
private _dH = _dBtnH * 2 + _dGap * 3;
// clear of the glass's bottom edge: at 0.02 the lower row of tools clipped
// against the rounded corner of the case
private _dY = _sy + _sh - _dH - _sh * 0.055;

[IDC_S7_TOOLSBG, _dX, _dY, _dW, _dH] call _fnc_place;
{
    [_x, _dX + _dPad + _forEachIndex * (_dBtnW + _dPad), _dY + _dGap, _dBtnW, _dBtnH] call _fnc_place;
} forEach [467541, 467542, 467543, 467544, 467545, 467546];
{
    [_x, _dX + _dPad + _forEachIndex * (_dBtnW + _dPad), _dY + _dGap * 2 + _dBtnH, _dBtnW, _dBtnH] call _fnc_place;
} forEach [467550, 467551, 467552, 467553, 467554, 467555, 467556, 467557];

// THE CORNER MASK IS RETIRED - measured, not re-guessed. cTab draws the case
// art OVER the screen content (its background control is declared after every
// page in cTab_android_dialog.hpp), and this art's aperture corners are
// ALREADY OPAQUE case pixels with a ~64 px arc: the case itself rounds the
// screen over whatever fills it. The mask files on disk are pure-black
// generated shapes with a ~40 px arc - both of them, the "tan" one included -
// so switching the mask on painted a second, smaller, wrong-coloured corner
// on top of a correct one. That black chip inside the case's grey arc was the
// "overlapping corners" in every S23 screenshot.
private _mask = _display displayCtrl IDC_S23_MASK;
if (!isNull _mask) then {
    _mask ctrlShow false;
};

// cTab's message list and message body, at a size a handset can be read at
{
    private _msg = _display displayCtrl _x;
    if (!isNull _msg) then {
        _msg ctrlSetFontHeight (_sh * 0.05);
        _msg ctrlCommit 0;
    };
} forEach [S7_IDC_MSGLIST, S7_IDC_MSGTEXT];

// THE CASE, PAINTED BACK OVER EVERYTHING - created last, so it is topmost.
// cTab's own screens sit UNDER the case art (its background control is
// declared after them in cTab_android_dialog.hpp) and the art's opaque corner
// arcs round them off. Every control THIS addon declares merges in after
// cTab's background, so ghost's app pages drew their square corners OVER the
// case - "the weather app has overlapping corners" while the map did not.
// Config merge order cannot be changed from here; a runtime copy of the case
// can. Same rect and same texture as the bezel - deviceSkin keeps the pair in
// step - so it has no geometry of its own to misalign. A topmost picture does
// not eat clicks: ghost's keys dispatch off display-level handlers, and
// cTab's own buttons kept working under the full-glass mask for days.
private _overlay = _display getVariable [QGVAR(caseOverlay), controlNull];
if (isNull _overlay) then {
    _overlay = _display ctrlCreate ["RscPicture", -1];
    _display setVariable [QGVAR(caseOverlay), _overlay];
};
_overlay ctrlSetPosition _b;
_overlay ctrlCommit 0;
_overlay ctrlSetText ctrlText _bezel;
