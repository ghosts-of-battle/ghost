#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_sweep

Description:
    Hangs a Fired handler on any artillery piece that does not have one yet.

    Sweeping rather than hooking a class event handler is the whole design
    decision here. A Fired handler on a base class broad enough to cover
    artillery also covers tanks and, one level up, every rifleman - and it would
    then run on every shot fired in the mission just to discard almost all of
    them. Artillery is a handful of vehicles; finding them every fifteen seconds
    costs nothing next to that, and it picks up guns Zeus dropped a moment ago.

    Each gun is hooked once and remembered, so a sweep over a battery that is
    already hooked does no work at all.

    Runs on EVERY machine, and hooks every gun regardless of who owns it. A
    handler on a gun that is not local simply never fires, so the cost of the
    extra hooks is nothing and the benefit is that locality changing hands - a
    player climbing into an AI mortar - needs no bookkeeping at all.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */

private _extra = GVAR(extraClasses);

{
    private _veh = _x;
    if (_veh getVariable [QGVAR(hooked), false]) then { continue };
    if !([_veh, _extra] call FUNC(isArtillery)) then { continue };

    _veh setVariable [QGVAR(hooked), true];
    _veh addEventHandler ["Fired", { _this call FUNC(onFired) }];

    // Logged on the server only, and only with a radar in debug: a gun that was
    // never hooked is the other half of "why did nothing happen", and it cannot
    // be diagnosed from the firing end.
    if (isServer && {(GVAR(batteries) findIf {_x get "debug"}) > -1}) then {
        diag_log text format ["[ghost_counter_battery] hooked %1 (%2) at grid %3",
            typeOf _veh, side _veh, mapGridPosition (getPosATL _veh)];
    };
} forEach vehicles;
