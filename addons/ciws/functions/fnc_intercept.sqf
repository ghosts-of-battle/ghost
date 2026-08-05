#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_intercept

Description:
    A round has been hit. Removes it and marks the kill in the sky.

    The round is DELETED rather than detonated. Detonating it at altitude would
    still rain fragments on whatever is underneath, which is the outcome the
    defence exists to prevent - the shell would arrive, just louder.

Parameters:
    _proj : OBJECT  - the round.
    _site : HASHMAP - the defended site.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_site"];

if (isNull _proj) exitWith {};

private _pos = getPosATL _proj;
deleteVehicle _proj;

private _fx = createVehicle ["HelicopterExploBig", _pos, [], 0, "CAN_COLLIDE"];
_fx setPosATL _pos;
[{ if (!isNull _this) then { deleteVehicle _this } }, _fx, 2] call CBA_fnc_waitAndExecute;

if (_site get "debug") then {
    diag_log text format ["[ghost_ciws] INTERCEPT at %1, alt %2m",
        mapGridPosition _pos, round (_pos select 2)];
};
