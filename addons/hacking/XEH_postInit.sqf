#include "script_component.hpp"

// Intel marker from a successful hack. The server picks the target and sends one
// event; each machine builds the marker locally, rather than the server issuing
// four global marker commands.

// Tablet state. Deliberately outside the display: it is what lets a hack be
// paused by closing the screen and resumed by reopening it.
GVAR(devices) = [];
GVAR(intelAvailable) = [];
GVAR(lastScan) = -1e9;
GVAR(tabletPFH) = -1;

// A search circle. Permanent - lifetime 0 - because it is an objective, not a
// snapshot, and it only goes when the objective does.
//
// Deleted before it is drawn: every hack on the same objective reuses the marker
// name to tighten the circle, and createMarkerLocal refuses a name that already
// exists, so without this the second hack would silently change nothing.
[QGVAR(intelMarker), {
    params ["_name", "_pos", "_radius", "_colour", "_text", "_type", "_side"];
    if (!hasInterface) exitWith {};
    if (side group ACE_player isNotEqualTo _side) exitWith {};
    { deleteMarkerLocal _x } forEach [_name, _name + "_icon"];
    [_name, _pos, _radius, _colour, INTEL_TARGET_ALPHA, 0, false, _type, _text]
        call EFUNC(common,renderIntelCircle);
}] call CBA_fnc_addEventHandler;

// A revealed target has been destroyed: drop its circle and say so. Targets are
// always destroy objectives, so this is unconditional for the side that had it.
[QGVAR(intelDestroyed), {
    params ["_name", "_side"];
    if (!hasInterface) exitWith {};
    { deleteMarkerLocal _x } forEach [_name, _name + "_icon"];
    if (side group ACE_player isEqualTo _side) then {
        ["Intel", "Target destroyed.", [0.6, 1, 0.6, 1]] call EFUNC(notify,notify);
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(intelAllDown), {
    params ["_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    ["Intel", "All intel targets destroyed.", [0.6, 1, 0.6, 1]] call EFUNC(notify,notify);
}] call CBA_fnc_addEventHandler;

// Server-authoritative silent removal of a hacked drone (+ its virtual crew).
if (isServer) then {
    [QGVAR(deleteDrone), {
        private _drone = _this;
        if (isNull _drone) exitWith {};
        { deleteVehicle _x } forEach (crew _drone);
        deleteVehicle _drone;
    }] call CBA_fnc_addEventHandler;
};

// --- Phase 2 admin test commands + HUD placement ---------------------------



// Product render + result, one event each. The side filter lives on the
// receiving client (see FUNC(renderProduct)), so the enemy never draws them.
[QGVAR(render), { _this call FUNC(renderProduct) }] call CBA_fnc_addEventHandler;

[QGVAR(pickResult), {
    params ["_msg", "_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    ["Hack", _msg, [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    [QGVAR(pick), { _this call FUNC(serverPick) }] call CBA_fnc_addEventHandler;
    [QGVAR(remoteFail), { _this call FUNC(remoteHackFail) }] call CBA_fnc_addEventHandler;

    // Scanner alarms live here so they fire with the setter gone. Clearing
    // empties the list; each armed alarm's waiter notices its id missing and
    // stands down by itself.
    [QGVAR(alarmAdd), { _this call FUNC(alarmAdd) }] call CBA_fnc_addEventHandler;
    [QGVAR(alarmsClear), {
        if (GVAR(alarms) isEqualTo []) exitWith {};
        GVAR(alarms) = [];
        publicVariable QGVAR(alarms);
    }] call CBA_fnc_addEventHandler;
};

// The server-wide ring. Every machine gets the event; FUNC(alarmRing) is what
// decides whether this particular pocket has a phone in it.
[QGVAR(alarmRing), { _this call FUNC(alarmRing) }] call CBA_fnc_addEventHandler;

// --- Phase 3 admin test commands -------------------------------------------

["hack.product", "render one product now: hack.product picture|sigint|jam|detect|target", {
    params ["_args", "_caller"];
    private _p = toLower (_args param [0, "picture"]);
    [_p, getPosASL _caller, side group _caller, _caller] call FUNC(serverPick);
    format ["ran product '%1'", _p]
}] call EFUNC(common,addDebugCommand);

["hack.spent", "list or clear the spent EW zone set: hack.spent [clear]", {
    params ["_args"];
    if (toLower (_args param [0, ""]) isEqualTo "clear") exitWith {
        GVAR(spentZones) = [];
        "spent zone set cleared"
    };
    private _s = missionNamespace getVariable [QGVAR(spentZones), []];
    if (_s isEqualTo []) then { "no zones spent yet" } else { _s joinString ", " }
}] call EFUNC(common,addDebugCommand);

// --- Phase 4 admin test commands -------------------------------------------

["hack.fail", "force the remote-hack failure package on me", {
    params ["_args", "_caller"];
    [_caller, getPosASL _caller] call FUNC(remoteHackFail);
    "failure package fired - check behaviour of nearby enemy groups / ew.zones for a temp zone"
}] call EFUNC(common,addDebugCommand);

["hack.tablet", "open the hacking tablet", {
    params ["_args", "_caller"];
    [_caller] call FUNC(tabletOpen);
    "tablet opened"
}, true] call EFUNC(common,addDebugCommand);

["hack.devices", "list what the tablet can currently see", {
    params ["_args", "_caller"];
    private _d = [_caller] call FUNC(scanDevices);
    if (_d isEqualTo []) exitWith { "nothing hackable in range" };
    (_d apply {
        _x params ["_o", "_kind", "_label", "_dist", "_range"];
        format ["%1 %2 %3m/%4m", _kind, _label, round _dist, round _range]
    }) joinString "  |  "
}, true] call EFUNC(common,addDebugCommand);

// Scanner: a keybind as well as the self-action, because a device you hold is
// something you flick on and off, not something you dig out of a menu.
if (hasInterface) then {
    ["Ghosts of Battle", QGVAR(scannerKey), ["Toggle Signal Scanner", "Shows or hides the hand-held scanner."],
    {
        [player] call FUNC(scannerToggle);
        true
    }, {false}, [0x16, [false, true, false]]] call CBA_fnc_addKeybind;   // Ctrl+U, rebindable
    // Off the H cluster: ACE medical lives there.

    // One key does all three jobs - press to start, press to stop, press again
    // to clear - so it can be worked without looking at the screen.
    ["Ghosts of Battle", QGVAR(timerKey),
    ["Scanner Stopwatch", "Start, stop, then clear the scanner's stopwatch. Needs the scanner on you; it keeps counting whether or not the screen is up."],
    {
        if !([player] call FUNC(hasScanner)) exitWith { false };
        call FUNC(scannerTimer);
        true
    }, {false}, [0x16, [false, true, true]]] call CBA_fnc_addKeybind;   // Ctrl+Shift+U, rebindable
    // Shares the scanner's key: one device, one letter, the modifier says which
    // part of it you are reaching for.

    // The alarm: press to add 5 minutes, stop pressing to arm, press to shut
    // it up when it rings. Server-wide by design - one person sets it and
    // every scanner in the mission goes off.
    ["Ghosts of Battle", QGVAR(alarmKey),
    ["Scanner Alarm", "Each press adds 5 minutes; it arms itself when you stop pressing. When it goes off, EVERY scanner on the server beeps. Press while ringing to silence yours. Needs the scanner on you."],
    {
        if !([player] call FUNC(hasScanner)) exitWith { false };
        call FUNC(scannerAlarm);
        true
    }, {false}, [0x16, [true, true, false]]] call CBA_fnc_addKeybind;   // Shift+Ctrl+U, rebindable

    // Unbound on purpose: wiping every alarm on the net is not something to
    // sit next to the key that sets one.
    ["Ghosts of Battle", QGVAR(alarmClearKey),
    ["Clear Scanner Alarms", "Cancels every armed scanner alarm, server-wide. Unbound by default."],
    {
        if !([player] call FUNC(hasScanner)) exitWith { false };
        GVAR(alarmRingUntil) = -1;
        if (GVAR(alarms) isEqualTo []) exitWith { true };
        [QGVAR(alarmsClear), []] call CBA_fnc_serverEvent;
        ["Alarm", "All alarms cleared.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
        true
    }, {false}, [0, [false, false, false]]] call CBA_fnc_addKeybind;

    // The handset in the equipment menu, for anyone who would rather point
    // than remember three chords. Every entry is the same code path as its
    // keybind - the menu is another way in, never another behaviour.
    private _scanner = [QGVAR(scannerMenu), "Signal Scanner", QPATHTOF(data\hackphone_icon.paa),
        {}, { [_player] call FUNC(hasScanner) }] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "ACE_Equipment"], _scanner] call ace_interact_menu_fnc_addActionToObject;

    private _menuPath = ["ACE_SelfActions", "ACE_Equipment", QGVAR(scannerMenu)];

    private _watch = [QGVAR(scannerStopwatch), "Stopwatch: Start / Stop / Clear", "",
        { call FUNC(scannerTimer) }, {true}] call ace_interact_menu_fnc_createAction;
    [player, 1, _menuPath, _watch] call ace_interact_menu_fnc_addActionToObject;

    // Only offered while a ring is actually going, so the menu never shows a
    // button that would do nothing.
    private _silence = [QGVAR(scannerSilence), "Silence Alarm", "",
        { GVAR(alarmRingUntil) = -1 }, { time < GVAR(alarmRingUntil) }] call ace_interact_menu_fnc_createAction;
    [player, 1, _menuPath, _silence] call ace_interact_menu_fnc_addActionToObject;

    // Presets rather than the keybind's +5 dial: a menu that has to be
    // reopened for every press can't dial, but it can hold a row of buttons.
    private _setAlarm = [QGVAR(scannerAlarmMenu), "Set Alarm (all scanners)", "",
        {}, {true}] call ace_interact_menu_fnc_createAction;
    [player, 1, _menuPath, _setAlarm] call ace_interact_menu_fnc_addActionToObject;

    {
        private _preset = [format [QGVAR(alarmPreset%1), _x], format ["%1 minutes", _x], "",
        {
            params ["", "", "_min"];
            [QGVAR(alarmAdd), [_min * 60, name player]] call CBA_fnc_serverEvent;
            ["Alarm", format ["Alarm armed: %1 min, all scanners.", _min],
                [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
        }, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
        [player, 1, _menuPath + [QGVAR(scannerAlarmMenu)], _preset] call ace_interact_menu_fnc_addActionToObject;
    } forEach [5, 10, 15, 30, 60];

    // Reposition, under the scanner's own menu with everything else. Deferred a
    // frame because a dialog created from inside an ACE interact statement dies
    // with the closing interact display - the reason the old entry did nothing.
    private _move = [QGVAR(scannerMoveHud), "Move Scanner Screen", "", {
        [{
            private _h = SCN_H * safeZoneH;
            private _w = _h * SCN_ASPECT * (call EFUNC(common,uiSquare));
            [SCN_HUD_ID, [_w / safeZoneW, SCN_H], [SCN_DEF_X, SCN_DEF_Y], "SCAN"] call EFUNC(common,hudMove);
        }, []] call CBA_fnc_execNextFrame;
    }, {true}] call ace_interact_menu_fnc_createAction;
    [player, 1, _menuPath, _move] call ace_interact_menu_fnc_addActionToObject;

    // A saved (or reset) position takes effect immediately on an open scanner
    // rather than waiting for the next toggle
    [QEGVAR(common,hudMoved), {
        params ["_id"];
        if (_id != SCN_HUD_ID) exitWith {};
        private _display = uiNamespace getVariable [QGVAR(scanner), displayNull];
        if (!isNull _display) then {
            [_display] call FUNC(scannerLayout);
        };
    }] call CBA_fnc_addEventHandler;
};

// Worth having precisely because the draw is meant to be opaque to the mission
// maker: this is the only way to see which candidates won without playing it.
["hack.targets", "list the resolved intel target pool", {
    private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
    if (_pool isEqualTo []) exitWith { "no intel targets registered" };
    private _active = missionNamespace getVariable [QGVAR(activeTarget), objNull];
    format ["%1 target(s), active %2: %3",
        count _pool,
        ["none", typeOf _active] select (!isNull _active),
        (_pool apply {
            format ["%1%2%3%4",
                typeOf _x,
                ["", " ACTIVE"] select (_x isEqualTo _active),
                ["", format [" hacks=%1", _x getVariable [QGVAR(hackCount), 0]]]
                    select (_x getVariable [QGVAR(intelMarked), false]),
                ["", " DOWN"] select (isNull _x || {!alive _x})]
        }) joinString ", "]
}, true] call EFUNC(common,addDebugCommand);

["hack.alarm", "scanner alarms: hack.alarm <minutes> arms one, ring fires one now, clear wipes them, no args lists", {
    params ["_args", "_caller"];
    private _arg = toLower (_args param [0, ""]);
    switch (true) do {
        case (_arg isEqualTo "ring"): {
            [QGVAR(alarmRing), [name _caller]] call CBA_fnc_globalEvent;
            "rang every scanner on the server"
        };
        case (_arg isEqualTo "clear"): {
            [QGVAR(alarmsClear), []] call CBA_fnc_serverEvent;
            "cleared all armed alarms"
        };
        case (_arg isNotEqualTo ""): {
            [QGVAR(alarmAdd), [(parseNumber _arg) * 60, name _caller]] call CBA_fnc_serverEvent;
            format ["armed an alarm for %1 min", parseNumber _arg]
        };
        default {
            private _a = missionNamespace getVariable [QGVAR(alarms), []];
            if (_a isEqualTo []) exitWith { "no alarms armed" };
            (_a apply {
                _x params ["_id", "_at", "_name"];
                format ["#%1 %2s (%3)", _id, round (_at - CBA_missionTime), _name]
            }) joinString "  |  "
        };
    };
}] call EFUNC(common,addDebugCommand);

["hack.scan", "print one scanner sweep", {
    ([] call FUNC(scannerRead)) params ["_ds", "_dd", "_dir", "_jam", "_chan", "_freq", "_mesh"];
    format ["drone %1 (%2) | jam %3 | mesh %4 | %5 %6",
        ["clear", "WARN", "ALERT"] select _ds,
        if (_dd < 0) then { "-" } else { format ["brg %1, %2m", _dir, round _dd] },
        _jam toFixed 2, _mesh, _chan, _freq]
}, true] call EFUNC(common,addDebugCommand);

// Read-only: the ISR flag belongs to the mission framework, so this reports
// what it sees and never writes it.
["hack.isr", "report your ISR operator flag", {
    private _var = EGVAR(common,isrVariable);
    format ["%1 on %2 = %3 (set by the mission, not by ghost)",
        _var, name player, player getVariable [_var, false]]
}, true] call EFUNC(common,addDebugCommand);
