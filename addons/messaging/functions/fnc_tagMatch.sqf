#include "script_component.hpp"
/*
 * Author: Ghost
 * Does an audience tag name this man?
 *
 * ONE RULE, BOTH ENDS. The server asks it of every player to find out who a tag
 * reaches (see FUNC(srvTagged)); a client asks it of itself to find out whether
 * the message that just arrived was addressed to it by name (see
 * FUNC(cltReceive)). If those two answers could ever differ, a player would be
 * pushed a message the alert stayed silent about - so there is one function and
 * they cannot.
 *
 * WHAT A TAG MAY BE, in the order it is tried:
 *   a squad     NOMAD reaches everybody in the group called Nomad
 *   a job       MED reaches every medic, LDR every section commander - the same
 *               short tags FUNC(roleTag) stamps on traffic, so the tag you can
 *               see on a message is the tag you can address
 *   a man       his call sign as the roster shows it, or his UID
 *
 * CASE AND SPACES ARE NOISE. A tag is typed in a hurry on a net; "nomad",
 * "NOMAD" and " Nomad " are the same tag, and a group called "Alpha 1-2" is
 * reachable as ALPHA1-2 as well, because nobody types the space the same way
 * twice.
 *
 * NOT ALERT LEVELS. FLASH and ROUTINE are the template's business - see
 * FUNC(registerTemplate) - and a sender who could type his own urgency would
 * type FLASH on everything by the third mission.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Tag <STRING>
 *
 * Return Value:
 * The tag names him <BOOL>
 *
 * Example:
 * private _hit = [player, "NOMAD"] call ghost_messaging_fnc_tagMatch
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]], ["_tag", "", [""]]];

if (isNull _unit) exitWith {false};

private _wanted = toUpper (trim _tag);
if (_wanted isEqualTo "") exitWith {false};

private _fnc_tight = {toUpper ((_this splitString " ") joinString "")};

// THE BACKEND DEFINES the composer's job chips lean on - asked for in
// yellow: all medics, the aviation crews, the HQ group. MEDICS catches the
// ACE medic class as well as the slot word; AVIATION catches a slot that
// says pilot or the isPilot flag; HQ is the command-group setting.
private _defined = switch (_wanted) do {
    case "MEDIC";
    case "MEDICS": {
        (_unit getVariable ["ace_medical_medicClass", 0] > 0)
        || {(toUpper (roleDescription _unit)) find "MEDIC" > -1}
    };
    case "AVIATION";
    case "PILOTS": {
        (_unit getVariable ["isPilot", false])
        || {(toUpper (roleDescription _unit)) find "PILOT" > -1}
    };
    case "JFO": {
        // The mission's isJFO customVariable - the flag TAC//SUPPORT gates
        // tasking on - with the slot word as fallback.
        ((_unit getVariable ["isJFO", false]) isEqualTo true)
        || {(toUpper (roleDescription _unit)) find "JFO" > -1}
    };
    case "HQ": {
        // The mission flags its leadership with the isLeader customVariable -
        // the same one the platoon view gates on - so HQ reaches the leaders
        // wherever they stand. The command-group setting still counts too.
        ((_unit getVariable ["isLeader", false]) isEqualTo true)
        || {GVAR(commandGroup) isNotEqualTo ""
            && {((groupId (group _unit)) call _fnc_tight) isEqualTo (GVAR(commandGroup) call _fnc_tight)}}
    };
    default {false};
};
if (_defined) exitWith {true};

private _group = groupId (group _unit);
if (toUpper _group isEqualTo _wanted) exitWith {true};
if (_group call _fnc_tight isEqualTo (_wanted call _fnc_tight)) exitWith {true};

if (([_unit] call FUNC(roleTag)) isEqualTo _wanted) exitWith {true};

if (toUpper (name _unit) isEqualTo _wanted) exitWith {true};
if (getPlayerUID _unit isEqualTo _wanted) exitWith {true};

false
