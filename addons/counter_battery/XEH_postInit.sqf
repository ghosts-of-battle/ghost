#include "script_component.hpp"

// Raised by the first module to register, on every machine including headless
// clients - they own AI artillery too. Arming is what starts the sweep, so a
// mission with no module placed never looks for a gun.
[QGVAR(arm), {
    params [["_extra", [], [[]]]];
    GVAR(extraClasses) = _extra;
    if (GVAR(sweepHandle) < 0) then {
        GVAR(sweepHandle) = [FUNC(sweep), CB_SWEEP_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
    };
}] call CBA_fnc_addEventHandler;

// A gun's Fired handler runs wherever that gun is local, which for a player-
// crewed mortar is that player's machine. Everything that DECIDES anything
// happens here instead, on one machine, so two clients can never each book their
// own reply to the same shot.
if (isServer) then {
    [QGVAR(fired), { _this call FUNC(serverFired) }] call CBA_fnc_addEventHandler;
};

// Warnings are broadcast to everyone and filtered here, same as every other
// ghost side-scoped message.
[QGVAR(warn), {
    params ["_title", "_text", "_colour", "_side"];
    if (!hasInterface || {side group ACE_player isNotEqualTo _side}) exitWith {};
    [_title, _text, _colour] call EFUNC(notify,notify);
}] call CBA_fnc_addEventHandler;

if (isServer) then {
    ["cb.status", "list registered counter-battery radars and hooked guns", {
        private _b = GVAR(batteries);
        if (_b isEqualTo []) exitWith { "no counter-battery module placed" };
        private _guns = vehicles select { _x getVariable [QGVAR(hooked), false] };
        format ["%1 radar(s), %2 gun(s) hooked: %3",
            count _b,
            count _guns,
            (_guns apply {
                private _cd = (_x getVariable [QGVAR(cooldownUntil), -1]) - CBA_missionTime;
                format ["%1 shots=%2%3",
                    typeOf _x,
                    _x getVariable [QGVAR(shots), 0],
                    ["", format [" cooling %1s", round _cd]] select (_cd > 0)]
            }) joinString ", "]
    }, true] call EFUNC(common,addDebugCommand);
};
