/*
 * Author: AACO
 * Function used to convert a config path to a boolean, with optional fallback
 *
 * Arguments:
 * 0: The config path to convert <CONFIG>
 * 1: The fallback value, default false <BOOL>
 *
 * Return Value:
 * The parsed boolean from the config path. If the path isn't a number/string will
 * return the specified default value or false if it isn't <BOOL>
 *
 * Examples:
 * [configFile >> "thisIsANumber1"] call ghost_core_fnc_getBool; // returns true
 * [configFile >> "thisIsANumber0"] call ghost_core_fnc_getBool; // returns false
 * [configFile >> "thisIsAString1"] call ghost_core_fnc_getBool; // returns true
 * [configFile >> "thisIsAString0"] call ghost_core_fnc_getBool; // returns false
 * [configFile >> "thisIsAStringTrue"] call ghost_core_fnc_getBool; // returns true
 * [configFile >> "thisIsAStringFalse"] call ghost_core_fnc_getBool; // returns false
 * [configFile >> "thisIsAStringGibberish"] call ghost_core_fnc_getBool; // returns false
 * [configFile >> "thisIsNotANumberOrString"] call ghost_core_fnc_getBool; // returns false
 * [configFile >> "thisIsNotANumberOrString", true] call ghost_core_fnc_getBool; // returns true
 *
 * Public: Yes
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params [
    ["_config", configFile, [configFile]],
    ["_defaultValue", false, [false]]
];

if (isNumber _config) exitWith {
    [getNumber _config] call FUNC(parseBool);
};

if (isText _config) exitWith {
    [getText _config] call FUNC(parseBool);
};

_defaultValue
