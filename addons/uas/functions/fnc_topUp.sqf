#include "script_component.hpp"
/*
 * Author: Ghost
 * One patrol: spawn the faction's own UAV, profile it, and give the profile a
 * waypoint over the objective.
 *
 * Called both to stand patrols up and, on the slow tick, to replace ones that
 * died - so shooting a drone down is worth doing and worth doing again, and
 * killing the caches is what stops them coming back at full strength.
 *
 * The dead are pruned here rather than by a watcher: the profile list is only
 * interesting at the moment something wants to add to it.
 *
 * Arguments:
 * 0: Side <SIDE>
 * 1: Faction <STRING>
 * 2: Objective position <ARRAY>
 *
 * Return Value:
 * A patrol was put up <BOOL>
 *
 * Public: No
 */

params [["_side", sideUnknown, [sideUnknown]], ["_faction", "", [""]], ["_pos", [], [[]]]];

if (_side isEqualTo sideUnknown || {_pos isEqualTo []}) exitWith {false};

// NOBODY NEAR, NOTHING FLIES - the hard end of the proximity rule, here
// rather than only in the planner because the reaction ladder and the QRF
// reach this function too. A patrol nobody can meet is simulation spent on an
// empty island; FUNC(standDown) takes back the ones that outlive their
// audience. See UAS_PLAYER_RANGE.
if !([_pos] call FUNC(playerNear)) exitWith {false};
// No adapter check. This used to refuse to spawn without ALiVE's profiler,
// from when a patrol was meant to become a profile; nothing here profiles
// anything now, and a drone flies the same with ALiVE absent.

// The module's per-side airframe list beats the faction scan - set when
// the borrowed-airframe fallback reads as the wrong side in the field.
private _override = (missionNamespace getVariable [QGVAR(uavOverride), createHashMap]) getOrDefault [str _side, []];
private _cls = if (_override isNotEqualTo []) then {
    selectRandom _override
} else {
    [_faction, _side] call FUNC(factionUav)
};
if (_cls isEqualTo "") exitWith {false};

private _alt = UAS_ALT_MIN + random (UAS_ALT_MAX - UAS_ALT_MIN);
private _at = _pos getPos [500 + random 1000, random 360];
_at set [2, _alt];

// OWN-GROUND MODE KEEPS THE WHOLE FLIGHT INSIDE THE TAOR. The objective
// list is already filtered to it, but this stand-off spawn put the
// airframe up to 1.5 km PAST a boundary objective - which is where the
// "west drones over the east TAOR" sightings kept coming from. Re-rolled
// until it lands inside; the objective itself is the known-inside fallback.
if (GVAR(patrolOver) == 1) then {
    ([_side] call ghost_adapter_alive_fnc_taorFor) params [["_taor", []]];
    if (_taor isNotEqualTo []) then {
        private _try = 0;
        while {_try < 8 && {(_taor findIf {_at inArea _x}) == -1}} do {
            _at = _pos getPos [500 + random 1000, random 360];
            _at set [2, _alt];
            _try = _try + 1;
        };
        if ((_taor findIf {_at inArea _x}) == -1) then {
            _at = +_pos;
            _at set [2, _alt];
        };
    };
};

// The common pre-spawn gate, hard: in overwatch mode nothing of this
// side's takes off outside its own ground, whatever the clamp above
// produced. Enemy-ground mode crosses the line by design and is not
// gated.
if (GVAR(patrolOver) == 1 && {!([_side, _at, "uas patrol"] call EFUNC(common,taorGate))}) exitWith {false};

private _veh = createVehicle [_cls, _at, [], 0, "FLY"];
if (isNull _veh) exitWith {false};
_veh flyInHeight _alt;

private _grp = createGroup [_side, true];
_veh setVariable [QGVAR(wantSide), _side];
createVehicleCrew _veh;

// PROFILED A FRAME LATER, ON PURPOSE. createVehicleCrew's units are not
// queryable in the same frame, so profiling here handed ALiVE a crewless
// aircraft and got nothing back - which is exactly what the four "would not
// profile" warnings were.
[{
    params ["_veh", "_grp", "_side", "_pos"];

    if (isNull _veh) exitWith {};

    // THE UAV AI STAYS IN ITS OWN GROUP. This used to joinSilent the crew
    // into the group made above, and that is what had drones falling out of
    // the sky: a UAV's autonomy lives in its own crew group, and moving that
    // AI into an empty infantry group leaves an aircraft with nobody flying
    // it. Same fault, same fix, as the air-defence turrets that spawned
    // "without crew".
    //
    // The group made above is therefore surplus for a drone - it is emptied
    // rather than left behind as a group leak on a system that respawns
    // patrols for the whole mission.
    if ((crew _veh) isEqualTo []) then {
        createVehicleCrew _veh;
    };

    // STILL nobody aboard: some airframes - modded ones especially - come
    // out of createVehicleCrew empty on a dedicated server. Seat UAV AI by
    // hand - NEVER a crewman; a soldier in a UAV seat is the launcher that
    // never answers (the antiship lesson). The drone's OWN declared crew
    // class first - a modded airframe may want its own AI agent - then the
    // side's vanilla one.
    if ((crew _veh) isEqualTo []) then {
        private _own = getText (configOf _veh >> "crew");
        private _tries = [switch (_side) do {
            case west: {"B_UAV_AI"};
            case independent: {"I_UAV_AI"};
            default {"O_UAV_AI"};
        }];
        if (_own isNotEqualTo "" && {isClass (configFile >> "CfgVehicles" >> _own)}) then {
            _tries insert [0, [_own]];
        };
        {
            // bare `break` is not a real SQF command - guard each pass
            if ((crew _veh) isNotEqualTo []) then {continue};
            private _d = _grp createUnit [_x, [0, 0, 0], [], 0, "CAN_COLLIDE"];
            if (!isNull _d) then {
                _d moveInDriver _veh;
                if (isNull objectParent _d) then {_d moveInAny _veh};
                if (isNull objectParent _d) then {deleteVehicle _d};
            };
        } forEach _tries;
    };

    // No crew even after the fallback means this class cannot be flown
    // here - and a crewless airframe left alive falls out of the sky, the
    // prune counts it dead, and the replacer spawns the next one: that is
    // the "raining drones" loop. The husk goes, the log names the class,
    // and the ceiling stops paying for it.
    if ((crew _veh) isEqualTo []) exitWith {
        WARNING_2("'%1' spawns with no crew for %2 - deleted, not flown; pick a flyable class in the module's drone-class field",typeOf _veh,_side);
        deleteVehicle _veh;
        if (!isNull _grp && {(units _grp) isEqualTo []}) then {deleteGroup _grp};
    };

    private _flyGrp = group (driver _veh);
    if (isNull _flyGrp) then { _flyGrp = _grp };
    if (!isNull _grp && {_grp isNotEqualTo _flyGrp} && {(units _grp) isEqualTo []}) then {
        deleteGroup _grp;
    };

    // THE PROFILER IS WHAT WAS EATING THEM. THE RAINING-DRONES ROOT CAUSE.
    //
    // This used to hand every fresh airframe to ALiVE's runtime profiler and
    // treat an empty answer as "cannot be profiled, fly it live". Reading
    // what that function actually does
    // (sys_profile\fnc_createProfilesFromUnitsRuntime.sqf:293-307): unless
    // EVERY unit in the group is blacklisted, it does
    //
    //     deleteVehicle (vehicle _x); deleteVehicle _x; DeleteGroupRemote
    //
    // to the things it was handed. That is how virtualisation works - the
    // profile replaces the object. The old comment here was half right:
    // vanilla UAV crew (B_/O_/I_UAV_AI) IS blacklisted, so vanilla patrols
    // survived. A MODDED airframe's crew class is not on that list, so the
    // whole group failed the blacklist test and ALiVE deleted the drone
    // seconds after it spawned - which is why the ledger filled with
    // <NULL-object>, why nothing logged a kill, and why the fleet came back
    // every tick to be deleted again.
    //
    // So it is never offered. A drone is flown live and tracked by object,
    // bounded by the ceiling - which is what the code did with the empty
    // answer anyway, minus the deletion.
    //
    // ALiVE's own opt-out, asked for through the adapter - the variable is
    // ALiVE's name and this addon is not allowed to know it. The airframe, its
    // crew and the crew's group all get marked, so any OTHER ALiVE pass over
    // the map leaves the patrol alone too.
    [_veh] call EFUNC(adapter_alive,profileIgnore);

    private _list = GVAR(patrols) getOrDefault [str _side, []];

    if (true) exitWith {
        // Said once per side, not once per airframe.
        if !(_side in GVAR(unprofilable)) then {
            GVAR(unprofilable) pushBack _side;
            INFO_1("%1 drones are flown live and never offered to ALiVE's profiler - it deletes what it profiles.",_side);
        };

        // THE GROUND THIS PATROL IS FOR. FUNC(standDown) measures the
        // proximity rule against this and not against the aircraft, which
        // spends its life 800 m from it in whichever direction it is
        // currently pointing.
        _veh setVariable [QGVAR(orbit), _pos];
        _veh setVariable [QGVAR(patrolSide), _side, true];
        _list pushBack _veh;
        GVAR(patrols) set [str _side, _list];

        // THE CORONER. Every log on record shows patrol counts pinned at
        // zero - hosted and dedicated alike - so every drone has died or
        // vanished inside its first minute since the beginning, and nothing
        // ever said how. Now each death names its killer and each deletion
        // says so, and the next RPT closes the case instead of a theory.
        _veh addEventHandler ["Killed", {
            params ["_u", "_k", "_i"];
            private _who = [_k, _i] select (!isNull _i);
            WARNING_3("patrol drone killed at %1 by '%2' (%3)",mapGridPosition _u,typeOf _who,name _who);
        }];
        _veh addEventHandler ["Deleted", {
            params ["_u"];

            // A WRECK BEING TIDIED UP IS NOT A MYSTERY, AND THIS USED TO
            // REPORT IT AS ONE. ALiVE starts a garbage collector at mission
            // start and sweeps destroyed airframes minutes after the fact, in
            // batches - so this fired a second time for drones the Killed
            // handler had already accounted for. Last session: 30 kills, 35
            // deletions, arriving in clumps of three to seven, which read as
            // something quietly eating live patrols when it was only the bin
            // men. The coroner is only interested in a drone that was still
            // flying when it vanished.
            if (!alive _u) exitWith {};

            // Nor is a husk this module retired on purpose - the stall test
            // below deletes what cannot self-fly and says so in its own words.
            if (_u getVariable [QGVAR(retired), false]) exitWith {};

            WARNING_1("patrol drone DELETED WHILE STILL FLYING at %1 - a script or GC removed it",mapGridPosition _u);
        }];
        // LAMBS' infantry reflexes do not belong on an aircraft - see
        // EFUNC(common,lambsOff).
        [_veh] call EFUNC(common,lambsOff);

        INFO_3("patrol drone up: %1 for %2 at %3",typeOf _veh,_side,mapGridPosition _veh);

        // THE STALL TEST. The module's class fields can name anything, and
        // FPV/loitering-munition classes have no autonomous pilot - seated
        // AI or not, they tumble. Forty-five seconds in, a patrol that is
        // alive, on the deck and going nowhere did exactly that: the log
        // names the class so it can come out of the module field, and the
        // husk goes instead of lying in a field pretending to be a patrol.
        [{
            params ["_veh"];
            if (isNull _veh || {!alive _veh}) exitWith {};
            if ((getPosATL _veh select 2) < 3 && {speed _veh < 5}) then {
                WARNING_1("'%1' cannot self-fly - it stalled onto the deck; remove it from the module's drone-class field",typeOf _veh);
                // Flagged before the delete so the Deleted handler knows this
                // removal was ours and stays quiet - it has just been said.
                _veh setVariable [QGVAR(retired), true];
                {deleteVehicle _x} forEach (crew _veh);
                deleteVehicle _veh;
            };
        }, [_veh], 45] call CBA_fnc_waitAndExecute;

        // Given no profile to carry it, the aircraft needs an orbit of its
        // own - ON THE CREW'S GROUP. A waypoint on the empty group this
        // function used to make was an order nobody was in a position to
        // follow, so even a drone that kept its AI just sat there.
        private _wp = _flyGrp addWaypoint [_pos, 300];
        _wp setWaypointType "LOITER";
        _wp setWaypointLoiterRadius 800;
        _wp setWaypointBehaviour "SAFE";
        _flyGrp setBehaviour "SAFE";
        _veh flyInHeight (getPosATL _veh select 2);
    };

    // NOTHING FOLLOWS. There is no profiled path any more: YOU CANNOT
    // PROFILE SOMETHING THAT FLIES. ALiVE's virtualisation replaces an
    // object with a record that walks the map - it has no notion of an
    // airframe in the air, which is why its own blacklist covers UAV crew
    // and why handing it one only ever got the aircraft deleted. Aircraft
    // are flown live, tracked by object, and bounded by the ceiling.
}, [_veh, _grp, _side, _pos]] call CBA_fnc_execNextFrame;

true
