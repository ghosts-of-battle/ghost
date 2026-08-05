#include "script_component.hpp"

GVAR(count) = 0;
GVAR(required) = IH_REQUIRED_DEF;
GVAR(complete) = false;

// --- server: the counter and the hunt state live in one place --------------
if (isServer) then {
    [QGVAR(collected), {
        params ["_body"];
        GVAR(count) = GVAR(count) + 1;
        publicVariable QGVAR(count);
        [QGVAR(message), [
            "Intel Hunt",
            format ["Documents recovered - %1 of %2.", GVAR(count), GVAR(required)],
            GVAR(side)
        ]] call CBA_fnc_globalEvent;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(process), { _this call FUNC(processIntel) }] call CBA_fnc_addEventHandler;
};

// --- clients: render + messages, both side-filtered here -------------------
[QGVAR(hint), {
    params ["_id", "_pos", "_radius", "_alpha", "_duration", "_fade", "_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    ["Intel Hunt", "Intel processed - check your map.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
    [_id, _pos, _radius, "ColorRed", _alpha, _duration, _fade] call EFUNC(common,renderIntelCircle);
}] call CBA_fnc_addEventHandler;

[QGVAR(message), {
    params ["_title", "_text", "_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    [_title, _text, [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
}] call CBA_fnc_addEventHandler;

// --- Phase 6 admin test commands -------------------------------------------
["intel.count", "set the gathered intel counter: intel.count [n]", {
    params ["_args"];
    GVAR(count) = round (parseNumber (_args param [0, "0"]));
    publicVariable QGVAR(count);
    format ["intel counter = %1/%2", GVAR(count), GVAR(required)]
}] call EFUNC(common,addDebugCommand);

["intel.hint", "force the next hint without spending intel", {
    if !(missionNamespace getVariable [QGVAR(active), false]) exitWith { "no Intel Hunt module placed" };
    private _ok = [] call FUNC(fireHint);
    if (_ok) then { GVAR(tier) = GVAR(tier) + 1 };
    format ["hint fired: %1 (tier now %2)", _ok, GVAR(tier)]
}] call EFUNC(common,addDebugCommand);

["intel.state", "dump the hunt state", {
    if !(missionNamespace getVariable [QGVAR(active), false]) exitWith { "no Intel Hunt module placed" };
    private _t = GVAR(targets) param [GVAR(index), objNull];
    format ["target %1/%2 (%3) | tier %4 | intel %5/%6 | complete %7",
        (GVAR(index) + 1) min (count GVAR(targets)), count GVAR(targets),
        if (isNull _t) then { "-" } else { typeOf _t },
        GVAR(tier), GVAR(count), GVAR(required), GVAR(complete)]
}] call EFUNC(common,addDebugCommand);
