#include "script_component.hpp"

if (!isServer) exitWith {};

// Every airframe of this type, however it was created - editor, Zeus, script -
// carries its warhead to the end. Registered as a class handler rather than
// added per drone so nothing can spawn one that has forgotten it is a bomb.
[QGVAR(h450), "Killed", { _this call FUNC(onKilled) }] call CBA_fnc_addClassEventHandler;
