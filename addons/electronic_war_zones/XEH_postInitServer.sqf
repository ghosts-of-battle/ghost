#include "script_component.hpp"

if (!isServer) exitWith {};

// Client -> server detection channel. Registered before any module fires so the
// first transmission is not missed. Payload: [transmitter, positionASL].
[QGVAR(detection), FUNC(onDetection)] call CBA_fnc_addEventHandler;

// UAV jamming sweep. Cheap when nothing is flagged jam_uavs - the first check
// is a findIf over the registry, and it bails before touching any drone.
[FUNC(uavJamSweep), UAV_SWEEP_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
