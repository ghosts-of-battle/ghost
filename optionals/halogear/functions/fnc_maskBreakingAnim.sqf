#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_maskBreakingAnim

Description:
    Plays the mask-failure sequence on the ACE goggles overlay: a crack sound,
    then BREAK_FRAMES frames stepped across the lens control, then the goggles
    are marked cracked, which swaps the mask for the broken variant and cuts the
    player's air.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _display = uiNamespace getVariable ["ACE_Goggles_Display", displayNull];
if (isNull _display) exitWith { TRACE_1("no ACE goggles display, skipping anim",_display) };

private _ctrl = _display displayCtrl 10650;
playSound QGVAR(maskBreaking);

for "_i" from 1 to BREAK_FRAMES do {
    [
        {
            params ["_i", "_ctrl"];
            if (isNull _ctrl) exitWith {};
            _ctrl ctrlSetText format [QPATHTOF(data\breaking\HM_Breaking_%1.paa), _i];
        },
        [_i, _ctrl],
        _i * BREAK_FRAMETIME
    ] call CBA_fnc_waitAndExecute;
};

[
    { call FUNC(damageGoggles) },
    [],
    BREAK_FRAMES * BREAK_FRAMETIME
] call CBA_fnc_waitAndExecute;
