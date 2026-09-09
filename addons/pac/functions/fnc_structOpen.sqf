#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_pac_fnc_structOpen

Description:
    Opens the structure editor from the admin page. Admin-checked here for
    the flash; on load again, and on the server for every write.

Parameters:
    None

Returns:
    Whether it opened <BOOL>

Author:
    YonV
---------------------------------------------------------------------------- */

if (!hasInterface) exitWith {false};
if !([player] call ghost_adminpanel_fnc_isAdmin) exitWith {false};

createDialog QGVAR(structure)
