#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletOpen

Description:
    Opens the hacking tablet. This is the whole interface now - the old Hack
    Tower / Hack Unit / Down Drone ACE actions are gone, because deciding what to
    hack and what to pull out of it is a screen job, not a radial menu job.

    A hack already in progress is picked back up: state lives outside the display,
    so closing the tablet pauses and reopening resumes.

Parameters:
    _unit : OBJECT - the operator.

Returns:
    BOOL - true if the tablet opened.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

if (!hasInterface) exitWith { false };

// Say which gate stopped them. A way in that silently does nothing is worse
// than no way in at all.
if !([_unit] call FUNC(canHack)) exitWith {
    private _why = switch (true) do {
        case (!GVAR(enabled)): { "Hacking is disabled." };
        case (GVAR(requireISR) && {!([_unit] call EFUNC(common,isISR))}): { "You are not an ISR operator." };
        default { "You cannot use the tablet here." };
    };
    ["Hack", _why, [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
    false
};
if !(createDialog QGVAR(tablet)) exitWith { false };

private _display = uiNamespace getVariable [QGVAR(tablet), displayNull];
if (isNull _display) exitWith { false };

[_display] call FUNC(tabletLayout);

// Announced rather than styled here. The suite has to keep working on a mission
// with no tacpad loaded, so it cannot reach for a theme it might not have - it
// says it is open and whoever cares about how things look answers.
[QGVAR(tabletOpened), [_display]] call CBA_fnc_localEvent;

if (isNil QGVAR(session)) then {
    GVAR(session) = createHashMapFromArray [
        ["device", objNull], ["kind", ""], ["intel", "picture"],
        ["running", false], ["progress", 0], ["time", 60], ["range", 20], ["last", 0]
    ];
};

// Card and intel buttons are wired once, here - the refresh only repaints them.
for "_i" from 0 to (TAB_CARDS - 1) do {
    (_display displayCtrl IDC_CARD_BTN(_i)) ctrlAddEventHandler ["ButtonClick", {
        [(_this select 0) getVariable [QGVAR(slot), -1]] call FUNC(tabletSelectDevice);
    }];
    (_display displayCtrl IDC_CARD_BTN(_i)) setVariable [QGVAR(slot), _i];
};
for "_i" from 0 to (TAB_INTEL - 1) do {
    (_display displayCtrl IDC_INTEL_BTN(_i)) ctrlAddEventHandler ["ButtonClick", {
        [(_this select 0) getVariable [QGVAR(slot), -1]] call FUNC(tabletSelectIntel);
    }];
    (_display displayCtrl IDC_INTEL_BTN(_i)) setVariable [QGVAR(slot), _i];
};
(_display displayCtrl IDC_TAB_ACTION) ctrlAddEventHandler ["ButtonClick", { call FUNC(tabletAction) }];
(_display displayCtrl IDC_TAB_CLOSE) ctrlAddEventHandler ["ButtonClick", {
    (uiNamespace getVariable [QGVAR(tablet), displayNull]) closeDisplay 2;
}];

[_display] call FUNC(tabletRefresh);

// One handler drives both the device list and any running hack. It dies with
// the display, which is exactly what pauses the hack.
GVAR(tabletPFH) = [FUNC(tabletTick), 0, []] call CBA_fnc_addPerFrameHandler;

true
