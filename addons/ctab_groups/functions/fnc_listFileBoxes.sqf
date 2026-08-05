#include "script_component.hpp"
/*
 * Author: YonV
 * Parses the shared-file-box CBA setting (comma-separated names) into a list.
 * An empty setting disables the feature.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Box names <ARRAY of STRING>
 *
 * Example:
 * call ghost_ctab_groups_fnc_listFileBoxes
 */

private _boxes = [];

{
    private _box = [_x] call CBA_fnc_trim;
    if (_box != "") then {
        _boxes pushBack _box;
    };
} forEach (GVAR(fileBoxes) splitString ",");

_boxes
