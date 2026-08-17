#include "script_component.hpp"
/*
 * Author: Ghost
 * Sends one drone to look at a place - the recon rung of the reaction ladder.
 *
 * Obeys the same ceiling everything else does, so a side whose supply caches
 * have been hit answers a discovery with less than one whose have not. That
 * is the payoff for the raid, made visible at the moment it matters.
 *
 * Arguments:
 * 0: Side <SIDE>
 * 1: Where to look <ARRAY>
 *
 * Return Value:
 * A drone was sent <BOOL>
 *
 * Example:
 * [east, getPosATL player] call ghost_uas_fnc_respondTo
 */

params [["_side", sideUnknown, [sideUnknown]], ["_pos", [], [[]]]];

if (_side isEqualTo sideUnknown || {_pos isEqualTo []}) exitWith {false};

// The PRUNED count - the raw list let freshly-dead drones block a
// reaction-ladder dispatch until the next planning tick.
private _have = [_side] call FUNC(livePatrols);
if (_have >= ([_side] call FUNC(ceilingFor))) exitWith {
    INFO_1("%1 wanted to send a drone but its ceiling is full",_side);
    false
};

// Overwatch mode means own ground for RESPONSES too. The reaction ladder
// and the QRF hand this whatever position the noise came from, and a west
// drone answering noise inside the east TAOR is exactly the sighting the
// mode exists to prevent.
private _outside = false;
if (GVAR(patrolOver) == 1) then {
    ([_side] call ghost_adapter_alive_fnc_taorFor) params [["_taor", []]];
    _outside = _taor isNotEqualTo [] && {(_taor findIf {_pos inArea _x}) == -1};
};
if (_outside) exitWith {
    INFO_1("%1 keeps its drones inside its own TAOR - overwatch mode",_side);
    false
};

private _faction = "";
{
    _x params ["_cside", "", "_cf"];
    if (_cside isEqualTo _side) exitWith { _faction = _cf };
} forEach (call ghost_adapter_alive_fnc_commanders);

[_side, _faction, _pos] call FUNC(topUp)
