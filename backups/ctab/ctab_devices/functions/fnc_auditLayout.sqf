#include "script_component.hpp"
/*
 * Author: YonV
 * Walks the open device and reports every control that is laid out wrong.
 *
 * WHY THIS EXISTS. Every layout bug in this addon has been found the same way:
 * the user plays, takes a screenshot, circles something. `hemtt check` cannot
 * see geometry and neither can I. A glyph stretched two and a half times, a
 * mask covering one percent of the arc it was meant to cover, cards running off
 * the page, a ring of live map drawn over the case - all of those are arithmetic
 * that this function can check in a second.
 *
 * Four faults, all of which have actually shipped:
 *
 *   OFF GLASS   a control outside the screen rectangle. This is the map ring
 *               and the drawer hanging off the bottom.
 *   ZERO SIZE   width or height at nothing. A control the layout never reached
 *               looks identical to one that was never written.
 *   OVERLAP     two visible controls of the same kind on the same pixels. This
 *               is two cards stacked on one tile while another has none.
 *   ASPECT      a picture drawn more than a sixth away from its texture's own
 *               aspect, which is what makes a rounded corner an oval and a
 *               cross a smear.
 *
 * Run it from the debug console with a device open:
 *
 *     call ghost_ctab_devices_fnc_auditLayout
 *
 * Findings go to the RPT and come back as a count, so it can be run after a
 * layout change without watching for anything.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * How many faults were found <NUMBER>
 *
 * Example:
 * call ghost_ctab_devices_fnc_auditLayout
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {
    diag_log text "[ghost_ctab_devices] audit: no device open";
    -1
};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {
    diag_log text "[ghost_ctab_devices] audit: display is null";
    -1
};

(_display getVariable [QGVAR(glass), []]) params [["_gx", 0], ["_gy", 0], ["_gw", 0], ["_gh", 0]];
if (_gw <= 0) exitWith {
    diag_log text "[ghost_ctab_devices] audit: no glass rect stored - the layout has not run";
    -1
};

private _bad = 0;
private _fnc_say = {
    params ["_what"];
    _bad = _bad + 1;
    diag_log text format ["[ghost_ctab_devices] AUDIT %1", _what];
};

diag_log text format ["[ghost_ctab_devices] --- audit of %1, glass %2 ---", _ifName, [_gx, _gy, _gw, _gh]];

// The environment every number above depends on. Screenshot analysis kept
// dying on exactly these unknowns: what the safezone is, where the bezel
// control ACTUALLY sits, and which art it is wearing right now.
private _bzl = _display displayCtrl S7_IDC_BEZEL;
diag_log text format ["[ghost_ctab_devices] ENV safezone %1 idd %2 bezelPos %3 bezelArt %4",
    [safeZoneX, safeZoneY, safeZoneW, safeZoneH], ctrlIDD _display,
    ctrlPosition _bzl, ctrlText _bzl];
diag_log text format ["[ghost_ctab_devices] ENV stored mapRect %1 bgRect %2 bezelRect %3",
    _display getVariable [QGVAR(mapRect), []],
    _display getVariable [QGVAR(bgRect), []],
    _display getVariable [QGVAR(bezelRect), []]];

// WHERE THE BIG SURFACES ACTUALLY ARE, as fractions of the glass. A fault list
// says a control is legal; it does not say a page stops eight percent short of
// the bottom edge, which is what a person sees as "a gap" and what three
// rounds of screenshots could not pin down. 0.00 to 1.00 on every edge means
// the surface fills the glass exactly.
{
    _x params ["_idc", "_name"];
    private _c = _display displayCtrl _idc;
    if (isNull _c) then {
        diag_log text format ["[ghost_ctab_devices] GEOM %1 (idc %2) ABSENT on this device", _name, _idc];
        continue;
    };
    // Hidden surfaces are reported too, marked. The layout positions every
    // page whether or not it is the one on screen, so a run that skipped the
    // hidden ones only ever measured whichever app happened to be open - and
    // needed a separate run, on a separate build, per page.
    private _state = ["HIDDEN ", ""] select (ctrlShown _c);

    (ctrlPosition _c) params ["_cx", "_cy", "_cw", "_ch"];
    if (_cw <= 0 || {_ch <= 0}) then {
        diag_log text format ["[ghost_ctab_devices] GEOM %1 (idc %2) ZERO SIZE", _name, _idc];
        continue;
    };

    private _l = (_cx - _gx) / _gw;
    private _t = (_cy - _gy) / _gh;
    private _r = ((_cx + _cw) - _gx) / _gw;
    private _b = ((_cy + _ch) - _gy) / _gh;

    diag_log text format ["[ghost_ctab_devices] GEOM %1%2 L %3 T %4 R %5 B %6",
        _state, _name,
        (round (_l * 1000)) / 1000, (round (_t * 1000)) / 1000,
        (round (_r * 1000)) / 1000, (round (_b * 1000)) / 1000];
} forEach [
    // The case and the corner mask first: if the mask is not shown, or is not
    // on the same rectangle as the pages, no amount of page work will ever fix
    // a corner - and the bezel's rect is what every other number here is
    // derived from, so a wrong one makes the rest meaningless.
    [S7_IDC_BEZEL, "CASE bezel"],
    [IDC_S23_MASK, "MASK handset"],
    [IDC_GFT_MASK, "MASK tablet"],
    [S7_IDC_SCREENBG, "screen backdrop"],
    [S7_IDC_MAP, "map"],
    [1, "header strip"],
    [IDC_S7_CAMPIC, "camera page"],
    [IDC_S7_INFOPAGE, "info page"],
    [IDC_S7_MENU, "handset dashboard"],
    [IDC_S7_DESKMENU, "tablet dashboard"],
    [S7_IDC_PAGE_UAV, "cTab UAV page"],
    [S7_IDC_PAGE_HCAM, "cTab helmet-cam page"],
    [S7_IDC_PAGE_MESSAGE, "cTab message page"],
    [S7_IDC_PAGE_DESKTOP, "cTab desktop"]
];

// Only what is actually on screen. A hidden control parked at 0,0,0,0 is how
// this addon puts pages away and is not a fault.
private _live = (allControls _display) select {
    ctrlShown _x && {(ctrlPosition _x) select 2 > 0}
};

// CONTROLS THAT LIVE ON THE CASE, not on the screen. Being outside the glass
// is the whole point of a bezel key, so measuring them against it reported the
// device working correctly as fifty-odd faults and buried the handful that
// were real. Everything here is deliberate: this mod's painted bezel keys, the
// bezel picture itself, the corner mask, cTab's own hardware buttons down the
// side of its art, and the OSD icons which sit on top of the bezel by design.
private _offGlassOk = [
    IDC_GFT_KEYAPP1, IDC_GFT_KEYAPP2, IDC_GFT_KEYAPP3, IDC_GFT_KEYLOCK,
    IDC_GFT_KEYAPP4, IDC_GFT_KEYAPP5, IDC_GFT_KEYHOME, IDC_GFT_KEYPOWER,
    IDC_GFT_TOOLKEY, IDC_GFT_TOOLGLYPH, IDC_GFT_MASK,
    IDC_S23_MENUKEY, IDC_S23_MENUGLYPH, IDC_S23_TOOLKEY, IDC_S23_TOOLGLYPH,
    IDC_S23_MASK,
    S7_IDC_BEZEL
] + CTAB_CASE_BUTTONS + OSD_IDCS;

// tolerance: a hair of overspill is deliberate in places (the OSD strip)
private _slack = _gh * 0.02;

{
    private _ctrl = _x;
    (ctrlPosition _ctrl) params ["_cx", "_cy", "_cw", "_ch"];
    private _idc = ctrlIDC _ctrl;

    if (_cw <= 0 || {_ch <= 0}) then {
        [format ["ZERO SIZE idc %1 at %2", _idc, [_cx, _cy, _cw, _ch]]] call _fnc_say;
    };

    // A CONTROL INSIDE A GROUP IS POSITIONED FROM THE GROUP'S ORIGIN, not the
    // screen's, so its x and y are not in the same space as the glass at all.
    // Comparing them anyway reported cTab's window backings as a third of a
    // screen off the right edge when they are sitting exactly where they
    // should - and buried the faults that were real. The group itself IS
    // measured, which is what actually matters: if the group is on the glass,
    // everything inside it is too.
    if (!isNull ctrlParentControlsGroup _ctrl) then {continue};

    if (!(_idc in _offGlassOk)
        && {_cx < _gx - _slack || {_cy < _gy - _slack}
            || {_cx + _cw > _gx + _gw + _slack} || {_cy + _ch > _gy + _gh + _slack}}) then {
        [format ["OFF GLASS idc %1 at %2, glass %3", _idc, [_cx, _cy, _cw, _ch], [_gx, _gy, _gw, _gh]]] call _fnc_say;
    };
} forEach _live;

// Aspect: what the texture was authored at against what it is drawn at. Only
// pictures - text and buttons are meant to stretch.
{
    private _ctrl = _x;
    private _tex = ctrlText _ctrl;
    if (_tex == "" || {!(_tex select [count _tex - 4] in [".paa", ".jpg"])}) then {continue};

    private _size = getTextureInfo _tex;
    if (count _size < 2 || {(_size select 1) <= 0}) then {continue};
    private _authored = (_size select 0) / (_size select 1);

    (ctrlPosition _ctrl) params ["", "", "_cw", "_ch"];
    if (_ch <= 0) then {continue};
    // x units are three quarters of y units on screen, so this is the shape the
    // eye actually sees rather than the numbers in the config
    private _drawn = (_cw * 4/3) / _ch;

    if (_drawn > _authored * 1.18 || {_drawn < _authored / 1.18}) then {
        [format ["ASPECT idc %1 texture %2 authored %3 drawn %4 - %5",
            ctrlIDC _ctrl, _tex, (round (_authored * 100)) / 100, (round (_drawn * 100)) / 100,
            ["squashed", "stretched"] select (_drawn > _authored)]] call _fnc_say;
    };
} forEach _live;

// Overlap, pictures only and only near-total: tiles sit on cards on purpose,
// and text sits on both. Two PICTURES on the same rectangle is the fault - one
// of them is invisible and nobody will ever know which.
// BACKDROPS ARE NOT OVERLAPS. The bezel picture is the case, the mask is the
// corners and the screen backing is the screen - everything on the device is
// drawn on top of them by design, so leaving them in reported the case art
// itself as a fault against every icon standing on it.
private _backdrops = [S7_IDC_BEZEL, S7_IDC_SCREENBG, IDC_S23_MASK, IDC_GFT_MASK,
    IDC_S7_PANELBG, S7_IDC_MAP, S7_IDC_MAPTOPO];

private _pics = _live select {
    private _t = ctrlText _x;
    !(ctrlIDC _x in _backdrops)
    && {_t != ""}
    && {(_t select [count _t - 4]) == ".paa"}
};
{
    private _a = _x;
    private _i = _forEachIndex;
    (ctrlPosition _a) params ["_ax", "_ay", "_aw", "_ah"];
    {
        if (_forEachIndex <= _i) then {continue};
        (ctrlPosition _x) params ["_bx", "_by", "_bw", "_bh"];
        private _overX = ((_ax + _aw) min (_bx + _bw)) - (_ax max _bx);
        private _overY = ((_ay + _ah) min (_by + _bh)) - (_ay max _by);
        if (_overX <= 0 || {_overY <= 0}) then {continue};
        private _frac = (_overX * _overY) / ((_aw * _ah) min (_bw * _bh));
        if (_frac > 0.9) then {
            [format ["OVERLAP idc %1 and idc %2 share %3%4 of the smaller",
                ctrlIDC _a, ctrlIDC _x, round (_frac * 100), "%"]] call _fnc_say;
        };
    } forEach _pics;
} forEach _pics;

diag_log text format ["[ghost_ctab_devices] --- audit done: %1 fault(s) over %2 visible control(s) ---",
    _bad, count _live];

_bad
