#include "script_component.hpp"
/*
 * Author: YonV
 * The one loop that keeps the devices alive. It runs from mission start and
 * costs nothing while every device is closed, which is most of the time.
 *
 * It also notices a device being opened by watching for a display it has not
 * seen before, so the readouts come up whether or not the onLoad hook in the
 * device config fired. Chasing a blank panel across three builds is what that
 * belt and braces is for.
 *
 * Arguments (CBA PFH): 0: args, 1: handle
 *
 * Return Value: None
 *
 * Public: No
 */

private _ifName = call FUNC(ifName);

// cTab's notifications go to the player's screen as well as the device - this
// runs whether the device is a dialog or the HUD, and before the whitelist,
// because a notification matters most when the phone is a thumbnail.
call FUNC(notifyMirror);

// The display we last saw is kept in uiNamespace: displays cannot be serialised,
// so parking one in missionNamespace earns a warning every frame.
// The HUD (cTab_Android_dsp) is in this list too - the phone spends most of its
// life held up in the corner, and the scanner readout has to live there.
if !(_ifName in DEVICE_DISPLAYS) exitWith {
    uiNamespace setVariable [QGVAR(lastDisplay), displayNull];
};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {
    uiNamespace setVariable [QGVAR(lastDisplay), displayNull];
};

// A display we have not seen is a device that has just been opened.
if (_display isNotEqualTo (uiNamespace getVariable [QGVAR(lastDisplay), displayNull])) then {
    uiNamespace setVariable [QGVAR(lastDisplay), _display];
    call FUNC(deviceOpen);
};

// cTab rebuilds its texture table after our open hook and repaints the bezel
// from it on night-mode passes - the stock art kept coming back in game. This
// re-asserts the case art and the glass geometry once a second.
call FUNC(deviceSkin);

// Leaving the embedded intrusion page - any other screen - pauses the hack,
// exactly as closing the standalone tablet did: clearing the display variable
// retires the hacking tick, and the session keeps its progress.
if (!isNil "ghost_hacking_fnc_tabletClosed"
    && {(uiNamespace getVariable ["ghost_hacking_tablet", displayNull]) isEqualTo _display}) then {
    private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
    if (isNil "_mode" || {_mode != QGVAR(hack)}) then {
        call ghost_hacking_fnc_tabletClosed;
    };
};

// The medical page's member cards are built and refilled from here while it
// is the screen that is up - vitals move, so a static page would lie. They are
// ctrlCreate'd onto the display rather than declared in config, so the fork's
// hide pass knows nothing about them and they have to be put away by hand when
// any other screen is showing.
private _curMode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (!isNil "_curMode" && {_curMode isEqualTo QGVAR(convoy)}) then {
    [_display] call FUNC(convoyPage);
} else {
    {
        {_x ctrlShow false} forEach _x;
    } forEach (_display getVariable [QGVAR(convoyCards), []]);
    private _combo = _display getVariable [QGVAR(convoyCombo), controlNull];
    if (!isNull _combo) then {_combo ctrlShow false};
};
if (!isNil "_curMode" && {_curMode isEqualTo QGVAR(engineer)}) then {
    [_display] call FUNC(engineerPage);
} else {
    {
        {_x ctrlShow false} forEach _x;
    } forEach (_display getVariable [QGVAR(engRows), []]);
};
if (!isNil "_curMode" && {_curMode isEqualTo QGVAR(medical)}) then {
    [_display] call FUNC(medicalPage);
} else {
    {
        {_x ctrlShow false} forEach _x;
    } forEach (_display getVariable [QGVAR(medCards), []]);
    // the NOTES key and its reference belong to that page too
    {
        _x ctrlShow false;
    } forEach ((_display getVariable [QGVAR(medNotes), []]) select [0, 4]);
};

// Both readouts already have the display, so they never look it up again.
[_display] call FUNC(widgetTick);
[_display] call FUNC(overlayTick);
