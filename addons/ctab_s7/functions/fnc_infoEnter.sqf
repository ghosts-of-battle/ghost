#include "script_component.hpp"
/*
 * Author: YonV
 * Opens an info app (weather / EW / radio). The page controls are declared in
 * config, so this only switches the device's mode - the updateInterface fork
 * shows the page - and keeps the text fresh while it is up.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Mode string <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display, "ghost_ctab_s7_weather"] call ghost_ctab_s7_fnc_infoEnter
 */

params ["_display", "_mode"];

private _ifName = call FUNC(ifName);
if (_ifName == "") then {_ifName = "cTab_Android_dlg"};
private _kind = switch (_mode) do {
    case QGVAR(weather): {"weather"};
    case QGVAR(radio): {"radio"};
    case QGVAR(alarm): {"alarm"};
    case QGVAR(settings): {"settings"};
    case QGVAR(jam): {"jam"};
    case QGVAR(mesh): {"mesh"};
    case QGVAR(drone): {"drone"};
    default {"drone"};
};

[_ifName, [["mode", _mode]], true, true] call cTab_fnc_setSettings;

private _body = _display displayCtrl IDC_S7_INFOTEXT;
if (isNull _body) exitWith {};

private _fill = {
    params ["_body", "_kind"];
    private _titleText = switch (_kind) do {
        case "weather": {"WEATHER"};
        case "radio": {"RADIO RACK"};
        case "alarm": {"SCANNER ALARMS"};
        case "settings": {"SETTINGS"};
        case "jam": {"JAMMING"};
        case "mesh": {"MESH LINK"};
        case "drone": {"DRONE DETECTION"};
        default {"EW SCANNER"};
    };
    private _title = format ["<t font='RobotoCondensed' size='1.25' color='#39B24A' underline='1'>%1</t><br/><br/>", _titleText];
    _body ctrlSetStructuredText composeText [parseText _title, [_kind] call FUNC(infoText)];
};
[_body, _kind] call _fill;

// One refresh loop at a time; it retires when the page is hidden.
if (GVAR(infoPFH) != -1) then {
    [GVAR(infoPFH)] call CBA_fnc_removePerFrameHandler;
};
GVAR(infoPFH) = [{
    params ["_args", "_handle"];
    _args params ["_body", "_kind", "_fill"];
    if (isNull _body || {!ctrlShown _body}) exitWith {
        GVAR(infoPFH) = -1;
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    [_body, _kind] call _fill;
}, 1, [_body, _kind, _fill]] call CBA_fnc_addPerFrameHandler;
