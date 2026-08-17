#include "script_component.hpp"
/*
 * Author: YonV
 * Makes the device buttons actually clickable. Config-declared action and
 * onButtonClick have proved dead on controls merged into cTab's dialogs, and
 * so have handlers added to those controls and runtime buttons created inside
 * their groups. The one pattern proven to work against this cTab build is
 * ATAK_Elevation's desktop shortcut: a button ctrlCreate'd onto the DISPLAY
 * itself with a scripted handler. So that is what every button gets - an
 * invisible display-level catcher at its absolute position.
 *
 * The catchers exist on every screen, so each press first checks that its
 * source control (and that control's group) is actually shown - a press on the
 * map where a hidden alarm button lives falls through harmlessly. Everything
 * routes through FUNC(click), whose debounce collapses double-dispatch.
 *
 * The dialog is built fresh on every open, so this runs fresh too.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_wireButtons
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _onCatch = {
    params ["_catcher"];
    private _source = _catcher getVariable [QGVAR(source), controlNull];
    if (isNull _source) exitWith {};
    if (!ctrlShown _source) exitWith {};
    private _group = ctrlParentControlsGroup _source;
    if (!isNull _group && {!ctrlShown _group}) exitWith {};
    (_catcher getVariable [QGVAR(click), []]) call FUNC(click);
};

// [idc, kind, argument, tooltip (optional), display idd filter (optional)]
// The catcher sits on top of its source control, so hover text has to ride
// on the CATCHER - a tooltip on the config control never gets the mouse.
// The idd filter keeps a row off displays where the same IDC is native
// cTab furniture with a working action of its own.
private _table = [
    // S7 app menu
    [467600, "app", "map"],
    [467601, "app", "message"],
    [467602, "app", "uav"],
    [467603, "app", "hcam"],
    [467604, "app", "intel"],
    [467605, "app", "drone"],
    [467606, "app", "jam"],
    [467607, "app", "mesh"],
    [467608, "app", "weather"],
    [467609, "app", "radio"],
    [467610, "app", "alarm"],
    [467611, "app", "settings"],
    [467612, "app", "log"],
    [467613, "app", "medical"],
    [467614, "app", "convoy"],
    [467615, "app", "engineer"],
    // tablet app panel
    [467620, "app", "map"],
    [467621, "app", "message"],
    [467622, "app", "uav"],
    [467623, "app", "hcam"],
    [467624, "app", "intel"],
    [467625, "app", "drone"],
    [467626, "app", "jam"],
    [467627, "app", "mesh"],
    [467628, "app", "weather"],
    [467629, "app", "radio"],
    [467630, "app", "alarm"],
    [467631, "app", "hack"],
    [467632, "app", "settings"],
    [467633, "app", "log"],
    [467634, "app", "medical"],
    [467635, "app", "convoy"],
    [467636, "app", "engineer"],
    [467637, "app", "support"],
    // the SUPPORT page's Simplex service keys
    [467570, "support", "CAS"],
    [467571, "support", "ARTILLERY"],
    [467572, "support", "TRANSPORT"],
    [467573, "support", "LOGISTICS"],
    // S7 top bezel key, the on-screen menu key, the map-options scanner switch
    [467399, "menu", nil, "Apps"],
    [467398, "scanPanel", nil],
    // the tools drawer key on each device's glass
    [IDC_S23_TOOLKEY, "tools", nil, "Map tools"],
    [IDC_GFT_TOOLKEY, "tools", nil, "Map tools"],
    [IDC_FBCB4_TOOLKEY, "tools", nil, "Map tools"],
    // the FBCB4 art's power key, which closes the screen
    [IDC_FBCB4_POWER, "close", nil, "Power off"],
    // the F1-F3 keys painted on the FBCB4's case
    [IDC_FBCB4_KEYF1, "app", "map", "Map"],
    [IDC_FBCB4_KEYF2, "app", "message", "Messages"],
    [IDC_FBCB4_KEYF3, "app", "settings", "Settings"],
    // the APP and Input Lock keys painted on the GFT-1's case
    [IDC_GFT_KEYAPP1, "app", "map", "Map"],
    [IDC_GFT_KEYAPP2, "app", "message", "Messages"],
    [IDC_GFT_KEYAPP3, "app", "settings", "Settings"],
    [IDC_GFT_KEYLOCK, "close", nil, "Close the tablet"],
    // and the right-hand column painted to mirror them
    [IDC_GFT_KEYAPP4, "app", "intel", "Intel feed"],
    [IDC_GFT_KEYAPP5, "app", "log", "Filed reports - the shared HQ log"],
    [IDC_GFT_KEYHOME, "menu", nil, "Home - the app dashboard"],
    [IDC_GFT_KEYPOWER, "close", nil, "Power off"],
    // the FBCB4's grafted message page - these IDCs are native cTab controls
    // with working actions on the handhelds, so the rows are FBCB4-only
    [16150, "msgTemplates", nil, "Report templates", IDD_FBCB4],
    [16140, "msgMedevac", nil, "MEDEVAC template", IDD_FBCB4],
    [16130, "msgSend", nil, "Send to the selected recipients", IDD_FBCB4],
    [16120, "msgDelete", nil, "Delete the selected message", IDD_FBCB4],
    // the GFT-1 rugged tablet's own menu key and tiles
    [467390, "menu", nil, "Menu"],
    [467660, "app", "map"],
    [467661, "app", "message"],
    [467662, "app", "intel"],
    [467663, "app", "uav"],
    [467664, "app", "hcam"],
    [467665, "app", "hack"],
    [467666, "app", "drone"],
    [467667, "app", "jam"],
    [467668, "app", "mesh"],
    [467669, "app", "weather"],
    [467670, "app", "radio"],
    [467671, "app", "alarm"],
    [467672, "app", "settings"],
    // the FBCB4 vehicle display: its menu key and tiles
    [467392, "menu", nil],
    [467394, "menu", nil],
    [467680, "app", "map"],
    [467681, "app", "uav"],
    [467683, "app", "intel"],
    [467684, "app", "drone"],
    [467685, "app", "jam"],
    [467686, "app", "mesh"],
    [467687, "app", "weather"],
    [467688, "app", "radio"],
    [467690, "app", "settings"],
    [467691, "app", "log"],
    [467692, "app", "medical"],
    [467693, "app", "convoy"],
    // the drawing tools in the tools drawer
    [467550, "tool", "compass"],
    [467551, "tool", "distance"],
    [467552, "tool", "height"],
    [467553, "tool", "sight"],
    [467554, "tool", "houses"],
    [467555, "tool", "grid"],
    [467556, "tool", "flat"],
    [467557, "tool", ""],
    // cTab's map switches, beside them in the same drawer
    [467541, "mapTextUp", nil],
    [467542, "mapTextDown", nil],
    [467543, "mapTools", nil],
    [467544, "mapType", nil],
    [467545, "mapCentre", nil],
    [467546, "scanPanel", nil],
    // alarm app
    [467500, "alarm", 5],
    [467501, "alarm", 15],
    [467502, "alarm", 30],
    [467503, "alarmSilence", nil],
    [467504, "alarmClear", nil],
    [467505, "alarm", 1],
    [467506, "alarm", 2],
    [467507, "alarm", 3],
    [467509, "alarmAt", nil],
    // one DEL key per roster row - the row resolves to an alarm id at press time
    [467560, "alarmDel", 0],
    [467561, "alarmDel", 1],
    [467562, "alarmDel", 2],
    [467563, "alarmDel", 3],
    [467564, "alarmDel", 4],
    [467565, "alarmDel", 5],
    // settings app - accent, screen shade, font
    [467510, "icon", 0],
    [467511, "icon", 1],
    [467512, "icon", 2],
    [467513, "icon", 3],
    [467514, "icon", 4],
    [467515, "icon", 5],
    [467516, "icon", 6],
    [467520, "bg", 0],
    [467521, "bg", 1],
    [467522, "bg", 2],
    [467523, "bg", 3],
    [467530, "font", 0],
    [467531, "font", 1],
    [467532, "font", 2],
    [467533, "font", 3],
    // the embedded intrusion page (tablet only; the controls are built by
    // FUNC(hackBuild) before this runs, with the hacking addon's own IDCs)
    [8723, "hackCard", 0],
    [8728, "hackCard", 1],
    [8733, "hackCard", 2],
    [8738, "hackCard", 3],
    [8743, "hackCard", 4],
    [8748, "hackCard", 5],
    [8780, "hackIntel", 0],
    [8781, "hackIntel", 1],
    [8782, "hackIntel", 2],
    [8783, "hackIntel", 3],
    [8784, "hackIntel", 4],
    [8707, "hackAction", nil],
    [8708, "hackClose", nil]
];

private _wired = 0;
private _pairs = [];

{
    _x params ["_idc", "_kind", "_arg", ["_tip", ""], ["_onlyIdd", -1]];
    if (_onlyIdd != -1 && {ctrlIDD _display != _onlyIdd}) then {continue};
    private _ctrl = _display displayCtrl _idc;
    if (isNull _ctrl) then {continue};
    if (_ctrl getVariable [QGVAR(wired), false]) then {continue};
    _ctrl setVariable [QGVAR(wired), true];

    // absolute position: a group child's position is relative to its group
    (ctrlPosition _ctrl) params ["_cx", "_cy", "_cw", "_ch"];
    private _group = ctrlParentControlsGroup _ctrl;
    if (!isNull _group) then {
        (ctrlPosition _group) params ["_gx", "_gy"];
        _cx = _cx + _gx;
        _cy = _cy + _gy;
    };

    private _btn = _display ctrlCreate [QGVAR(catcher), -1];
    _btn ctrlSetPosition [_cx, _cy, _cw, _ch];
    _btn ctrlCommit 0;
    _btn setVariable [QGVAR(click), [_kind, _arg]];
    _btn setVariable [QGVAR(source), _ctrl];
    // hover text rides on the catcher - it is what the mouse actually meets
    if (_tip != "") then {
        _btn ctrlSetTooltip _tip;
    };
    _btn ctrlAddEventHandler ["ButtonClick", _onCatch];
    _btn ctrlAddEventHandler ["MouseButtonDown", _onCatch];
    _pairs pushBack [_btn, _ctrl];

    _wired = _wired + 1;
} forEach _table;

// Several screens share the same real estate, so a hidden control's catcher
// must hide with it or it steals the press from what is actually shown.
// FUNC(syncCatchers) keeps that true from a fast PFH; seed the state now.
_display setVariable [QGVAR(catchers), (_display getVariable [QGVAR(catchers), []]) + _pairs];
[_display] call FUNC(syncCatchers);

// The authoritative click path. On the tablet, presses reach the DISPLAY but
// not the catcher controls - proven by the display probe firing while every
// control-level handler stayed silent - so the display's own handler does the
// hit-testing against the catcher rectangles. Nothing can occlude this.
// Later-created catchers win, mirroring render order.
if !(_display getVariable [QGVAR(dispatcher), false]) then {
    _display setVariable [QGVAR(dispatcher), true];
    _display displayAddEventHandler ["MouseButtonDown", {
        params ["_display", "_button", "_mx", "_my"];
        if (_button != 0) exitWith {false};

        private _pairs = _display getVariable [QGVAR(catchers), []];
        for "_i" from (count _pairs - 1) to 0 step -1 do {
            (_pairs select _i) params ["_btn", "_source"];
            if (!ctrlShown _source) then {continue};
            private _group = ctrlParentControlsGroup _source;
            if (!isNull _group && {!ctrlShown _group}) then {continue};

            (ctrlPosition _btn) params ["_cx", "_cy", "_cw", "_ch"];
            if (_mx >= _cx && {_mx <= _cx + _cw} && {_my >= _cy} && {_my <= _cy + _ch}) exitWith {
                (_btn getVariable [QGVAR(click), []]) call FUNC(click);
            };
        };
        false
    }];
};

