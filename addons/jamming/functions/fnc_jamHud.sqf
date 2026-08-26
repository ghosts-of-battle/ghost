#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_jamming_fnc_jamHud

Description:
    Shows the jamming meter while the player is in a field, hides it when clear.
    Reads GVAR(localJamFactor), which the jam loop already published - the meter
    never evaluates jamming a second time, so it cannot disagree with what the
    radios are actually doing.

    ON THE MISSION DISPLAY, NOT A TITLE LAYER. The first shape of this cut an
    RscTitles resource that was never defined, so every pass inside a jam field
    was a "Resource title ghost_jamming_jamHud not found" warning two seconds
    apart, and no meter. The honest fix was not to add the missing class: a
    title layer survives the mission that raised it, which is the main-menu bug
    the HUD and the scanner were both rebuilt to end - addons/hud/gui.hpp tells
    it in full. Display 46 is created with the mission and destroyed with it,
    so the meter cannot outlive the world it is reporting on. No display yet
    means the mission is still coming up, and the two-second beat retries.

    THE LABEL SPEAKS THE HUD TILE'S OWN BAND WORDS - DEGRADED, and SMOTHERED
    from 75% - so the meter and the tile can never call the same sky two
    different things.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!hasInterface) exitWith {};

private _display = findDisplay 46;
if (isNull _display) exitWith {};

private _factor = missionNamespace getVariable [QGVAR(localJamFactor), 0];
private _panel = _display displayCtrl IDC_JAM_PANEL;

if (_factor <= 0 || {!GVAR(jamHudEnabled)}) exitWith {
    if (!isNull _panel) then {
        { ctrlDelete (_display displayCtrl _x) } forEach [IDC_JAM_BAR, IDC_JAM_LABEL, IDC_JAM_PANEL];
    };
};

if (isNull _panel) then {
    ([JAM_HUD_ID, [JAM_HUD_DEF_X, JAM_HUD_DEF_Y], [JAM_HUD_W, JAM_HUD_H]] call EFUNC(common,hudPos)) params ["_x", "_y"];
    private _w = JAM_HUD_W * safeZoneW;
    private _h = JAM_HUD_H * safeZoneH;

    private _ctrl = _display ctrlCreate [QGVAR(jamPanel), IDC_JAM_PANEL];
    _ctrl ctrlSetPosition [_x, _y, _w, _h];
    _ctrl ctrlCommit 0;

    _ctrl = _display ctrlCreate [QGVAR(jamLabel), IDC_JAM_LABEL];
    _ctrl ctrlSetPosition [_x + _w * 0.04, _y, _w * 0.6, _h * 0.55];
    _ctrl ctrlCommit 0;

    _ctrl = _display ctrlCreate [QGVAR(jamBar), IDC_JAM_BAR];
    _ctrl ctrlSetPosition [_x + _w * 0.04, _y + _h * 0.6, _w * 0.92, _h * 0.25];
    _ctrl ctrlCommit 0;
};

(_display displayCtrl IDC_JAM_LABEL) ctrlSetText (["DEGRADED", "SMOTHERED"] select (_factor >= 0.75));
(_display displayCtrl IDC_JAM_BAR) progressSetPosition _factor;
