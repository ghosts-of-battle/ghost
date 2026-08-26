#include "script_component.hpp"
/*
 * Author: Ghost
 * The truth instrument for the AA-loses-its-AI hunt. Server only.
 *
 * WHY THIS EXISTS. Every documented path that could take a UAV-crewed static
 * has been read at the source and is guarded, and the turrets still come up
 * crewless in MP. The first build of this instrument armed at postInit and
 * arrived at a finished crime scene: the crew lived at object init and was
 * gone before the first tick. So this build arms at PREINIT, through class
 * event handlers - the traps are on every UAV crewman and every UAV-crewed
 * static the instant each one initializes, before any module or mission
 * script has had a frame to act.
 *
 * THE FINGERPRINT. A Deleted handler runs unscheduled, inside the very frame
 * of whatever called deleteVehicle - so diag_activeSQFScripts, logged right
 * there, lists the script files running at the moment of the kill. That is
 * as close to a stack trace as SQF gives.
 *
 * Log lines are prefixed [ghost_aawatch]. Remove this file, its PREP line and
 * the preInit call to stand the instrument down.
 *
 * Arguments: none (XEH preInit, after PREP)
 * Return Value: none
 *
 * Public: No
 */

if (!isServer) exitWith {};

GVAR(aaLog) = {
    diag_log text format ["[ghost_aawatch] %1 %2", diag_tickTime toFixed 2, _this];
};

// The scripts alive in this frame - the killer is on this list when a
// Deleted handler fires. Compact: file (line) per entry.
GVAR(aaScene) = {
    (diag_activeSQFScripts apply { format ["%1 @%2", _x select 1, _x select 3] }) joinString " | "
};

GVAR(aaArmMan) = {
    params ["_u"];
    if (_u getVariable [QGVAR(aaW), false]) exitWith {};
    _u setVariable [QGVAR(aaW), true];
    _u addEventHandler ["Deleted", {
        params ["_u"];
        format ["CREW DELETED %1 (in %2) scene: %3",
            typeOf _u, typeOf objectParent _u, call GVAR(aaScene)] call GVAR(aaLog);
    }];
    _u addEventHandler ["GetOutMan", {
        params ["_u", "", "_v"];
        format ["CREW GOT OUT %1 from %2 scene: %3",
            typeOf _u, typeOf _v, call GVAR(aaScene)] call GVAR(aaLog);
    }];
    format ["ARM MAN %1 group:%2 in:%3", typeOf _u, groupId group _u, typeOf objectParent _u] call GVAR(aaLog);
};

GVAR(aaArmVeh) = {
    params ["_veh"];
    if (_veh getVariable [QGVAR(aaW), false]) exitWith {};
    _veh setVariable [QGVAR(aaW), true];
    // Nil-safe: at preInit this addon may compile before the adapter does,
    // and an early-arming trap must not die on the one read that is optional.
    private _flags = if (isNil QEFUNC(adapter_alive,profileFlags)) then { [false, false] }
        else { [_veh] call EFUNC(adapter_alive,profileFlags) };
    format ["ARM %1 vname:'%2' pid:'%3' crew:%4 ignore:%5 cs:%6",
        typeOf _veh, vehicleVarName _veh, _veh getVariable ["profileID", ""],
        (crew _veh) apply {typeOf _x}, _flags select 0, _flags select 1] call GVAR(aaLog);
    _veh addEventHandler ["Deleted", {
        params ["_v"];
        format ["HULL DELETED %1 vname:'%2' crew:%3 scene: %4",
            typeOf _v, vehicleVarName _v, (crew _v) apply {typeOf _x},
            call GVAR(aaScene)] call GVAR(aaLog);
    }];
    { [_x] call GVAR(aaArmMan) } forEach crew _veh;
    _veh setVariable [QGVAR(aaState), [count crew _veh, vehicleVarName _veh, _veh getVariable ["profileID", ""]]];
    GVAR(aaWatched) pushBackUnique _veh;
};

GVAR(aaWatched) = [];

// Armed the instant each object initializes - true = retroactive for anything
// that somehow beat preInit, true = follow every future spawn.
["StaticWeapon", "init", {
    params ["_veh"];
    if (getNumber (configOf _veh >> "isUav") > 0) then {
        [_veh] call GVAR(aaArmVeh);
    };
}, true, [], true] call CBA_fnc_addClassEventHandler;

["CAManBase", "init", {
    params ["_u"];
    // Every UAV-AI crewman regardless of side or mod: the invisible-man crew
    // classes all carry the UAV-AI substring in this load order.
    if ((typeOf _u) find "UAV_AI" > -1) then {
        [_u] call GVAR(aaArmMan);
    };
}, true, [], true] call CBA_fnc_addClassEventHandler;

// Heartbeat: log state CHANGES only, every 10 s - crew count, name, profileID.
[{
    GVAR(aaWatched) = GVAR(aaWatched) select {!isNull _x};
    {
        private _now = [count crew _x, vehicleVarName _x, _x getVariable ["profileID", ""]];
        private _was = _x getVariable [QGVAR(aaState), _now];
        if (_now isNotEqualTo _was) then {
            format ["CHANGE %1 crew %2->%3 vname '%4'->'%5' pid '%6'->'%7'",
                typeOf _x, _was select 0, _now select 0,
                _was select 1, _now select 1, _was select 2, _now select 2] call GVAR(aaLog);
            _x setVariable [QGVAR(aaState), _now];
            { [_x] call GVAR(aaArmMan) } forEach crew _x;
        };
    } forEach GVAR(aaWatched);
}, 10, []] call CBA_fnc_addPerFrameHandler;

format ["online at preInit - traps armed by class event handler"] call GVAR(aaLog);
