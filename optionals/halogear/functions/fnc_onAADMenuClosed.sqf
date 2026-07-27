#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_onAADMenuClosed

Description:
    onUnload handler for the AAD dialog. Stores the typed altitude on the object
    (public, so the server sees it) and confirms it by hint. For anything that is
    not a player, the descent watcher has to run where the object is local, so it
    is (re)started on the server.

Parameters:
    _this : ARRAY - standard dialog onUnload args, [display, exitCode].

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
(_this select 0) params ["_display"];

private _object = _display getVariable [QGVAR(aadObject), objNull];
if (isNull _object) exitWith {};

private _altitude = ctrlText AAD_ALT_IDC;
_object setVariable [QGVAR(aadOpeningAlt), _altitude, true];
hint format [LLSTRING(aadHint), _altitude];

if (isPlayer _object) exitWith {};

[
    [_object],
    {
        params ["_object"];
        private _former = _object getVariable [QGVAR(aadWatch), scriptNull];
        if (!isNull _former) then { terminate _former };
        _object setVariable [QGVAR(aadWatch), [_object] spawn FUNC(objectAADWatch), true];
    }
] remoteExec ["call", 2];
