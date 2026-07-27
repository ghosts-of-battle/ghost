// CBA keybinds [ADDON: ghost_fiberscope]
// Each one no-ops unless a scope is actually deployed, so the keys stay free
// the rest of the time.
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
    "Ghosts of Battle",
    QGVAR(turnLeft),
    [LLSTRING(turnLeft), LLSTRING(turnLeftTooltip)],
    { [- FS_TURN_STEP] call FUNC(turn) },
    {},
    [DIK_A, [false, false, false]]
] call CBA_fnc_addKeybind;

[
    "Ghosts of Battle",
    QGVAR(turnRight),
    [LLSTRING(turnRight), LLSTRING(turnRightTooltip)],
    { [FS_TURN_STEP] call FUNC(turn) },
    {},
    [DIK_E, [false, false, false]]
] call CBA_fnc_addKeybind;

[
    "Ghosts of Battle",
    QGVAR(toggleNvg),
    [LLSTRING(toggleNvg), LLSTRING(toggleNvgTooltip)],
    {
        if (isNull (player getVariable [QGVAR(cam), objNull])) exitWith {};
        private _on = !(player getVariable [QGVAR(nvg), false]);
        camUseNVG _on;
        player setVariable [QGVAR(nvg), _on];
        playSound QGVAR(nightVision);
    },
    {},
    [DIK_N, [false, false, false]]
] call CBA_fnc_addKeybind;

[
    "Ghosts of Battle",
    QGVAR(exit),
    [LLSTRING(exitCam), LLSTRING(exitCamTooltip)],
    {
        if (isNull (player getVariable [QGVAR(cam), objNull])) exitWith {};
        call FUNC(close);
    },
    {},
    [DIK_S, [false, false, false]]
] call CBA_fnc_addKeybind;
