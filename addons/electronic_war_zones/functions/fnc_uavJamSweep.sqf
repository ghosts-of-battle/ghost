#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_uavJamSweep

Description:
    Server sweep: drones sitting in a UAV-flagged jamming field lose their datalink
    and stop flying themselves. Only zones with jam_uavs set count, so this is
    opt-in per mission and existing EW missions are untouched.

    Freeze, not kill (contrast the hacking addon's Down Drone, which deletes the
    airframe outright - D31 keeps them separate). A frozen drone is disabled but
    intact: it drifts, it can be shot down, and it comes back the moment the field
    goes away or the emitter dies.

    Friendly airframes are immune: a side's own EW zones never jam its own drones,
    which is what keeps the ew-zones response drones flying through their own net.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

private _reg = missionNamespace getVariable [QGVAR(jammers), []];
private _anyUav = _reg findIf {
    (_x param [ZONE_MODEL, createHashMap]) getOrDefault ["jamUavs", false]
};
if (_anyUav < 0) exitWith {};   // nothing flagged; do no work at all

{
    private _uav = _x;
    if (!alive _uav) then { continue };
    if !(unitIsUAV _uav) then { continue };

    // The jammers belong to the hunted side's enemy; never jam your own.
    private _uavSide = side (group (effectiveCommander _uav));
    if (_uavSide isEqualTo GVAR(droneSide)) then { continue };

    private _factor = ([getPosASL _uav, 0, "uav"] call FUNC(jamFactor)) select 0;
    private _frozen = _uav getVariable [QGVAR(uavFrozen), false];

    if (_factor >= UAV_FREEZE_FACTOR) then {
        if (_frozen) then { continue };
        _uav setVariable [QGVAR(uavFrozen), true, true];
        {
            _uav disableAI _x;
        } forEach ["MOVE", "TARGET", "AUTOTARGET", "FSM"];
        // Cut any player who is flying it: the link is gone, not the aircraft.
        {
            if (isPlayer _x) then {
                [_x, _uav] remoteExec [QFUNC(uavJamLostLink), _x];
            };
        } forEach (UAVControl _uav);
        INFO_2("EW: UAV %1 jammed (factor %2)",typeOf _uav,_factor toFixed 2);
    } else {
        if (!_frozen) then { continue };
        _uav setVariable [QGVAR(uavFrozen), false, true];
        {
            _uav enableAI _x;
        } forEach ["MOVE", "TARGET", "AUTOTARGET", "FSM"];
        INFO_1("EW: UAV %1 link restored",typeOf _uav);
    };
} forEach (allUnitsUAV + (vehicles select { unitIsUAV _x }));
