#include "script_component.hpp"
/*
 * Author: YonV
 * Lays the GFT-1 out.
 *
 * Two things are different from the S23's layout. First, the bezel IS
 * repositioned here: the GFT art's content runs to the bottom of its canvas,
 * so left on cTab's tablet grid the keyboard half of the case hangs off the
 * bottom of the screen - the case is refitted so the whole of it is visible
 * and centred. Second, the remap has to translate between two bezel rects,
 * because cTab's controls were authored against the grid the bezel sat on
 * BEFORE the refit.
 *
 * The glass is the art's measured screen, GFT_GLASS_* in script_component.hpp -
 * named rather than quoted here, because the numbers this docblock used to
 * state had already drifted from the defines the code actually uses. The
 * dashboard group (467310) is placed to fill it - the group was authored for
 * cTab's tablet art and sat visibly adrift of this case's screen.
 *
 * Runs once per display, from deviceOpen.
 *
 * Arguments:
 * 0: The GFT display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_tabletLayout
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (_display getVariable [QGVAR(laidOut), false]) exitWith {};
_display setVariable [QGVAR(laidOut), true];

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (isNull _bezel) exitWith {};

// where cTab put the bezel - the rect its controls' config positions assume
private _bOld = ctrlPosition _bezel;

// cTab's OSD icons as cTab authored them - battery, signal, satellite. The
// remap scales x and y by different factors, which is what stretched the
// battery wide; the pre-remap shape is kept so it can be restored after.
[_display] call FUNC(osdCapture);

// refit the case: the art's opaque content fills 94% of the safezone height,
// centred, whatever the canvas letterboxing around it does
private _bh = CASE_FILL * safeZoneH * 2048 / GFT_ART_H;
private _bw = _bh * 3/4;
private _bx = safeZoneX + (safeZoneW - _bw) / 2;
private _by = safeZoneY + safeZoneH * CASE_TOP - _bh * (GFT_ART_TOP / 2048);
private _bNew = [_bx, _by, _bw, _bh];

_bezel ctrlSetPosition _bNew;
_bezel ctrlCommit 0;

// The refit target, for FUNC(deviceSkin)'s position assert. cTab's dialog
// machinery can translate the whole interface after this layout has run -
// dlgIfPosition treats the refit as a player drag - and a one-shot layout
// loses that fight silently. The assert undoes any shift and names it.
_display setVariable [QGVAR(bezelRect), _bNew];

// every cTab control, from the old tablet's content rect into the GFT's glass
[_display, _bOld, _bNew,
    [TAB_OLD_X, TAB_OLD_Y, TAB_OLD_W, TAB_OLD_H],
    [GFT_GLASS_X, GFT_GLASS_Y, GFT_GLASS_W, GFT_GLASS_H]
] call FUNC(remapControls);

// The dashboard group's size AFTER that sweep - the sweep now scales group
// children itself, so measuring the group before it ran and scaling from that
// would apply the stretch twice and burst the panel out of the glass.
private _dashCfg = ctrlPosition (_display displayCtrl IDC_S7_DESKMENU);

// the glass, in screen coordinates
private _sx = _bx + _bw * (GFT_GLASS_X / 2048);
private _sy = _by + _bh * (GFT_GLASS_Y / 2048);
private _sw = _bw * (GFT_GLASS_W / 2048);
private _sh = _bh * (GFT_GLASS_H / 2048);
_display setVariable [QGVAR(glass), [_sx, _sy, _sw, _sh]];

private _fnc_place = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    _ctrl ctrlCommit 0;
};

// The maps take the glass EXACTLY and the screen backdrop is inset a hair
// behind them - see FUNC(androidLayout) for why round this way: a map bled
// past the glass lands on the case, and that ring is what reads as a gap
// between the screen and the frame.
private _bleed = _sh * 0.006;
[S7_IDC_SCREENBG, _sx + _bleed, _sy + _bleed, _sw - _bleed * 2, _sh - _bleed * 2] call _fnc_place;
_display setVariable [QGVAR(bgRect), [_sx + _bleed, _sy + _bleed, _sw - _bleed * 2, _sh - _bleed * 2]];

private _mapRect = [_sx, _sy, _sw, _sh];
_display setVariable [QGVAR(mapRect), _mapRect];
{
    [_x] + _mapRect call _fnc_place;
} forEach [S7_IDC_MAP, S7_IDC_MAPTOPO];

// the OSD strip along the top of the glass
private _hdr = _sh * 0.055;

// THE APP PAGES START BELOW THE STRIP, not at the top of the glass. Full
// glass, their opaque backgrounds covered the strip, so an open app had no
// top bar and no heading, clock or grid - and the reason to keep a device
// open is that its status is always in front of you.
//
// cTab's OWN pages are in this list too, and were not before: the sweep left
// the UAV and helmet-cam windows filling the glass from its very top edge,
// title bars sitting over the strip with a band of dead screen underneath.
// Being controls groups, they need their children scaled by however much the
// group just shrank, or the windows keep their full-glass height inside a
// shorter panel and hang out of the bottom of it.
// NO RIGHT-HAND GUTTER. One was added so pages would stop covering the menu
// key, and it just carved a visible empty strip down the side of every app.
// The key is declared after the pages and therefore draws over them anyway -
// it never needed the room.
//
// THE TASKBAR STRETCH IS NOT FOR EVERY PAGE. cTab authors UAV, HCAM and the
// desktop at the full content height and reserves the bottom of it for a
// taskbar this mod hides; those need stretching or they stop short. MESSAGE
// already subtracts the taskbar from its own height
// (cTab_Tablet_dialog.hpp:288), so stretching it too pushed the Templates,
// MEDEVAC and Send row off the bottom of the screen.
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
    [S7_IDC_PAGE_HCAMFULL, false],
    [S7_IDC_PAGE_MESSAGE, false],
    [S7_IDC_PAGE_DESKTOP, true], [S7_IDC_PAGE_UAV, true], [S7_IDC_PAGE_HCAM, true]
];

// cTab's messaging page is placed by hand rather than scaled - see
// FUNC(messageLayout) for why a proportional sweep cannot get it right.
[_display] call FUNC(messageLayout);

// The strip overlaps the top edge of the glass by a hair: placed exactly at
// _sy a sliver of bright map shows above it, the seam you get rounding a float
// rect to pixels.
private _hdrTop = _sy - _sh * HDR_OVER;
[1, _sx, _hdrTop, _sw, _hdr + (_sy - _hdrTop)] call _fnc_place;
[IDC_S7_CAMLABEL, _sx, _sy, _sw, _hdr] call _fnc_place;

// cTab's OSD readouts, pinned INTO that strip. On the tablet idc 1 is only
// the strip's backing picture - the readouts are loose top-level controls,
// and the proportional remap left the whole row a strip-height too low and
// off to the left ("menu is too low, move it up and right"). Battery on the
// left, the text readouts spread the way the FBCB4's sit, icons at the right
// end restored to the shape cTab drew them at.
private _osdH = _hdr * 0.60;
private _osdY = _sy + (_hdr - _osdH) / 2;
{
    _x params ["_idc", "_fx"];
    private _osd = _display displayCtrl _idc;
    if (isNull _osd) then {continue};
    (ctrlPosition _osd) params ["", "", "_ow", "_oh"];
    _osd ctrlSetPosition [_sx + _sw * _fx, _sy + (_hdr - _oh) / 2, _ow, _oh];
    _osd ctrlCommit 0;
} forEach [[2616, 0.20], [2615, 0.36], [2613, 0.48], [2612, 0.62]];

// Battery left, satellite and signal right. The saved ratio is width over
// height in screen units, so height times ratio reproduces the exact shape
// cTab drew - no grid arithmetic on top.
private _osdAspect = _display getVariable [QGVAR(osdAspect), [2, 2, 2]];
private _bat = _display displayCtrl 2;
if (!isNull _bat) then {
    _bat ctrlSetPosition [_sx + _sw * 0.012, _osdY, _osdH * (_osdAspect select 0), _osdH];
    _bat ctrlCommit 0;
};
// the full right end of the strip is theirs again - the menu key moved below it
private _osdR = _sx + _sw - _sw * 0.012;
{
    _x params ["_idc", "_asp"];
    private _osd = _display displayCtrl _idc;
    if (isNull _osd) then {continue};
    private _ow = _osdH * _asp;
    _osd ctrlSetPosition [_osdR - _ow, _osdY, _ow, _osdH];
    _osd ctrlCommit 0;
    _osdR = _osdR - _ow - _sw * 0.006;
} forEach [[4, _osdAspect select 2], [3, _osdAspect select 1]];

// The dashboard fills the glass. Resizing a controls group does NOT resize
// its children - they keep their authored offsets, which is what left white
// bands inside the panel in game - so each child is scaled to match.
private _grp = _display displayCtrl IDC_S7_DESKMENU;
[IDC_S7_DESKMENU, _sx, _sy + _hdr, _sw, _sh - _hdr] call _fnc_place;
_dashCfg params ["", "", "_cw", "_ch"];
if (!isNull _grp && {_cw > 0} && {_ch > 0}) then {
    private _fx = _sw / _cw;
    private _fy = (_sh - _hdr) / _ch;
    {
        if (ctrlParentControlsGroup _x isEqualTo _grp) then {
            (ctrlPosition _x) params ["_px", "_py", "_pw", "_ph"];
            _x ctrlSetPosition [_px * _fx, _py * _fy, _pw * _fx, _ph * _fy];
            _x ctrlCommit 0;
        };
    } forEach allControls _display;
};

// The weather readout is NOT placed by hand: the remap has already carried it
// to its proportional spot over the wide weather tile. Hand placement put the
// weather text straight onto the dashboard's own title in game.
// Neither the title nor the unit mark exists on this device any more - the
// screen is the apps, and a masthead was taking a row off the top of them.

// THE MENU KEY LIVES IN THE HEADER STRIP, at its right-hand end. Hung just
// below the strip it floated over whatever page was open and read as having
// vanished the moment an app filled the screen - and with the dashboard now a
// mode of its own, this key is the whole way back out of an app. In the strip
// it is over the one control that is never covered, so it is always there.
private _kw = _sw * 0.031;
private _kh = _hdr * 0.8;
private _kx = _sx + _sw - _kw - _sw * 0.012;
private _mky = _sy + _hdr + _sh * 0.012;

[467390, _kx, _mky, _kw, _kh] call _fnc_place;
[467391, _kx + _kw * 0.2, _mky + _kh * 0.18, _kw * 0.6, _kh * 0.64] call _fnc_place;

private _tky = _sy + _sh - _kh - _sh * 0.03;
[IDC_GFT_TOOLKEY, _kx, _tky, _kw, _kh] call _fnc_place;
[IDC_GFT_TOOLGLYPH, _kx + _kw * 0.2, _tky + _kh * 0.18,
    _kw * 0.6, _kh * 0.64] call _fnc_place;

// app page text: a centred column under the header
[IDC_S7_INFOTEXT, _sx + _sw * 0.25, _sy + _hdr * 1.6, _sw * 0.5, _sh * 0.52] call _fnc_place;

// the condition glyph and the drone compass, centred below the text
private _gl = _sh * 0.26;
{
    [_x, _sx + (_sw - _gl * 0.75) / 2, _sy + _sh * 0.66, _gl * 0.75, _gl] call _fnc_place;
} forEach [IDC_S7_WXICON, IDC_S7_WXDETAIL, IDC_S7_COMPASS, IDC_S7_NEEDLE];

// the scanner readout rows, squared up with cTab's own map-tools readout -
// same left edge and width, read off its control rather than guessed
private _colX = _sx + _sw * 0.015;
private _colW = _sw * 0.16;
private _hook = _display displayCtrl S7_IDC_HOOKGRID;
if (!isNull _hook) then {
    (ctrlPosition _hook) params ["_hkx", "", "_hkw"];
    if (_hkw > 0) then {
        _colX = _hkx;
        _colW = _hkw;
    };
};
private _rowH = _sh * 0.06;
{
    [_x, _colX, _sy + _hdr * 1.3 + _forEachIndex * _rowH, _colW, _rowH] call _fnc_place;
} forEach [467700, 467701, 467702, 467703];

// alarm buttons and the settings rows along the bottom of the glass
private _bwid = _sw * 0.15;
{
    [_x, _sx + _sw * 0.06 + _forEachIndex * (_bwid + _sw * 0.01), _sy + _sh * 0.80, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467500, 467501, 467502, 467503, 467504];
{
    [_x, _sx + _sw * 0.06 + _forEachIndex * (_bwid + _sw * 0.01), _sy + _sh * 0.71, _bwid, _sh * 0.07] call _fnc_place;
} forEach [467505, 467506, 467507, IDC_S7_ALARMAT, IDC_S7_ALARMSET];
// the DEL keys, one per roster row, above the fuse rows - narrower, six across
private _dwid = _sw * 0.12;
{
    [_x, _sx + _sw * 0.06 + _forEachIndex * (_dwid + _sw * 0.01), _sy + _sh * 0.62, _dwid, _sh * 0.06] call _fnc_place;
} forEach [467560, 467561, 467562, 467563, 467564, 467565];

// the SUPPORT page's service keys, a two-by-two block under the readout
private _spW = _sw * 0.26;
private _spH = _sh * 0.11;
{
    _x params ["_idc", "_col", "_row"];
    [_idc, _sx + _sw * 0.22 + _col * (_spW + _sw * 0.04),
        _sy + _sh * (0.40 + _row * 0.16), _spW, _spH] call _fnc_place;
} forEach [
    [467570, 0, 0], [467571, 1, 0],
    [467572, 0, 1], [467573, 1, 1]
];

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

// --- the tools drawer, rising from the tools key -------------------------
// cTab's six map switches on the top row, this mod's eight drawing tools
// below - the same drawer the handset and the vehicle screen carry.
// Pinned to the BOTTOM OF THE GLASS and moved RIGHT of the map-info readouts
// (grid and scale, bottom left) - flush left it sat on top of them.
private _dPad = _sw * 0.007;
// vertical gaps take their own number - x and y units differ on screen
private _dGap = _sh * 0.012;
private _dBtnW = _sw * 0.078;
private _dBtnH = _sh * 0.07;
private _dX = _sx + _sw * 0.20;
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

// --- the painted bezel keys ----------------------------------------------
// APP1/APP2/APP3 and Input Lock down the case's left edge - only paint, so
// the invisible catchers are laid over the paint's own rectangles (canvas px
// measured off the art). Bezel coordinates, not glass: the keys sit outside
// the screen.
{
    _x params ["_idc", "_kpx", "_kpy", "_kpw", "_kph"];
    [_idc,
        _bx + _bw * (_kpx / 2048),
        _by + _bh * (_kpy / 2048),
        _bw * (_kpw / 2048),
        _bh * (_kph / 2048)] call _fnc_place;
} forEach [
    [IDC_GFT_KEYAPP1, 69, 1027, 82, 82],
    [IDC_GFT_KEYAPP2, 69, 1115, 82, 82],
    [IDC_GFT_KEYAPP3, 64, 1203, 87, 83],
    [IDC_GFT_KEYLOCK, 69, 1291, 82, 82],
    // the right-hand column, mirrored onto the same rows
    [IDC_GFT_KEYAPP4,  1895, 1027, 82, 82],
    [IDC_GFT_KEYAPP5,  1895, 1115, 82, 82],
    [IDC_GFT_KEYHOME,  1895, 1203, 82, 82],
    [IDC_GFT_KEYPOWER, 1895, 1291, 82, 82]
];

// cTab's drag handles for its own device art (idc 5-8). The handset already
// hides them; the tablet never did, and the audit found them sitting a third of
// a screen off every edge - dragging one shifts every control off this layout.
{
    private _h = _display displayCtrl _x;
    if (!isNull _h) then {
        _h ctrlShow false;
        _h ctrlEnable false;
    };
} forEach [5, 6, 7, 8];

// THE CORNER MASK IS RETIRED, on every device. cTab draws the case art OVER
// the screen content (its background control is declared after every page in
// cTab_Tablet_dialog.hpp), so the art itself is what rounds the screen - the
// aperture's corner nooks are baked fully opaque in gft_screen(_night).png.
// The runtime mask was a second set of corners painted on top of that: its
// generated arcs were four times the size of the art's own, in flat black
// against a green case, and any interface shift misaligned it - the
// "overlapping corners". An art corner cannot be misaligned; nothing placed
// at runtime rounds this screen any more.
private _maskCtrl = _display displayCtrl IDC_GFT_MASK;
if (!isNull _maskCtrl) then {
    _maskCtrl ctrlShow false;
};

// cTab's message list and message body, at a readable size
{
    private _msg = _display displayCtrl _x;
    if (!isNull _msg) then {
        _msg ctrlSetFontHeight (_sh * 0.04);
        _msg ctrlCommit 0;
    };
} forEach [S7_IDC_MSGLIST, S7_IDC_MSGTEXT];

// The mask is switched off above - there is ONE place that decides, and the
// art's baked corners are what round the screen now.
