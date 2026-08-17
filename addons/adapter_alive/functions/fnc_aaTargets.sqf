#include "script_component.hpp"
/*
 * Author: Ghost
 * Every AA piece ALiVE's placement registered, as a hunt pool (new.md
 * section 1.1 - ghost spawns none of this).
 *
 * ALIVE_aaProfileBehaviour is an ALiVE hash keyed by profileID, written at
 * placement (mil_placement fnc_MP.sqf:1858, custom fnc_CMP.sqf:2164). Each
 * key is joined against the live profile system and PRUNED when the profile
 * is gone - a pool that remembers dead radars lies to the hunt.
 *
 * An ALiVE hash is a CBA hash: keys at index 1, values at index 2 - CBA's own
 * HASH_KEYS/HASH_VALUES macros (x/cba/addons/hashes/script_hashes.hpp:2-3),
 * as ALiVE reads them itself in x_lib fnc_hashRem.sqf:46. Read in exactly one
 * place - here - so the layout has one consumer if it ever changes.
 *
 * Arguments: None
 *
 * Return Value:
 * [[profileID <STRING>, pos <ARRAY>, side <SIDE>, behaviour <STRING>], ...]
 *
 * Example:
 * call ghost_adapter_alive_fnc_aaTargets
 */

if (!GVAR(ready) || {isNil "ALIVE_aaProfileBehaviour"}) exitWith {[]};

private _out = [];
{
    private _id = _x;
    private _behaviour = [ALIVE_aaProfileBehaviour, _id, ""] call ALiVE_fnc_hashGet;

    private _profile = [ALIVE_profileHandler, "getProfile", _id] call ALIVE_fnc_profileHandler;
    if (isNil "_profile") then {continue};
    if !(_profile isEqualType []) then {continue};
    if (_profile isEqualTo []) then {continue};

    private _pos = [_profile, "position", []] call ALiVE_fnc_hashGet;
    private _sideText = toUpper ([_profile, "side", ""] call ALiVE_fnc_hashGet);
    private _side = [_sideText, sideUnknown] call EFUNC(common,sideFromText);

    if (_pos isNotEqualTo [] && {_side isNotEqualTo sideUnknown}) then {
        _out pushBack [_id, _pos, _side, _behaviour];
    };
} forEach (ALIVE_aaProfileBehaviour select HASH_KEYS);

_out
