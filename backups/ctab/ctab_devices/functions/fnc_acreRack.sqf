#include "script_component.hpp"
/*
 * Author: YonV
 * One ACRE vehicle rack, read the way BCE's Compat_Radio reads it (Aaren,
 * APL-SA): the rack's own name rather than a number, whether the set in it is
 * switched on, and the frequency it is actually sitting on rather than just a
 * channel index.
 *
 * That last one needs ACRE's internal data event - the public API returns a
 * channel number, and a channel number is no use to somebody being told which
 * frequency to come up on. Every internal call is guarded: they are not part
 * of ACRE's public API and could go away.
 *
 * Arguments:
 * 0: An ACRE rack <ANY>
 *
 * Return Value:
 * 0: Rack name <STRING>
 * 1: What the set is doing <STRING>
 * 2: Whether it is powered, or nil when that cannot be read <BOOL>
 * 3: Whether a set is mounted at all <BOOL>
 *
 * Example:
 * [_rack] call ghost_ctab_devices_fnc_acreRack
 */

params ["_rack"];

// the rack's own name, off its base class
private _name = "RACK";
if (!isNil "acre_sys_rack_fnc_getRackBaseClassname") then {
    private _base = _rack call acre_sys_rack_fnc_getRackBaseClassname;
    if (_base isEqualType "" && {_base != ""}) then {
        private _display = getText (configFile >> "CfgVehicles" >> _base >> "displayName");
        if (_display != "") then {
            _name = toUpper _display;
        };
    };
};

private _radio = _rack call acre_api_fnc_getMountedRackRadio;
if (isNil "_radio" || {!(_radio isEqualType "")} || {_radio isEqualTo ""}) exitWith {
    [_name, "EMPTY", false, false]
};

// powered or not - a rack with the set switched off is worth seeing
private _on = true;
if (!isNil "acre_sys_data_fnc_dataEvent") then {
    private _state = [_radio, "getOnOffState"] call acre_sys_data_fnc_dataEvent;
    if (_state isEqualType 0) then {
        _on = _state isEqualTo 1;
    };
};

// the frequency itself, and both halves of it when they differ
private _text = "";
if (!isNil "acre_sys_data_fnc_dataEvent") then {
    private _data = [_radio, "getCurrentChannelData"] call acre_sys_data_fnc_dataEvent;
    if (!isNil "_data" && {_data isEqualType locationNull}) then {
        private _rx = _data getVariable ["frequencyRX", ""];
        private _tx = _data getVariable ["frequencyTX", ""];
        if (str _rx != "") then {
            _text = if (str _rx isEqualTo str _tx) then {
                format ["%1", _rx]
            } else {
                format ["R %1 / T %2", _rx, _tx]
            };
        };
    };
};

// fall back to the public API's channel number when the internals moved
if (_text isEqualTo "") then {
    private _ch = [_radio] call acre_api_fnc_getRadioChannel;
    _text = format ["CH %1", _ch];
};

[_name, format ["%1  %2", _radio, _text], _on, true]
