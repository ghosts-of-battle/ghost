#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_fiberscope_fnc_close

Description:
    Tears the fiberscope view down: closes the RscTitles layer, destroys the
    camera, restores the player's camera, animation and simulation. Safe to call
    when no scope is open.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
// the overlay is a cutRsc title layer, so it is torn down with cutText -- not
// closeDisplay, which does not apply to title layers
FS_IDD cutText ["", "PLAIN"];

private _cam = player getVariable [QGVAR(cam), objNull];
if (!isNull _cam) then { camDestroy _cam };
player setVariable [QGVAR(cam), nil];
player setVariable [QGVAR(nvg), nil];

player cameraEffect ["terminate", "back"];
player switchMove "";
player enableSimulation true;
