#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_remoteHackFail

Description:
    Server end of a failed remote hack. Two independent rolls (D11):

    1. Alert - always: every enemy group with a unit inside the alert radius of
       the hacker learns exactly where the hacker is and goes to COMBAT.
    2. Jamming - jam_chance: a temporary zone centred on the HACKER's position,
       spawned through the electronic_war_zones public API so it jams, scans and
       expires exactly like a module zone. Silently skipped without ew-zones.

    Deliberately NO drone dispatch (D12) - that stays the price of hacking EW
    emitters, not people.

Parameters:
    _hacker : OBJECT - who failed.
    _pos    : ARRAY  - the hacker's position at failure time.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_hacker", "_pos"];

if (isNull _hacker) exitWith {};

private _alertR = missionNamespace getVariable [QGVAR(rh_alert_radius), RH_ALERT_DEF];
private _mySide = side group _hacker;
private _alerted = 0;

{
    if ((side _x) getFriend _mySide >= 0.6) then { continue };
    if (side _x isEqualTo civilian) then { continue };
    if ((units _x findIf { alive _x && {(getPosASL _x) distance2D _pos <= _alertR} }) < 0) then { continue };

    _x reveal [_hacker, 4];
    _x setBehaviour "COMBAT";
    _alerted = _alerted + 1;
} forEach allGroups;

private _jamChance = missionNamespace getVariable [QGVAR(rh_jam_chance), RH_JAM_CHANCE_DEF];
private _jammed = "";
if (random 100 < _jamChance && {!isNil "ghost_electronic_war_zones_fnc_spawnTempZone"}) then {
    private _rMin = missionNamespace getVariable [QGVAR(rh_jam_radius_min), RH_JAM_MIN_DEF];
    private _rMax = (missionNamespace getVariable [QGVAR(rh_jam_radius_max), RH_JAM_MAX_DEF]) min RH_JAM_MAX_CAP;
    private _radius = random [_rMin, (_rMin + _rMax) / 2, _rMax];
    private _duration = missionNamespace getVariable [QGVAR(rh_jam_duration), RH_JAM_DURATION_DEF];
    _jammed = [_pos, _radius, _duration] call ghost_electronic_war_zones_fnc_spawnTempZone;
};

INFO_3("Hacking: remote hack failed by %1 - %2 groups alerted, temp zone '%3'",name _hacker,_alerted,_jammed);
