#include "script_component.hpp"
/*
 * Author: YonV
 * Builds the intrusion page inside the cTab tablet - the hacking addon's own
 * screen, rebuilt as a cTab mode instead of a separate device. The controls
 * carry the hacking addon's IDCs (8700-series, clear of everything cTab and
 * this addon use), so ghost_hacking's refresh/tick/select/action functions
 * drive them completely unchanged - this file only births and places them.
 *
 * Runs once per display, from deviceOpen, BEFORE wireButtons so the buttons
 * land in the dispatch table. Everything starts hidden; the updateInterface
 * fork shows the page when the mode is ours.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_s7_fnc_hackBuild
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

// tablet only, and only with the hacking addon aboard
if ((uiNamespace getVariable ["cTab_Tablet_dlg", displayNull]) isNotEqualTo _display) exitWith {};
if (isNil "ghost_hacking_fnc_tabletRefresh") exitWith {};
if (!isNull (_display displayCtrl 8702)) exitWith {};

// the screen content rectangle, straight from cTab's desktop group
private _desktop = _display displayCtrl 4610;
if (isNull _desktop) exitWith {};
(ctrlPosition _desktop) params ["_sx", "_sy", "_sw", "_sh"];

private _pad = _sw * 0.02;
private _rowH = _sh * 0.045;
private _fhBig = _rowH * 0.62;
private _fh = _rowH * 0.52;
private _fhSmall = _rowH * 0.46;

private _make = {
    params ["_class", "_idc", "_px", "_py", "_pw", "_ph", ["_fontH", -1]];
    private _ctrl = _display ctrlCreate [_class, _idc];
    _ctrl ctrlSetPosition [_px, _py, _pw, _ph];
    if (_fontH > 0) then { _ctrl ctrlSetFontHeight _fontH };
    _ctrl ctrlShow false;
    _ctrl ctrlCommit 0;
    _ctrl
};

// backdrop
private _bg = ["RscText", 8702, _sx, _sy, _sw, _sh] call _make;
_bg ctrlSetBackgroundColor [0.04, 0.05, 0.06, 1];

// title and column headers
private _title = ["RscStructuredText", 8703, _sx + _pad, _sy + _pad * 0.5, _sw - _pad * 2, _rowH, _fhBig] call _make;
_title ctrlSetStructuredText parseText "<t color='#DE5C30'>GHOST // INTRUSION SUITE</t>";

private _colW = (_sw - _pad * 3) * 0.55;
private _colX2 = _sx + _pad * 2 + _colW;
private _colW2 = _sw - _pad * 3 - _colW;
private _headY = _sy + _pad * 0.5 + _rowH;

private _devHead = ["RscStructuredText", 8709, _sx + _pad, _headY, _colW, _rowH * 0.8, _fhSmall] call _make;
_devHead ctrlSetStructuredText parseText "<t color='#9CAABA'>DEVICES IN RANGE</t>";
private _intelHead = ["RscStructuredText", 8710, _colX2, _headY, _colW2, _rowH * 0.8, _fhSmall] call _make;
_intelHead ctrlSetStructuredText parseText "<t color='#9CAABA'>INTEL TO PULL</t>";

// device cards - bg, name, info, and an invisible button as the click target
private _cardTop = _headY + _rowH * 0.9;
private _cardH = _sh * 0.1;
private _cardGap = _sh * 0.014;
for "_i" from 0 to 5 do {
    private _cy = _cardTop + _i * (_cardH + _cardGap);
    private _cardBg = ["RscText", 8720 + _i * 5, _sx + _pad, _cy, _colW, _cardH] call _make;
    _cardBg ctrlSetBackgroundColor [1, 1, 1, 0.06];
    ["RscStructuredText", 8721 + _i * 5, _sx + _pad * 1.4, _cy + _cardH * 0.08, _colW - _pad, _cardH * 0.5, _fh] call _make;
    ["RscStructuredText", 8722 + _i * 5, _sx + _pad * 1.4, _cy + _cardH * 0.52, _colW - _pad, _cardH * 0.42, _fhSmall] call _make;
    [QGVAR(catcher), 8723 + _i * 5, _sx + _pad, _cy, _colW, _cardH] call _make;
};

// intel choice buttons
private _ibH = _sh * 0.085;
private _ibGap = _sh * 0.016;
for "_i" from 0 to 4 do {
    [QGVAR(hackButton), 8780 + _i, _colX2, _cardTop + _i * (_ibH + _ibGap), _colW2, _ibH, _fh] call _make;
};

// footer: status, progress bar, percent, then the two buttons
private _footY = _sy + _sh - _pad * 0.6 - _rowH * 2.2;
["RscStructuredText", 8704, _sx + _pad, _footY, _sw - _pad * 2, _rowH * 0.9, _fh] call _make;
[QGVAR(hackBar), 8705, _sx + _pad, _footY + _rowH * 0.95, _sw - _pad * 2 - _sw * 0.12, _rowH * 0.35] call _make;
[QGVAR(hackPct), 8706, _sx + _sw - _pad - _sw * 0.11, _footY + _rowH * 0.8, _sw * 0.11, _rowH * 0.7, _fh] call _make;

private _btnW = (_sw - _pad * 3) / 2;
private _btnY = _footY + _rowH * 1.45;
private _action = [QGVAR(hackButton), 8707, _sx + _pad, _btnY, _btnW, _rowH * 0.85, _fh] call _make;
_action ctrlSetText "START";
_action ctrlSetBackgroundColor [0.871, 0.361, 0.188, 0.8];
_action ctrlSetTextColor [1, 1, 1, 1];

private _back = [QGVAR(hackButton), 8708, _sx + _pad * 2 + _btnW, _btnY, _btnW, _rowH * 0.85, _fh] call _make;
_back ctrlSetText "BACK";
_back ctrlSetBackgroundColor [1, 1, 1, 0.1];
_back ctrlSetTextColor [0.61, 0.67, 0.73, 1];
