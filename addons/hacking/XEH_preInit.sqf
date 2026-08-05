#include "script_component.hpp"

ADDON = false;
LOG(MSG_INIT);

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

// Intel-target registration. Modules push themselves onto these and one deferred
// pass resolves the lot, so no module has to have initialised before any other.
GVAR(pendingPools) = [];
GVAR(pendingSpots) = [];
GVAR(resolvePending) = false;

// The one objective currently being closed on, and the marks the watcher polls.
// Marks carry a netId and a side alongside the object because a deleted object
// can no longer be asked for either.
GVAR(activeTarget) = objNull;
GVAR(intelMarks) = [];
GVAR(intelLastSide) = sideUnknown;

// Scanner stopwatch. Declared here so the screen can read it on the very first
// frame, before anyone has touched the keybind.
GVAR(timerState) = SCN_T_IDLE;
GVAR(timerHeld) = 0;
GVAR(timerFrom) = 0;

// Scanner alarms. The armed list is server-owned and publicVariable'd - an
// alarm has to outlive its setter, and every screen has to show the same
// countdown. Everything else is local: the total being dialled in, and how long
// this handset keeps ringing.
GVAR(alarms) = [];
GVAR(alarmPending) = 0;
GVAR(alarmPressAt) = -1;
GVAR(alarmRingUntil) = -1;
GVAR(alarmBeepPFH) = -1;
if (isServer) then { GVAR(alarmNextId) = 0 };

ADDON = true;
