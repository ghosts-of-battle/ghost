#include "script_component.hpp"
/*
 * Author: YonV
 * Shuts the cameras down when a camera app is left. The picture itself is
 * hidden by the updateInterface fork along with every other page control.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_camExit
 */

params ["_display"];

[] call cTab_fnc_deleteUAVcam;
[] call cTab_fnc_deleteHelmetCam;
