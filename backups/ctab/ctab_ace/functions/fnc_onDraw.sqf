#include "script_component.hpp"
/*
 * The Draw handler this addon puts on a cTab device's map: publish where this
 * player is pointing, then draw everyone's pointer.
 *
 * Adapted from Better CAS Environment's Compat_ACE by Aaren (Arma Public
 * License Share Alike). Two changes, both because ghost has no BCE around it:
 * the transmit gate was a BCE toggle variable and is now cTab's own
 * cursor-on-map flag, and the map control comes from the handler rather than
 * from a variable BCE set elsewhere.
 *
 * Arguments:
 * 0: The map control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_map"];

if (isNil "ace_map_gestures_enabled" || {!ace_map_gestures_enabled}) exitWith {};

// Pointing is the left button held down on the map, the same as ACE's own.
// That is also what the drawing tools listen for, so a device with a tool
// live will do both at once - which is what happens on the main map too.
// cTab sets the flag from its map's onMouseMoving. Read through getVariable
// rather than testing the variable directly: without cTab loaded it does not
// exist at all, and the default says "treat the cursor as on the map", which
// is right for any other map this ever gets attached to.
private _pointing = (inputMouse 0) isEqualTo 2
    && {missionNamespace getVariable ["cTabCursorOnMap", true]};

if (!_pointing) then {
    if (ace_map_gestures_EnableTransmit) then {
        ace_map_gestures_EnableTransmit = false;
        ACE_player setVariable ["ace_map_gestures_pointPosition", nil, true];
    };
} else {
    if (!ace_map_gestures_EnableTransmit) then {
        ace_map_gestures_EnableTransmit = true;
    };

    ace_map_gestures_cursorPosition = _map ctrlMapScreenToWorld getMousePosition;
    if (ace_map_gestures_cursorPosition distance2D (ACE_player getVariable ["ace_map_gestures_pointPosition", [0, 0, 0]]) >= 1) then {
        [
            ACE_player, "ace_map_gestures_pointPosition",
            ace_map_gestures_cursorPosition, ace_map_gestures_interval
        ] call ace_common_fnc_setVariablePublic;
    };
};

// in the briefing everyone is in one room, so ACE shows the whole room
if (getClientStateNumber < 10) then {
    [_map, ace_map_gestures_briefingMode] call FUNC(drawPointers);
} else {
    [_map, [[ACE_player, ace_map_gestures_maxRange]]] call FUNC(drawPointers);
};
