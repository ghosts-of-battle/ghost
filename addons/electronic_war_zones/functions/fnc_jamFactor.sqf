#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_jamFactor

Description:
    Jamming strength at a position, 0 (clear) to 1 (fully smothered). One shared
    calculator for every consumer - the TFAR and ACRE appliers, the jamming HUD,
    the RDF scanner, UAV jamming. They can disagree about what to DO with the
    number, never about what the number is.

    Concept adapted from WaldosMissionPack (Adam Waldie, MIT) - one shared
    propagation function rather than each system rolling its own. Implementation
    is ghost-original and works off the ghost zone registry.

    Every model feature is off by default, so with no new attributes set this
    returns exactly what the old inline distance maths returned: 1 inside the
    core, a linear ramp to 0 at the falloff edge.

Parameters:
    _pos     : ARRAY  - position to evaluate, ASL.
    _powerMw : NUMBER - transmitter power in mW, for burn-through. 0 = ignore.
                        Optional, default 0.
    _mode    : STRING - "radio" (default) or "uav"; "uav" only counts zones
                        flagged jamUavs.

Returns:
    ARRAY - [_factor, _zone] where _zone is the strongest contributing registry
            entry, or [] when nothing reaches. Callers that only want the number
            use `select 0`.

Example:
    ([getPosASL player, 500] call ghost_electronic_war_zones_fnc_jamFactor) select 0

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_pos", [0,0,0], [[]]], ["_powerMw", 0, [0]], ["_mode", "radio", [""]]];

private _reg = missionNamespace getVariable [QGVAR(jammers), []];
if (_reg isEqualTo []) exitWith { [0, []] };

private _best = 0;
private _bestZone = [];

{
    private _obj = _x param [ZONE_OBJ, objNull];
    private _isTemp = _x param [ZONE_TEMP, false];

    // A real emitter must be alive; an abstract zone has nothing to kill.
    if (!_isTemp && {isNull _obj || {!alive _obj}}) then { continue };

    private _zpos = if (isNull _obj) then { _x param [ZONE_POS, [0,0,0]] } else { getPosASL _obj };
    private _rEff = _x param [ZONE_REFF, 0];
    private _rFall = _x param [ZONE_RFALL, 0];
    private _model = _x param [ZONE_MODEL, createHashMap];

    if (_mode isEqualTo "uav" && {!(_model getOrDefault ["jamUavs", false])}) then { continue };

    private _d = _pos distance _zpos;
    if (_d > _rFall) then { continue };

    // --- base falloff: 1 in the core, ramping to 0 at the outer edge --------
    private _f = if (_d <= _rEff) then {
        1
    } else {
        private _p = (_d - _rEff) / ((_rFall - _rEff) max 1);
        if ((_model getOrDefault ["curve", "LINEAR"]) isEqualTo "INVSQ") then {
            (1 - _p) ^ 2
        } else {
            1 - _p
        };
    };

    // --- duty cycle: a pulsing jammer is only up part of the time ----------
    private _duty = _model getOrDefault ["duty", 100];
    if (_duty < 100) then {
        // Deterministic from the zone id and the clock, so every client that
        // asks at the same moment gets the same answer.
        private _phase = ((round CBA_missionTime) + (count (_x param [ZONE_ID, ""]))) % 10;
        if (_phase >= (_duty / 10)) then { _f = 0 };
    };

    // --- directional cone ---------------------------------------------------
    private _from = _model getOrDefault ["coneFrom", -1];
    if (_f > 0 && {_from >= 0}) then {
        private _arc = _model getOrDefault ["coneArc", 360];
        private _bearing = [_zpos, _pos] call BIS_fnc_dirTo;
        private _delta = abs (((_bearing - _from + 180) % 360) - 180);
        if (_delta > (_arc / 2)) then { _f = 0 };
    };

    // --- terrain occlusion --------------------------------------------------
    if (_f > 0 && {_model getOrDefault ["los", false]}) then {
        if (!(terrainIntersectASL [_zpos, _pos])) then {} else { _f = 0 };
    };

    // --- burn-through: a stronger set punches deeper into the field ---------
    if (_f > 0 && {_powerMw > 0} && {_model getOrDefault ["burnthrough", false]}) then {
        private _ref = (_model getOrDefault ["burnRef", 500]) max 1;
        _f = _f * ((_ref / (_powerMw max 1)) min 1);
    };

    if (_f > _best) then {
        _best = _f;
        _bestZone = _x;
    };
} forEach _reg;

[_best min 1, _bestZone]
