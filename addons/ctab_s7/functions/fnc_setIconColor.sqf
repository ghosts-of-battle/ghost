#include "script_component.hpp"
/*
 * Author: YonV
 * Picks the app-icon colour from the settings app. The choice is the player's
 * own, so it is kept in their profile and survives between missions. Index
 * order matches the swatch list in gen_ui.py.
 *
 * Arguments:
 * 0: Swatch index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [1] call ghost_ctab_s7_fnc_setIconColor
 */

params ["_index"];

profileNamespace setVariable [QGVAR(iconColor), _index];
saveProfileNamespace;

call FUNC(applyIconColor);

hintSilent format ["Icon colour: %1", S7_COLOUR_NAMES select (_index min (count S7_COLOUR_NAMES - 1))];
