#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_attachAAD

Description:
    Fits a carried auto-activation device to an object, consuming the item. The
    object will then deploy chutes on its own if it is ever dropped from
    altitude -- see FUNC(objectAADWatch), which the server starts once an
    altitude is set on it.

Parameters:
    _target : OBJECT - crate, vehicle or boat to fit the device to.
    _player : OBJECT - the player fitting it.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_target", "_player"];

_target setVariable [QGVAR(itemAsAAD), true, true];
_player removeItem QGVAR(aad);
hint LLSTRING(aadAdded);
