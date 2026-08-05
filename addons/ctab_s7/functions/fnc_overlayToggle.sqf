#include "script_component.hpp"
/*
 * Author: YonV
 * Shows or hides the scanner readout on the map screen. The choice is the
 * player's own and is kept in their profile between missions. Which controls
 * are on screen is the updateInterface fork's business, so this flips the
 * setting and asks cTab to re-apply the current mode.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_overlayToggle
 */

private _on = !(profileNamespace getVariable [QGVAR(scanPanel), true]);
profileNamespace setVariable [QGVAR(scanPanel), _on];
saveProfileNamespace;

private _ifName = call FUNC(ifName);
if (_ifName != "") then {
    private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
    if (!isNil "_mode") then {
        [_ifName, [["mode", _mode]], true, true] call cTab_fnc_setSettings;
    };
};

hintSilent (["Scanner panel hidden", "Scanner panel shown on the map"] select _on);
