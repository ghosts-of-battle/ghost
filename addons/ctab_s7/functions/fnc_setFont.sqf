#include "script_component.hpp"
/*
 * Author: YonV
 * Picks the label font from the settings app. The choice is the player's own,
 * so it is kept in their profile and survives between missions. Index order
 * matches the buttons in ui_s7.hpp and ui_tablet.hpp.
 *
 * The scanner rows are deliberately left out: they match cTab's own map-tools
 * readout, and that pairing is worth more than a free choice.
 *
 * Arguments:
 * 0: Font index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [2] call ghost_ctab_s7_fnc_setFont
 */

params ["_index"];

profileNamespace setVariable [QGVAR(font), _index];
saveProfileNamespace;

call FUNC(applyTheme);

hintSilent format ["Font: %1", S7_FONT_NAMES select (_index min (count S7_FONT_NAMES - 1))];
