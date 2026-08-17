#include "script_component.hpp"
params ["_unit"];

private _oldSelectionPath = [_unit] call ghost_groups_fnc_removeFromGroup;

[YMF_dynamicGroups,_oldSelectionPath] remoteExecCall ["ghost_groups_fnc_updateGroups",-2,"YMF_DG_JIP"];
