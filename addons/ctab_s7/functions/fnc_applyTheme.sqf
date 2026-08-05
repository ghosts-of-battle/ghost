#include "script_component.hpp"
/*
 * Author: YonV
 * Paints the whole device to the player's settings: accent colour on the tile
 * labels, their chosen shade behind the screen and the app panel, and their
 * chosen font on the labels. Runs when a device opens and again whenever a
 * setting changes, so the change is visible the moment it is made.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_applyTheme
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

call FUNC(applyIconColor);

// --- screen shade ---------------------------------------------------------
private _bgIndex = profileNamespace getVariable [QGVAR(bgColor), S7_BGCOLOUR_DEFAULT];
(S7_BGCOLOURS select (_bgIndex min (count S7_BGCOLOURS - 1))) params ["_r", "_g", "_b"];

// The backdrop is cTab's own windowsBG - a picture holding a procedural colour,
// re-coloured by handing it a new one rather than by setting a background
// colour. Repainted at runtime because a config layer of our own would merge in
// after cTab's map control and cover it.
private _backdrop = _display displayCtrl S7_IDC_SCREENBG;
if (!isNull _backdrop) then {
    _backdrop ctrlSetText format ["#(argb,8,8,3)color(%1,%2,%3,1)", _r, _g, _b];
};

// The panel and the page behind the apps are plain text controls, so those do
// take a background colour directly. Both are lifted slightly clear of the
// backdrop so the panel still reads as a panel.
private _panel = _display displayCtrl IDC_S7_PANELBG;
if (!isNull _panel) then {
    _panel ctrlSetBackgroundColor [_r * 0.7, _g * 0.7, _b * 0.7, 0.96];
};

private _page = _display displayCtrl IDC_S7_INFOPAGE;
if (!isNull _page) then {
    _page ctrlSetBackgroundColor [_r * 0.85, _g * 0.85, _b * 0.85, 1];
};

// --- font -----------------------------------------------------------------
private _fontIndex = profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT];
private _font = S7_FONTS select (_fontIndex min (count S7_FONTS - 1));

private _base = [S7_ICON_TABLET, S7_ICON_PHONE] select (_ifName == "cTab_Android_dlg");
for "_i" from 0 to (S7_APP_COUNT - 1) do {
    private _ctrl = _display displayCtrl (_base + _i);
    if (!isNull _ctrl) then {
        _ctrl ctrlSetFont _font;
    };
};

{
    private _ctrl = _display displayCtrl _x;
    if (!isNull _ctrl) then {
        _ctrl ctrlSetFont _font;
    };
} forEach [IDC_S7_WIDGETTIME, IDC_S7_INFOTEXT, IDC_S7_CAMLABEL];
