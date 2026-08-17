#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_intelOptions

Description:
    What this hack could be made to produce, given where it is happening and
    what the mission currently has. Also keeps the session's choice valid when
    the list changes under it.

    It lived inside FUNC(tabletRefresh), which meant the answer only existed
    while the suite's own dialog was on screen - anything else that wanted to
    offer the same choices had to work them out again and could disagree. It is
    a question about the mission, not about a display.

    SCOPED BY THE GROUND IT IS STANDING ON. FUNC(taorType) asks ALiVE which
    commander holds this spot and what kind of war it is fighting:

      invasion / occupation - the integrated defence network. Air defence,
                              coastal batteries, their radars, artillery, and
                              the jammers holding the quiet up. The player's
                              job is to un-integrate it (new.md section 1).
      asymmetric            - the leader chain and the installations that feed
                              it (new.md section 5).

    STRICTLY. An asymmetric TAOR does not offer LOCATE AA even when the map has
    air defence somewhere else on it: the point of the split is that breaking
    into a phone net in a town tells you about the town.

    NO COMMANDER, NO PRODUCTS. Ground nobody is fighting over has no
    intelligence network to break into, so the list is empty and the tablet says
    so. A button that can only ever say "nothing" teaches players to stop
    reading the list.

Parameters:
    _session : HASHMAP - the tablet session. Optional, default the live one.

Returns:
    ARRAY - [id, label] pairs, capped at TAB_INTEL.

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_session", GVAR(session), [createHashMap]]];

private _avail = [];

if ((_session get "kind") isEqualTo "drone") exitWith {
    // A drone hack does one thing; there is nothing to choose.
    _avail = [["none", "DOWN THE DRONE"]];
    GVAR(intelAvailable) = _avail;
    _session set ["intel", "none"];
    _avail
};

// Where the hack is, not where the player was when the tablet opened. A device
// selected across a TAOR boundary is answered by the ground the DEVICE is on -
// it is that network being broken into, not the operator's.
private _device = _session getOrDefault ["device", objNull];
private _at = if (isNull _device) then {getPosATL player} else {getPosATL _device};

switch ([_at] call FUNC(taorType)) do {

    // --- the integrated defence network ------------------------------------
    case "invasion";
    case "occupation": {
        if ((missionNamespace getVariable ["ghost_adapter_alive_aaCount", 0]) > 0
            || {(missionNamespace getVariable [QEGVAR(airdefence,sites), []]) isNotEqualTo []}) then {
            _avail pushBack ["aa", "LOCATE AA"];
        };
        if ((missionNamespace getVariable [QEGVAR(antiship,batteries), []]) isNotEqualTo []) then {
            _avail pushBack ["coastal", "LOCATE ANTI-SHIP"];
        };
        // ghost_antiship_radars, the live radar objects - the product reads the
        // same list. This was gated on a "radarSites" variable nothing ever
        // wrote, so the button could never appear even with radars up.
        if ((missionNamespace getVariable [QEGVAR(antiship,radars), []]) isNotEqualTo []) then {
            _avail pushBack ["radar", "LOCATE RADAR"];
        };
        if ((missionNamespace getVariable ["ghost_adapter_alive_artyCount", 0]) > 0) then {
            _avail pushBack ["arty", "LOCATE ARTILLERY"];
        };
        if ((missionNamespace getVariable ["ghost_jamming_zoneCount", 0]) > 0) then {
            _avail pushBack ["jam", "LOCATE JAMMER"];
        };
    };

    // --- the leader chain --------------------------------------------------
    case "asymmetric": {
        if ((missionNamespace getVariable ["ghost_leaders_upCount", 0]) > 0) then {
            _avail pushBack ["leader", "TRACE NETWORK"];
        };
        if (!isNil "ghost_adapter_alive_fnc_installations"
            && {(call ghost_adapter_alive_fnc_installations) isNotEqualTo []}) then {
            _avail pushBack ["installation", "LOCATE INSTALLATION"];
        };
    };
};

if (count _avail > TAB_INTEL) then { _avail = _avail select [0, TAB_INTEL] };
GVAR(intelAvailable) = _avail;

// Keep the selection valid when the list changes under it.
//
// AN EMPTY LIST LEAVES THE SELECTION ALONE. Blanking it made the session carry
// no product, which a gate in FUNC(tabletAction) then refused to start on - and
// a hack that will not begin reads as a broken hack, not as a considered
// refusal. The scoping decides what is OFFERED; it does not decide whether the
// suite works.
private _intel = _session get "intel";
if (_avail isNotEqualTo [] && {(_avail findIf { (_x select 0) isEqualTo _intel }) < 0}) then {
    _session set ["intel", (_avail param [0, ["", ""]]) select 0];
};

_avail
