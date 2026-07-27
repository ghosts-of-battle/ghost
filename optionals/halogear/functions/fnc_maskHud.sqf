#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_maskHud

Description:
    Draws the ESS mask HUD -- altitude, vertical speed and a floating N/S/E/W
    compass -- for as long as the full mask is worn. Each element can be turned
    off individually, and the whole HUD with GVAR(disableHud).

    Runs off ghost_common_fnc_conditionalPFEH, so it removes itself the moment
    the mask comes off or breaks.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if (goggles player != QGVAR(mask)) exitWith {};
if (GVAR(disableHud)) exitWith {};

#define HUD_GREEN [0.004, 0.142, 0.018, 1]
#define HUD_FONT "LucidaConsoleB"

[
    {
        params ["_noCompass", "_noAltimeter", "_noVelocity"];

        if (!_noAltimeter) then {
            drawIcon3D [
                "", HUD_GREEN, positionCameraToWorld [-6.5, -1, 10], 0, 0, 0,
                format [localize LSTRING(hudAltitude), round ((getPosASL player) select 2)],
                2, 0.05, HUD_FONT
            ];
        };

        if (!_noVelocity) then {
            drawIcon3D [
                "", HUD_GREEN, positionCameraToWorld [-6.5, -0.5, 10], 0, 0, 0,
                format [localize LSTRING(hudVerticalSpeed), abs (round ((velocity player) select 2))],
                2, 0.05, HUD_FONT
            ];
        };

        if (!_noCompass) then {
            private _center = positionCameraToWorld [4.5, -1, 10];
            {
                _x params ["_letter", "_cardinal", "_tick"];
                drawIcon3D ["", HUD_GREEN, _center vectorAdd _cardinal, 0, 0, 0, _letter, 2, 0.05, HUD_FONT];
                drawIcon3D ["", HUD_GREEN, _center vectorAdd _tick, 0, 0, 0, ".", 2, 0.05, HUD_FONT];
            } forEach [
                ["N", [0, 1, 0], [0, 0.5, 0]],
                ["S", [0, -1, 0], [0, -0.5, 0]],
                ["E", [1, 0, 0], [0.5, 0, 0]],
                ["W", [-1, 0, 0], [-0.5, 0, 0]]
            ];
        };
    },
    [GVAR(disableHudCompass), GVAR(disableHudAltimeter), GVAR(disableHudVelocity)],
    {},
    { (goggles player) == QGVAR(mask) }
] call EFUNC(common,conditionalPFEH);
