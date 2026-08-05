#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletTick

Description:
    The tablet's heartbeat. Refreshes the device list on a slow cadence and, when
    a hack is running, advances it.

    Progress only moves while this handler is alive, and this handler only lives
    while the display is open - so closing the tablet pauses the hack with no
    special case anywhere. Walking out of range pauses it too, without closing.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];

private _display = uiNamespace getVariable [QGVAR(tablet), displayNull];
if (isNull _display) exitWith {
    GVAR(tabletPFH) = -1;
    [_handle] call CBA_fnc_removePerFrameHandler;
};

private _session = GVAR(session);
private _now = CBA_missionTime;

// --- advance a running hack ------------------------------------------------
if (_session get "running") then {
    private _device = _session get "device";
    private _dt = _now - (_session get "last");
    _session set ["last", _now];

    if ([_device, _session] call FUNC(tabletInRange)) then {
        private _p = ((_session get "progress") + (_dt / (_session get "time"))) min 1;
        _session set ["progress", _p];
        if (!isNull _device) then { _device setVariable [QGVAR(progress), _p, true] };

        if (_p >= 1) then {
            _session set ["running", false];
            _session set ["progress", 0];
            if (!isNull _device) then { _device setVariable [QGVAR(progress), 0, true] };
            [_device, _session get "kind", _session get "intel"] call FUNC(hackComplete);
        };
    };
};

// --- refresh the device list on a slower cadence ---------------------------
if ((_now - (GVAR(lastScan))) >= TAB_REFRESH) then {
    GVAR(lastScan) = _now;
    GVAR(devices) = [player] call FUNC(scanDevices);

    // Selection survives a refresh as long as the device is still listed.
    private _sel = _session get "device";
    if (!isNull _sel && {(GVAR(devices) findIf { (_x select 0) isEqualTo _sel }) < 0}) then {
        if !(_session get "running") then {
            _session set ["device", objNull];
            _session set ["kind", ""];
        };
    };
};

[_display] call FUNC(tabletRefresh);
