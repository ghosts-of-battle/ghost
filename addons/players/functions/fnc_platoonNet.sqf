#include "script_component.hpp"
/*
 * Author: Ghost
 * The net name of the platoon a squad belongs to, from the mission's own
 * Dynamic_Groups >> Platoons class.
 *
 * WHY THIS EXISTS. The MR plan is written per PLATOON, not per squad (user,
 * 2026-09-01: "4 plt nets ever one sees then squad net only a squad sees") -
 * four channels for a task force of fourteen elements. fn_getRadioChannel
 * matches a channel by name against the group id, so "NOMAD 2-3" finds nothing
 * and would land on the detachment default; this is what it asks next.
 *
 * THE MISSION ALREADY SAYS WHICH SQUADS ARE IN WHICH PLATOON - the Platoons
 * class the role screen draws its tabs from - so a platoon that wants a radio
 * net adds one property to the tab it already has, rather than a second table
 * somewhere else that has to be kept in step with the first.
 *
 * A platoon with no net[] property, a mission with no Platoons class, or a
 * squad in no platoon all answer "" and leave the caller on its default.
 *
 * Arguments:
 * 0: Squad name <STRING> - the group id, any case
 *
 * Return Value:
 * Net name, upper-cased, or "" <STRING>
 *
 * Example:
 * ["NOMAD 2-3"] call ghost_players_fnc_platoonNet  // "2PLT"
 *
 * Public: No
 */

params [["_squad", "", [""]]];

if (_squad isEqualTo "") exitWith {""};
_squad = toUpper _squad;

// TWO TABLES, ASKED IN ORDER. RadioNets first, because a net can cross a
// platoon boundary - GROUND 1 is a rifle squad and the crew that carries it,
// which is one element of 1st PLT and one of 2nd - and a platoon tab cannot say
// that. Platoons second, for the squads no finer table names: the tab a man
// picks his role on is also his platoon net, which is the common case and worth
// not writing twice.
private _fnc_lookup = {
    params ["_path"];
    private _root = missionConfigFile >> "Dynamic_Groups" >> _path;
    if (!isClass _root) exitWith {""};

    private _hit = "";
    {
        private _name = getText (_x >> "net");
        if (_name isEqualTo "") then {continue};
        if (_squad in ((getArray (_x >> "squads")) apply {toUpper _x})) exitWith {
            _hit = toUpper _name;
        };
    } forEach (configProperties [_root, "isClass _x", true]);
    _hit
};

private _net = ["RadioNets"] call _fnc_lookup;
if (_net isEqualTo "") then {_net = ["Platoons"] call _fnc_lookup};

_net
