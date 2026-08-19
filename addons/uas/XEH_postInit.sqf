#include "script_component.hpp"

if (!isServer) exitWith {};

// side text -> time the outage ends. Read by FUNC(ceilingFor).
GVAR(outages) = createHashMap;
// side text -> [profileID, ...] of the patrols that side is flying.
GVAR(patrols) = createHashMap;
// Sides whose drones ALiVE declined to profile, so the reason is logged once
// rather than once per airframe. See FUNC(topUp).
GVAR(unprofilable) = [];
// side text -> how many patrols FUNC(standDown) took back on the last tick.
// FUNC(planPatrols) spends it as extra launches and clears it: ground that
// emptied because everybody drove away refills at the speed it emptied, while
// ATTRITION still comes back as the one-a-tick drip it was made to be.
GVAR(standDownCredit) = createHashMap;
// Sides skipped for being on the players' team, said once each rather than
// every planning tick. See FUNC(planPatrols).
GVAR(friendlySaid) = [];

// THE MODULE IS THE ENABLE. This file only sets up state and the report
// command; FUNC(moduleController) is what arms the system, so a mission with
// no module placed gets nothing from this addon. GVAR(moduleUp) is declared in
// XEH_preInit, NOT here - see there for why.

["ghostuas", {
    [QGVAR(report), []] call CBA_fnc_serverEvent;
}, "all"] call CBA_fnc_registerChatCommand;

[QGVAR(report), {
    // Built with an explicit loop rather than `apply` over the hashmaps:
    // apply is an ARRAY command, and running it on a HashMap threw before
    // this could print anything at all - which is why the command looked
    // like it did nothing.
    private _fleet = [];
    {
        _fleet pushBack format ["%1=%2/%3", _x, [_x] call FUNC(livePatrols),
            [_x] call FUNC(ceilingFor)];
    } forEach [west, east, independent];

    private _out = [];
    {
        _out pushBack format ["%1 for %2s", _x, round (_y - CBA_missionTime)];
    } forEach GVAR(outages);

    private _txt = format ["patrols/ceiling %1 | outages %2",
        _fleet, ["none", str _out] select (_out isNotEqualTo [])];
    diag_log text format ["[ghost_uas] %1", _txt];
    [format ["UAS: %1", _txt]] remoteExec ["systemChat", 0];
}] call CBA_fnc_addEventHandler;
