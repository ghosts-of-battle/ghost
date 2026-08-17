#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_jamming_fnc_jamHud

Description:
    Shows the jamming meter while the player is in a field, hides it when clear.
    Reads GVAR(localJamFactor), which the jam loop already published - the meter
    never evaluates jamming a second time, so it cannot disagree with what the
    radios are actually doing.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!hasInterface) exitWith {};

private _factor = missionNamespace getVariable [QGVAR(localJamFactor), 0];
private _display = uiNamespace getVariable [QGVAR(jamHud), displayNull];

if (_factor <= 0 || {!GVAR(jamHudEnabled)}) exitWith {
    if (!isNull _display) then {
        QGVAR(jamHud) cutText ["", "PLAIN"];
        uiNamespace setVariable [QGVAR(jamHud), displayNull];
    };
};

if (isNull _display) then {
    QGVAR(jamHud) cutRsc [QGVAR(jamHud), "PLAIN", 0, false];
    _display = uiNamespace getVariable [QGVAR(jamHud), displayNull];
    if (isNull _display) exitWith {};

    ([JAM_HUD_ID, [JAM_HUD_DEF_X, JAM_HUD_DEF_Y], [JAM_HUD_W, JAM_HUD_H]] call EFUNC(common,hudPos)) params ["_x", "_y"];
    private _w = JAM_HUD_W * safeZoneW;
    private _h = JAM_HUD_H * safeZoneH;
    (_display displayCtrl IDC_JAM_PANEL) ctrlSetPosition [_x, _y, _w, _h];
    (_display displayCtrl IDC_JAM_LABEL) ctrlSetPosition [_x + _w * 0.04, _y, _w * 0.6, _h * 0.55];
    (_display displayCtrl IDC_JAM_BAR) ctrlSetPosition [_x + _w * 0.04, _y + _h * 0.6, _w * 0.92, _h * 0.25];
    { (_display displayCtrl _x) ctrlCommit 0 } forEach [IDC_JAM_PANEL, IDC_JAM_LABEL, IDC_JAM_BAR];
};

(_display displayCtrl IDC_JAM_BAR) progressSetPosition _factor;
