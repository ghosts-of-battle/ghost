#include "script_component.hpp"
/*
 * Author: YonV
 * Keeps the live scanner readouts current: the map-screen rows, the two header
 * state icons, and the drone app's compass needle. Runs while a device is open
 * and retires with it. Visibility is not this function's business - the
 * updateInterface fork decides what is on screen.
 *
 * The map rows are plain text controls carrying cTab's own mono font at its own
 * size, so the block reads as part of the same instrument as the map-tools
 * readout below it. Only the colour changes with state.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

if (isNil "ghost_hacking_fnc_scannerRead") exitWith {};

([] call ghost_hacking_fnc_scannerRead) params
    ["_droneState", "_droneDist", "_droneDir", "_jam", "_chanText", "_freqText", "_mesh"];

private _green = [0.35, 0.85, 0.42, 0.85];
private _amber = [0.95, 0.72, 0.30, 0.85];
private _red = [0.90, 0.35, 0.30, 0.85];
private _plain = [1, 1, 1, 0.75];

// clear / degraded / smothered, which the jamming row reads below
private _jamState = switch (true) do {
    case (_jam <= 0): {0};
    case (_jam >= 0.75): {2};
    default {1};
};

// --- map-screen rows ------------------------------------------------------
private _uavRow = _display displayCtrl IDC_S7_SCANUAV;
if (!isNull _uavRow) then {
    private _text = "UAV  CLEAR";
    private _colour = _green;
    if (_droneState > 0) then {
        _text = format ["UAV  %1 %2m", [_droneDir, 3] call CBA_fnc_formatNumber, round _droneDist];
        _colour = [_amber, _red] select (_droneState > 1);
    };
    _uavRow ctrlSetText _text;
    _uavRow ctrlSetTextColor _colour;
};

private _jamRow = _display displayCtrl IDC_S7_SCANJAM;
if (!isNull _jamRow) then {
    private _text = ["JAM  CLEAR", format ["JAM  %1%2", round (_jam * 100), "%"]] select (_jamState > 0);
    _jamRow ctrlSetText _text;
    _jamRow ctrlSetTextColor ([_green, _amber, _red] select _jamState);
};

private _meshRow = _display displayCtrl IDC_S7_SCANMESH;
if (!isNull _meshRow) then {
    private _text = ["MESH ISOLATED", format ["MESH LINKED %1", _mesh]] select (_mesh > 0);
    _meshRow ctrlSetText _text;
    _meshRow ctrlSetTextColor ([_red, _green] select (_mesh > 0));
};

private _radioRow = _display displayCtrl IDC_S7_SCANRADIO;
if (!isNull _radioRow) then {
    _radioRow ctrlSetText format ["%1 %2", _chanText, _freqText];
    _radioRow ctrlSetTextColor _plain;
};

// --- drone app compass ----------------------------------------------------
private _needle = _display displayCtrl IDC_S7_NEEDLE;
if (!isNull _needle) then {
    private _bearing = [_droneDir, 0] select (_droneState == 0);
    _needle ctrlSetAngle [_bearing, 0.5, 0.5, true];
    _needle ctrlSetTextColor ([_green, _amber, _red] select _droneState);
};
