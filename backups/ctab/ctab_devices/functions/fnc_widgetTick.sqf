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

    private _filed = call FUNC(logCount);
    [467462, str _filed, [L_PLAIN, L_TEXT] select (_filed > 0), "LOG",
        ["NOTHING FILED", "REPORTS FILED"] select (_filed > 0), L_PLAIN] call _fnc_card;

    // demolitions: your live firing circuit, or the reason you cannot use it
    private _qualified = [] call FUNC(isEngineer);
    private _charges = [[], call FUNC(engineerRead)] select _qualified;
    [467465, [str count _charges, "--"] select (!_qualified),
        [[L_PLAIN, L_TEXT] select (count _charges > 0), L_PLAIN] select (!_qualified),
        "DEMO",
        [["NO CHARGES", "ON CIRCUIT"] select (count _charges > 0), "ENGINEERS ONLY"] select (!_qualified),
        L_PLAIN] call _fnc_card;

    // the squad roster, as many lines as this tile carries
    private _med = _display displayCtrl 467463;
    if (!isNull _med) then {
        _med ctrlSetStructuredText ([4] call FUNC(medicalTile));
    };
};

// --- FBCB4: the vehicle screen's tile faces ---------------------------------
// Same readouts as the handset's cards, in this screen's own tile order.
// No messaging, intrusion, helmet cams or alarms aboard - a vehicle screen is
// for driving the vehicle, the column it is in, and what the scanner hears.
if (!isNull (_display displayCtrl 467470)) then {
    private _fnc_face = {
        params ["_idc", "_value", "_vColor", "_label", "_detail", "_dColor"];
        private _ctrl = _display displayCtrl _idc;
        if (isNull _ctrl) exitWith {};
        _ctrl ctrlSetStructuredText parseText format [
            "<t font='%1' size='1.6' color='%2'>%3</t><br/><t font='%1' size='0.8' color='%4'>%5</t><br/><t font='%1' size='0.75' color='%6'>%7</t>",
            _font, _vColor, _value, L_PLAIN, _label, _dColor, _detail
        ];
    };

    private _accIndex = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
    private _droneCol = [L_GREEN, L_AMBER, L_RED] select _droneState;
    private _jamCol = [L_GREEN, L_AMBER, L_RED] select _jamState;

    [467470, "MAP", L_TEXT, "BLUE FORCE", "BACK TO GRID", L_PLAIN] call _fnc_face;
    [467471, str _uavs, [L_PLAIN, L_GREEN] select (_uavs > 0), "UAV FEEDS",
        ["NONE ON NET", "ON NET"] select (_uavs > 0), L_PLAIN] call _fnc_face;
    [467473, "INT", L_TEXT, "INTEL", "FEED", L_PLAIN] call _fnc_face;

    [467474, ["0", "1"] select (_droneState > 0), _droneCol, "DRONES",
        ["CLEAR", format ["%1&#176; &#183; %2m", [_droneDir, 3] call CBA_fnc_formatNumber, round _droneDist]] select (_droneState > 0),
        _droneCol] call _fnc_face;
    [467475, format ["%1%2", round (_jam * 100), "%"], _jamCol, "JAM",
        ["CLEAR", "DEGRADED", "SMOTHERED"] select _jamState, _jamCol] call _fnc_face;
    private _meshCol2 = [L_RED, L_GREEN] select (_mesh > 0);
    [467476, str _mesh, _meshCol2, "MESH",
        ["ISOLATED", "LINKED"] select (_mesh > 0), _meshCol2] call _fnc_face;
    [467477, _sky, L_TEXT, "WEATHER", _forecast, L_PLAIN] call _fnc_face;

    [467478, _chanText, L_TEXT, "RADIO", _freqText, L_PLAIN] call _fnc_face;
    [467480, "CFG", L_TEXT, "SETTINGS",
        toUpper (S7_COLOUR_NAMES select (_accIndex min (count S7_COLOUR_NAMES - 1))), L_PLAIN] call _fnc_face;

    private _filed = call FUNC(logCount);
    [467481, str _filed, [L_PLAIN, L_TEXT] select (_filed > 0), "LOG",
        ["NOTHING FILED", "REPORTS FILED"] select (_filed > 0), L_PLAIN] call _fnc_face;

    // the squad roster - six lines, the tall tile's worth, as on the GFT
    private _med = _display displayCtrl 467482;
    if (!isNull _med) then {
        _med ctrlSetStructuredText ([6] call FUNC(medicalTile));
    };

    // The vehicle screen's convoy tile reports the vehicle it is bolted into -
    // the handhelds' equivalents are plain icons, because a handheld is not in
    // any particular vehicle and has nothing to report until you pick a column.
    private _cv = _display displayCtrl 467483;
    if (!isNull _cv) then {
        private _veh = vehicle cTab_player;
        if (_veh isEqualTo cTab_player) then {
            [467483, "--", L_PLAIN, "CONVOY", "ON FOOT", L_PLAIN] call _fnc_face;
        } else {
            ([_veh] call FUNC(convoyRead)) params ["_vName", "_vCond", "_vFuel", "", "", "", "_vFlags"];
            private _hull = _vCond select 0;
            private _reg = "";
            {
                if ((_x select 0) isEqualTo _veh) exitWith {_reg = _x select 1};
            } forEach (missionNamespace getVariable [QGVAR(convoyStore), []]);
            [467483,
                format ["%1%2", round _hull, "%"],
                [L_RED, L_AMBER, L_TEXT] select (([_hull < 35, _hull < 70, true] find true) max 0),
                _vName,
                format ["FUEL %1%2  %3", round _vFuel, "%",
                    [_reg, "UNREGISTERED"] select (_reg == "")],
                [L_PLAIN, L_GREEN] select (_reg != "")] call _fnc_face;
        };
    };
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

// The condition glyph, in two layers: the cloud follows the player's accent
// colour, everything else - sun, drops, bolt - keeps the colours it was drawn
// in. Arma tints a whole picture at once, so it takes two stacked controls.
private _wxIcon = _display displayCtrl IDC_S7_WXICON;
if (!isNull _wxIcon) then {
    private _cond = switch (true) do {
        case (snow > 0.1): {"snow"};
        case (lightnings > 0.05 && {rain > 0.1}): {"storm"};
        case (rain > 0.1): {"rain"};
        case (fog > 0.3): {"fog"};
        case (_windSpd >= 10): {"wind"};
        case (overcast > 0.6): {"cloud"};
        case (overcast > 0.3): {"part"};
        case (sunOrMoon < 0.5): {"night"};
        default {"sunny"};
    };

    private _index = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
    _wxIcon ctrlSetText format ["\z\ghost\addons\ctab_devices\data\icon_wx_%1_cloud_ca.paa", _cond];
    _wxIcon ctrlSetTextColor (S7_COLOURS select (_index min (count S7_COLOURS - 1)));

    private _wxDetail = _display displayCtrl IDC_S7_WXDETAIL;
    if (!isNull _wxDetail) then {
        _wxDetail ctrlSetText format ["\z\ghost\addons\ctab_devices\data\icon_wx_%1_detail_ca.paa", _cond];
        // white keeps the drawn colours; anything else would tint them
        _wxDetail ctrlSetTextColor [1, 1, 1, 1];
    };
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

private _filed = call FUNC(logCount);
[467447, ["NONE FILED", format ["%1 FILED", _filed]] select (_filed > 0),
    [L_PLAIN, L_TEXT] select (_filed > 0)] call _fnc_live;

private _qualified = [] call FUNC(isEngineer);
private _charges = [[], call FUNC(engineerRead)] select _qualified;
[467449, [
    ["NO CHARGES", format ["%1 ON CIRCUIT", count _charges]] select (count _charges > 0),
    "ENGINEERS ONLY"
] select (!_qualified),
    [[L_PLAIN, L_TEXT] select (count _charges > 0), L_PLAIN] select (!_qualified)] call _fnc_live;

// The GFT's roster tile is three cells wide and gets a proper list.
private _med = _display displayCtrl 467448;
if (!isNull _med) then {
    _med ctrlSetStructuredText ([6] call FUNC(medicalTile));
};
