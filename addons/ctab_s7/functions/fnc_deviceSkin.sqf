#include "script_component.hpp"
/*
 * Author: YonV
 * Dresses the android device in the bezel art of whichever handheld the player
 * is actually carrying. cTab keeps the two bezel textures (day and night) in
 * cTabIfOpen index 9 and paints IDC 1200 from them, so a new handheld is a
 * texture swap rather than a second dialog: our S23s open the S7's own screen
 * and inherit every app, the card menu and the scanner readout.
 *
 * The S7 keeps cTab's own art - if the player has no S23, this does nothing.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_s7_fnc_deviceSkin
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};
if (isNil "cTabIfOpen") exitWith {};

private _ifName = call FUNC(ifName);
if !(_ifName in [QGVAR(s23_dlg), "cTab_Android_dsp"]) exitWith {};

// Both forms of each handheld: the assignable one in a device slot, and the
// misc one riding in a uniform, vest or pack.
private _kit = (assignedItems player) + (items player);
private _skin = switch (true) do {
    case (QGVAR(s23_tan) in _kit || {QGVAR(s23_tan_misc) in _kit}): {QPATHTOF(data\s23_tan_ca.paa)};
    case (QGVAR(s23_blk) in _kit || {QGVAR(s23_blk_misc) in _kit}): {QPATHTOF(data\s23_blk_ca.paa)};
    default {""};
};
if (_skin isEqualTo "") exitWith {};

// Same art day and night: these bezels are already dark, and cTab picks index
// 0 or 1 out of this pair when it evaluates night mode.
cTabIfOpen set [9, [_skin, _skin]];

private _bezel = _display displayCtrl S7_IDC_BEZEL;
if (!isNull _bezel) then {
    _bezel ctrlSetText _skin;
};
