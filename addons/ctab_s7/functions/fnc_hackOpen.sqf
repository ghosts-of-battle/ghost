#include "script_component.hpp"
/*
 * Author: YonV
 * Opens the intrusion page inside the cTab tablet. The old version closed cTab
 * and opened the hacking addon's own device, which read as being asked for a
 * different tablet; now the hacking screen is a cTab mode. The hacking addon
 * still owns everything that matters - device scan, session, progress,
 * cooldowns, intel products - this only points its display variable at the
 * cTab tablet and switches the mode.
 *
 * Leaving the page (any other screen, or closing the tablet) pauses the hack
 * exactly as closing the standalone device did - deviceTick clears the display
 * variable and the hacking tick retires itself.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_hackOpen
 */

if (isNil "ghost_hacking_fnc_canHack") exitWith {
    ["Hack", "Intrusion suite not available.", [1, 0.3, 0.3, 1]] call ghost_notify_fnc_notify;
};

private _display = uiNamespace getVariable ["cTab_Tablet_dlg", displayNull];
if (isNull _display) exitWith {};
if (isNull (_display displayCtrl 8702)) exitWith {};

// The gate, with the reason - a page that silently does nothing is worse than
// no page. The carried-kit check is skipped: this IS the tablet, so asking for
// a second one would be the device asking for a different device. Training and
// the mission condition still decide.
if !([player, true] call ghost_hacking_fnc_canHack) exitWith {
    private _why = switch (true) do {
        case (!(missionNamespace getVariable ["ghost_hacking_enabled", true])): { "Hacking is disabled." };
        case ((missionNamespace getVariable ["ghost_hacking_requireISR", false])
            && {!([player] call ghost_common_fnc_isISR)}): { "You are not an ISR operator." };
        default { "You cannot run an intrusion here." };
    };
    ["Hack", _why, [1, 0.3, 0.3, 1]] call ghost_notify_fnc_notify;
};

// Session state survives everything - the same hack resumes here that was
// started on the standalone device, and vice versa.
if (isNil "ghost_hacking_session") then {
    ghost_hacking_session = createHashMapFromArray [
        ["device", objNull], ["kind", ""], ["intel", "picture"],
        ["running", false], ["progress", 0], ["time", 60], ["range", 20], ["last", 0]
    ];
};

// The hacking functions find their screen through this variable; while the
// page is up, their screen is the cTab tablet.
uiNamespace setVariable ["ghost_hacking_tablet", _display];

["cTab_Tablet_dlg", [["mode", QGVAR(hack)]], true, true] call cTab_fnc_setSettings;

// The hacking tick drives the scan, the repaint and the progress; it retires
// itself when the display variable goes null.
if ((missionNamespace getVariable ["ghost_hacking_tabletPFH", -1]) == -1) then {
    ghost_hacking_tabletPFH = [ghost_hacking_fnc_tabletTick, 0, []] call CBA_fnc_addPerFrameHandler;
};
