#include "script_component.hpp"
/*
 * Author: Ghost
 * Static jammer props at each commander's objectives (new.md section 1.3).
 *
 * Hubs at the biggest objectives, terminals at the rest - the size of the
 * ground being guarded decides how much of the map goes quiet around it. The
 * prop IS the zone: hack it or destroy it and the zone dies immediately and
 * permanently, which is what makes the prop worth walking to.
 *
 * Both prop classes join the hacking tower pool by classname, so they are
 * hackable with no further wiring.
 *
 * Arguments: None
 *
 * Return Value:
 * Jammers placed <NUMBER>
 *
 * Public: No
 */

if (!isServer) exitWith {0};
if (isNil "ghost_adapter_alive_fnc_commanders") exitWith {0};

private _resolve = {
    params ["_a", "_b"];
    if (isClass (configFile >> "CfgVehicles" >> _a)) exitWith {_a};
    if (isClass (configFile >> "CfgVehicles" >> _b)) exitWith {_b};
    ""
};
private _hub = [JAM_PROP_HUB_A, JAM_PROP_HUB_B] call _resolve;
private _term = [JAM_PROP_TERM_A, JAM_PROP_TERM_B] call _resolve;
if (_hub isEqualTo "" || {_term isEqualTo ""}) exitWith {
    INFO("rugged terminal props are not in this mod set - no objective jammers");
    0
};

private _placed = 0;
private _at = [];

{
    _x params ["_side"];

    private _objs = [_side] call ghost_adapter_alive_fnc_objectivesFor;
    if (_objs isEqualTo []) then {continue};

    // biggest first - those are the ones worth a hub
    private _ranked = _objs apply { [-(_x select 2), _x] };
    _ranked sort true;
    _objs = _ranked apply { _x select 1 };

    // THE CAP IS THE REAL BOUND, not the share. A percentage has no ceiling:
    // on a map where a commander holds 173 objectives, 30% is 52 emitters, and
    // three commanders put 156 props on the map in one frame. The share still
    // shapes a small map; the cap is what stops a big one.
    private _want = (ceil ((count _objs) * GVAR(objectiveShare) / 100)) min GVAR(maxPerSide);
    private _built = 0;
    {
        if (_built >= _want) exitWith {};
        _x params ["", "_pos", "_size"];

        // A comms mast belongs BESIDE a building, so the clear radius is cut
        // right down: the default rejected every candidate in a town and
        // failed sixty-odd times in one run. The ring is widened for the same
        // reason - an objective's own footprint is often wall to wall.
        private _spots = [[], 1, createHashMapFromArray [
            ["centre", _pos],
            ["maxRange", ((_size max 120) min 400)],
            ["footprint", 2],
            ["clearRadius", 3],
            ["separation", 150],
            ["avoid", _at],
            ["avoidRadius", 150]
        ]] call EFUNC(common,findSite);

        // Still nowhere: put it at the objective rather than skipping. An
        // objective with no jammer because the ground is cluttered is a
        // silently missing system; one standing in an awkward spot is not.
        if (_spots isEqualTo []) then {
            _spots = [_pos getPos [30 + random 60, random 360]];
        };

        private _big = _built < ceil (_want / 2);
        ([_spots select 0,
          [GVAR(smallRadius), GVAR(largeRadius)] select _big,
          [_term, _hub] select _big,
          "jam"] call FUNC(spawnZoneAt)) params ["_id"];
        if (_id isEqualTo "") then {continue};

        _at pushBack (_spots select 0);
        _built = _built + 1;
        _placed = _placed + 1;
    } forEach _objs;

    INFO_2("side %1: %2 objective jammer(s)",_side,_built);
} forEach (call ghost_adapter_alive_fnc_commanders);

// One broadcast for the whole batch - see FUNC(publishZones).
[] call FUNC(publishZones);

_placed
