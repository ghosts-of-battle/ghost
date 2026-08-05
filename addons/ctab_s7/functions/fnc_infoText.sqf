#include "script_component.hpp"
/*
 * Author: YonV
 * Renders the body text of an info app as structured text.
 * "weather": current conditions from the engine (plus ACE temperature when
 * ACE weather is loaded). "ew": the same readings the hacking scanner phone
 * shows, straight from ghost_hacking_fnc_scannerRead.
 *
 * Arguments:
 * 0: Kind <STRING> - "weather" or "ew"
 *
 * Return Value:
 * Structured text <TEXT>
 *
 * Example:
 * ["weather"] call ghost_ctab_s7_fnc_infoText
 */

params ["_kind"];

#define C_GREEN "#39B24A"
#define C_AMBER "#E9A63C"
#define C_RED   "#D04539"
#define C_TEXT  "#E5E5E5"

private _out = "";
private _fnc_row = {
    params ["_label", "_value", "_color"];
    format ["<t font='RobotoCondensed' size='0.95' color='#7A8C7E'>%1</t><t font='RobotoCondensed' size='0.95' color='%3' align='right'>%2</t><br/>", _label, _value, _color]
};

if (_kind == "weather") then {
    date params ["", "", "_d", "_h", "_mi"];
    private _windSpd = vectorMagnitude wind;
    private _windFrom = round ((((wind select 0) atan2 (wind select 1)) + 180 + 360) mod 360);

    private _windState = 0;
    if (_windSpd > 6) then {_windState = 1};
    if (_windSpd > 12) then {_windState = 2};
    private _fogState = 0;
    if (fog > 0.15) then {_fogState = 1};
    if (fog > 0.5) then {_fogState = 2};

    private _timeText = format ["%1:%2", [_h, 2] call CBA_fnc_formatNumber, [_mi, 2] call CBA_fnc_formatNumber];
    private _windText = format ["FROM %1&#176; AT %2 M/S", [_windFrom, 3] call CBA_fnc_formatNumber, round _windSpd];

    _out = _out + (["TIME", _timeText, C_TEXT] call _fnc_row);
    _out = _out + (["DATE", format ["DAY %1", _d], C_TEXT] call _fnc_row);
    _out = _out + (["WIND", _windText, [C_GREEN, C_AMBER, C_RED] select _windState] call _fnc_row);
    _out = _out + (["GUSTS", format ["%1 M/S", round gusts], C_TEXT] call _fnc_row);
    _out = _out + (["OVERCAST", format ["%1%2", round (overcast * 100), "%"], C_TEXT] call _fnc_row);
    _out = _out + (["RAIN", format ["%1%2", round (rain * 100), "%"], [C_GREEN, C_AMBER] select (rain > 0.1)] call _fnc_row);
    _out = _out + (["FOG", format ["%1%2", round (fog * 100), "%"], [C_GREEN, C_AMBER, C_RED] select _fogState] call _fnc_row);
    _out = _out + (["HUMIDITY", format ["%1%2", round (humidity * 100), "%"], C_TEXT] call _fnc_row);

    private _temp = missionNamespace getVariable ["ace_weather_currentTemperature", nil];
    if (!isNil "_temp") then {
        _out = _out + (["TEMP", format ["%1&#176;C", round _temp], C_TEXT] call _fnc_row);
    };

    if (lightnings > 0.05) then {
        _out = _out + (["LIGHTNING", "ACTIVE", C_AMBER] call _fnc_row);
    };

    // The engine knows where the sky is headed and when it gets there.
    private _eta = nextWeatherChange;
    private _oc2 = overcastForecast;
    private _fog2 = fogForecast;
    if (_eta > 0 && {abs (_oc2 - overcast) > 0.1 || {abs (_fog2 - fog) > 0.1}}) then {
        private _sky2 = switch (true) do {
            case (_oc2 > 0.7): {"STORMS"};
            case (_oc2 > 0.6): {"OVERCAST"};
            case (_oc2 > 0.3): {"PARTLY CLOUDY"};
            default {"CLEARING"};
        };
        _out = _out + (["FORECAST", format ["%1 IN %2 MIN", _sky2, 1 max ceil (_eta / 60)], C_AMBER] call _fnc_row);
        if (abs (_fog2 - fog) > 0.1) then {
            _out = _out + (["FOG TREND", ["LIFTING", "THICKENING"] select (_fog2 > fog), C_AMBER] call _fnc_row);
        };
    } else {
        _out = _out + (["FORECAST", "NO CHANGE EXPECTED", C_GREEN] call _fnc_row);
    };
} else {
if (_kind == "settings") then {
    private _index = profileNamespace getVariable [QGVAR(iconColor), S7_COLOUR_DEFAULT];
    private _bgIndex = profileNamespace getVariable [QGVAR(bgColor), S7_BGCOLOUR_DEFAULT];
    private _fontIndex = profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT];
    _out = _out + (["ACCENT", S7_COLOUR_NAMES select (_index min (count S7_COLOUR_NAMES - 1)), C_TEXT] call _fnc_row);
    _out = _out + (["SCREEN", S7_BGCOLOUR_NAMES select (_bgIndex min (count S7_BGCOLOUR_NAMES - 1)), C_TEXT] call _fnc_row);
    _out = _out + (["FONT", S7_FONT_NAMES select (_fontIndex min (count S7_FONT_NAMES - 1)), C_TEXT] call _fnc_row);
    _out = _out + (["", "Accent swatches, then screen shade, then font. Choices are yours alone and kept between missions.", C_TEXT] call _fnc_row);
} else {
if (_kind == "alarm") then {
    // The scanner alarm roster - the hacking addon owns the alarms; this only
    // reads them. Buttons on the page arm, silence and clear.
    if (isNil QEGVAR(hacking,alarms)) exitWith {
        _out = ["ALARMS", "SCANNER NETWORK OFFLINE", C_RED] call _fnc_row;
    };

    private _alarms = EGVAR(hacking,alarms);
    if (_alarms isEqualTo []) then {
        _out = _out + (["ARMED", "NONE", C_TEXT] call _fnc_row);
    } else {
        // A running clock, not a rounded minute: a row that reads "1 MIN" for
        // sixty seconds is a label, not a timer.
        private _fnc_clock = {
            params ["_secs"];
            private _s = (round _secs) max 0;
            private _h = floor (_s / 3600);
            private _m = floor ((_s - _h * 3600) / 60);
            private _r = _s - _h * 3600 - _m * 60;
            if (_h > 0) then {
                format ["%1:%2:%3", _h, [_m, 2] call CBA_fnc_formatNumber, [_r, 2] call CBA_fnc_formatNumber]
            } else {
                format ["%1:%2", [_m, 2] call CBA_fnc_formatNumber, [_r, 2] call CBA_fnc_formatNumber]
            };
        };

        // soonest first - the one about to go is the one you care about
        private _sorted = +_alarms;
        _sorted sort true;

        {
            _x params ["", "_at", "_who"];
            private _left = _at - CBA_missionTime;
            private _colour = switch (true) do {
                case (_left < 30): {C_RED};
                case (_left < 120): {C_AMBER};
                default {C_GREEN};
            };
            _out = _out + ([
                [_left] call _fnc_clock,
                format ["set by %1", _who],
                _colour
            ] call _fnc_row);
        } forEach _sorted;
    };

    if (!isNil QEGVAR(hacking,alarmRingUntil) && {time < EGVAR(hacking,alarmRingUntil)}) then {
        _out = _out + (["STATE", "RINGING", C_RED] call _fnc_row);
    };

    // The scanner's stopwatch, which had no readout on the cTabs at all.
    if (!isNil QEGVAR(hacking,timerState)) then {
        private _held = EGVAR(hacking,timerHeld);
        if (EGVAR(hacking,timerState) == 1) then {
            _held = _held + (time - EGVAR(hacking,timerFrom));
        };
        private _s = round _held;
        private _stateText = switch (EGVAR(hacking,timerState)) do {
            case 1: {"RUNNING"};
            case 2: {"STOPPED"};
            default {"IDLE"};
        };
        _out = _out + (["<br/>STOPWATCH", format ["%1:%2  %3",
            [floor (_s / 60), 2] call CBA_fnc_formatNumber,
            [_s - floor (_s / 60) * 60, 2] call CBA_fnc_formatNumber,
            _stateText
        ], [C_TEXT, C_GREEN, C_AMBER] select (EGVAR(hacking,timerState) min 2)] call _fnc_row);
    };
} else {
if (_kind == "radio") then {
    // Radio rack list - the rack read is BCE Compat_Radio's approach (Aaren,
    // APL-SA, O:\GIT\Better-CAS-Environment-), rewritten for a text page
    private _hasTfar = !isNil "TFAR_fnc_activeSwRadio";
    private _hasAcre = !isNil "acre_api_fnc_getVehicleRacks";

    if (!isClass (configFile >> "CfgPatches" >> "ace_common")) exitWith {
        _out = ["RADIO", "REQUIRES ACE", C_RED] call _fnc_row;
    };
    if (!_hasTfar && {!_hasAcre}) exitWith {
        _out = ["RADIO", "NO RADIO SYSTEM LOADED", C_RED] call _fnc_row;
    };

    if (_hasTfar) then {
        private _sw = call TFAR_fnc_activeSwRadio;
        if (!isNil "_sw" && {_sw isEqualType ""} && {_sw != ""}) then {
            private _ch = [_sw] call TFAR_fnc_getSwChannel;
            private _fr = ([_sw] call TFAR_fnc_getSwSettings) param [0, []];
            private _f = if (_fr isEqualType [] && {count _fr > _ch}) then {_fr select _ch} else {"--"};
            _out = _out + (["SW", format ["CH %1  %2 MHz", _ch + 1, _f], C_GREEN] call _fnc_row);
        } else {
            _out = _out + (["SW", "NONE", C_AMBER] call _fnc_row);
        };
        private _lr = call TFAR_fnc_activeLrRadio;
        if (!isNil "_lr" && {_lr isEqualType []} && {_lr isNotEqualTo []}) then {
            _out = _out + (["LR", format ["CH %1  %2 MHz", (_lr call TFAR_fnc_getLrChannel) + 1, _lr call TFAR_fnc_getLrFrequency], C_GREEN] call _fnc_row);
        };
    };

    private _veh = vehicle cTab_player;
    if (_veh isEqualTo cTab_player) then {
        _out = _out + (["RACK", "NOT IN A VEHICLE", C_TEXT] call _fnc_row);
    } else {
        if (_hasTfar) then {
            private _vlr = _veh call TFAR_fnc_VehicleLR;
            if (isNil "_vlr") then {
                _out = _out + (["VEH LR", "NONE", C_AMBER] call _fnc_row);
            } else {
                _out = _out + (["VEH LR", format ["%1 MHz", _vlr call TFAR_fnc_getLrFrequency], C_GREEN] call _fnc_row);
            };
        };
        if (_hasAcre) then {
            private _racks = [_veh] call acre_api_fnc_getVehicleRacks;
            if (_racks isEqualType [] && {_racks isNotEqualTo []}) then {
                {
                    private _radio = _x call acre_api_fnc_getMountedRackRadio;
                    if (!isNil "_radio" && {_radio isEqualType ""} && {_radio != ""}) then {
                        private _ch = [_radio] call acre_api_fnc_getRadioChannel;
                        _out = _out + ([format ["RACK %1", _forEachIndex + 1], format ["%1  CH %2", _radio, _ch], C_TEXT] call _fnc_row);
                    } else {
                        _out = _out + ([format ["RACK %1", _forEachIndex + 1], "EMPTY", C_AMBER] call _fnc_row);
                    };
                } forEach _racks;
            } else {
                _out = _out + (["RACK", "NO ACRE RACKS", C_TEXT] call _fnc_row);
            };
        };
    };
} else {
    // The scanner's three readings, one app each. All come from the hacking
    // addon's own read - this only presents them.
    if (isNil "ghost_hacking_fnc_scannerRead") exitWith {
        parseText (["SCANNER", "SYSTEM OFFLINE", C_RED] call _fnc_row)
    };

    ([] call ghost_hacking_fnc_scannerRead) params
        ["_droneState", "_droneDist", "_droneDir", "_jam", "_chanText", "_freqText", "_mesh"];

    if (_kind == "drone") then {
        private _colour = [C_GREEN, C_AMBER, C_RED] select _droneState;
        if (_droneState == 0) then {
            _out = _out + (["CONTACT", "CLEAR", C_GREEN] call _fnc_row);
            _out = _out + (["", "Nothing within two kilometres.", C_TEXT] call _fnc_row);
        } else {
            _out = _out + (["BEARING", format ["%1&#176;", [_droneDir, 3] call CBA_fnc_formatNumber], _colour] call _fnc_row);
            _out = _out + (["RANGE", format ["%1 m", round _droneDist], _colour] call _fnc_row);
            _out = _out + (["THREAT", ["", "INSIDE 2 KM", "INSIDE 1 KM"] select _droneState, _colour] call _fnc_row);
        };
    } else {
        if (_kind == "jam") then {
            private _jamState = switch (true) do {
                case (_jam <= 0): {0};
                case (_jam >= 0.75): {2};
                default {1};
            };
            _out = _out + (["LEVEL", ["CLEAR", format ["%1%2", round (_jam * 100), "%"]] select (_jamState > 0), [C_GREEN, C_AMBER, C_RED] select _jamState] call _fnc_row);
            _out = _out + (["STATE", ["CLEAR", "DEGRADED", "SMOTHERED"] select _jamState, [C_GREEN, C_AMBER, C_RED] select _jamState] call _fnc_row);
            _out = _out + (["CHAN", _chanText, C_TEXT] call _fnc_row);
            _out = _out + (["FREQ", _freqText, C_TEXT] call _fnc_row);
        } else {
            // mesh
            _out = _out + (["LINK", ["ISOLATED", "LINKED"] select (_mesh > 0), [C_RED, C_GREEN] select (_mesh > 0)] call _fnc_row);
            _out = _out + (["RELAYS", str _mesh, [C_RED, C_GREEN] select (_mesh > 0)] call _fnc_row);
            _out = _out + (["CHAN", _chanText, C_TEXT] call _fnc_row);
            _out = _out + (["FREQ", _freqText, C_TEXT] call _fnc_row);
        };
    };
};
};
};
};

parseText _out
