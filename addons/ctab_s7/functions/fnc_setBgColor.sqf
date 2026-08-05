#include "script_component.hpp"
/*
 * Author: YonV
 * Picks the screen background shade from the settings app. The choice is the
 * player's own, so it is kept in their profile and survives between missions.
 * Index order matches the buttons in ui_s7.hpp and ui_tablet.hpp.
 *
 * Arguments:
 * 0: Shade index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [1] call ghost_ctab_s7_fnc_setBgColor
 */

params ["_index"];

profileNamespace setVariable [QGVAR(bgColor), _index];
saveProfileNamespace;

call FUNC(applyTheme);

hintSilent format ["Screen: %1", S7_BGCOLOUR_NAMES select (_index min (count S7_BGCOLOUR_NAMES - 1))];
