#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_scannerRead

Description:
    One sweep of everything the scanner shows. Kept separate from the drawing so
    the readings can be tested on their own (see #ghost hack.scan) and so the
    screen never contains logic.

    Every value is read live from the player's own position, which is the whole
    point of a hand-held: walking changes the answer.

Returns:
    ARRAY - [_droneState, _droneDist, _droneDir, _jamFactor, _chanText, _freqText,
             _meshCount]. _droneDir is a compass bearing, -1 when nothing is up.
            _droneState 0 clear / 1 warn / 2 alert.
            The net reading comes back as two strings rather than one sentence
            because the screen prints them in separate columns.

Author:
    Ghost
---------------------------------------------------------------------------- */
private _pos = getPosASL player;

// --- 1. drones -------------------------------------------------------------
// Anything unmanned and hostile. Distance decides the lamp, not intent - a
// recon quad you have not noticed is exactly what this is for.
private _mySide = side group player;
private _nearest = -1;
private _nearestObj = objNull;
{
    if (!alive _x) then { continue };
    if !(unitIsUAV _x) then { continue };
    private _crew = effectiveCommander _x;
    if (!isNull _crew && {(side group _crew) getFriend _mySide >= 0.6}) then { continue };
    private _d = _pos distance (getPosASL _x);
    if (_nearest < 0 || {_d < _nearest}) then { _nearest = _d; _nearestObj = _x };
} forEach (player nearEntities [["Air", "LandVehicle", "Ship"], SCN_DRONE_WARN]);

private _droneState = switch (true) do {
    case (_nearest < 0): { 0 };
    case (_nearest <= SCN_DRONE_ALERT): { 2 };
    default { 1 };
};

// Compass bearing to it. A range on its own tells you to worry; a bearing tells
// you which way to look, and which way to move.
private _droneDir = -1;
if (!isNull _nearestObj) then {
    _droneDir = round (_pos getDir (getPosASL _nearestObj)) % 360;
};

// --- 2. jamming ------------------------------------------------------------
// Straight off the value the EW jam loop already publishes, so the scanner and
// the radios can never disagree about whether you are in a field.
private _jam = missionNamespace getVariable ["ghost_electronic_war_zones_localJamFactor", 0];

// --- 3. own net ------------------------------------------------------------
private _chanText = "NO RADIO";
private _freqText = "";
if (!isNil "acre_api_fnc_getCurrentRadio") then {
    private _cur = call acre_api_fnc_getCurrentRadio;
    if (_cur isEqualType "" && {_cur isNotEqualTo ""}) then {
        private _i = _cur find "_ID_";
        private _base = if (_i > 0) then { _cur select [0, _i] } else { _cur };
        private _preset = [_cur] call acre_api_fnc_getPreset;
        private _ch = [_cur] call acre_api_fnc_getRadioChannel;
        private _f = [_base, _preset, _ch, "frequencyTX"] call acre_api_fnc_getPresetChannelField;
        _chanText = format ["CH %1", _ch + 1];
        _freqText = if (isNil "_f") then { "-- MHz" } else { format ["%1 MHz", _f] };
    };
} else {
    if (!isNil "TFAR_fnc_activeSwRadio") then {
        private _sw = call TFAR_fnc_activeSwRadio;
        if (_sw isEqualType "" && {_sw isNotEqualTo ""}) then {
            private _ch = [_sw] call TFAR_fnc_getSwChannel;
            private _fr = ([_sw] call TFAR_fnc_getSwSettings) param [0, []];
            private _f = if (_fr isEqualType [] && {count _fr > _ch}) then { _fr select _ch } else { "--" };
            _chanText = format ["CH %1", _ch + 1];
            _freqText = format ["%1 MHz", _f];
        };
    };
};

// --- mesh stand-in ---------------------------------------------------------
// There is no mesh networking yet, so proximity to a friendly stands in for it:
// someone close enough to relay. Replace this with the real link state when a
// mesh exists - nothing else needs to change.
private _mesh = {
    alive _x && {_x isNotEqualTo player}
    && {(side group _x) getFriend _mySide >= 0.6}
    && {(getPosASL _x) distance _pos <= SCN_MESH_RANGE}
} count allPlayers;

[_droneState, _nearest, _droneDir, _jam, _chanText, _freqText, _mesh]
