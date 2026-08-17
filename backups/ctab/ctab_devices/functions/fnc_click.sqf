#include "script_component.hpp"
/*
 * Author: YonV
 * The one door every device button comes through. Buttons are wired two ways -
 * config action, and a runtime MouseButtonDown handler added the way BCE wires
 * its ATAK tools, because config dispatch alone proved unreliable on these
 * dialogs. When both fire for one press, the debounce collapses them to one
 * call, which matters for the buttons that add alarm minutes.
 *
 * Arguments:
 * 0: What was pressed <STRING>
 * 1: Its argument, if it takes one <ANY> (optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * ["app", "weather"] call ghost_ctab_devices_fnc_click
 */

params ["_kind", ["_arg", nil]];

private _now = diag_tickTime;
if (_now - (uiNamespace getVariable [QGVAR(lastClick), -9]) < 0.25) exitWith {};
uiNamespace setVariable [QGVAR(lastClick), _now];

switch (_kind) do {
    case "app": {[_arg] call FUNC(app)};
    case "alarm": {[_arg] call FUNC(alarmAdd)};
    case "alarmAt": {call FUNC(alarmAt)};
    case "alarmSilence": {call FUNC(alarmSilence)};
    case "alarmClear": {call FUNC(alarmClear)};
    case "alarmDel": {[_arg] call FUNC(alarmDelete)};
    case "support": {[_arg] call FUNC(supportOpen)};
    case "icon": {[_arg] call FUNC(setIconColor)};
    case "bg": {[_arg] call FUNC(setBgColor)};
    case "font": {[_arg] call FUNC(setFont)};
    // A TOGGLE: press to bring the reference up, press again to put it away.
    // It was a hold, which meant reading it one-handed while treating somebody
    // was impossible.
    // The ENGINEERING app's per-charge key. The index points into the list
    // the page stored THIS tick - re-read and bounds-checked, so a charge
    // that vanished between draw and click is a miss, never a wrong bang.
    case "detonate": {
        private _ifName = call FUNC(ifName);
        if (_ifName == "") exitWith {};
        private _display = uiNamespace getVariable [_ifName, displayNull];
        if (isNull _display) exitWith {};
        if !([] call FUNC(isEngineer)) exitWith {};
        if (isNil "ace_explosives_fnc_detonateExplosive") exitWith {};

        private _row = (_display getVariable [QGVAR(engCharges), []]) param [_arg, []];
        if (_row isEqualTo []) exitWith {};
        _row params ["_entry", "_code"];
        _entry params [["_explosive", objNull], ["_fuseTime", 0]];
        if (isNull _explosive) exitWith {};

        private _ok = [cTab_player, ENG_DET_RANGE, [_explosive, _fuseTime],
            QGVAR(engineer)] call ace_explosives_fnc_detonateExplosive;
        [
            "Demolitions",
            [format ["%1 - no fire (out of reach or blocked).", _code],
             format ["%1 fired.", _code]] select _ok,
            [[1, 0.3, 0.3, 1], [0.35, 0.85, 0.42, 1]] select _ok
        ] call ghost_notify_fnc_notify;
    };
    case "medNotes": {
        private _ifName = call FUNC(ifName);
        if (_ifName == "") exitWith {};
        private _display = uiNamespace getVariable [_ifName, displayNull];
        if (isNull _display) exitWith {};
        private _parts = (_display getVariable [QGVAR(medNotes), []]) select [1, 3];
        if (_parts isEqualTo []) exitWith {};
        private _up = !(ctrlShown (_parts select 0));
        {_x ctrlShow _up} forEach _parts;
    };
    case "convoyPick": {[_arg] call FUNC(convoyPick)};
    case "menu": {call FUNC(menuToggle)};
    case "tools": {call FUNC(toolsToggle)};
    case "scanPanel": {call FUNC(overlayToggle)};
    // the FBCB4 art's own power key - the vehicle screen has no other way out
    case "close": {closeDialog 0};
    // cTab's own map-tool switches, moved into the settings app - the
    // handhelds have no bezel key for the map-options strip.
    case "mapTextUp": {call cTab_fnc_txt_size_inc};
    case "mapTextDown": {call cTab_fnc_txt_size_dec};
    case "mapTools": {[call FUNC(ifName)] call cTab_fnc_toggleMapTools};
    case "mapType": {[call FUNC(ifName)] call cTab_fnc_mapType_toggle};
    // CENTRE. Animating the map to the player's position does not reliably put
    // the player in the middle of it on these devices - cTab does exactly that
    // and the player still came out well left of centre, so repeating the same
    // call by hand fixed nothing. Rather than keep guessing at the cause, this
    // MEASURES the error and corrects it: a frame after cTab has centred, ask
    // the control what world position is actually at the middle of its
    // rectangle, and re-aim by however far that missed. The map pans linearly,
    // so one correction lands it.
    case "mapCentre": {
        [call FUNC(ifName)] call cTab_fnc_centerMapOnPlayerPosition;
        [{
            private _ifName = call FUNC(ifName);
            if (_ifName == "") exitWith {};
            private _display = uiNamespace getVariable [_ifName, displayNull];
            if (isNull _display) exitWith {};

            private _want = getPosASL vehicle cTab_player;
            {
                private _map = _display displayCtrl _x;
                if (!isNull _map && {ctrlShown _map}) exitWith {
                    (ctrlPosition _map) params ["_px", "_py", "_pw", "_ph"];
                    private _at = _map ctrlMapScreenToWorld [_px + _pw / 2, _py + _ph / 2];
                    private _dx = (_want select 0) - (_at select 0);
                    private _dy = (_want select 1) - (_at select 1);
                    // already there: leave it be rather than re-commit an anim
                    if (abs _dx < 1 && {abs _dy < 1}) exitWith {};
                    _map ctrlMapAnimAdd [0, ctrlMapScale _map,
                        [(_want select 0) + _dx, (_want select 1) + _dy]];
                    ctrlMapAnimCommit _map;
                };
            } forEach [S7_IDC_MAP, S7_IDC_MAPTOPO];
        }] call CBA_fnc_execNextFrame;
    };
    // the drawing tools, onto whichever map this device is showing
    case "tool": {[_arg] call FUNC(toolPick)};
    // the FBCB4's grafted message page - cTab's engine, our buttons. The
    // template functions take the pressed control, from which they derive
    // the display; send and delete work off the active interface.
    case "msgTemplates": {
        private _d = uiNamespace getVariable [call FUNC(ifName), displayNull];
        if (!isNull _d) then {
            [_d displayCtrl 16150] call ctab_messaging_fnc_btnShowTemplates;
        };
    };
    case "msgMedevac": {
        private _d = uiNamespace getVariable [call FUNC(ifName), displayNull];
        if (!isNull _d) then {
            [_d displayCtrl 16140] call ctab_messaging_fnc_btnShowMedevacTemplate;
        };
    };
    case "msgSend": {call cTab_msg_Send};
    case "msgDelete": {[call FUNC(ifName)] call cTab_fnc_onMsgBtnDelete};
    // the embedded intrusion page - the hacking addon owns the behaviour
    case "hackCard": {[_arg] call ghost_hacking_fnc_tabletSelectDevice};
    case "hackIntel": {[_arg] call ghost_hacking_fnc_tabletSelectIntel};
    case "hackAction": {call ghost_hacking_fnc_tabletAction};
    case "hackClose": {
        // pause the hack and hand the screen back to the desktop
        if (!isNil "ghost_hacking_fnc_tabletClosed") then {
            call ghost_hacking_fnc_tabletClosed;
        };
        ["cTab_Tablet_dlg", [["mode", "DESKTOP"]], true, true] call cTab_fnc_setSettings;
    };
};

// The press likely changed what is on screen - re-sync the catchers now
// rather than waiting for the PFH, so the next press lands right.
private _ifName = call FUNC(ifName);
if (_ifName != "") then {
    [uiNamespace getVariable [_ifName, displayNull]] call FUNC(syncCatchers);
};
