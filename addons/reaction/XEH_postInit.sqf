#include "script_component.hpp"

if (hasInterface) then {
    [] call FUNC(radioInit);
};

if (!isServer) exitWith {};

// netId -> flagged-until, and netId -> last major. The two pieces of state
// the whole ladder runs on.
// THE MODULE IS THE ENABLE. This file only sets up state and the report
// command; FUNC(moduleController) is what arms the system, so a mission with
// no module placed gets nothing from this addon. GVAR(moduleUp) is declared in
// XEH_preInit, NOT here - see there for why.

GVAR(flags) = createHashMap;
GVAR(majors) = createHashMap;

// THE ONE PATH. A failed hack, a drone that saw somebody, and a detectable
// transmission all arrive here and roll the same degrees (new.md section 2).
[QGVAR(event), {
    params [["_unit", objNull, [objNull]], ["_source", "?", [""]]];
    if (isNull _unit) exitWith {};
    [_unit, _source] call FUNC(roll);
}] call CBA_fnc_addEventHandler;

["ghostreact", {
    [QGVAR(report), [player]] call CBA_fnc_serverEvent;
}, "all"] call CBA_fnc_registerChatCommand;

[QGVAR(report), {
    params ["_who"];
    private _txt = format ["flagged=%1 majors=%2 | you: %3",
        count GVAR(flags), count GVAR(majors),
        ["clean", "FLAGGED"] select ([_who] call FUNC(flagged) select 0)];
    diag_log text format ["[ghost_reaction] %1", _txt];
    [format ["REACTION: %1", _txt]] remoteExec ["systemChat", 0];
}] call CBA_fnc_addEventHandler;
