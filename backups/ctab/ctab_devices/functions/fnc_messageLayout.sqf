#include "script_component.hpp"
/*
 * Author: YonV
 * Places cTab's messaging page by hand, inside whatever rectangle the page
 * group now occupies.
 *
 * WHY BY HAND. Everything else in this addon is moved proportionally, which is
 * right for art and wrong for this page. cTab authored it for a screen of a
 * different shape, with its own inner margins and a row of buttons resting on
 * the bottom edge of a group that reserves space for a taskbar. Scaled into
 * this glass, the margins came out uneven - a hair on the left, a visible band
 * on the right - and the Templates / MEDEVAC / Send row ended up hanging off
 * the bottom of the screen.
 *
 * A proportional sweep cannot fix that, because the fault is in the ratios it
 * is faithfully reproducing. So the eight controls that make up the page are
 * placed against the group directly: two halves, even gutters, buttons on the
 * inside.
 *
 * Positions are GROUP-RELATIVE - a child of a controls group is positioned
 * from the group's own origin, not the screen's.
 *
 * Arguments:
 * 0: The device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_messageLayout
 */

params [["_display", displayNull, [displayNull]]];

if (isNull _display) exitWith {};

// The exits LOG. This function silently not running is indistinguishable on
// screen from cTab's stock page scaled by the sweep - which is exactly the
// state that kept coming back in screenshots - so absence of its breadcrumb
// in the RPT has to mean something.
private _grp = _display displayCtrl S7_IDC_PAGE_MESSAGE;
if (isNull _grp) exitWith {
    diag_log text "GHOST ctab_devices: messageLayout SKIPPED - no message group on this display";
};

(ctrlPosition _grp) params ["", "", "_w", "_h"];
if (_w <= 0 || {_h <= 0}) exitWith {
    diag_log text format ["GHOST ctab_devices: messageLayout SKIPPED - message group has no size %1", ctrlPosition _grp];
};

// The page carries its own full-bleed surface, the same shade the info pages
// wear. Without it the panes floated on the lighter screen backdrop and the
// margin between pane and case read as a gap - the drone app "is correct"
// because its page is one solid surface; this makes the messaging page one
// too.
_grp ctrlSetBackgroundColor [0.13, 0.13, 0.14, 1];

private _fnc_put = {
    params ["_idc", "_px", "_py", "_pw", "_ph"];
    private _c = _display displayCtrl _idc;
    if (isNull _c) exitWith {};
    _c ctrlSetPosition [_px, _py, _pw, _ph];
    _c ctrlCommit 0;
};

// One margin, used on every edge and between every pane, so nothing can come
// out lopsided. x and y units differ on screen, so the horizontal one is
// three quarters of the vertical to look the same size.
private _my = _h * 0.02;
private _mx = _my * 0.75;

// Each frame's TITLE gets a band of its own above its pane. A frame draws its
// label ON its top border: with the frame wrapped tight round the pane, the
// label sat across the pane's top edge and the page's top line - the tangle of
// text and borders under the header strip.
private _lbl = _my * 1.8;

private _colL = _w * 0.30;                      // list column
private _colR = _w - _colL - _mx * 3;           // content column
private _xL = _mx;
private _xR = _mx * 2 + _colL;

// Buttons sit INSIDE the page, on the bottom margin - not on the group's edge,
// which is where cTab put them and where they fell off this screen.
private _btnH = _h * 0.075;
private _btnW = (_colR - _mx * 2) / 3;
private _btnY = _h - _my - _btnH;

// Two halves: what has been received on top, what is being written below,
// each with a label band above it.
private _half = (_h - _lbl * 2 - _my * 3.5 - _btnH) / 2;
private _topY = _lbl + _my * 0.5;
private _botY = _topY + _half + _lbl + _my;

// --- received -------------------------------------------------------------
[S7_IDC_MSGLIST, _xL, _topY, _colL, _half] call _fnc_put;
[S7_IDC_MSGTEXT, _xR, _topY, _colR, _half - _btnH - _my] call _fnc_put;
[S7_IDC_MSGDELETE, _xR + _colR - _btnW, _topY + _half - _btnH, _btnW, _btnH] call _fnc_put;

// --- composing ------------------------------------------------------------
[S7_IDC_MSGRECIPIENTS, _xL, _botY, _colL, _half] call _fnc_put;
[S7_IDC_MSGCOMPOSE, _xR, _botY, _colR, _half - _btnH - _my] call _fnc_put;

{
    [_x, _xR + _forEachIndex * (_btnW + _mx), _btnY, _btnW - _mx, _btnH] call _fnc_put;
} forEach [S7_IDC_MSGTEMPLATES, S7_IDC_MSGMEDEVAC, S7_IDC_MSGSEND];

// cTab's two decorative frames are behind the panes they label. Left where the
// sweep put them they boxed the OLD rectangles, so they are put round the new
// ones - a frame drawn somewhere its content is not is worse than no frame.
// Each frame's top edge sits a label band above its pane, so the title has
// clear air instead of lying across the pane's border.
[S7_IDC_MSGFRAMEREAD, _xL - _mx * 0.5, _topY - _lbl,
    _w - _mx, _half + _lbl + _my * 0.5] call _fnc_put;
[S7_IDC_MSGFRAMECOMPOSE, _xL - _mx * 0.5, _botY - _lbl,
    _w - _mx, _half + _lbl + _my + _btnH + _my * 0.5] call _fnc_put;

diag_log text format ["GHOST ctab_devices: messageLayout PLACED - group %1 half %2", ctrlPosition _grp, _half];
