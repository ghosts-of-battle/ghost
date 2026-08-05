#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_rdfScan

Description:
    Handheld radio direction finding. Sweeps the zone registry for the nearest
    live emitter in scan range and returns a bearing, a coarse range band and a
    signal strength - move and take another reading and the bearings cross on
    the emitter.

    This is the fieldcraft counterpart to the hack menu's Locate Enemy Jammer:
    the hack buys a circle instantly, the RDF makes an EW team hunt for it. Both
    read the same registry through the same public API, so they can never
    disagree about where an emitter is.

    Bearing carries a few degrees of error on purpose - one reading narrows the
    search, it does not solve it.

    A set is either on or it is not. Carrying one means it is sweeping, so this
    is driven by FUNC(rdfTick) rather than by a menu entry, and it only computes
    - reporting is the caller's job, because the passive loop reports on change
    and the debug command reports every time.

Parameters:
    _unit : OBJECT - the operator.

Returns:
    ARRAY - [_id, _label, _bearing, _band, _strength], or [] if nothing is in
            range.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _range = missionNamespace getVariable [QGVAR(rdfScanRange), RDF_RANGE_DEF];
private _pos = getPosASL _unit;

// Everything in the registry is fair game (D29) - jammers, detectors and the
// temporary zones a failed remote hack leaves behind.
private _zones = ["all", [], true] call FUNC(getZones);
private _inRange = _zones select { (_pos distance2D (_x select 2)) <= _range };

if (_inRange isEqualTo []) exitWith { [] };

private _best = _inRange select 0;
private _bestD = _pos distance2D (_best select 2);
{
    private _d = _pos distance2D (_x select 2);
    if (_d < _bestD) then { _bestD = _d; _best = _x };
} forEach _inRange;

_best params ["_id", "_type", "_zpos", "_radius", "_isTemp"];

private _bearing = [_pos, _zpos] call BIS_fnc_dirTo;
_bearing = (_bearing - RDF_BEARING_FUZZ + random (2 * RDF_BEARING_FUZZ) + 360) % 360;

private _band = round (_bestD / RDF_RANGE_STEP) * RDF_RANGE_STEP;
private _strength = round (100 * (1 - ((_bestD / _range) min 1)));

private _label = switch (_type) do {
    case "detect": { "DETECTOR NET" };
    default { ["JAMMER", "JAMMER (transient)"] select _isTemp };
};

[_id, _label, round _bearing, _band, _strength]
