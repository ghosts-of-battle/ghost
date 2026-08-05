#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_dispersionFor

Description:
    How wide the barrage falls. First match wins:

      1. an explicit barrage_dispersion above zero - the mission maker said so
      2. the named area marker's size - the objective already has a footprint
      3. an ALiVE objective inside the radius, if ALiVE is loaded
      4. 150 m

    The cascade exists so the shelling matches the shape of the objective without
    anyone having to measure it.

Parameters:
    _cfg   : HASHMAP - the module's shared config.
    _watch : HASHMAP - the objective being shelled.

Returns:
    NUMBER - dispersion radius in metres.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_cfg", "_watch"];

private _explicit = _cfg get "barrageDispersion";
if (_explicit > 0) exitWith { _explicit };

private _marker = _watch get "marker";
if (_marker isNotEqualTo "" && {(markerShape _marker) isNotEqualTo ""}) exitWith {
    private _size = markerSize _marker;
    (_size select 0) max (_size select 1)
};

// ALiVE is an enricher here too, never a requirement.
if (!isNil "ALIVE_fnc_getObjectives") then {
    private _pos = _watch get "pos";
    private _objs = [_pos, _watch get "radius"] call ALIVE_fnc_getObjectives;
    if (_objs isEqualType [] && {_objs isNotEqualTo []}) then {
        private _size = (_objs select 0) param [2, 0];
        if (_size isEqualType 0 && {_size > 0}) exitWith { _size };
    };
};

OW_DEFAULT_DISP
