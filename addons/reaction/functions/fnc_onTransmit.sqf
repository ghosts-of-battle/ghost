#include "script_component.hpp"
/*
 * Author: Ghost
 * A key-up on this client. Filtered here, locally, so only a DETECTABLE
 * transmission costs the server an event.
 *
 * SATCOM IS EXEMPT (new.md section 2), and the test is ACRE's own antenna
 * connection rather than a flag ghost keeps - a set talking to a satellite is
 * not radiating across the valley, and that is the point of carrying one.
 *
 * Power: ACRE knows the live channel's transmit power in milliwatts. TFAR has
 * no equivalent, so its long-range sets - the only ones that reach here - are
 * treated as above any sane threshold, which is what they are.
 *
 * Arguments:
 * 0: Radio id or class <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_radio", "", [""]]];

// SATCOM: ACRE's own answer, asked of this radio. One condition, one
// exitWith at function scope - the old inner exitWith only left its own
// then-block, and the exemption never exempted anybody.
if (
    _radio isNotEqualTo ""
    && {!isNil "acre_sys_gsa_fnc_isAntennaConnected"}
    && {[_radio] call acre_sys_gsa_fnc_isAntennaConnected}
) exitWith {};

private _watts = 5;
if (_radio isNotEqualTo "" && {!isNil "acre_api_fnc_getRadioChannelData"}) then {
    private _data = [_radio] call acre_api_fnc_getRadioChannelData;
    if (_data isEqualType []) then {
        // ACRE's channel data carries power in mW; shapes differ by version,
        // so a number is looked for rather than an index assumed.
        private _mw = 0;
        { if (_x isEqualType 0 && {_x > _mw}) then {_mw = _x} } forEach _data;
        if (_mw > 0) then { _watts = _mw / REACT_MW_PER_WATT };
    };
};

// The threshold is a module attribute read on the SERVER and this filter
// runs on a CLIENT - unbroadcast it was nil here, and every key-up died on
// this line as a script error before its event left the machine. Hosted SP
// hid it, because there the client IS the server. The module
// publicVariables it now; the default covers a client that keys up first.
if (_watts < (missionNamespace getVariable [QGVAR(watts), 1])) exitWith {};

[QGVAR(event), [player, "radio"]] call CBA_fnc_serverEvent;
