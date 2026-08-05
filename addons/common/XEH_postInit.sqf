#include "script_component.hpp"

if (hasInterface) then {
    ["login", {
        [{IS_ADMIN}, {
            player setVariable [QGVAR(isAdmin), true, true];
        }, nil, 5] call CBA_fnc_waitUntilAndExecute;
    }, "all"] call CBA_fnc_registerChatCommand;

    ["logout", {
        if (player getVariable [QGVAR(isAdmin), false]) then {
            player setVariable [QGVAR(isAdmin), false, true];
        };
    }, "all"] call CBA_fnc_registerChatCommand;

    ["unit", {
        params ["_newPlayer", "_oldPlayer"];

        if (IS_ADMIN) then {
            _newPlayer setVariable [QGVAR(isAdmin), true, true];
        };

        if (_oldPlayer getVariable [QGVAR(isAdmin), false]) then {
            _oldPlayer setVariable [QGVAR(isAdmin), false, true];
        };
    }, true] call CBA_fnc_addPlayerEventHandler;
};

// Server end of the admin debug commands: run the handler here and reply to the
// admin who typed it. Registered unconditionally so a command added by any
// addon works without that addon knowing about the transport.
if (isServer) then {
    [QGVAR(debugRun), {
        params ["_name", "_args", "_caller"];
        private _entry = (missionNamespace getVariable [QGVAR(debugCommands), createHashMap]) getOrDefault [_name, []];
        if (_entry isEqualTo []) exitWith {};
        private _reply = [_args, _caller] call (_entry select 2);
        if (!isNil "_reply") then { [_reply, _caller] call FUNC(debugReply) };
    }] call CBA_fnc_addEventHandler;
};

// Always-available commands. Everything else is registered by the addon that
// owns it, so this list stays the baseline the harness is proven with.
["state", "list placed ghost modules and their armed state", {
    private _out = [];
    {
        private _cls = typeOf _x;
        if (_cls select [0, 12] isEqualTo "ghost_module") then {
            _out pushBack format ["%1 @ %2", _cls, mapGridPosition _x];
        };
    } forEach (entities "Logic");
    if (_out isEqualTo []) then { "no ghost modules placed" } else { _out joinString " | " }
}] call FUNC(addDebugCommand);

["markers", "delete every intel marker on my machine", {
    private _n = 0;
    {
        if (_x select [0, 6] isEqualTo "ghost_") then { deleteMarkerLocal _x; _n = _n + 1 };
    } forEach allMapMarkers;
    format ["%1 markers cleared locally", _n]
}, true] call FUNC(addDebugCommand);
