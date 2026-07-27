#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_aadOpening

Description:
    Arms the wearer's auto-activation device for this jump. Warns AAD_WARN_MARGIN
    metres above the set trigger altitude, then pulls the handle for them at it,
    provided they are still in freefall.

    Armed on the freefallStarted event; does nothing without an AAD rig.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if !([player] call FUNC(hasAADParachute)) exitWith {};

private _trigger = parseNumber (player getVariable [QGVAR(aadOpeningAlt), str GVAR(aadDefaultAltitude)]);

[
    { ((getPosASL player) select 2) <= ((_this select 0) + AAD_WARN_MARGIN) },
    {
        params ["_trigger"];
        if ([player] call FUNC(isFreeFalling)) then {
            ["warning"] call FUNC(selfOpeningWarning);
        };

        [
            { ((getPosASL player) select 2) <= (_this select 0) },
            {
                if !([player] call FUNC(isFreeFalling)) exitWith {};
                ["triggered"] call FUNC(selfOpeningWarning);
                if ([player] call FUNC(hasParachute)) then {
                    player action ["OpenParachute", player];
                };
            },
            [_trigger]
        ] call CBA_fnc_waitUntilAndExecute;
    },
    [_trigger]
] call CBA_fnc_waitUntilAndExecute;
