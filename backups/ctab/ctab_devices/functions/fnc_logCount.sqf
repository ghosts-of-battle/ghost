#include "script_component.hpp"
/*
 * Author: YonV
 * How many reports are filed in this side's shared boxes, for the LOG tile's
 * live readout. Soft: the report archive lives in ghost_ctab_groups, and this
 * addon works perfectly well without it - the tile then simply reads zero.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Number of filed reports <NUMBER>
 *
 * Example:
 * call ghost_ctab_devices_fnc_logCount
 */

if (isNil QEFUNC(ctab_groups,readLog)) exitWith {0};

// [] and not a bare call: `call` with no arguments hands the CALLER's _this
// straight through, and this runs from widgetTick, whose _this is the display.
// readLog would then be asked to filter its boxes by a display object.
private _n = 0;
{
    _n = _n + count (_x select 1);
} forEach ([] call EFUNC(ctab_groups,readLog));

_n
