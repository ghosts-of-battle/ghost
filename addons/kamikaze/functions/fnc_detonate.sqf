#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_kamikaze_fnc_detonate

Description:
    Sets off a loitering munition's warhead where it is, and removes the
    airframe.

    The charge is CREATED ABOVE the point and given downward velocity rather than
    simply spawned. Ammo detonates on contact - spawn it stationary in mid-air
    and you get a bomb that falls, which is a delay and a moved impact point, not
    an explosion here and now.

    setDamage on the drone itself is not a substitute, and was the bug in the
    original ambient kamikaze: destroying an airframe gives you the airframe's
    own small destruction, not a warhead. A kamikaze drone that kills nothing is
    a very expensive firework.

Parameters:
    _drone : OBJECT - the airframe. Deleted.
    _pos   : ARRAY  - optional override, ATL. Default the drone's own position.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_drone", ["_pos", [], [[]]]];

if (_pos isEqualTo []) then {
    if (isNull _drone) exitWith {};
    _pos = getPosATL _drone;
};
if (_pos isEqualTo []) exitWith {};

private _at = [_pos select 0, _pos select 1, (_pos select 2) + KAM_BOOM_UP];
private _boom = createVehicle [QGVAR(warhead), _at, [], 0, "CAN_COLLIDE"];
if (!isNull _boom) then {
    _boom setPosATL _at;
    _boom setVectorDirAndUp [[0, 0, -1], [0, 1, 0]];
    _boom setVelocity [0, 0, -KAM_BOOM_SPEED];
};

// Taken out before the charge lands, or the airframe absorbs its own blast and
// the wreck is left sitting in the crater.
if (!isNull _drone) then {
    { deleteVehicle _x } forEach (crew _drone);
    deleteVehicle _drone;
};
