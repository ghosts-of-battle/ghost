#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_fiberscope_fnc_turn

Description:
    Rotates the deployed fiberscope camera and plays one of the cable-chafing
    sounds. No-op when no scope is deployed.

Parameters:
    _delta : NUMBER - degrees to add to the camera heading (negative = left).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_delta", 0, [0]]];

private _cam = player getVariable [QGVAR(cam), objNull];
if (isNull _cam) exitWith {};

_cam setDir ((getDir _cam) + _delta);
playSound (selectRandom [
    QGVAR(chafing1),
    QGVAR(chafing2),
    QGVAR(chafing3),
    QGVAR(chafing4),
    QGVAR(chafing5)
]);
