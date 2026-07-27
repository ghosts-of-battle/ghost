#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_detachAAD

Description:
    Recovers an auto-activation device from an object: stops the server-side
    descent watcher, clears the flag and gives the item back. Merges the
    original's separate removeObjectAAD helper into the interaction it served.

Parameters:
    _target : OBJECT - the object to strip.
    _player : OBJECT - the player recovering it.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_target", "_player"];

[
    [_target],
    {
        params ["_target"];
        private _handle = _target getVariable [QGVAR(aadWatch), scriptNull];
        if (!isNull _handle) then { terminate _handle };
        _target setVariable [QGVAR(aadWatch), nil, true];
        _target setVariable [QGVAR(itemAsAAD), nil, true];
    }
] remoteExec ["call", 2];

_player addItem QGVAR(aad);
hint LLSTRING(aadRemoved);
