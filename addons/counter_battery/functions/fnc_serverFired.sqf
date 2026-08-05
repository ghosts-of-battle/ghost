#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_serverFired

Description:
    Server end of a gun firing. Decides, once per battery watching that side,
    whether this shot buys a fix.

    All the state - shots counted, cooldown - lives on the gun rather than in a
    registry, so a gun that is destroyed or deleted takes its own bookkeeping
    with it and nothing has to be cleaned up.

Parameters:
    _veh   : OBJECT - the gun.
    _side  : SIDE   - whose it is.
    _pos   : ARRAY  - where it fired from.
    _ammo  : STRING - what it fired.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_veh", "_side", "_pos", "_ammo"];
if (isNull _veh) exitWith {};

{
    private _cfg = _x;
    private _dbg = _cfg get "debug";

    // Every branch below reports when debug is on. The interesting question when
    // this feature "does not work" is almost never why it fired - it is why it
    // did NOT, and a radar that silently declines gives a tester nothing to go on.
    private _say = {
        if (_dbg) then {
            diag_log text format ["[ghost_counter_battery] %1: %2", typeOf _veh, _this];
        };
    };

    private _watched = _cfg get "side";
    if (_watched isNotEqualTo sideUnknown && {_watched isNotEqualTo _side}) then {
        format ["ignored - fired by %1, this radar hunts %2", _side, _watched] call _say;
        continue;
    };

    // Still ringing from the last time this gun was found.
    private _until = _veh getVariable [QGVAR(cooldownUntil), -1];
    if (CBA_missionTime < _until) then {
        format ["cooling down, %1s left", round (_until - CBA_missionTime)] call _say;
        continue;
    };

    private _shots = (_veh getVariable [QGVAR(shots), 0]) + 1;
    _veh setVariable [QGVAR(shots), _shots];
    if (_shots < (_cfg get "shots")) then {
        format ["tracking %1/%2 rounds", _shots, _cfg get "shots"] call _say;
        continue;
    };

    // Enough arc to work with. Whether the fix is any good is another matter -
    // reset the count either way, so a miss costs the radar the same tracking
    // work a hit did.
    _veh setVariable [QGVAR(shots), 0];
    _veh setVariable [QGVAR(cooldownUntil), CBA_missionTime + (_cfg get "cooldown")];

    if (random 100 >= (_cfg get "chance")) then {
        format ["solution FAILED the %1%2 roll - count reset, cooling %3s",
            _cfg get "chance", "%", _cfg get "cooldown"] call _say;
        continue;
    };

    // Where the fix says the gun is, which is not quite where it is.
    private _acc = _cfg get "accuracy";
    private _a = random 360;
    private _r = sqrt (random 1) * _acc;
    private _fix = [(_pos select 0) + _r * sin _a, (_pos select 1) + _r * cos _a, 0];

    // A grid already booked. Two guns fifty metres apart are two fixes and would
    // draw two full missions onto the same piece of ground - twice the shells,
    // for no more information than one fix bought.
    private _dupe = (GVAR(booked) findIf {
        _x params ["_bpos", "_bat"];
        (CBA_missionTime < _bat) && {(_bpos distance2D _fix) < (_cfg get "dedupe")}
    }) > -1;
    if (_dupe) then {
        format ["grid %1 already has a mission inbound - not doubling up",
            mapGridPosition _fix] call _say;
        continue;
    };
    GVAR(booked) pushBack [_fix, CBA_missionTime + (_cfg get "delay") + (_cfg get "window") + 30];
    GVAR(booked) = GVAR(booked) select { CBA_missionTime < (_x select 1) };

    // A crew that has been found should move, whether or not a player is driving
    // it. Warning the crew is only a mechanic for players; this is the same
    // mechanic for everyone else, and without it AI guns simply sit and die.
    if (_cfg get "displace") then { [_veh, _cfg] call FUNC(displace) };

    [{ _this call FUNC(retaliate) }, [_fix, _cfg, _side], _cfg get "delay"] call CBA_fnc_waitAndExecute;

    // The warning is the point of the delay. Told that a radar has them, a crew
    // can shoot and scoot; told nothing, they just die to something they never
    // saw and learn only that artillery is unlucky.
    if (_cfg get "warn") then {
        [QGVAR(warn), ["Counter-Battery", "Enemy radar has your firing position. Displace.", [1, 0.3, 0.3, 1], _side]]
            call CBA_fnc_globalEvent;
    };

    format ["FIX at grid %1, reply lands grid %2 (%3m off), %4 rnd in %5s",
        mapGridPosition _pos, mapGridPosition _fix, round _r,
        _cfg get "rounds", _cfg get "delay"] call _say;

    // A marker on the fix, not on the gun. Seeing the two apart is the only way
    // to judge whether Fix Error is set somewhere useful - on top of the gun is
    // a death sentence, half a grid away is a warning shot.
    if (_dbg) then {
        GVAR(dbgSeq) = (missionNamespace getVariable [QGVAR(dbgSeq), 0]) + 1;
        private _m = createMarker [format [QGVAR(fix_%1), GVAR(dbgSeq)], _fix];
        _m setMarkerShapeLocal "ELLIPSE";
        _m setMarkerBrushLocal "Border";
        _m setMarkerSizeLocal [_cfg get "spread", _cfg get "spread"];
        _m setMarkerColor "ColorRed";
        [{ deleteMarker _this }, _m, (_cfg get "delay") + (_cfg get "window") + 20]
            call CBA_fnc_waitAndExecute;
    };
} forEach GVAR(batteries);
