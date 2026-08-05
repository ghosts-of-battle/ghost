#include "script_component.hpp"
/*
 * Author: Ghost
 * The post-contact QRF watcher (CBA PFH, one per module). A squad that wins a
 * fight and then sits on the spot gets answered: any enemy player outside the
 * mission's staging zone who has not moved 25 m since a nearby recent contact,
 * for the set number of minutes, has a QRF dispatched onto that contact -
 * infantry from the QRF distance, plus a drone if enabled. Moving on, or
 * stepping into staging, resets the clock; the same duration is the cooldown.
 *
 * Arguments (CBA PFH): 0: logic, 1: handle
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith {[_handle] call CBA_fnc_removePerFrameHandler};
if (!GVAR(qrfEnabled)) exitWith {};
if (isNil "ghost_drones_fleet") exitWith {};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};

private _side = _cfg get "side";
private _dbg = _cfg get "debug";
private _now = time;
private _loiter = GVAR(qrfLoiterMinutes) * 60;

// forget stale contacts
GVAR(contactMarks) = GVAR(contactMarks) select {_now - (_x select 1) < (GVAR(qrfContactWindow) * 60)};

{
    private _uid = getPlayerUID _x;
    if (_uid == "") then {_uid = netId _x};

    // in staging = off the hook
    if (!isNil "YMF_fnc_isInStagingZone" && {[_x] call YMF_fnc_isInStagingZone}) then {
        GVAR(idleTrack) deleteAt _uid;
        continue;
    };

    private _pos = position _x;
    private _entry = GVAR(idleTrack) getOrDefault [_uid, []];
    if (_entry isEqualTo []) then {
        GVAR(idleTrack) set [_uid, [_pos, _now, 0]];
        continue;
    };

    _entry params ["_lastPos", "_since", "_lastQrf"];

    if (_pos distance2D _lastPos > 25) then {
        GVAR(idleTrack) set [_uid, [_pos, _now, _lastQrf]];
        continue;
    };

    if (_now - _since < _loiter || {_now - _lastQrf < _loiter}) then {continue};

    // only answer a player who is sitting where a fight actually happened
    private _markIdx = GVAR(contactMarks) findIf {(_x select 0) distance2D _pos < QRF_CONTACT_RANGE};
    if (_markIdx == -1) then {continue};

    private _contact = (GVAR(contactMarks) select _markIdx) select 0;

    if (_dbg) then {
        diag_log text format ["[ghost_ambient_drones] QRF: %1 loitering %2 min on a contact - dispatching from %3m", name _x, round ((_now - _since) / 60), GVAR(qrfDistance)];
    };

    for "_i" from 1 to GVAR(qrfSquads) do {
        [_logic, _contact] call FUNC(qrfSquad);
    };

    // Drone escort: a rolled count between the min and max settings. The
    // weighted list is rebuilt per drone, so per-type caps fill up as the
    // flight is assembled rather than being read once and overshot.
    private _dMin = GVAR(qrfDronesMin) min GVAR(qrfDronesMax);
    private _dMax = GVAR(qrfDronesMin) max GVAR(qrfDronesMax);
    private _wanted = _dMin + floor (random (_dMax - _dMin + 1));
    private _target = _x;

    for "_i" from 1 to _wanted do {
        private _weighted = [];
        {
            private _type = _x;
            (_typeCfg get _type) params ["_classes", "_cap", "_prio", ""];
            if (_classes isEqualTo [] || {_cap <= 0} || {_prio <= 0}) then {continue};
            private _cur = {
                (_x getVariable ["ghost_drones_logic", objNull]) isEqualTo _logic &&
                {(_x getVariable ["ghost_drones_dtype", ""]) isEqualTo _type}
            } count ghost_drones_fleet;
            if (_cur >= _cap) then {continue};
            _weighted pushBack _type;
            _weighted pushBack _prio;
        } forEach keys _typeCfg;

        if (_weighted isEqualTo []) exitWith {};   // capped out - stop the flight here

        private _d = GVAR(qrfDistance);
        [_logic, _target, selectRandomWeighted _weighted, _d, _d * 0.9] call FUNC(spawnNearPlayer);
    };

    GVAR(idleTrack) set [_uid, [_lastPos, _since, _now]];
} forEach ((allPlayers - (entities "HeadlessClient_F")) select {
    alive _x && {(_side getFriend (side group _x)) < 0.6}
});
