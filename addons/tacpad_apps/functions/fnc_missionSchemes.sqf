#include "script_component.hpp"
/*
 * Author: Ghost
 * The mission's own colour presets, read out of its config.
 *
 * THE SIX SHIPPED SCHEMES ARE THE MOD'S AND STAY THE MOD'S. A unit that wants
 * its own colours on the tacpad had one way to get them - three swatch strips
 * and a custom scheme every player had to reassemble by hand - which is not a
 * preset, it is a colouring exercise. This reads a row of ready-made ones out
 * of the MISSION, so a unit palette is an edit to
 * config\config_tacpad.hpp and nothing else: no mod rebuild, and every player
 * in that mission gets the same list.
 *
 * A mission preset IS the custom scheme. Pressing one writes the three custom
 * tokens and switches to `custom`, so nothing downstream - FUNC(theme), the
 * cache key, the CBA setting - learns a seventh scheme name that would then
 * mean nothing in a mission that does not define it.
 *
 * Read ONCE per mission and kept. Mission config cannot change while the
 * mission runs, and the settings screen redraws on every press.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * The presets, in config order <ARRAY>
 *   0: Label <STRING>
 *   1: Ground as "#RRGGBB" <STRING>
 *   2: Ink as "#RRGGBB" <STRING>
 *   3: Accent as "#RRGGBB" <STRING>
 *
 * Example:
 * private _presets = call ghost_tacpad_apps_fnc_missionSchemes
 *
 * Public: No
 */

if (!isNil QGVAR(missionSchemes)) exitWith {GVAR(missionSchemes)};

private _out = [];

// No class is not an error. Most missions have nothing to say about colour and
// get the six shipped schemes, which is the right default.
{
    private _cfg = _x;
    private _id = configName _cfg;

    // HEX OR r,g,b, whichever the mission wrote - FUNC(rgbOf) reads both, and
    // an empty fallback is how a missing or unreadable token is spotted here
    // rather than painted as black on the card.
    private _tokens = ["ground", "ink", "accent"] apply {
        [getText (_cfg >> _x), []] call EFUNC(tacpad,rgbOf)
    };

    if (_tokens findIf {_x isEqualTo []} > -1) then {
        WARNING_1("mission scheme '%1' has no readable ground, ink and accent - skipped",_id);
        continue;
    };

    private _label = getText (_cfg >> "name");
    if (_label == "") then {_label = _id};

    // Canonical hex, not what was typed. The settings screen compares the
    // preset against the three custom tokens to know which card is active, and
    // "#7de08a" against "7DE08A" is the same colour and a different string.
    _out pushBack ([toUpper _label] + (_tokens apply {[_x] call EFUNC(tacpad,hexOf)}));
} forEach ("true" configClasses (missionConfigFile >> "Ghost_TacpadSchemes"));

GVAR(missionSchemes) = _out;

_out
