#include "script_component.hpp"
/*
 * Author: YonV
 * Which marker colour the tools draw in.
 *
 * BCE read this off a colour list box it had added to its own cTab UI, falling
 * back to the main map's marker combo. We have neither of those controls, and
 * a tool used from a handheld has no combo to read anyway, so the choice is a
 * setting instead - one the player sets once and forgets.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * A CfgMarkerColors class name <STRING>
 *
 * Example:
 * call ghost_ctab_tools_fnc_markerColour
 */

private _index = GVAR(markerColour);
private _names = MARKER_COLOURS;
_names select (_index min (count _names - 1))
