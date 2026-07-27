#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_startHaloJump

Description:
    Puts a stick and its cargo into a HALO drop: teleports each unit to a
    scattered position around the drop point, sets their AAD altitude, and drops
    the cargo with its own AAD watch running on the server.

    Replaces FUNC(startHaloJump). Rather than import
    that (and the three further MRH functions it pulled in), this talks to
    ghost_halogear directly -- it already owns the AAD altitude variable and the
    object AAD watcher.

    Server only.

Parameters:
    _dropPos    : ARRAY  - centre of the drop.
    _units      : ARRAY  - units to drop.
    _cargo      : ARRAY  - objects to drop with them. (default: [])
    _unitsAlt   : STRING - AAD altitude for the jumpers. (default: "200")
    _cargoAlt   : STRING - AAD altitude for the cargo. (default: "300")

Returns:
    Nothing.

Author:
    Mr H. (original concept), reimplemented against ghost_halogear by Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params [
    ["_dropPos", [0, 0, 0], [[]]],
    ["_units", [], [[]]],
    ["_cargo", [], [[]]],
    ["_unitsAlt", "200", [""]],
    ["_cargoAlt", "300", [""]]
];

TRACE_3("halo jump starting",_dropPos,count _units,count _cargo);

{
    [
        [_x, _dropPos, _unitsAlt],
        {
            params ["_unit", "_dropPos", "_unitsAlt"];

            // drop the Zeus camera if the jumper is being remote-controlled
            if (!isNull curatorCamera) then { (findDisplay 312) closeDisplay 2 };

            _unit setVariable [QEGVAR(halogear,aadOpeningAlt), _unitsAlt];

            [
                {
                    params ["_unit", "_dropPos"];
                    _unit setPosASL ([_dropPos, [15, 25, 30]] call EFUNC(common,scatterPosition));
                },
                [_unit, _dropPos],
                2
            ] call CBA_fnc_waitAndExecute;
        }
    ] remoteExec ["call", _x];
} forEach _units;

{
    // the AAD watcher has to run where the object is local
    group _x setGroupOwner 2;
    _x setVariable [QEGVAR(halogear,aadOpeningAlt), _cargoAlt, true];
    _x setVariable [QEGVAR(halogear,aadWatch), [_x] spawn EFUNC(halogear,objectAADWatch), true];
    _x setPosASL ([_dropPos, [30, 50, 70]] call EFUNC(common,scatterPosition));
} forEach _cargo;
