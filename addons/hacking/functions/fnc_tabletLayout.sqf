#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletLayout

Description:
    Positions every control inside the tablet's screen. Done in script rather
    than the config because the bezel is a photograph with a fixed screen area:
    the whole screen is derived from one rectangle here, so nudging the frame
    later moves everything with it instead of desynchronising thirty hardcoded
    config positions.

Parameters:
    _display : DISPLAY - the tablet.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_display"];

// data/tablet.paa is a SQUARE image of a LANDSCAPE tablet, so the control has to
// be physically square or the art shears and the device inside it comes out
// stretched. Height drives it, and EFUNC(common,uiSquare) turns that into the
// width - see there for why equal w and h is NOT square on every setup.
private _bh = 0.94 * safeZoneH;
private _bw = _bh * (call EFUNC(common,uiSquare));
private _bx = safeZoneX + (safeZoneW - _bw) / 2;
private _by = safeZoneY + (safeZoneH - _bh) / 2;

(_display displayCtrl IDC_TAB_BEZEL) ctrlSetPosition [_bx, _by, _bw, _bh];

// The lit panel, as a fraction of the art: the wallpaper runs x 0.116..0.845,
// y 0.264..0.667 of 2048, stopping at the Android nav strip below it.
private _sx = _bx + _bw * 0.118;
private _sy = _by + _bh * 0.265;
private _sw = _bw * 0.727;
private _sh = _bh * 0.402;
(_display displayCtrl IDC_TAB_SCREEN) ctrlSetPosition [_sx, _sy, _sw, _sh];

private _pad = _sw * 0.03;
private _rowH = _sh * 0.075;

// Type is sized from the row, not from a config constant. A fixed sizeEx only
// ever looks right at one screen size, and this screen is a fraction of a
// photograph, so it changes with the art.
private _fhBig = _rowH * 0.62;
private _fh = _rowH * 0.52;
private _fhSmall = _rowH * 0.46;

(_display displayCtrl IDC_TAB_TITLE) ctrlSetPosition
    [_sx + _pad, _sy + _pad * 0.5, _sw - _pad * 2, _rowH];

// Left column: device cards. Right column: intel choice.
private _colW = (_sw - _pad * 3) * 0.55;
private _colX2 = _sx + _pad * 2 + _colW;
private _colW2 = _sw - _pad * 3 - _colW;
private _headY = _sy + _pad * 0.5 + _rowH;

(_display displayCtrl IDC_TAB_DEVHEAD) ctrlSetPosition [_sx + _pad, _headY, _colW, _rowH * 0.8];
(_display displayCtrl IDC_TAB_INTELHEAD) ctrlSetPosition [_colX2, _headY, _colW2, _rowH * 0.8];

private _cardTop = _headY + _rowH * 0.9;
private _cardH = _sh * 0.115;
private _cardGap = _sh * 0.015;
for "_i" from 0 to (TAB_CARDS - 1) do {
    private _cy = _cardTop + _i * (_cardH + _cardGap);
    (_display displayCtrl IDC_CARD_BG(_i)) ctrlSetPosition [_sx + _pad, _cy, _colW, _cardH];
    (_display displayCtrl IDC_CARD_NAME(_i)) ctrlSetPosition
        [_sx + _pad * 1.4, _cy + _cardH * 0.08, _colW - _pad, _cardH * 0.5];
    (_display displayCtrl IDC_CARD_INFO(_i)) ctrlSetPosition
        [_sx + _pad * 1.4, _cy + _cardH * 0.52, _colW - _pad, _cardH * 0.42];
    (_display displayCtrl IDC_CARD_BTN(_i)) ctrlSetPosition [_sx + _pad, _cy, _colW, _cardH];
};

// Bottom strip: status, bar, percent, then the two buttons.
private _footY = _sy + _sh - _pad * 0.6 - _rowH * 2.2;

// The intel column FITS ITSELF to the room between the cards and the footer
// rather than standing each button at a fixed height. At five buttons a fixed
// 0.1 fitted; a sixth ran into the status line. Sized from the gap, the column
// takes another product without anybody having to notice.
private _ibGap = _sh * 0.018;
private _ibH = (((_footY - _pad) - _cardTop - _ibGap * (TAB_INTEL - 1)) / TAB_INTEL) min (_sh * 0.1);
for "_i" from 0 to (TAB_INTEL - 1) do {
    (_display displayCtrl IDC_INTEL_BTN(_i)) ctrlSetPosition
        [_colX2, _cardTop + _i * (_ibH + _ibGap), _colW2, _ibH];
};
(_display displayCtrl IDC_TAB_STATUS) ctrlSetPosition
    [_sx + _pad, _footY, _sw - _pad * 2, _rowH * 0.9];
(_display displayCtrl IDC_TAB_BAR) ctrlSetPosition
    [_sx + _pad, _footY + _rowH * 0.95, _sw - _pad * 2 - _sw * 0.12, _rowH * 0.35];
(_display displayCtrl IDC_TAB_PCT) ctrlSetPosition
    [_sx + _sw - _pad - _sw * 0.11, _footY + _rowH * 0.8, _sw * 0.11, _rowH * 0.7];

private _btnW = (_sw - _pad * 3) / 2;
private _btnY = _footY + _rowH * 1.45;
(_display displayCtrl IDC_TAB_ACTION) ctrlSetPosition [_sx + _pad, _btnY, _btnW, _rowH * 0.85];
(_display displayCtrl IDC_TAB_CLOSE) ctrlSetPosition
    [_sx + _pad * 2 + _btnW, _btnY, _btnW, _rowH * 0.85];

// Font height per control, then commit the lot. Grouping them this way keeps
// every size in one place - change _rowH above and the whole screen follows.
{
    _x params ["_size", "_idcs"];
    {
        private _ctrl = _display displayCtrl _x;
        if (_size > 0) then { _ctrl ctrlSetFontHeight _size };
        _ctrl ctrlCommit 0;
    } forEach _idcs;
} forEach [
    [-1, [IDC_TAB_BEZEL, IDC_TAB_SCREEN, IDC_TAB_BAR]],
    [_fhBig, [IDC_TAB_TITLE]],
    [_fhSmall, [IDC_TAB_DEVHEAD, IDC_TAB_INTELHEAD, IDC_TAB_PCT]],
    [_fh, [
        IDC_TAB_STATUS, IDC_TAB_ACTION, IDC_TAB_CLOSE,
        IDC_INTEL_BTN(0), IDC_INTEL_BTN(1), IDC_INTEL_BTN(2), IDC_INTEL_BTN(3), IDC_INTEL_BTN(4),
        IDC_CARD_NAME(0), IDC_CARD_NAME(1), IDC_CARD_NAME(2),
        IDC_CARD_NAME(3), IDC_CARD_NAME(4), IDC_CARD_NAME(5)
    ]],
    [_fhSmall, [
        IDC_CARD_INFO(0), IDC_CARD_INFO(1), IDC_CARD_INFO(2),
        IDC_CARD_INFO(3), IDC_CARD_INFO(4), IDC_CARD_INFO(5)
    ]],
    [-1, [
        IDC_CARD_BG(0), IDC_CARD_BTN(0), IDC_CARD_BG(1), IDC_CARD_BTN(1),
        IDC_CARD_BG(2), IDC_CARD_BTN(2), IDC_CARD_BG(3), IDC_CARD_BTN(3),
        IDC_CARD_BG(4), IDC_CARD_BTN(4), IDC_CARD_BG(5), IDC_CARD_BTN(5)
    ]]
];

(_display displayCtrl IDC_TAB_TITLE) ctrlSetStructuredText parseText
    "<t color='#DE5C30'>GHOST // INTRUSION SUITE</t>";
(_display displayCtrl IDC_TAB_DEVHEAD) ctrlSetStructuredText parseText
    "<t color='#9CAABA'>DEVICES IN RANGE</t>";
(_display displayCtrl IDC_TAB_INTELHEAD) ctrlSetStructuredText parseText
    "<t color='#9CAABA'>INTEL TO PULL</t>";
