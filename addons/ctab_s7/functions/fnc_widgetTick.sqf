#include "script_component.hpp"
/*
 * Author: YonV
 * Feeds every live surface once a second, from deviceTick: the S7 menu's
 * RIDAR-style card faces, the tablet dashboard's tile readouts and wide
 * weather tile (with the engine's own forecast), and the weather app's
 * condition glyph. The data is gathered once; each control that exists on the
 * open device gets its share, the rest skip.
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

#define L_GREEN "#39B24A"
#define L_AMBER "#E9A63C"
#define L_RED   "#D04539"
#define L_PLAIN "#9AA39C"
#define L_TEXT  "#E5E5E5"

private _fontIndex = profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT];
private _font = S7_FONTS select (_fontIndex min (count S7_FONTS - 1));

// --- the data, gathered once -----------------------------------------------
private _windSpd = round (vectorMagnitude wind);
private _windFrom = round ((((wind select 0) atan2 (wind select 1)) + 180 + 360) mod 360);
private _sky = switch (true) do {
    case (rain > 0.1): {"RAIN"};
    case (fog > 0.3): {"FOG"};
    case (overcast > 0.6): {"OVERCAST"};
    default {"CLEAR"};
};

private _uavs = count (missionNamespace getVariable ["cTabUAVlist", []]);
private _cams = count (missionNamespace getVariable ["cTabHcamlist", []]);

private _droneState = 0;
private _droneDist = 0;
private _droneDir = 0;
private _jam = 0;
private _chanText = "--";
private _freqText = "";
private _mesh = 0;
private _scanner = !isNil "ghost_hacking_fnc_scannerRead";
if (_scanner) then {
    ([] call ghost_hacking_fnc_scannerRead) params
        ["_s", "_di", "_dr", "_j", "_c", "_f", "_m"];
    _droneState = _s; _droneDist = _di; _droneDir = _dr;
    _jam = _j; _chanText = _c; _freqText = _f; _mesh = _m;
};
private _jamState = switch (true) do {
    case (_jam <= 0): {0};
    case (_jam >= 0.75): {2};
    default {1};
};

private _alarms = missionNamespace getVariable ["ghost_hacking_alarms", []];
private _ringing = !isNil "ghost_hacking_alarmRingUntil"
    && {time < (missionNamespace getVariable ["ghost_hacking_alarmRingUntil", -1])};

// the engine's own forecast: where the sky is headed and when
private _forecast = "NO CHANGE EXPECTED";
private _eta = nextWeatherChange;
private _oc2 = overcastForecast;
if (_eta > 0 && {abs (_oc2 - overcast) > 0.1 || {abs (fogForecast - fog) > 0.1}}) then {
    private _sky2 = switch (true) do {
        case (_oc2 > 0.7): {"STORMS"};
        case (_oc2 > 0.6): {"OVERCAST"};
        case (_oc2 > 0.3): {"CLOUD"};
        default {"CLEARING"};
    };
    _forecast = format ["%1 IN %2 MIN", _sky2, 1 max ceil (_eta / 60)];
};

// --- S7: RIDAR card faces (big value / label / trend) ----------------------
if (!isNull (_display displayCtrl 467450)) then {
    private _fnc_card = {
        params ["_idc", "_value", "_vColor", "_label", "_detail", "_dColor"];
        private _ctrl = _display displayCtrl _idc;
        if (isNull _ctrl) exitWith {};
        _ctrl ctrlSetStructuredText parseText format [
            "<t font='%1' size='1.7' color='%2'>%3</t><br/><t font='%1' size='0.8' color='%4'>%5</t><br/><t font='%1' size='0.75' color='%6'>%7</t>",
            _font, _vColor, _value, L_PLAIN, _label, _dColor, _detail
        ];
    };

    private _droneVal = ["0", "1"] select (_droneState > 0);
    private _droneCol = [L_GREEN, L_AMBER, L_RED] select _droneState;
    private _droneDet = ["CLEAR", format ["%1&#176; &#183; %2m", [_droneDir, 3] call CBA_fnc_formatNumber, round _droneDist]] select (_droneState > 0);
    [467450, _droneVal, _droneCol, "DRONES", _droneDet, _droneCol] call _fnc_card;

    private _jamCol = [L_GREEN, L_AMBER, L_RED] select _jamState;
    [467451, format ["%1%2", round (_jam * 100), "%"], _jamCol, "JAM",
        ["CLEAR", "DEGRADED", "SMOTHERED"] select _jamState, _jamCol] call _fnc_card;

    private _meshCol = [L_RED, L_GREEN] select (_mesh > 0);
    [467452, str _mesh, _meshCol, "MESH",
        ["ISOLATED", "LINKED"] select (_mesh > 0), _meshCol] call _fnc_card;

    [467453, str _uavs, [L_PLAIN, L_GREEN] select (_uavs > 0), "UAV FEEDS",
        ["NONE ON NET", "ON NET"] select (_uavs > 0), L_PLAIN] call _fnc_card;
    [467454, str _cams, [L_PLAIN, L_GREEN] select (_cams > 0), "HELMET CAMS",
        ["NONE ON NET", "ON NET"] select (_cams > 0), L_PLAIN] call _fnc_card;

    private _alarmCol = [[L_PLAIN, L_AMBER] select (_alarms isNotEqualTo []), L_RED] select _ringing;
    [467455, str count _alarms, _alarmCol, "ALARMS",
        ["ARMED", "RINGING"] select _ringing, _alarmCol] call _fnc_card;

    [467456, "MAP", L_TEXT, "BLUE FORCE", "BACK TO GRID", L_PLAIN] call _fnc_card;
    [467457, "MSG", L_TEXT, "MESSAGES", "INBOX + REPORTS", L_PLAIN] call _fnc_card;
    [467458, "INT", L_TEXT, "INTEL", "FEED", L_PLAIN] call _fnc_card;

    [467459, _sky, L_TEXT, "WEATHER",
        format ["%1&#176; AT %2 M/S", [_windFrom, 3] call CBA_fnc_formatNumber, _windSpd], L_PLAIN] call _fnc_card;
    [467460, _chanText, L_TEXT, "RADIO", _freqText, L_PLAIN] call _fnc_card;

    private _accIndex = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
    [467461, "CFG", L_TEXT, "SETTINGS",
        toUpper (S7_COLOUR_NAMES select (_accIndex min (count S7_COLOUR_NAMES - 1))), L_PLAIN] call _fnc_card;
};

// --- tablet: wide weather tile readout -------------------------------------
private _weather = _display displayCtrl IDC_S7_WIDGETWEATHER;
if (!isNull _weather) then {
    date params ["", "", "_day"];
    _weather ctrlSetStructuredText parseText format [
        "<t font='%6' size='1' color='#B8BABC' align='left'>DAY %1 &#183; %2<br/>WIND %3&#176; AT %4 M/S<br/></t><t font='%6' size='0.9' color='#E9A63C' align='left'>%5</t>",
        _day, _sky, [_windFrom, 3] call CBA_fnc_formatNumber, _windSpd, _forecast, _font
    ];
};

// the condition glyph on the weather page, tinted the accent colour
private _wxIcon = _display displayCtrl IDC_S7_WXICON;
if (!isNull _wxIcon) then {
    private _cond = switch (true) do {
        case (rain > 0.3 && {overcast > 0.7}): {"storm"};
        case (rain > 0.1): {"rain"};
        case (fog > 0.3): {"fog"};
        case (_windSpd >= 10): {"wind"};
        case (overcast > 0.6): {"cloud"};
        case (overcast > 0.3): {"part"};
        case (sunOrMoon < 0.5): {"night"};
        default {"sunny"};
    };
    _wxIcon ctrlSetText format ["\z\ghost\addons\ctab_s7\data\icon_wx_%1_ca.paa", _cond];
    private _index = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
    _wxIcon ctrlSetTextColor (S7_COLOURS select (_index min (count S7_COLOURS - 1)));
};

// --- tablet: live tile lines ------------------------------------------------
if (isNull (_display displayCtrl 467440)) exitWith {};

private _fnc_live = {
    params ["_idc", "_text", "_color"];
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) exitWith {};
    _ctrl ctrlSetStructuredText parseText format [
        "<t font='%1' size='1' color='%2' align='center'>%3</t>", _font, _color, _text
    ];
};

[467440, ["NO FEEDS", format ["%1 ON NET", _uavs]] select (_uavs > 0),
    [L_PLAIN, L_GREEN] select (_uavs > 0)] call _fnc_live;
[467441, ["NO CAMS", format ["%1 CAMS", _cams]] select (_cams > 0),
    [L_PLAIN, L_GREEN] select (_cams > 0)] call _fnc_live;

if (_scanner) then {
    private _droneText = "CLEAR";
    private _droneColor = L_GREEN;
    if (_droneState > 0) then {
        _droneText = format ["%1&#176; %2m", [_droneDir, 3] call CBA_fnc_formatNumber, round _droneDist];
        _droneColor = [L_AMBER, L_RED] select (_droneState > 1);
    };
    [467442, _droneText, _droneColor] call _fnc_live;

    [467443, ["CLEAR", format ["%1%2", round (_jam * 100), "%"]] select (_jamState > 0),
        [L_GREEN, L_AMBER, L_RED] select _jamState] call _fnc_live;
    [467444, ["ISOLATED", format ["LINKED %1", _mesh]] select (_mesh > 0),
        [L_RED, L_GREEN] select (_mesh > 0)] call _fnc_live;
    [467445, _chanText, L_PLAIN] call _fnc_live;
};

private _alarmText = switch (true) do {
    case (_ringing): {"RINGING"};
    case (_alarms isNotEqualTo []): {format ["%1 ARMED", count _alarms]};
    default {"NONE"};
};
[467446, _alarmText, [[L_PLAIN, L_AMBER] select (_alarms isNotEqualTo []), L_RED] select _ringing] call _fnc_live;
