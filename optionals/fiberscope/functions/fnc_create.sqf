#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_fiberscope_fnc_create

Description:
    Opens the fiberscope view. Drops a camera at ankle height in front of the
    player, locks the player into the kneel-inventory animation and disables
    their simulation while the scope is deployed.

    The scope only works when it can actually see through something: a
    lineIntersectsSurfaces probe from the camera must hit a FIRE-geometry
    surface belonging to a parent object that reports as a building
    (getModelInfo select 2). If that probe fails at any stage the view is
    closed again and an error beep plays.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
disableSerialization;

private _errorMsg = LLSTRING(noCanDo);

FS_IDD cutRsc [QGVAR(display), "PLAIN"];

private _selectionPos = player selectionPosition "rightfoot";
private _forwardPos = [
    _selectionPos select 0,
    (_selectionPos select 1) + 1.5,
    (_selectionPos select 2) + 0.5
];

private _cam = "camera" camCreate (player modelToWorld _forwardPos);
_cam cameraEffect ["INTERNAL", "BACK"];
showCinemaBorder false;
_cam setDir (getDir player);
_cam camSetFov FS_FOV;

player setVariable [QGVAR(cam), _cam];
player switchMove "AinvPknlMstpSrasWrflDnon_G01";
player enableSimulation false;

// --- is there actually something to look through? --------------------------
private _fnc_fail = {
    systemChat _this;
    call FUNC(close);
    playSound QGVAR(errorBip);
};

private _begPos = positionCameraToWorld [0, 0, 0];
private _endPos = positionCameraToWorld [0, 0, 1];
private _begPosASL = AGLToASL _begPos;
private _endPosASL = AGLToASL _endPos;

private _ins = lineIntersectsSurfaces [_begPosASL, _endPosASL, player, objNull, true, 1, "FIRE", "NONE"];
if (_ins isEqualTo []) exitWith { _errorMsg call _fnc_fail };

(_ins select 0) params ["", "", "", "_parent"];
if !((getModelInfo _parent) select 2) exitWith { _errorMsg call _fnc_fail };

private _ins2 = [_parent, "FIRE"] intersect [_begPos, _endPos];
if (_ins2 isEqualTo []) exitWith { _errorMsg call _fnc_fail };

(_ins2 select 0) params ["_name", ""];
if (isNil "_name") exitWith { _errorMsg call _fnc_fail };
