#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_openAADMenu

Description:
    Opens the Cypres-style altitude dialog for a unit or object carrying an AAD,
    seeded with its current setting. The value is read back and applied when the
    dialog closes, by FUNC(onAADMenuClosed).

Parameters:
    _object : OBJECT - the AAD carrier (a player, a crate, a vehicle).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object"];

if (!(createDialog QGVAR(aadMenu))) exitWith { TRACE_1("AAD dialog failed to open",_object) };

private _display = findDisplay AAD_DIALOG_IDD;
(_display displayCtrl AAD_ALT_IDC) ctrlSetText (_object getVariable [QGVAR(aadOpeningAlt), str GVAR(aadDefaultAltitude)]);
_display setVariable [QGVAR(aadObject), _object];
