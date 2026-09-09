#include "script_component.hpp"
/*
 * Author: Ghost
 * The mission's platoons as addressable tags: [callsign, [squad ids]].
 *
 * A PLATOON WAS NOT A TAG YOU COULD USE. FUNC(tagMatch) resolves a squad, a
 * job or a man - and a platoon is none of those, because no group is called
 * BANSHEE; the groups are BANSHEE 1-1 to 1-4. So "wake the whole mechanised
 * platoon" had to be four chips or four words typed out, on a net whose entire
 * point is that it is the platoon's.
 *
 * THE MISSION ALREADY SAYS WHICH SQUADS ARE IN WHICH PLATOON - the Platoons
 * class the role screen draws its tabs from, and the one
 * ghost_players_fnc_platoonNet reads for the radio. This is the same table, and
 * a platoon that wants to be addressable needs nothing added to it.
 *
 * MATCHED ON ANY OF ITS THREE NAMES - callsign, name, or net - because a man
 * typing a tag in a hurry types the word he says on the radio, and which of the
 * three that is depends on the mission. Spaces are noise, the same as
 * everywhere else a tag is compared.
 *
 * CACHED. The server asks FUNC(tagMatch) once per player per tagged message; a
 * config walk in there is a config walk per player per message. Mission config
 * cannot change at runtime, so this is read once.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * [[tag, [SQUAD IDS, upper-cased, spaces stripped]], ...] <ARRAY>
 *
 * Example:
 * private _platoons = [] call ghost_messaging_fnc_platoonTags
 *
 * Public: Yes
 */

if (!isNil QGVAR(platoonTagCache)) exitWith {+GVAR(platoonTagCache)};

private _out = [];
private _root = missionConfigFile >> "Dynamic_Groups" >> "Platoons";

if (isClass _root) then {
    {
        private _squads = (getArray (_x >> "squads")) apply {
            toUpper ((_x splitString " ") joinString "")
        };
        if (_squads isEqualTo []) then {continue};

        // CAPTURED BEFORE THE INNER LOOP SHADOWS IT. The names are read off the
        // platoon class, and _x below is one of those names.
        private _names = [
            getText (_x >> "callsign"),
            getText (_x >> "name"),
            getText (_x >> "net")
        ];

        // Any of the three, and a repeat is skipped - a tag is looked up by
        // walking this list, so "BANSHEE" appearing as both callsign and net
        // answers the same squads either way.
        {
            private _tag = toUpper ((_x splitString " ") joinString "");
            if (_tag isNotEqualTo "" && {(_out findIf {(_x select 0) isEqualTo _tag}) isEqualTo -1}) then {
                _out pushBack [_tag, _squads];
            };
        } forEach _names;
    } forEach (configProperties [_root, "isClass _x", true]);
};

GVAR(platoonTagCache) = _out;
+_out
