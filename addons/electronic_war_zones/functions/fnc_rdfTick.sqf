#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_rdfTick

Description:
    The direction finder, running on its own. A set that is switched on is
    sweeping - there is nothing for an operator to press - so carrying one is
    the whole interaction and this loop does the rest.

    It reports on CHANGE rather than on every sweep. A live readout of a bearing
    that has not moved is noise, and noise is what gets a warning ignored; the
    interesting moments are picking a signal up, losing it, and the bearing or
    range shifting enough to be worth another look. RDF_MIN_GAP is a floor under
    all of that so walking across a boundary cannot chatter.

    The last reading is published to GVAR(rdfReading) whether or not it was
    announced, so a screen elsewhere can show it live without this loop having
    to know that screen exists.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */

if !([player] call FUNC(hasRdf)) exitWith {
    if (GVAR(rdfReading) isNotEqualTo []) then { GVAR(rdfReading) = [] };
};

private _now = [player] call FUNC(rdfScan);
private _was = GVAR(rdfReading);
GVAR(rdfReading) = _now;

// Worth saying out loud?
private _say = switch (true) do {
    case (_now isEqualTo [] && {_was isEqualTo []}): { "" };
    case (_now isEqualTo []): { "SIGNAL LOST" };
    case (_was isEqualTo []): { "SIGNAL" };
    default {
        _now params ["_id", "", "_bearing", "_band"];
        _was params ["_wasId", "", "_wasBearing", "_wasBand"];
        // Shortest way round the compass, so 355 -> 5 is 10 degrees not 350.
        private _turned = (abs (((_bearing - _wasBearing + 540) % 360) - 180)) >= RDF_NOTE_BEARING;
        ["", "SIGNAL"] select (_id != _wasId || _turned || {abs (_band - _wasBand) >= RDF_RANGE_STEP});
    };
};

if (_say isEqualTo "") exitWith {};
if (CBA_missionTime - GVAR(rdfSaidAt) < RDF_MIN_GAP) exitWith {};
GVAR(rdfSaidAt) = CBA_missionTime;

if (_say isEqualTo "SIGNAL LOST") exitWith {
    ["RDF", "Signal lost.", [0.61, 0.67, 0.73, 1]] call EFUNC(notify,notify);
};

_now params ["", "_label", "_bearing", "_band", "_strength"];
["RDF", format ["%1 - bearing %2, approx %3 m, signal %4%5",
    _label, _bearing, _band, _strength, "%"], [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
