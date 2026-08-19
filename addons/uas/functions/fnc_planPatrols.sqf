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

// EMPTY GROUND FIRST. Every tick begins by taking back the patrols nobody is
// near any more, so the ceilings computed below are counting airframes that
// still have an audience - see FUNC(standDown) and UAS_PLAYER_RANGE.
private _back = call FUNC(standDown);
if (_back > 0) then {
    INFO_1("%1 patrol(s) stood down - nobody within range of their ground",_back);
};

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
    // over the red TAOR twice.
    //
    // THROUGH THE GATE, NOT A TAOR TEST OF ITS OWN. This read the side's
    // markers straight off the adapter and filtered on them - and skipped the
    // filter ENTIRELY when the side had none:
    //
    //     if (_taor isNotEqualTo []) then { ...filter... };
    //
    // which is the identical "no TAOR, no gate" hole that
    // EFUNC(common,taorGate) was written to close for spawn positions, left
    // standing here. A commander that declares no placements got every
    // objective on its list, enemy ground included, and green patrols orbiting
    // inside the red TAOR is what that looks like from the map screen. The RPT
    // agrees: fifty-five patrols launched and not one gate refusal all
    // mission, because the only position ever offered to the gate was the
    // stand-off spawn point - never the objective the drone was sent to circle.
    //
    // THE ORBIT CENTRE IS THE POSITION THAT MATTERS. FUNC(topUp) gates where
    // the airframe appears, but it is this position that becomes the LOITER
    // waypoint, and the drone spends its whole life over it inside an
    // 800 m circle. Gating the spawn and not the orbit is gating the doorway
    // and not the room.
    //
    // The gate already holds both halves of the rule - inside your own ground
    // when you have declared some, outside everybody ELSE's when you have not -
    // so asking it here is one rule in one place rather than a second opinion.
    //
    // QUIETLY: this is a bulk filter over every objective a commander holds and
    // the gate's warning is written for a single refused spawn. The count is
    // said once instead.
    if (GVAR(patrolOver) == 1) then {
        private _all = count _objs;
        _objs = _objs select {
            [_side, _x select 1, "uas patrol", [], [], true] call EFUNC(common,taorGate)
        };

        // Hoisted: a comma inside a macro argument reads as an argument
        // separator.
        private _dropped = _all - (count _objs);
        if (_dropped > 0) then {
            INFO_3("%1: %2 of %3 objective(s) are not this side's ground - not patrolled",_side,_dropped,_all);
        };
    };

    // NOBODY THERE, NOTHING FLYING. A patrol exists to be met, and one
    // orbiting a base four kilometres from the nearest player is an airframe,
    // a crew and an AI pilot being simulated for an audience of nobody. The
    // ground is not given up - it is simply not patrolled until somebody is
    // close enough for the patrol to mean something, and FUNC(standDown)
    // takes them back when everybody leaves.
    private _all = count _objs;
    _objs = _objs select {[_x select 1] call FUNC(playerNear)};

    // Hoisted: a comma inside a macro argument reads as an argument separator.
    private _far = _all - (count _objs);
    if (_far > 0) then {
        INFO_3("%1: %2 of %3 objective(s) have no player within range - not patrolled",_side,_far,_all);
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
    //
    // A STAND-DOWN IS NOT A LOSS, AND THE DRIP MUST NOT TREAT IT AS ONE. With
    // the proximity rule in, a section that drives from one valley to the next
    // empties the first and arrives in an empty second - and at one airframe a
    // minute the new ground would take ten minutes to have any air over it,
    // which is a section arriving, fighting and leaving before the first drone
    // shows up. FUNC(standDown) hands back a credit for exactly what it
    // retired, so ground refills at the speed it emptied while attrition still
    // drips. The credit is spent here and cleared, whether it was usable or
    // not: it is worth one tick.
    private _credit = GVAR(standDownCredit) getOrDefault [str _side, 0];
    GVAR(standDownCredit) set [str _side, 0];

    if (isNil QGVAR(seeded)) then { GVAR(seeded) = [] };
    if ((str _side) in GVAR(seeded)) then {
        _room = _room min (UAS_REGEN_PER_TICK + _credit);
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
