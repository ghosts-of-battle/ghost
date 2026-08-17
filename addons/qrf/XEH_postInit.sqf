#include "script_component.hpp"

if (!isServer) exitWith {};
// THE MODULE IS THE ENABLE. This file only sets up state and the report
// command; FUNC(moduleController) is what arms the system, so a mission with
// no module placed gets nothing from this addon. GVAR(moduleUp) is declared in
// XEH_preInit, NOT here - see there for why.

GVAR(watches) = [];

// The capture event is the product. Anything else that wants to answer a
// capture listens here rather than being wired into the detector.
[QGVAR(captured), {
    _this call FUNC(onCaptured);
}] call CBA_fnc_addEventHandler;

["ghostqrf", {
    [QGVAR(report), []] call CBA_fnc_serverEvent;
}, "all"] call CBA_fnc_registerChatCommand;

[QGVAR(report), {
    private _txt = format ["%1 objective(s): %2", count GVAR(watches),
        GVAR(watches) apply {
            format ["%1@%2%3", _x get "name", mapGridPosition (_x get "pos"),
                ["", " HELD"] select (_x get "held")]
        }];
    diag_log text format ["[ghost_qrf] %1", _txt];
    [format ["QRF: %1", _txt]] remoteExec ["systemChat", 0];
}] call CBA_fnc_addEventHandler;
