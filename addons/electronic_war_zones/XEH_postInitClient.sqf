#include "script_component.hpp"

if (!hasInterface) exitWith {};

// The server raises this (JIP) once a module is active. clientInit decides whether
// this player is on the hunted side and, if so, starts the jam loop + PTT tracker.
[QGVAR(clientInit), FUNC(clientInit)] call CBA_fnc_addEventHandler;

// Jamming meter: cheap poll of the factor the jam loop already computed.
[FUNC(jamHud), JAM_HUD_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
