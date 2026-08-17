#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads a ghost value from ALiVE's persistence store.
 *
 * The third-party surface is getData/setData - there is no generic
 * SaveData/LoadData pair, whatever the older design notes said. Silent nil
 * without a data module: persistence is optional, and its absence is a
 * mission's configuration rather than an error.
 *
 * Arguments:
 * 0: Key <STRING>, ghost_ prefixed by convention
 *
 * Return Value:
 * The stored value, or nil <ANY>
 *
 * Example:
 * ["ghost_leaders_spent"] call ghost_adapter_alive_fnc_getData
 */

params [["_key", "", [""]]];

if (_key isEqualTo "" || {isNil "ALiVE_fnc_getData"}) exitWith {nil};

[_key] call ALiVE_fnc_getData
