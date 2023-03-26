#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(open) = false;

if (isServer) then {
    GVAR(respawnPointCount) = 1;
    GVAR(groupCount) = 1;
    GVAR(activeGroups) = [];
    GVAR(registeredClients) = [];
    [] spawn FUNC(readConfigToVariables);
};

// register event handler to detect state changes (would normally use publicVariable, but we're already sending this for spectate hooks)
[QGVAR(respawnStateChanged), {
    params [["_open", false, [false]]];
    GVAR(open) = _open;

    if !(isNull ADMIN_RESPAWN) then {
        [] call FUNC(updateOpenButton);
    };
}] call CBA_fnc_addEventHandler;

ADDON = true;
