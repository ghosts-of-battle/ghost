#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_enemyPresent

Description:
    Is anyone hostile still inside the objective? Dual scan, same rule as the
    hack products: the entity scan always runs, and if ALiVE happens to be loaded
    virtualized profiles are counted too.

    That second half matters here more than anywhere else - without it a garrison
    that has despawned because no player is close enough would leave the
    objective apparently empty, and it would capture itself from 300 m away.
    Contesting is exactly what a virtualized garrison should still do, even
    though (D25) it can never capture anything itself.

Parameters:
    _pos    : ARRAY  - objective centre.
    _radius : NUMBER - metres.
    _side   : SIDE   - the capturing side; anything hostile to it counts.

Returns:
    BOOL - true if the objective is contested.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_pos", "_radius", "_side"];

// Entities first - cheap, and decisive when it finds something.
private _hit = allUnits findIf {
    alive _x
    && {side (group _x) isNotEqualTo civilian}
    && {_side isEqualTo sideUnknown || {(side (group _x)) getFriend _side < 0.6}}
    && {(getPosATL _x) distance2D _pos <= _radius}
};
if (_hit > -1) exitWith { true };

if (isNil "ALIVE_fnc_getNearProfiles") exitWith { false };

private _sides = if (_side isEqualTo sideUnknown) then {
    ["EAST", "WEST", "GUER"]
} else {
    switch (_side) do {
        case west: { ["EAST"] };
        case east: { ["WEST"] };
        default { ["EAST", "WEST"] };
    };
};

private _profiles = [_pos, _radius, _sides] call ALIVE_fnc_getNearProfiles;
_profiles isEqualType [] && {_profiles isNotEqualTo []}
