#include "script_component.hpp"

if (!isServer) exitWith {};

// Client -> server detection channel. Registered before any module fires so the
// first transmission is not missed. Payload: [transmitter, positionASL].
[QGVAR(detection), FUNC(onDetection)] call CBA_fnc_addEventHandler;
