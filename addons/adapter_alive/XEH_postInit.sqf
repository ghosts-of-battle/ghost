#include "script_component.hpp"

// SLICE ZERO (docs/new.md section 9). Four probes.
//
// Registered as CBA chat commands, NOT through ghost's own "#ghost " debug
// channel: that channel is gated on ghost_common_isAdmin, which is only set
// after a successful #login, which needs CBA's IS_ADMIN - and IS_ADMIN is
// false in an editor preview. A probe that cannot run in the environment the
// mission is actually tested in is worthless, so these use the same mechanism
// ghost's own #login uses and work in singleplayer, hosted and dedicated.
//
//   #ghostreads     commanders, controltype, TAORs, AA pool
//   #ghostsquad     spawn -> profile -> waypoint
//   #ghostfire      one ARTY_REQUEST
//   #ghostcapture   hold a test objective, see the capture event
//
// Typed on a client; the work happens on the server, where ALiVE's registries
// live. Written out one by one rather than generated: a macro inside a format
// string is not expanded by the preprocessor, and the generated version looked
// correct while registering nothing.

if (hasInterface) then {
    ["ghostreads", {
        [QGVAR(run), ["alive.reads", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;

    ["ghostsquad", {
        [QGVAR(run), ["alive.squad", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;

    ["ghostfire", {
        [QGVAR(run), ["alive.fire", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;

    ["ghostcapture", {
        [QGVAR(run), ["alive.capture", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;

    // Not slice zero - a read-only answer to ALiVE's repeating combat-simulator
    // errors, which name ALiVE's own file and never the vehicle behind them.
    ["ghostdamage", {
        [QGVAR(run), ["alive.damage", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;

    // Server frame rate and what is on the map, on demand. Diagnosing "the
    // lag" from an RPT after the run is guesswork; this measures it while it
    // is happening.
    ["ghostperf", {
        [QGVAR(run), ["perf", player]] call CBA_fnc_serverEvent;
    }, "all"] call CBA_fnc_registerChatCommand;
};

if (!isServer) exitWith {};

[] call FUNC(ready);

[QGVAR(run), {
    params [["_which", "", [""]], ["_caller", objNull, [objNull]]];
    [_which, _caller] call FUNC(probe);
}] call CBA_fnc_addEventHandler;

// POOL SIZES, PUBLISHED. A device draws its own buttons and cannot ask the
// server what is worth offering, so the two counts go public on a slow beat.
// Counts only - never the contents, which stay server-side where a client
// cannot read the enemy's positions out of a variable.
[QGVAR(ready), {
    [{
        missionNamespace setVariable
            // Ghost's own air-defence sites count towards the button gate too,
            // or a mission whose only AA came from that module would never see
            // LOCATE AA offered. Read here rather than folded into
            // FUNC(aaTargets): that function is the ALiVE read and stays that.
            [QGVAR(aaCount),
                (count (call FUNC(aaTargets)))
                + (count (missionNamespace getVariable [QEGVAR(airdefence,sites), []])),
                true];
        missionNamespace setVariable
            [QGVAR(artyCount), count ([sideUnknown] call FUNC(artyTargets)), true];

        // THE CLIENT-SAFE SUMMARY. FUNC(commanders) and FUNC(taorFor) read
        // ALiVE's server-side hashes, so on a dedicated client both came
        // back empty - which made hacking's taorType answer "" and every
        // hack offer NO products to remote players. Sides, control types,
        // factions and marker NAMES go public - never positions, never the
        // instances. Both functions fall back to these when they cannot ask.
        missionNamespace setVariable [QGVAR(commandersPub),
            (call FUNC(commanders)) apply {
                _x params ["_s", "_t", "_f"];
                [_s, _t, _f]
            }, true];
        missionNamespace setVariable [QGVAR(taorPub),
            [west, east, independent] apply {
                [_x] + ([_x] call FUNC(taorFor))
            }, true];
    }, POOL_TICK, []] call CBA_fnc_addPerFrameHandler;

    // LAMBS OFF FOR EVERY COMBAT-SUPPORT AIRFRAME. ALiVE tags each asset it
    // stands up with ALIVE_CombatSupport, so that tag is the whole list -
    // no guessing at classes and nothing to keep in step when a mission
    // changes its airframes. LAMBS' infantry reflexes make a transport
    // break off a pickup to take cover and a CAS pass turn into an
    // autonomous manoeuvre; a support aircraft flies the task it was given.
    //
    // On the same slow beat as the pools, because assets respawn and
    // rejoin: an airframe that came back after being shot down is a new
    // object with LAMBS' defaults on it. FUNC(lambsOff) marks what it has
    // done, so this only ever pays for the new ones.
    [{
        {
            [_x] call EFUNC(common,lambsOff);
        } forEach (vehicles select {
            _x getVariable ["ALIVE_CombatSupport", false]
            && {!(_x getVariable [QEGVAR(common,lambsOff), false])}
        });
    }, POOL_TICK, []] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;
