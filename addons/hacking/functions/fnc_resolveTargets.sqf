#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_resolveTargets

Description:
    Settles every intel pool once all the modules have registered. Runs a frame
    after the last of them, so it can see the full set of parents, spots and
    directly-synchronised objects at once - which is the only moment at which the
    draw can be made fairly.

    Per pool:
      - candidates are the objects synchronised to the module, plus any Intel
        Target Spots synchronised to it;
      - candidates are grouped BY CLASS, and the limit applies to each group
        separately. Twenty spots, ten of one class and ten of another, with a
        limit of five gives five of each. The mix is designed; only the placement
        is random;
      - Class Limits names per-class exceptions; anything unnamed uses Pick Per
        Class. 0, or a number at or above the group size, takes the whole group -
        which is the old behaviour, so a mission that sets neither sees no change;
      - winners are populated and registered; losers are left standing as decoys
        unless Clear Unpicked is on.

    Leaving losers in place is the default on purpose. Twenty crates of which
    eight are real is a better search than eight crates and twelve empty fields,
    and it costs nothing to keep them.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

GVAR(resolvePending) = false;

private _pools = missionNamespace getVariable [QGVAR(pendingPools), []];
private _spots = missionNamespace getVariable [QGVAR(pendingSpots), []];
GVAR(pendingPools) = [];
GVAR(pendingSpots) = [];

if (_pools isEqualTo [] && {_spots isEqualTo []}) exitWith {};

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
private _claimed = [];

// Turns one winning candidate into the objects that go in the pool: a spot
// spawns or hands over its payload, a plain object is already the payload.
private _payloadOf = {
    params ["_cand"];
    if !(_cand getVariable [QGVAR(isSpot), false]) exitWith { [_cand] };

    private _cls = _cand getVariable ["spawn_class", ""];
    if (_cls isEqualTo "") exitWith {
        (synchronizedObjects _cand) select { !(_x isKindOf "Logic") }
    };
    if !(isClass (configFile >> "CfgVehicles" >> _cls)) exitWith {
        diag_log text format
            ["[ghost_hacking] intel spot spawn class '%1' is not loaded - spot skipped", _cls];
        []
    };

    private _obj = createVehicle [_cls, getPosATL _cand, [], 0, "CAN_COLLIDE"];
    _obj setDir (getDir _cand);
    _obj setPosATL (getPosATL _cand);

    // createVehicle produces an EMPTY vehicle. For a crate that is correct; for
    // a radar or a SAM launcher it is a silent failure - the thing stands there
    // looking like an objective and does nothing, because nobody is operating
    // it. Crewing is on by default for exactly that reason: an uncrewed gun is
    // invisible as a mistake, an unwanted driver is not.
    if (_cand getVariable ["crew", true]) then {
        private _crewGrp = createVehicleCrew _obj;
        if ((units _crewGrp) isEqualTo []) then {
            // Nothing to crew - a prop, a crate. Do not leave the husk behind.
            deleteGroup _crewGrp;
        } else {
            private _sideStr = toUpper (_cand getVariable ["crew_side", "AUTO"]);
            private _forced = switch (_sideStr) do {
                case "WEST": { west };
                case "EAST": { east };
                case "GUER": { resistance };
                case "CIV": { civilian };
                // AUTO: whatever faction the class itself belongs to, which is
                // right for anything named O_ or B_ and saves setting it twice.
                default { sideUnknown };
            };
            if (_forced isNotEqualTo sideUnknown) then {
                (units _crewGrp) joinSilent (createGroup [_forced, true]);
            };
        };
    };

    // Worth having on a radar or a launcher: it can then be cued by anything
    // else on its side's network, which is the entire point of putting one on
    // the map next to a drone patrol.
    if (_cand getVariable ["datalink", true]) then {
        [_obj] call EFUNC(common,setDatalink);
    };

    [_obj]
};

// Everything a winning candidate produces, initialised. Both call sites below go
// through this rather than through _payloadOf directly, so a spot's Init runs
// exactly once per object whether the spot won a draw or is standing on its own.
//
// The Init runs AFTER the object is placed and oriented, and it also runs for
// objects that were pre-placed and synchronised to the spot rather than spawned
// by it - a cache you built by hand deserves the same setup line as one the spot
// created.
private _populate = {
    params ["_cand"];
    private _objs = [_cand] call _payloadOf;

    private _src = if (_cand getVariable [QGVAR(isSpot), false]) then {
        _cand getVariable ["init_code", ""]
    } else {
        ""
    };
    if (_src isNotEqualTo "") then {
        // Eden's own init boxes define `this`, so `this` is what people paste
        // in here - and a spawned script has no `this`, nor can one be aliased
        // in (magic variables are read-only). Rewriting the bare word to the
        // documented first argument lets both spellings work instead of dying
        // on screen with "Undefined variable in expression: this". \b keeps
        // _this and thisTrigger untouched - underscore and letters are word
        // characters, so neither has a boundary around the bare word.
        private _code = compile (_src regexReplace ["\bthis\b", "(_this select 0)"]);
        private _spot = _cand;

        // Named in the log BEFORE it runs, so a syntax error in the box points at
        // the spot that owns it. Without this the RPT blames this file and a
        // mission maker has no way to tell which of twenty spots is at fault.
        diag_log text format ["[ghost_hacking] intel spot init at grid %1: %2",
            mapGridPosition _spot, _src];

        {
            // spawn, not call. compile cannot report a syntax error - it hands
            // back code that fails at the moment it runs - and a failure inside
            // call propagates out and abandons the whole draw, so one typo in one
            // box silently costs a mission every target it had. A spawned script
            // takes its error down with it and nothing else.
            [_x, _spot] spawn _code;
        } forEach _objs;
    };

    _objs
};

// What a candidate counts AS for the draw. A spot's Spawn Class is the obvious
// answer; a spot that carries pre-built objects instead is grouped by the first
// of them, and an object synced straight to the module is simply itself. So ten
// spots set to spawn one thing and ten set to spawn another are two classes,
// which is exactly how a mission maker thinks about them.
private _classOf = {
    params ["_cand"];
    if !(_cand getVariable [QGVAR(isSpot), false]) exitWith { typeOf _cand };

    private _cls = _cand getVariable ["spawn_class", ""];
    if (_cls isNotEqualTo "") exitWith { _cls };

    private _objs = (synchronizedObjects _cand) select { !(_x isKindOf "Logic") };
    if (_objs isEqualTo []) exitWith { "" };
    typeOf (_objs select 0)
};

{
    private _logic = _x;
    if (isNull _logic) then { continue };

    private _style = [
        _logic getVariable ["marker_text", "Signal Intercept"],
        _logic getVariable ["marker_type", "hd_dot"],
        _logic getVariable ["marker_colour", "ColorRed"],
        _logic getVariable ["max_range", 0],
        _logic getVariable ["one_shot", true]
    ];
    private _pick = round (_logic getVariable ["pick_count", 0]);
    private _clear = _logic getVariable ["clear_unpicked", false];

    // Maintenance terms travel WITH each target rather than being looked up from
    // this module later, so two pools can run different schedules and a target
    // that outlives its module keeps its own.
    private _maintain = if (_logic getVariable ["maintain", false]) then {
        [
            (_logic getVariable ["maintain_interval", 60]) max 1,
            (_logic getVariable ["maintain_repair", 0.25]) max 0,
            _logic getVariable ["maintain_crew", true]
        ]
    } else {
        []
    };

    // Per-class overrides, "Land_Cargo20_military_green_F: 3, B_Truck_01_box_F: 1".
    // Splitting on both space and colon means the spacing in the box does not
    // matter, and any class left out falls back to Pick Per Class.
    private _limits = createHashMap;
    {
        private _p = _x splitString " :";
        if (count _p >= 2) then {
            _limits set [toLower (_p select 0), round (parseNumber (_p select 1))];
        };
    } forEach ((_logic getVariable ["class_limits", ""]) splitString ",");

    // Spots synced to this module, plus objects synced straight to it. Other
    // module logics (a Hacking Settings module dropped on the same spot, say)
    // are not candidates.
    private _cands = (synchronizedObjects _logic) select {
        (_x getVariable [QGVAR(isSpot), false]) || {!(_x isKindOf "Logic")}
    };
    if (_cands isEqualTo []) then {
        diag_log text "[ghost_hacking] intel module placed with nothing synced to it - no targets registered";
        continue;
    };

    _claimed append (_cands select { _x getVariable [QGVAR(isSpot), false] });

    // The draw is per class, not across the pool. Twenty spots, ten of one class
    // and ten of another, with a limit of five gives five of EACH - which is the
    // point: the mix is designed, only the placement is random. A single pool-wide
    // count could hand you ten of one and none of the other.
    private _byClass = createHashMap;
    {
        private _key = [_x] call _classOf;
        _byClass set [_key, (_byClass getOrDefault [_key, []]) + [_x]];
    } forEach _cands;

    private _winners = [];
    private _losers = [];
    private _report = [];
    // forEach over a hashmap binds _x to the key and _y to the value. No exitWith
    // in here - that would end the whole draw after the first class.
    {
        private _group = _y;
        private _limit = _limits getOrDefault [toLower _x, _pick];
        private _took = count _group;
        if (_limit <= 0 || {_limit >= count _group}) then {
            _winners append _group;
        } else {
            private _shuffled = (+_group) call BIS_fnc_arrayShuffle;
            _winners append (_shuffled select [0, _limit]);
            _losers append (_shuffled select [_limit]);
            _took = _limit;
        };
        _report pushBack format ["%1 %2/%3",
            [_x, "(unclassified)"] select (_x isEqualTo ""), _took, count _group];
    } forEach _byClass;

    {
        {
            if (isNull _x) then { continue };
            _x setVariable [QGVAR(intelStyle), _style, true];
            _x setVariable [QGVAR(intelMarked), false, true];
            if (_maintain isNotEqualTo []) then {
                _x setVariable [QGVAR(maintainCfg), _maintain];
                // Whose crew to rebuild, captured now while there still is one.
                _x setVariable [QGVAR(maintainSide), side _x];
            };
            _pool pushBackUnique _x;
        } forEach ([_x] call _populate);
    } forEach _winners;

    if (_clear) then {
        {
            // A losing spot takes its own payload with it; a losing object is
            // the payload.
            if (_x getVariable [QGVAR(isSpot), false]) then {
                { deleteVehicle _x } forEach ((synchronizedObjects _x) select { !(_x isKindOf "Logic") });
            } else {
                deleteVehicle _x;
            };
        } forEach _losers;
    };

    // Logged per class, because "8 of 20" tells you nothing about whether the mix
    // came out the way the mission intended.
    diag_log text format [
        "[ghost_hacking] intel pool: %1 picked of %2 candidate(s), %3 %4 -- Pick Per Class %5 -- %6",
        count _winners, count _cands, count _losers,
        ["left as decoys", "cleared"] select _clear,
        [str _pick, "0 (= take everything)"] select (_pick <= 0),
        _report joinString ", "
    ];
} forEach _pools;

// Spots nobody claimed stand on their own - place one without a parent and it
// simply populates. That is a deliberate feature, but it is also what an
// unsynchronised spot looks like, and the two are indistinguishable from here -
// so it is logged loudly. A pool that "spawned everything" is usually this:
// spots that never entered a draw because nothing was drawing for them.
private _orphans = _spots select { !isNull _x && {!(_x in _claimed)} };
{
    private _style = ["Signal Intercept", "hd_dot", "ColorRed", 0, true];
    {
        if (isNull _x) then { continue };
        _x setVariable [QGVAR(intelStyle), _style, true];
        _x setVariable [QGVAR(intelMarked), false, true];
        _pool pushBackUnique _x;
    } forEach ([_x] call _populate);
} forEach _orphans;

if (_orphans isNotEqualTo []) then {
    diag_log text format [
        "[ghost_hacking] %1 intel spot(s) had NO parent module and populated unconditionally - grids %2. Synchronise them to a Hack Intel Targets module if they were meant to be part of a draw.",
        count _orphans,
        (_orphans apply { mapGridPosition _x }) joinString ", "
    ];
};

missionNamespace setVariable [QGVAR(intelTargets), _pool, true];
if (_pool isEqualTo []) exitWith {};

// One watcher for the whole pool, however many modules are placed.
if (isNil QGVAR(watchHandle)) then {
    GVAR(watchHandle) = [FUNC(watchTargets), TARGET_WATCH_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
};

// One maintenance loop, and only if something in the pool actually wants it -
// each target carries its own schedule, so the loop just ticks.
if (isNil QGVAR(maintainHandle)
    && {(_pool findIf { (_x getVariable [QGVAR(maintainCfg), []]) isNotEqualTo [] }) > -1}) then {
    GVAR(maintainHandle) = [FUNC(maintainTargets), MAINTAIN_TICK, []] call CBA_fnc_addPerFrameHandler;
};

diag_log text format ["[ghost_hacking] intel pool resolved: %1 target(s)", count _pool];
