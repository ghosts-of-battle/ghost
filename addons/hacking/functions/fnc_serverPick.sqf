#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_serverPick

Description:
    Server end of the choice menu. Builds the snapshot for the chosen product and
    broadcasts the render. Everything that decides WHAT the intel is happens
    here, on one machine, so two clients can never disagree about it.

Parameters:
    _product : STRING - "aa" | "arty" | "coastal" | "radar" | "jam" |
                        "leader" | "installation".
    _pos     : ARRAY  - where the hack happened.
    _side    : SIDE   - who earned it.
    _caller  : OBJECT - the hacker.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_product", "_pos", "_side", "_caller"];

private _ok = switch (_product) do {
    // The force-on-force hunt (new.md section 1.1): what ALiVE placed, found
    // from a tower. Ghost spawns none of it, so an empty pool is an honest
    // "there is nothing out there" rather than a broken product.
    case "aa":      { [_pos, _side] call FUNC(productLocateAA) };
    case "arty":    { [_pos, _side] call FUNC(productLocateArty) };
    // The coastal network, split into the launchers and the eyes that feed
    // them - killing one does not kill the other, so they are two hunts.
    case "coastal": { [_pos, _side] call FUNC(productLocateCoastal) };
    case "radar":   { [_pos, _side] call FUNC(productLocateRadar) };
    // The other half of the asymmetric hunt: the things the chain needs to keep
    // working, beside the men who run it.
    case "installation": { [_pos, _side] call FUNC(productInstallation) };
    // The jammers holding the quiet up - hack one and its zone dies quietly,
    // blow it and everyone knows you were there.
    case "jam": {
        !isNil "ghost_jamming_fnc_productLocateJammer"
            && {[_pos, _side] call ghost_jamming_fnc_productLocateJammer}
    };
    // The asymmetric chain: a circle on a safe house, never on the man.
    case "leader": {
        !isNil "ghost_leaders_fnc_productLeader"
            && {[_pos, _side] call ghost_leaders_fnc_productLeader}
    };
    // force-on-force locators, scoped by commander rather than by distance
    default { false };
};

// The message never differs either. A player who learns that a poisoned product
// phrases its confirmation differently has been handed the tell for free.
private _msg = ["Nothing to report.", "Intel plotted - check your map."] select _ok;
[QGVAR(pickResult), [_msg, _side]] call CBA_fnc_globalEvent;

INFO_3("Hacking: product '%1' by %2 -> %3",_product,name _caller,_ok);
