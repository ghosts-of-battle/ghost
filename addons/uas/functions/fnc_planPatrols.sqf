#include "script_component.hpp"
/*
 * Author: Ghost
 * Puts each side's patrols over the ENEMY's objectives, as PROFILES.
 *
 * Reconnaissance flies where the enemy is. Every side used to orbit its own
 * ground, which meant west drones over west towns and east drones over east
 * ones - two air forces watching their own people and never meeting anybody.
 * A side's eyes belong over the ground it is trying to see into, and that is
 * also where its drones become something players have to deal with.
 *
 * The module can put them back over their own ground (overwatch) for missions
 * that want that, and a side with no enemy objectives on the map falls back
 * to its own rather than losing its air.
 *
 * A profiled drone is not a flying object - it is a record that walks the map
 * and becomes real only when players are near enough for ALiVE to spawn it.
 * That is the whole reason patrols are profiled rather than flown: an empty
 * map costs nothing, and the drone a section actually meets was always there.
 *
 * Arguments: None
 *
 * Return Value: None
 *
 * Public: No
 */

if (isNil "ghost_adapter_alive_fnc_commanders") exitWith {};

private _cmds = call ghost_adapter_alive_fnc_commanders;

// THIS MODULE IS CALLED "ENEMY DRONES". It was arming every commander ALiVE
// reported, the players' own side included - the RPT shows nine WEST patrols
// and seven GUER ones up against a BLUFOR mission, which is where the blue
// drones the user photographed over the red TAOR came from. A side friendly to
// the players gets none.
private _mine = call EFUNC(common,playerSides);

{
    _x params ["_side", "", "_faction"];

    if (_mine isNotEqualTo [] && {(_mine findIf {_side getFriend _x >= 0.6}) > -1}) then {
        if !(_side in GVAR(friendlySaid)) then {
            GVAR(friendlySaid) pushBack _side;
            INFO_1("%1 is friendly to the players - no enemy drones flown for it",_side);
        };
        continue;
    };

    // THE ENEMY'S GROUND, not this side's. Hostility is asked of the engine
    // rather than assumed from the sides - a mission can set west and
    // independent friendly, and drones should not patrol an ally's towns.
    private _objs = [];
    if (GVAR(patrolOver) == 0) then {
        {
            _x params ["_oside"];
            if (_oside isEqualTo _side) then {continue};
            if (_side getFriend _oside >= 0.6) then {continue};
            _objs append ([_oside] call ghost_adapter_alive_fnc_objectivesFor);
        } forEach _cmds;
    };

    // own ground: asked for, or nobody hostile has any
    if (_objs isEqualTo []) then {
        _objs = [_side] call ghost_adapter_alive_fnc_objectivesFor;
    };

    // OWN GROUND MEANS INSIDE THE TAOR, literally - an attacker's objective
    // list reaches into enemy territory, which is how blue drones ended up
    // over the red TAOR twice. With a TAOR marker defined, own-ground
    // patrols never leave it.
    if (GVAR(patrolOver) == 1) then {
        ([_side] call ghost_adapter_alive_fnc_taorFor) params [["_taor", []]];
        if (_taor isNotEqualTo []) then {
            _objs = _objs select {
                private _p = _x select 1;
                (_taor findIf {_p inArea _x}) > -1
            };
        };
    };

    if (_objs isEqualTo []) then {continue};

    private _have = [_side] call FUNC(livePatrols);
    private _room = ([_side] call FUNC(ceilingFor)) - _have;
    if (_room <= 0) then {continue};

    // Losses come back as a DRIP, not a flood. Keyed on a seeded flag, not
    // on the live count - a side whose whole fleet dies to a jammer sits at
    // zero, and "zero means fill everything" was the rain: ten fresh
    // airframes a minute into the same jammer bubble. The FIRST plan still
    // fills the ceiling at once, so mission start is unchanged.
    if (isNil QGVAR(seeded)) then { GVAR(seeded) = [] };
    if ((str _side) in GVAR(seeded)) then {
        _room = _room min UAS_REGEN_PER_TICK;
    } else {
        GVAR(seeded) pushBack (str _side);
    };

    // Biggest objectives first: the ground worth guarding gets the eyes.
    private _ranked = _objs apply { [-(_x select 2), _x] };
    _ranked sort true;

    private _made = 0;
    {
        if (_made >= _room) exitWith {};
        _x select 1 params ["", "_pos"];
        if ([_side, _faction, _pos] call FUNC(topUp)) then { _made = _made + 1 };
    } forEach _ranked;

    // Hoisted: a comma inside a macro argument reads as an argument separator.
    private _up = [_side] call FUNC(livePatrols);
    private _ceil = [_side] call FUNC(ceilingFor);
    INFO_3("side %1: %2 patrol(s) up, ceiling %3",_side,_up,_ceil);
} forEach _cmds;
