#include "script_component.hpp"
/*
 * Author: YonV
 * Posts a group-addressed cTab CONTACTREP as an ALiVE SPOTREP (+ companion
 * map marker) or a cTab SITREP as an ALiVE SITREP. Runs on the sending
 * player's client (ALiVE handles broadcast, JIP and persistence itself).
 * Field values come from the structured template data captured before the
 * message UI resets - not from parsing the rendered text.
 *
 * Arguments:
 * 0: Template data <ARRAY> (ctab_messaging_currentTemplateData shape)
 * 1: Raw field values per line <ARRAY> (ctab_messaging_currentTemplateValues shape)
 * 2: Generated message result <ARRAY> ([shortTitle, text, messageType, attachments])
 *
 * Return Value:
 * None
 *
 * Example:
 * [_templateData, _values, _result] call ghost_ctab_groups_fnc_postAliveReport
 */

params ["_templateData", "_values", "_result"];

if (!GVAR(aliveReports)) exitWith {};

_templateData params ["_uid", "", "", "", "", "_lines"];
_result params ["", "", "", "_attachments"];

if !(_uid in ["ghost#contactrep", "ghost#sitrep"]) exitWith {};

// line title -> raw field values of that line
private _byLine = createHashMap;
{
    _byLine set [_x select 0, _values param [_forEachIndex, []]];
} forEach _lines;

// [lineTitle, fieldIndex, default] -> sanitized string value
private _fnc_val = {
    params ["_line", ["_idx", 0], ["_default", ""]];
    private _val = (_byLine getOrDefault [_line, []]) param [_idx, ""];
    if !(_val isEqualType "") exitWith {_default};
    { _val = [_val, _x, ""] call CBA_fnc_replace } forEach ["""", "'", "\"];
    [_val, _default] select (_val == "")
};

// reported position: first marker attachment, else the sender
private _pos = getPosATL cTab_player;
{
    _x params ["_attType", "", "_center"];
    if (_attType == 0) exitWith {
        _pos = [_center # 0, _center # 1, 0];
    };
} forEach _attachments;

private _callsign = format ["%1:%2", groupId group cTab_player, name cTab_player];
date params ["", "", "_d", "_h", "_mi"];
private _dtg = format ["%1%2%3Z", [_d, 2] call CBA_fnc_formatNumber, [_h, 2] call CBA_fnc_formatNumber, [_mi, 2] call CBA_fnc_formatNumber];

private _locality = GVAR(aliveLocality);
private _locValue = switch (_locality) do {
    case "GROUP": {str group cTab_player};
    case "SIDE": {str side group cTab_player};
    default {"GLOBAL"};
};

GVAR(reportIndex) = GVAR(reportIndex) + 1;
private _suffix = format ["ghost%1x%2", clientOwner, GVAR(reportIndex)];

if (_uid == "ghost#contactrep") exitWith {
    if (isNil "ALiVE_SYS_spotrep" || {isNil "ALiVE_SYS_marker"}) exitWith {
        hintSilent "CONTACTREP sent - ALiVE spotrep system not available, not posted";
    };

    private _spotrepName = "SP" + _suffix;
    private _markerName = "MKR" + _suffix;
    private _loc = ["L", 0, mapGridPosition _pos] call _fnc_val;

    private _markerHash = [] call ALiVE_fnc_hashCreate;
    {
        [_markerHash, _x # 0, _x # 1] call ALiVE_fnc_hashSet;
    } forEach [
        ["ALIVE_SYS_marker_shape", "ICON"],
        ["ALIVE_SYS_marker_type", "o_unknown"],
        ["ALIVE_SYS_marker_color", "ColorRed"],
        ["ALIVE_SYS_marker_size", [1, 1]],
        ["ALIVE_SYS_marker_pos", _pos],
        ["ALIVE_SYS_marker_dir", 0],
        ["ALIVE_SYS_marker_text", format ["CONTACT %1", _loc]],
        ["ALIVE_SYS_marker_locality", _locality],
        ["ALIVE_SYS_marker_localityValue", _locValue],
        ["ALIVE_SYS_marker_player", getPlayerUID cTab_player],
        ["ALIVE_SYS_marker_hasspotrep", true],
        ["ALIVE_SYS_marker_spotrep", _spotrepName]
    ];

    private _spotrepHash = [] call ALiVE_fnc_hashCreate;
    {
        [_spotrepHash, _x # 0, _x # 1] call ALiVE_fnc_hashSet;
    } forEach [
        ["ALIVE_SYS_spotrep_callsign", _callsign],
        ["ALIVE_SYS_spotrep_DTG", _dtg],
        ["ALIVE_SYS_spotrep_dateTime", ["T", 0, "NOW"] call _fnc_val],
        ["ALIVE_SYS_spotrep_loc", _loc],
        ["ALIVE_SYS_spotrep_faction", "UNKNOWN"],
        ["ALIVE_SYS_spotrep_size", ["S", 0, "Unknown"] call _fnc_val],
        ["ALIVE_SYS_spotrep_type", ["U", 0, "Unknown"] call _fnc_val],
        ["ALIVE_SYS_spotrep_activity", toUpper (["A", 0, "STATIC"] call _fnc_val)],
        ["ALIVE_SYS_spotrep_factivity", "OBSERVING"],
        ["ALIVE_SYS_spotrep_remarks", ([["E", 0, ""] call _fnc_val, ["R", 0, ""] call _fnc_val] select {_x != ""}) joinString " | "],
        ["ALIVE_SYS_spotrep_markername", _markerName],
        ["ALIVE_SYS_spotrep_locality", _locality],
        ["ALIVE_SYS_spotrep_localityValue", _locValue],
        ["ALIVE_SYS_spotrep_player", getPlayerUID cTab_player]
    ];

    [[_spotrepName, _spotrepHash], [_markerName, _markerHash]] spawn {
        params ["_spotrep", "_marker"];
        [ALiVE_SYS_spotrep, "addspotrep", _spotrep] call ALiVE_fnc_spotrep;
        [ALiVE_SYS_marker, "addMarker", _marker] call ALiVE_fnc_marker;
    };

    hintSilent "CONTACTREP posted to ALiVE as SPOTREP";
};

// ghost#sitrep
if (isNil "ALiVE_SYS_sitrep") exitWith {
    hintSilent "SITREP sent - ALiVE sitrep system not available (needs C2ISTAR module), not posted";
};

private _sitrepName = "ST" + _suffix;

private _sitrepHash = [] call ALiVE_fnc_hashCreate;
{
    [_sitrepHash, _x # 0, _x # 1] call ALiVE_fnc_hashSet;
} forEach [
    ["ALIVE_SYS_sitrep_player", getPlayerUID cTab_player],
    ["ALIVE_SYS_sitrep_callsign", ["Callsign", 0, _callsign] call _fnc_val],
    ["ALIVE_SYS_sitrep_DTG", _dtg],
    ["ALIVE_SYS_sitrep_dateTime", "NOW"],
    ["ALIVE_SYS_sitrep_loc", ["Location", 0, mapGridPosition _pos] call _fnc_val],
    ["ALIVE_SYS_sitrep_en", ["Enemy", 0, "NONE"] call _fnc_val],
    ["ALIVE_SYS_sitrep_ekia", ["Enemy", 1, "0"] call _fnc_val],
    ["ALIVE_SYS_sitrep_ff", ["Friendly", 0, ""] call _fnc_val],
    ["ALIVE_SYS_sitrep_fkia", ["Friendly", 1, "0"] call _fnc_val],
    ["ALIVE_SYS_sitrep_fwia", ["Friendly", 2, "0"] call _fnc_val],
    ["ALIVE_SYS_sitrep_civ", ["Civ", 0, "NONE"] call _fnc_val],
    ["ALIVE_SYS_sitrep_ammo", ["Status", 0, "GREEN"] call _fnc_val],
    ["ALIVE_SYS_sitrep_cas", ["Status", 1, "GREEN"] call _fnc_val],
    ["ALIVE_SYS_sitrep_veh", ["Status", 2, "GREEN"] call _fnc_val],
    ["ALIVE_SYS_sitrep_cs", ["Status", 3, "GREEN"] call _fnc_val],
    ["ALIVE_SYS_sitrep_remarks", ["Remarks", 0, ""] call _fnc_val],
    ["ALIVE_SYS_sitrep_group", str group cTab_player],
    ["ALIVE_SYS_sitrep_pos", _pos],
    ["ALIVE_SYS_sitrep_locality", _locality],
    ["ALIVE_SYS_sitrep_localityValue", _locValue]
];

// companion map marker, type from CBA setting, labeled "<group>_<time>"
private _sitrepMarker = [];
if (!isNil "ALiVE_SYS_marker") then {
    private _markerName = "MKR" + _suffix;
    private _markerType = GVAR(sitrepMarkerType);
    private _markerColor = switch (_markerType select [0, 2]) do {
        case "b_": {"ColorBLUFOR"};
        case "o_": {"ColorOPFOR"};
        case "n_": {"ColorIndependent"};
        default {"ColorBlack"};
    };

    private _markerHash = [] call ALiVE_fnc_hashCreate;
    {
        [_markerHash, _x # 0, _x # 1] call ALiVE_fnc_hashSet;
    } forEach [
        ["ALIVE_SYS_marker_shape", "ICON"],
        ["ALIVE_SYS_marker_type", _markerType],
        ["ALIVE_SYS_marker_color", _markerColor],
        ["ALIVE_SYS_marker_size", [1, 1]],
        ["ALIVE_SYS_marker_pos", _pos],
        ["ALIVE_SYS_marker_dir", 0],
        ["ALIVE_SYS_marker_text", format ["%1_%2", groupId group cTab_player, _dtg]],
        ["ALIVE_SYS_marker_locality", _locality],
        ["ALIVE_SYS_marker_localityValue", _locValue],
        ["ALIVE_SYS_marker_player", getPlayerUID cTab_player],
        ["ALIVE_SYS_marker_hasspotrep", false]
    ];

    _sitrepMarker = [_markerName, _markerHash];
};

[[_sitrepName, _sitrepHash], _sitrepMarker] spawn {
    params ["_sitrep", "_marker"];
    [ALiVE_SYS_sitrep, "addsitrep", _sitrep] call ALiVE_fnc_sitrep;
    if (_marker isNotEqualTo []) then {
        [ALiVE_SYS_marker, "addMarker", _marker] call ALiVE_fnc_marker;
    };
};

hintSilent "SITREP posted to ALiVE";
