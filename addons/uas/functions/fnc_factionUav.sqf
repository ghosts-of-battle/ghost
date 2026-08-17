#include "script_component.hpp"
/*
 * Author: Ghost
 * A UAV that faction actually flies - WHO comes from ALiVE, never from a
 * classname written here (new.md rule 2).
 *
 * Scanned from config once per faction and cached. A faction with no UAV of
 * its own falls back to its SIDE's vanilla airframe, loudly, because a silent
 * substitution is how an OPFOR commander ends up flying NATO drones.
 *
 * Arguments:
 * 0: Faction <STRING>
 * 1: Side, for the fallback <SIDE>
 *
 * Return Value:
 * Classname, "" if even the fallback is missing <STRING>
 *
 * Example:
 * ["OPF_F", east] call ghost_uas_fnc_factionUav
 */

params [["_faction", "", [""]], ["_side", east, [east]]];

if (isNil QGVAR(uavCache)) then { GVAR(uavCache) = createHashMap };

private _hit = GVAR(uavCache) getOrDefault [_faction, ""];
if (_hit isNotEqualTo "") exitWith {_hit};

private _found = "";
if (_faction isNotEqualTo "") then {
    {
        private _cls = configName _x;
        if (getNumber (_x >> "scope") == 2
            && {getText (_x >> "faction") == _faction}
            && {_cls isKindOf "UAV"}
            && {getNumber (_x >> "isUav") == 1 || {_cls isKindOf "UAV_01_base_F"}}) exitWith {
            _found = _cls;
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));
};

if (_found isEqualTo "") then {
    _found = switch (_side) do {
        case west: {"B_UAV_01_F"};
        case independent: {"I_UAV_01_F"};
        default {"O_UAV_01_F"};
    };
    WARNING_2("faction '%1' flies no UAV of its own - falling back to %2",_faction,_found);
};

if !(isClass (configFile >> "CfgVehicles" >> _found)) then { _found = "" };

GVAR(uavCache) set [_faction, _found];
_found
