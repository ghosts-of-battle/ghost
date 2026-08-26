#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads the two per-object profiler opt-out flags for diagnostics.
 *
 * The seam rule (Part 4 section 3) is why this exists: only this addon may
 * name an ALiVE symbol, and the aaWatch instrument in ghost_diag wants to log
 * whether a watched static is flagged. It asks here.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * [profileIgnore, combatSupport] <ARRAY of BOOL>
 *
 * Example:
 * [_veh] call ghost_adapter_alive_fnc_profileFlags
 *
 * Public: No
 */

params [["_obj", objNull, [objNull, grpNull]]];

if (isNull _obj) exitWith { [false, false] };

[
    _obj getVariable ["ALIVE_profileIgnore", false],
    _obj getVariable ["ALIVE_CombatSupport", false]
]
