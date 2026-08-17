#include "script_component.hpp"
/*
 * Draws everyone's ACE map-gesture pointer on a cTab device map.
 *
 * ACE hangs its gesture drawing off the main map's onDraw. A cTab device is a
 * different map control that never calls it, so pointing at something while
 * two people have their tablets out shows nothing. This is the same draw, on
 * the device's map.
 *
 * Adapted from Better CAS Environment's Compat_ACE by Aaren (Arma Public
 * License Share Alike), which took it in turn from
 * ace_map_gestures_fnc_drawMapGestures. Changed here: the icon is drawn at a
 * size that reads on a handset screen, and the proximity cache is ACE's own
 * so the two draws cannot disagree about who is nearby.
 *
 * Arguments:
 * 0: The map control <CONTROL>
 * 1: Who to consider <ARRAY>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_map", "_positions"];

private _players = [
    _positions,
    ace_map_gestures_fnc_getProximityPlayers,
    missionNamespace,
    "ace_map_gestures_proximityPlayersCache",
    1
] call ace_common_fnc_cachedCall;

{
    private _pos = _x getVariable "ace_map_gestures_pointPosition";
    if (!alive _x || {isNil "_pos"}) then {continue};

    // your own pointer follows your cursor rather than the last published
    // position, so it does not lag behind the hand moving it
    if (_x isEqualTo ACE_player && {!isNil "ace_map_gestures_cursorPosition"}) then {
        _pos = ace_map_gestures_cursorPosition;
    };

    private _colorMap = ace_map_gestures_GroupColorCfgMappingNew getOrDefault [
        toLower groupId (group _x),
        [ace_map_gestures_defaultLeadColor, ace_map_gestures_defaultColor]
    ];
    private _color = _colorMap select (_x != leader _x);

    _map drawIcon [
        "a3\ui_f\data\igui\cfg\simpletasks\types\target_ca.paa",
        _color, _pos, 22, 22, 0, "", 1, 0.035, "RobotoCondensedBold", "left"
    ];
    _map drawIcon [
        "#(argb,1,1,1)color(0,0,0,0)",
        ace_map_gestures_nameTextColor, _pos, 18, 18, 0, name _x, 0, 0.035,
        "RobotoCondensedBold", "left"
    ];
} forEach _players;
