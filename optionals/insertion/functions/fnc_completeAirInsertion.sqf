#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_completeAirInsertion

Description:
    Runs a static-line drop: spawns the chosen aircraft at the start position at
    the requested altitude, loads the stick and any prepared cargo, flies it to
    the drop point, ejects everyone (and pushes the cargo out under chutes), then
    flies the aircraft off and deletes it.

    The original called MRH_fnc_completeAirInsertion, which is not defined
    anywhere in MRHMilsimTools -- the static-line branch would have thrown. This
    is a reimplementation from the call site's arguments.

    Server only; the caller remote-executes it there.

Parameters:
    _units    : ARRAY  - units to drop.
    _planeType: STRING - aircraft classname.
    _startPos : ARRAY  - where the aircraft spawns.
    _dropPos  : ARRAY  - where the stick leaves the aircraft.
    _height   : NUMBER - drop altitude ASL.
    _side     : SIDE   - side the aircrew belongs to.
    _eject    : BOOL   - eject the units, rather than just fly the run. (default: true)
    _cargo    : ARRAY  - prepared objects to drop with them. (default: [])

Returns:
    Nothing.

Author:
    Ghost (the original call target was missing)
---------------------------------------------------------------------------- */
if (!isServer) exitWith {
    [_this, QFUNC(completeAirInsertion)] remoteExec ["call", 2];
};

params [
    ["_units", [], [[]]],
    ["_planeType", "", [""]],
    ["_startPos", [0, 0, 0], [[]]],
    ["_dropPos", [0, 0, 0], [[]]],
    ["_height", 500, [0]],
    ["_side", west, [west]],
    ["_eject", true, [true]],
    ["_cargo", [], [[]]]
];

if (_units isEqualTo [] || {_planeType isEqualTo ""}) exitWith {
    TRACE_2("air insertion aborted, nothing to drop",count _units,_planeType);
};

private _spawnPos = [_startPos select 0, _startPos select 1, _height];
private _dir = _spawnPos getDir _dropPos;

private _crewGroup = createGroup [_side, true];
private _plane = createVehicle [_planeType, _spawnPos, [], 0, "FLY"];
_plane setDir _dir;
_plane setPosASL _spawnPos;
_plane setVelocityModelSpace [0, 100, 0];
_plane flyInHeight (_height - (getTerrainHeightASL _dropPos) max 100);

[_crewGroup, _plane] call BIS_fnc_spawnCrew;
_crewGroup setBehaviour "CARELESS";
_crewGroup setCombatMode "BLUE";

{
    if (alive _x) then { _x moveInCargo _plane };
} forEach _units;

{
    _plane setVariable [QGVAR(pendingCargo), (_plane getVariable [QGVAR(pendingCargo), []]) + [_x], true];
} forEach _cargo;

private _wp = _crewGroup addWaypoint [_dropPos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointSpeed "FULL";

TRACE_3("air insertion launched",_planeType,count _units,count _cargo);

[
    { (vehicle (_this select 0)) distance2D (_this select 1) < 400 },
    {
        params ["_plane", "_dropPos", "_units", "_cargo", "_eject", "_crewGroup"];

        if (_eject) then {
            {
                if (alive _x && {vehicle _x isEqualTo _plane}) then {
                    unassignVehicle _x;
                    moveOut _x;
                    _x action ["Eject", _plane];
                };
            } forEach _units;
        };

        // cargo goes out just behind the stick, each under its own rig
        {
            if (!isNull _x) then {
                _x setPosASL ((getPosASL _plane) vectorAdd [0, 0, -10]);
                [_x] call EFUNC(common,addMultipleParachutesToObject);
            };
        } forEach _cargo;

        // let it fly clear before cleaning up
        private _egress = _crewGroup addWaypoint [_dropPos vectorAdd [8000, 0, 0], 0];
        _egress setWaypointType "MOVE";

        [
            {
                params ["_plane", "_crewGroup"];
                {deleteVehicle _x} forEach (crew _plane);
                deleteVehicle _plane;
                deleteGroup _crewGroup;
            },
            [_plane, _crewGroup],
            120
        ] call CBA_fnc_waitAndExecute;
    },
    [_plane, _dropPos, _units, _cargo, _eject, _crewGroup]
] call CBA_fnc_waitUntilAndExecute;
