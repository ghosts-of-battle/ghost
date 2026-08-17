#include "script_component.hpp"
/*
 * Author: YonV
 * Paints the app tiles in the player's chosen accent colour. A tile is a
 * shortcut button carrying its own icon and label, so this colours the label -
 * the icons themselves are the mod's white glyphs, and the two status icons in
 * the header are coloured by state instead, which is the colour that actually
 * tells you something.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_applyIconColor
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

private _index = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
private _colour = S7_COLOURS select (_index min (count S7_COLOURS - 1));

// the phone's tiles and the tablet's are numbered from their own base
private _base = [S7_ICON_TABLET, S7_ICON_PHONE] select (_ifName == "cTab_Android_dlg");

for "_i" from 0 to (S7_APP_COUNT - 1) do {
    private _ctrl = _display displayCtrl (_base + _i);
    if (!isNull _ctrl) then {
        _ctrl ctrlSetTextColor _colour;
    };
};
