#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_attachAceAttachable

Description:
    Once a canopy is out, hangs whatever the jumper has attached with ACE Attach
    (IR strobe, chemlight and so on) off the parachute itself, so it is visible
    to anyone stacking up behind them. The prop is deleted on landing.

    Fires on the freefallEnded event; does nothing unless the player is actually
    under a canopy with something attached.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if !((objectParent player) isKindOf "ParachuteBase") exitWith {};

private _attached = ((player getVariable ["ace_attach_attached", [[objNull, ""]]]) select 0) select 1;
if (_attached isEqualTo "") exitWith {};

// ACE items name the world object to spawn in ACE_attachable; plain classes are
// their own object
private _class = getText (configFile >> "CfgWeapons" >> _attached >> "ACE_attachable");
if (_class isEqualTo "") then { _class = _attached };

private _prop = _class createVehicle (position (vehicle player));
_prop attachTo [vehicle player, [-0.2, 0, 0.6]];

[
    { isNull (objectParent player) },
    { deleteVehicle (_this select 0) },
    [_prop]
] call CBA_fnc_waitUntilAndExecute;
