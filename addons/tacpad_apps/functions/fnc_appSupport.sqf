#include "script_component.hpp"
/*
 * Author: Ghost
 * TAC//SUPPORT: combat-support tasking, fronting ALiVE THROUGH THE ADAPTER
 * and never touching ALiVE itself. Form column left, a REAL map right, action
 * stack under the map - the ALiVE tablet's own layout and the design
 * handoff's.
 *
 * A DIALOG, NOT A DRAWN PANEL - and that decision is load-bearing three ways.
 * A map control embedded in a drawn panel on the map display bled past its
 * frame and fed its drags to the big map underneath ("really fucked up", and
 * it was); in a dialog it clips and pans itself. CLOSE is closeDisplay, which
 * nothing can sit on top of. And Esc works for free. The dialog shell and the
 * map control live in dialog.hpp; everything else is drawn here with the
 * suite's own vocabulary, the way the full reader draws itself.
 *
 * WHO MAY TASK is a TAG - the Support tasking tag setting through
 * EFUNC(messaging,tagMatch), default JFO. Empty means everyone.
 *
 * Arguments (app handler):
 * 0: Map display <DISPLAY> - unused; the screen is its own display
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_mapDisplay", displayNull, [displayNull]]];

if (isNil "ghost_adapter_alive_fnc_supportAssets") exitWith {
    ["SUPPORT", "The ALiVE adapter is not loaded.", "high"] call EFUNC(messaging,notify);
};

// THE GATE ONLY COUNTS WHEN THE TAG NAMES SOMEBODY IN THIS MISSION. The
// shipped "JFO" default met a mission that flags nobody isJFO, so the app
// refused to open for anybody, forever, behind one easy-to-miss notify -
// a day of dead "commits" never got past this line. A tag that matches no
// player and no playable slot is a misconfiguration, not a gate: it fails
// OPEN, loudly in the RPT. (Saved profiles pin old defaults - see the BFT
// autoEnable lesson - so fixing the default alone would not have fixed it.)
private _gate = GVAR(supportTag);
private _gateBlocks = false;
if (_gate isNotEqualTo "" && {!([player, _gate] call EFUNC(messaging,tagMatch))}) then {
    _gateBlocks = (allPlayers + (playableUnits select {!isPlayer _x}))
        findIf {[_x, _gate] call EFUNC(messaging,tagMatch)} > -1;
    if (!_gateBlocks) then {
        WARNING_1("appSupport: tag '%1' names nobody in this mission - failing open",_gate);
    };
};
if (_gateBlocks) exitWith {
    WARNING_1("appSupport: gate refused - tasking is held by '%1'",_gate);
    ["SUPPORT", format ["Tasking is held by %1.", toUpper _gate], "high"] call EFUNC(messaging,notify);
};

// Whatever map-display app was open closes first - a dialog over a live app
// left the old page ghosting through the backdrop.
private _g = uiNamespace getVariable [QEGVAR(tacpad,appGroup), controlNull];
if (!isNull _g) then {ctrlDelete _g};
uiNamespace setVariable [QEGVAR(tacpad,appGroup), controlNull];

// The dialog hosts the screen; opening twice just redraws the content. A
// fresh dialog never opens mid-marker-pick - that state belongs to a press.
private _display = uiNamespace getVariable [QGVAR(supportDlg), displayNull];
if (isNull _display) then {
    missionNamespace setVariable [QGVAR(supportPickMarker), false];
    createDialog QGVAR(supportDlg);
    _display = uiNamespace getVariable [QGVAR(supportDlg), displayNull];
    INFO_1("appSupport: dialog created - %1",_display);
};
if (isNull _display) exitWith {
    WARNING("appSupport: createDialog failed - the support dialog class did not open");
};

([] call EFUNC(tacpad,theme)) params ["_ground", "_ink", "_accent", "_line"];

// OPAQUE, WHATEVER THE PANEL OPACITY SETTING SAYS. Translucent ground is for
// panels floating over the live map; in a modal dialog it is mud - the form
// read as "not following the colour scheme" because the backdrop and the
// darkened map under it were showing through every colour on the page.
_ground = +_ground;
_ground set [3, 1];

// The panel rectangle - the same literal fractions dialog.hpp positions the
// map control with. Change one, change both.
private _w = 0.66 * safeZoneW;
private _h = 0.66 * safeZoneH;
private _x0 = safeZoneX + 0.17 * safeZoneW;
private _y0 = safeZoneY + 0.17 * safeZoneH;

private _rowH = ROW_H * EGVAR(tacpad,textScale) * EGVAR(tacpad,uiScale) * safeZoneH;
private _pad = PAD * safeZoneW;
private _padY = PAD * safeZoneH;
private _mute = [_ink # 0, _ink # 1, _ink # 2, 0.62];
private _dim = [_ink # 0, _ink # 1, _ink # 2, 0.42];

// THE MAP IS A HOLE AND THE SCREEN IS BUILT AROUND IT. One group spanning
// the whole rectangle sat ON TOP of the config-hosted map control - runtime
// controls stack above config ones - so the map rendered as a dark box
// behind the ground fill and never received a single click. Three slabs now
// BORDER the hole - header across the top, form to its left, actions under
// it - plus standalone border lines, and nothing of ours crosses the map's
// rectangle.
private _headerH = (0.03 / 0.66) * _h;
private _mapL = ((0.545 - 0.17) / 0.66) * _w;
private _mapB = ((0.72 - 0.17) / 0.66) * _h;

// Rebuilt whole each draw, like every screen in the suite. The root was one
// control and is a list now; an old single control is wrapped so a session
// spanning the change does not choke on it.
private _oldRoot = uiNamespace getVariable [QGVAR(supportRoot), []];
if (_oldRoot isEqualType controlNull) then {_oldRoot = [_oldRoot]};
{if (!isNull _x) then {ctrlDelete _x}} forEach _oldRoot;

private _roots = [];
private _fnc_slab = {
    params ["_px", "_py", "_pw", "_ph"];
    private _g = _display ctrlCreate [QEGVAR(tacpad,panel), -1];
    _g ctrlSetPosition [_px, _py, _pw, _ph];
    _g ctrlCommit 0;
    _roots pushBack _g;
    _g
};

private _head = [_x0, _y0, _w, _headerH] call _fnc_slab;
private _body = [_x0, _y0 + _headerH, _mapL, _h - _headerH] call _fnc_slab;
private _act = [_x0 + _mapL, _y0 + _mapB, _w - _mapL, _h - _mapB] call _fnc_slab;

// The border, four standalone lines - no single frame may span the hole -
// and the divider along the form's edge.
{
    _x params ["_px", "_py", "_pw", "_ph"];
    private _l = _display ctrlCreate [QEGVAR(tacpad,fill), -1];
    _l ctrlSetPosition [_px, _py, _pw, _ph];
    _l ctrlSetBackgroundColor _ink;
    _l ctrlCommit 0;
    _roots pushBack _l;
} forEach [
    [_x0, _y0, _w, RULE_THICK * pixelH],
    [_x0, _y0 + _h - RULE_THICK * pixelH, _w, RULE_THICK * pixelH],
    [_x0, _y0, RULE_THICK * pixelW, _h],
    [_x0 + _w - RULE_THICK * pixelW, _y0, RULE_THICK * pixelW, _h],
    [_x0 + _mapL, _y0 + _headerH, RULE_THICK * pixelW, _h - _headerH]
];

uiNamespace setVariable [QGVAR(supportRoot), _roots];

// Display-dispatched press rects, gathered through the draw and stored
// once at the bottom - see the display MouseButtonDown handler.
private _hotspots = [];

// ------------------------------------------------------------- the header ---
[_head, [0, 0, _w, _headerH], _ink] call EFUNC(tacpad,drawFill);
[_head, [_pad, 0, _w * 0.5, _headerH], "TAC//SUPPORT", _ground, 0.9, true] call EFUNC(tacpad,drawText);
[_head, [_w * 0.7, 0, _w * 0.3 - _pad, _headerH], "CLOSE", _ground, 0.8, true, "right"] call EFUNC(tacpad,drawText);
private _closeHit = [_head, [_w * 0.5, 0, _w * 0.5, _headerH], {
    (uiNamespace getVariable [QGVAR(supportDlg), displayNull]) closeDisplay 2;
}] call EFUNC(tacpad,drawHit);

// Close fires on the press here too - see EFUNC(tacpad,appFrame).
_closeHit ctrlAddEventHandler ["MouseButtonDown", {
    params ["_ctrl", "_button"];
    if (_button isNotEqualTo 0) exitWith {false};
    [_ctrl] call (_ctrl getVariable [QEGVAR(tacpad,hitHandler), {}]);
    true
}];

// The form ground - opaque, scheme colours, left of the hole.
private _fw = _mapL;
[_body, [0, 0, _fw, _h - _headerH], _ground] call EFUNC(tacpad,drawFill);

// The actions slab under the map gets its own ground.
private _aw = _w - _mapL;
[_act, [0, 0, _aw, _h - _mapB], _ground] call EFUNC(tacpad,drawFill);

// ------------------------------------------------------------- selection ----
private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
_sel params ["_selType", "_selUnit", "_selTask"];

private _assets = call ghost_adapter_alive_fnc_supportAssets;
private _units = _assets select {(_x param [1, ""]) isEqualTo _selType};

private _fnc_group = {
    params ["_y", "_label", "_guide"];
    // A SOLID BASE-COLOUR BAR, like the TAC//SUPPORT header itself - the
    // user asked the section heads to take a base colour from the scheme
    // settings rather than the washed ink band, which read as loose grey.
    // Ink bar, ground label, accent tick: all three straight from the
    // theme, so the custom scheme's colour settings repaint these too.
    [_body, [0, _y, _fw, _rowH * 0.8], _ink] call EFUNC(tacpad,drawFill);
    [_body, [0, _y, RULE_THICK * pixelW * 2, _rowH * 0.8], _accent] call EFUNC(tacpad,drawFill);
    [_body, [_pad, _y, _fw * 0.35, _rowH * 0.8], _label, _ground, 0.62, true, "left", true] call EFUNC(tacpad,drawText);
    [_body, [_fw * 0.35, _y, _fw * 0.65 - _pad, _rowH * 0.8], _guide, [_ground # 0, _ground # 1, _ground # 2, 0.62], 0.55, false, "right"] call EFUNC(tacpad,drawText);
    _y + _rowH * 0.8
};

private _fnc_row = {
    params ["_y", "_label", "_meta", "_on", "_data"];

    // Selected = ACCENT, asked for by name - the ink fill read as just
    // another light band next to the new solid kickers.
    if (_on) then {
        [_body, [0, _y, _fw, _rowH], _accent] call EFUNC(tacpad,drawFill);
    };
    [_body, [_pad, _y, _fw * 0.6, _rowH], _label, ([_ink, _ground] select _on), 0.8, true] call EFUNC(tacpad,drawText);
    [_body, [_fw * 0.6, _y, _fw * 0.4 - _pad, _rowH], _meta, ([_mute, _ground] select _on), 0.62, true, "right", true] call EFUNC(tacpad,drawText);
    [_body, [0, _y + _rowH - RULE_THIN * pixelH, _fw, RULE_THIN * pixelH], _line] call EFUNC(tacpad,drawFill);

    private _hit = [_body, [0, _y, _fw, _rowH], {
        params ["_ctrl"];
        private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
        (_ctrl getVariable [QGVAR(pick), []]) params ["_slot", "_value"];
        INFO_2("appSupport: row pressed - slot %1 value '%2'",_slot,_value);

        // The dependent chain: a new asset clears unit and task, a new unit
        // clears the task.
        _sel set [_slot, _value];
        if (_slot < 1) then {_sel set [1, ""]};
        if (_slot < 2) then {_sel set [2, ""]};
        missionNamespace setVariable [QGVAR(supportSel), _sel];

        {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
    }] call EFUNC(tacpad,drawHit);
    _hit setVariable [QGVAR(pick), _data];

    _y + _rowH
};

// ------------------------------------------------------- the marker picker --
// MKR on the task-point row swaps the form for this list until a marker is
// picked or the pick is cancelled. ONLY MARKERS A PLAYER PLACED - engine
// name "_USER_DEFINED #..." - the user's rule for every marker list:
// editor zones, TAOR areas and system plumbing are out wholesale, and
// other sides' pen work never reaches this client anyway. No colour
// filtering - a mate's red contact mark is exactly what fires get aimed
// at. The map and the poll were wired by the draw that showed the MKR
// button, so leaving early here leaves both alive.
if (missionNamespace getVariable [QGVAR(supportPickMarker), false]) exitWith {
    // No action buttons on this screen - stale rects from the last draw
    // would make invisible buttons pressable over the marker list.
    uiNamespace setVariable [QGVAR(supportHotspots), []];

    private _mkrs = allMapMarkers select {
        ((_x select [0, 13]) isEqualTo "_USER_DEFINED")
        && {!("taor" in toLower markerText _x)}
    };
    _mkrs = _mkrs apply {[markerPos _x distance2D player, _x]};
    _mkrs sort true;

    private _fit = (floor ((_h - _headerH - _rowH * 3) / _rowH)) max 1;
    private _shown = _mkrs select [0, _fit];

    private _y = [_padY, "MARKER", format ["%1 OF %2 - NEAREST FIRST", count _shown, count _mkrs]] call _fnc_group;

    if (_shown isEqualTo []) then {
        [_body, [_pad, _y, _fw - 2 * _pad, _rowH], "NO MARKERS ON THE MAP", _dim, 0.7] call EFUNC(tacpad,drawText);
        _y = _y + _rowH;
    };

    {
        _x params ["_dist", "_mkr"];

        // A placed marker with no text has only its machine name, and
        // "_USER_DEFINED #23" is not a name anybody briefed.
        private _label = markerText _mkr;
        if (_label isEqualTo "") then {_label = "PLACED MARKER"};

        private _distText = if (_dist < 1000) then {format ["%1 M", round _dist]} else {format ["%1 KM", (round (_dist / 100)) / 10]};

        [_body, [_pad, _y, _fw * 0.5, _rowH], toUpper _label, _ink, 0.8, true] call EFUNC(tacpad,drawText);
        [_body, [_fw * 0.5, _y, _fw * 0.5 - _pad, _rowH], format ["GRID %1 - %2", mapGridPosition (markerPos _mkr), _distText], _mute, 0.62, true, "right", true] call EFUNC(tacpad,drawText);
        [_body, [0, _y + _rowH - RULE_THIN * pixelH, _fw, RULE_THIN * pixelH], _line] call EFUNC(tacpad,drawFill);

        private _hit = [_body, [0, _y, _fw, _rowH], {
            params ["_ctrl"];
            (_ctrl getVariable [QGVAR(pickMkr), []]) params [["_mkr", ""], ["_label", ""]];
            (markerPos _mkr) params ["_px", "_py"];
            missionNamespace setVariable [QGVAR(supportPoint), [_px, _py, 0]];
            missionNamespace setVariable [QGVAR(supportPointName), _label];
            missionNamespace setVariable [QGVAR(supportPickMarker), false];
            {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
        }] call EFUNC(tacpad,drawHit);
        _hit setVariable [QGVAR(pickMkr), [_mkr, _label]];

        _y = _y + _rowH;
    } forEach _shown;

    _y = _y + _padY;
    [_body, [_pad, _y, _fw - 2 * _pad, _rowH], _ink, RULE_THIN] call EFUNC(tacpad,drawFrame);
    [_body, [_pad, _y, _fw - 2 * _pad, _rowH], "CANCEL", _ink, 0.8, true, "center"] call EFUNC(tacpad,drawText);
    [_body, [_pad, _y, _fw - 2 * _pad, _rowH], {
        missionNamespace setVariable [QGVAR(supportPickMarker), false];
        {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
    }] call EFUNC(tacpad,drawHit);
};

// ------------------------------------------------------------ the verdict --
// SAID FIRST, AT THE TOP OF THE FORM, in a row that is always reserved so
// the form never jumps. It used to render at the bottom of the running
// column, below the parameters - for artillery that _y was past the form
// group's clipped edge, so every acceptance and every refusal drew off
// screen. Notifies draw on layers under this dialog, so they were invisible
// too. A CONFIRM that answers where you cannot see it reads as a dead
// button - and it did, for a day.
private _y = _padY;
(missionNamespace getVariable [QGVAR(supportFlash), []]) params [["_flashText", ""], ["_flashOk", true], ["_flashAt", -99]];
if (_flashText isNotEqualTo "" && {CBA_missionTime - _flashAt < 12}) then {
    [_body, [_pad, _y, _fw - 2 * _pad, _rowH], toUpper _flashText, ([_accent, _ink] select _flashOk), 0.6, true, "left", true] call EFUNC(tacpad,drawText);
};
_y = _y + _rowH;

// ------------------------------------------------------------------ asset ---
_y = [_y, "ASSET", format ["%1 ASSETS ANSWERING", count _assets]] call _fnc_group;
{
    _x params ["_type", "_label", "_noun"];
    private _n = {(_x param [1, ""]) isEqualTo _type} count _assets;
    _y = [_y, _label, format ["%1 %2", _n, _noun], _selType isEqualTo _type, [0, _type]] call _fnc_row;
} forEach [["transport", "TRANSPORT", "AIRFRAMES"], ["cas", "CAS", "AIRFRAMES"], ["arty", "ARTILLERY", "BATTERIES"]];

// ------------------------------------------------------------------- unit ---
private _unitRow = _units param [_units findIf {(_x param [0, ""]) isEqualTo _selUnit}, []];
_y = [
    _y + _padY, "UNIT",
    if (_unitRow isEqualTo []) then {
        ["PICK THE AIRFRAME TO TASK", "PICK THE BATTERY TO TASK"] select (_selType isEqualTo "arty")
    } else {
        ["Unit is available and waiting for task", "Unit is on a mission - RTB or retask it"] select ((_unitRow param [4, "idle"]) isNotEqualTo "idle")
    }
] call _fnc_group;

if (_units isEqualTo []) then {
    [_body, [_pad, _y, _fw - 2 * _pad, _rowH], "NO SUPPORT ASSETS ANSWERING", _dim, 0.7] call EFUNC(tacpad,drawText);
    _y = _y + _rowH;
} else {
    {
        _x params ["_id", "", "_callsign", "_platform", "_status"];
        _y = [_y, _callsign, format ["%1 - %2", _platform, toUpper _status], _selUnit isEqualTo _id, [1, _id]] call _fnc_row;
    } forEach _units;
};

// ---------------------------------------------------------------- sitrep ---
// The picked airframe says its own state - grid, ETA, condition, fuel -
// through the adapter, into the verdict row and over the side channel the
// way ALiVE's own tablet asks. Airframes only: a battery's element 0 is a
// man, and his fuel state is nobody's business.
if (_selType isNotEqualTo "arty" && {_unitRow isNotEqualTo []}) then {
    private _bw = _fw * 0.5;
    private _bx = _fw - _pad - _bw;
    private _by = _y + _padY * 0.4;
    [_body, [_bx, _by, _bw, _rowH * 0.9], _ink, RULE_THIN] call EFUNC(tacpad,drawFrame);
    [_body, [_bx, _by, _bw, _rowH * 0.9], "REQUEST SITREP", _ink, 0.7, true, "center"] call EFUNC(tacpad,drawText);

    (ctrlPosition _body) params ["_bodyX", "_bodyY"];
    _hotspots pushBack [_bodyX + _bx, _bodyY + _by, _bw, _rowH * 0.9, {
        private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
        ([_sel # 1] call ghost_adapter_alive_fnc_supportSitrep) params ["_ok", "_said"];
        missionNamespace setVariable [QGVAR(supportFlash), [_said, _ok, CBA_missionTime]];
        ["SUPPORT", _said, ["high", "normal"] select _ok] call EFUNC(messaging,notify);
        {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
    }, "SITREP"];

    _y = _y + _rowH * 0.9 + _padY * 0.8;
};

// ------------------------------------------------------------------- task ---
private _tasks = switch (_selType) do {
    case "cas": {[["SAD", "SAD", "SEEK & DESTROY"], ["LOITER", "LOITER", "Holds overhead the point"], ["ATTACK RUN", "ATTACK", "Attack runs on the point"]]};
    case "arty": {[["FIRE MISSION", "FIRE MISSION", "Rounds on the task point, rapid rate"]]};
    default {[["PICKUP", "PICKUP", "Moves to the point and waits for smoke + confirm"], ["LAND", "LAND", "Lands at the point"], ["MOVE", "MOVE", "Repositions and waits"], ["CIRCLE", "CIRCLE", "Orbits the point until told otherwise"]]};
};

private _taskRow = _tasks param [_tasks findIf {(_x param [0, ""]) isEqualTo _selTask}, []];
_y = [
    _y + _padY, "TASK",
    [_taskRow param [2, "PICK WHAT THE UNIT DOES"], "PICK WHAT THE UNIT DOES"] select (_taskRow isEqualTo [])
] call _fnc_group;

{
    _x params ["_id", "_label", "_meta"];
    _y = [_y, _label, _meta, _selTask isEqualTo _id, [2, _id]] call _fnc_row;
} forEach _tasks;

// ------------------------------------------------------------- parameters --
private _prm = missionNamespace getVariable [QGVAR(supportParams), [500, 150, 0, 1, 0, 1, 100, 0]];
_prm params ["_radius", "_alt", "_roeIdx"];
private _speedIdx = _prm param [3, 1];

_y = [_y + _padY, "PARAMETERS", ""] call _fnc_group;

private _fnc_stepRow = {
    params ["_y", "_label", "_valueText", "_slot", "_delta", "_min", "_max"];

    [_body, [_pad, _y, _fw * 0.4, _rowH], _label, _mute, 0.62, true, "left", true] call EFUNC(tacpad,drawText);
    [_body, [_fw * 0.4, _y, _fw * 0.3, _rowH], _valueText, _ink, 0.85, true, "center"] call EFUNC(tacpad,drawText);

    {
        _x params ["_glyph", "_dir"];
        private _sx = _fw * 0.7 + _forEachIndex * (_fw * 0.14);
        [_body, [_sx, _y, _fw * 0.13, _rowH], _ink, RULE_THIN] call EFUNC(tacpad,drawFrame);
        [_body, [_sx, _y, _fw * 0.13, _rowH], _glyph, _ink, 0.85, true, "center"] call EFUNC(tacpad,drawText);

        private _hit = [_body, [_sx, _y, _fw * 0.13, _rowH], {
            params ["_ctrl"];
            (_ctrl getVariable [QGVAR(step), []]) params ["_slot", "_delta", "_min", "_max"];
            private _prm = missionNamespace getVariable [QGVAR(supportParams), [500, 150, 0, 1, 0, 1, 100, 0]];
            _prm set [_slot, ((_prm param [_slot, 0]) + _delta) max _min min _max];
            missionNamespace setVariable [QGVAR(supportParams), _prm];
            {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
        }] call EFUNC(tacpad,drawHit);
        _hit setVariable [QGVAR(step), [_slot, _delta * _dir, _min, _max]];
    } forEach [["-", -1], ["+", 1]];

    _y + _rowH + _padY * 0.4
};

switch (_selType) do {
    case "cas": {
        _y = [_y, "RADIUS", format ["%1 M", _radius], 0, 100, 100, 1000] call _fnc_stepRow;
        _y = [_y, "ALTITUDE", format ["%1 M", _alt], 1, 50, 50, 500] call _fnc_stepRow;
        _y = [_y, "ROE", ["FREE - FIRE AT WILL", "HOLD FIRE"] select _roeIdx, 2, 1, 0, 1] call _fnc_stepRow;
    };
    case "arty": {
        // Ordnance steps through what THIS battery carries - the adapter row
        // hands over NEO's own [type, rounds left] ledger - so the screen
        // can never offer a shell the guns do not have.
        private _ordTypes = _unitRow param [5, []];
        if (_ordTypes isEqualTo []) then {
            [_body, [_pad, _y, _fw - 2 * _pad, _rowH], "ORDNANCE - PICK A BATTERY", _dim, 0.7, true, "left", true] call EFUNC(tacpad,drawText);
            _y = _y + _rowH + _padY * 0.4;
        } else {
            private _ordIdx = (_prm param [4, 0]) min (count _ordTypes - 1);
            (_ordTypes param [_ordIdx, []]) params [["_oName", "?"], ["_oRds", 0]];
            _y = [_y, "ORDNANCE", format ["%1 - %2 RDS", _oName, _oRds], 4, 1, 0, count _ordTypes - 1] call _fnc_stepRow;
        };
        _y = [_y, "ROUNDS", str ([1, 3, 6, 12, 24] param [_prm param [5, 1], 3]), 5, 1, 0, 4] call _fnc_stepRow;

        // HOW MANY OF THE BATTERY'S TUBES FIRE - asked for after a mission
        // where one gun of three answered. The stored value normalises to
        // "all of them" whenever it is unset or belongs to a differently
        // sized battery, so stepping always starts from the full battery.
        // ALiVE splits the round count across the chosen guns; one round is
        // its own special case and fires from the lead gun alone.
        private _gunsMax = _unitRow param [6, 0];
        if (_gunsMax > 0) then {
            private _gunsCur = _prm param [7, 0];
            if (_gunsCur < 1 || {_gunsCur > _gunsMax}) then {
                _prm set [7, _gunsMax];
                missionNamespace setVariable [QGVAR(supportParams), _prm];
            };
            _y = [_y, "GUNS", format ["%1 OF %2", _prm param [7, _gunsMax], _gunsMax], 7, 1, 1, _gunsMax] call _fnc_stepRow;
        };

        // NEO's own dispersion slider runs 0-500, so the stepper does too.
        _y = [_y, "DISPERSION", format ["%1 M", _prm param [6, 100]], 6, 50, 0, 500] call _fnc_stepRow;
    };
    default {
        _y = [_y, "ALTITUDE", format ["%1 M", _alt], 1, 50, 50, 500] call _fnc_stepRow;
        _y = [_y, "ROE", ["FREE - FIRE AT WILL", "HOLD FIRE"] select _roeIdx, 2, 1, 0, 1] call _fnc_stepRow;
        _y = [_y, "SPEED", ["LIMITED", "NORMAL", "FULL"] select _speedIdx, 3, 1, 0, 2] call _fnc_stepRow;
    };
};

// -------------------------------------------------------------- the point --
// The map on the right sets it - one click. Eager `select` on the grid text
// was the on-screen error at line 247: both arms evaluated, and
// mapGridPosition [] threw. if/else evaluates one.
// Artillery gets no "overhead me" default - a fire mission is aimed, never
// assumed, so an unset point reads as the requirement it is. A point picked
// off a marker keeps the marker's name, because "MKR OBJ BRAVO" reads back
// better than a bare grid.
private _pt = missionNamespace getVariable [QGVAR(supportPoint), []];
private _ptName = missionNamespace getVariable [QGVAR(supportPointName), ""];
private _ptText = if (_pt isEqualTo []) then {
    ["YOUR POSITION - CLICK THE MAP", "REQUIRED - CLICK THE MAP"] select (_selType isEqualTo "arty")
} else {
    if (_ptName isEqualTo "") then {format ["GRID %1", mapGridPosition _pt]} else {format ["MKR %1", toUpper _ptName]}
};

[_body, [_pad, _y, _fw * 0.3, _rowH], "TASK POINT", _mute, 0.62, true, "left", true] call EFUNC(tacpad,drawText);
[_body, [_fw * 0.3, _y, _fw * 0.36, _rowH], _ptText, ([_ink, _accent] select (_pt isEqualTo [] && {_selType isEqualTo "arty"})), 0.72, true, "center", true] call EFUNC(tacpad,drawText);

// MKR swaps the form for the marker list; CLR gives the point back.
[_body, [_fw * 0.68, _y, _fw * 0.14, _rowH], _ink, RULE_THIN] call EFUNC(tacpad,drawFrame);
[_body, [_fw * 0.68, _y, _fw * 0.14, _rowH], "MKR", _ink, 0.72, true, "center"] call EFUNC(tacpad,drawText);
[_body, [_fw * 0.68, _y, _fw * 0.14, _rowH], {
    missionNamespace setVariable [QGVAR(supportPickMarker), true];
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}] call EFUNC(tacpad,drawHit);

[_body, [_fw * 0.84, _y, _fw * 0.13, _rowH], _ink, RULE_THIN] call EFUNC(tacpad,drawFrame);
[_body, [_fw * 0.84, _y, _fw * 0.13, _rowH], "CLR", _ink, 0.72, true, "center"] call EFUNC(tacpad,drawText);
[_body, [_fw * 0.84, _y, _fw * 0.13, _rowH], {
    missionNamespace setVariable [QGVAR(supportPoint), []];
    missionNamespace setVariable [QGVAR(supportPointName), ""];
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}] call EFUNC(tacpad,drawHit);

// ----------------------------------------------------------- action stack ---
// The slab under the map - the handoff's spot, in its own group now so the
// map keeps its rectangle to itself.
private _btnH = ([0.8] call EFUNC(tacpad,textH)) + 2 * _padY;
private _ax = _pad;
private _abw = _aw - 2 * _pad;
private _ay = _padY;

private _ready = _selUnit isNotEqualTo "" && {_selTask isNotEqualTo ""}
    && {_selType isNotEqualTo "arty" || {_pt isNotEqualTo []}};

// THE BUTTON SAYS WHAT IT IS WAITING FOR. A dim "CONFIRM TASKING" with no
// unit and no task picked looks like a broken button, and it was pressed as
// one for a day - "never confirms, no feedback". Until the chain is
// complete the label IS the next step; it becomes CONFIRM TASKING, in
// accent, only when a press would actually send.
private _confirmLabel = if (_ready) then {"CONFIRM TASKING"} else {
    switch (true) do {
        case (_selUnit isEqualTo ""): {
            ["PICK THE AIRFRAME TO TASK FIRST", "PICK THE BATTERY TO TASK FIRST"] select (_selType isEqualTo "arty")
        };
        case (_selTask isEqualTo ""): {"PICK WHAT THE UNIT DOES FIRST"};
        default {"CLICK THE MAP FOR A TASK POINT"};
    }
};

[_act, [_ax, _ay, _abw, _btnH], ([_line, _accent] select _ready)] call EFUNC(tacpad,drawFill);
[_act, [_ax + _pad, _ay, _abw - 2 * _pad, _btnH], _confirmLabel, ([_dim, _ground] select _ready), 0.8, true, "center"] call EFUNC(tacpad,drawText);

// DISPATCHED FROM THE DISPLAY, NOT FROM CONTROLS. The 703 press log proved
// input reaches this dialog - every click logged with coordinates - while
// not one control-attached handler ever fired, ready or not, hit control or
// claimed label, ButtonClick or MouseButtonDown. Whatever eats the routing
// between the display and the controls, the display handler itself
// demonstrably receives every press, so the action buttons hang their rects
// and handlers here and the display handler below hit-tests and fires them
// directly. Rects are display-space: slab position plus child offset.
private _fnc_confirm = if (_ready) then {{
    private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
    (
        [
            _sel # 1, _sel # 2,
            missionNamespace getVariable [QGVAR(supportPoint), []],
            missionNamespace getVariable [QGVAR(supportParams), [500, 150, 0, 1, 0, 1, 100, 0]]
        ] call ghost_adapter_alive_fnc_supportTask
    ) params ["_ok", "_why"];
    private _said = [_why, "Tasking sent - awaiting acknowledgement."] select _ok;
    missionNamespace setVariable [QGVAR(supportFlash), [_said, _ok, CBA_missionTime]];
    ["SUPPORT", _said, ["high", "normal"] select _ok] call EFUNC(messaging,notify);
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}} else {{
    // A press on a button that is not ready still answers - it names the
    // missing piece instead of sitting silent.
    private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
    private _missing = switch (true) do {
        case ((_sel # 1) isEqualTo ""): {"Pick the unit to task first"};
        case ((_sel # 2) isEqualTo ""): {"Pick what the unit does first"};
        default {"Artillery needs a task point - click the map"};
    };
    INFO_2("appSupport: confirm pressed not ready - sel %1, said '%2'",_sel,_missing);
    missionNamespace setVariable [QGVAR(supportFlash), [_missing, false, CBA_missionTime]];
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}};

private _tasked = _unitRow isNotEqualTo [] && {(_unitRow param [4, "idle"]) isNotEqualTo "idle"};
private _ry = _ay + _btnH + _padY;
[_act, [_ax, _ry, _abw, _btnH], ([_dim, _ink] select _tasked), RULE_THICK] call EFUNC(tacpad,drawFrame);
[_act, [_ax + _pad, _ry, _abw - 2 * _pad, _btnH], ["ORDER UNIT RTB", "ORDER BATTERY HOME"] select (_selType isEqualTo "arty"), ([_dim, _ink] select _tasked), 0.8, true, "center"] call EFUNC(tacpad,drawText);

private _fnc_rtb = if (_tasked) then {{
    private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
    ([_sel # 1, "rtb"] call ghost_adapter_alive_fnc_supportTask) params ["_ok", "_why"];
    private _said = [_why, "RTB ordered."] select _ok;
    missionNamespace setVariable [QGVAR(supportFlash), [_said, _ok, CBA_missionTime]];
    ["SUPPORT", _said, ["high", "normal"] select _ok] call EFUNC(messaging,notify);
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}} else {{
    INFO("appSupport: RTB pressed with no tasked unit selected");
    missionNamespace setVariable [QGVAR(supportFlash), ["Nothing to recall - pick a unit that is on a task", false, CBA_missionTime]];
    {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
}};

(ctrlPosition _act) params ["_actX", "_actY"];
(ctrlPosition _head) params ["_headX", "_headY"];
_hotspots pushBack [_actX + _ax, _actY + _ay, _abw, _btnH, _fnc_confirm, "CONFIRM"];
_hotspots pushBack [_actX + _ax, _actY + _ry, _abw, _btnH, _fnc_rtb, "RTB"];
// CLOSE rides the same dispatch - if control routing is the thing that
// is broken, the close hit is as dead as the buttons were.
_hotspots pushBack [_headX + _w * 0.5, _headY, _w * 0.5, _headerH, {
    (uiNamespace getVariable [QGVAR(supportDlg), displayNull]) closeDisplay 2;
}, "CLOSE"];
uiNamespace setVariable [QGVAR(supportHotspots), _hotspots];

// A redraw between a press and its release eats the release, so the poll
// defers while a button is held - tracked here on the display, hung once
// per dialog life like the map handlers below.
if (!(_display getVariable [QGVAR(pressWired), false])) then {
    _display setVariable [QGVAR(pressWired), true];
    _display displayAddEventHandler ["MouseButtonDown", {
        params ["", "_button", "_mx", "_my"];
        uiNamespace setVariable [QGVAR(supportMouseHeld), true];
        if (_button isNotEqualTo 0) exitWith {false};

        // THE ACTION DISPATCH. The handler's own _mx/_my are in the same
        // space the controls were positioned in - getMousePosition was not,
        // which is why the 703 press coordinates looked like they landed
        // outside the panel. Hit-test the registered action rects and fire;
        // every press logs its verdict either way, so the RPT arbitrates.
        private _spots = uiNamespace getVariable [QGVAR(supportHotspots), []];
        private _idx = _spots findIf {
            _x params ["_hx", "_hy", "_hw", "_hh"];
            _mx >= _hx && {_mx <= _hx + _hw} && {_my >= _hy} && {_my <= _hy + _hh}
        };
        private _at = format ["%1 %2", round (_mx * 1000) / 1000, round (_my * 1000) / 1000];
        if (_idx > -1) then {
            (_spots select _idx) params ["", "", "", "", "_fnc", "_name"];
            INFO_2("appSupport: press [%1] -> %2",_at,_name);
            [] call _fnc;
        } else {
            INFO_1("appSupport: press [%1] -> no action",_at);
        };
        false
    }];
    _display displayAddEventHandler ["MouseButtonUp", {
        uiNamespace setVariable [QGVAR(supportMouseHeld), false];
        false
    }];
};

// ---------------------------------------------------------------- the map ---
// Config-hosted; handlers hung ONCE per dialog life, not per redraw.
private _map = _display displayCtrl 8961;
if (!isNull _map && {!(_map getVariable [QGVAR(wired), false])}) then {
    _map setVariable [QGVAR(wired), true];

    private _centre = missionNamespace getVariable [QGVAR(supportPoint), []];
    if (_centre isEqualTo []) then {_centre = getPosATL player};
    _map ctrlMapAnimAdd [0, 0.1, _centre];
    ctrlMapAnimCommit _map;

    _map ctrlAddEventHandler ["MouseButtonDown", {
        params ["_map", "_button", "_mx", "_my"];
        if (_button isNotEqualTo 0) exitWith {false};

        // A map click is a choice too - it names no marker and it answers
        // any marker list that was open.
        private _world = _map ctrlMapScreenToWorld [_mx, _my];
        INFO_1("appSupport: map click -> task point %1",_world);
        missionNamespace setVariable [QGVAR(supportPoint), [_world # 0, _world # 1, 0]];
        missionNamespace setVariable [QGVAR(supportPointName), ""];
        missionNamespace setVariable [QGVAR(supportPickMarker), false];
        {["support"] call EFUNC(tacpad,openApp)} call CBA_fnc_execNextFrame;
        false
    }];

    _map ctrlAddEventHandler ["Draw", {
        params ["_map"];
        private _pt = missionNamespace getVariable [QGVAR(supportPoint), []];
        if (_pt isEqualTo []) exitWith {};

        _map drawIcon ["\a3\ui_f\data\map\markers\military\box_CA.paa", [0.925, 0.19, 0.075, 1], _pt, 22, 22, 0, "", 1];

        private _sel = missionNamespace getVariable [QGVAR(supportSel), ["cas", "", ""]];
        if ((_sel # 0) isEqualTo "cas") then {
            private _r = (missionNamespace getVariable [QGVAR(supportParams), [500, 150, 0, 1, 0, 1, 100, 0]]) param [0, 500];
            _map drawEllipse [_pt, _r, _r, 0, [0.925, 0.19, 0.075, 1], ""];
        };

        // Arty rings its dispersion, not a search radius - the circle rounds
        // will actually land in.
        if ((_sel # 0) isEqualTo "arty") then {
            private _d = (missionNamespace getVariable [QGVAR(supportParams), [500, 150, 0, 1, 0, 1, 100, 0]]) param [6, 100];
            if (_d > 0) then {
                _map drawEllipse [_pt, _d, _d, 0, [0.925, 0.19, 0.075, 1], ""];
            };
        };
    }];
};

// ------------------------------------------------------------- the poll -----
// Availability refreshes while the dialog lives; stands down when it closes
// and gives the map back its panels.
private _existing = uiNamespace getVariable [QGVAR(supportPFH), -1];
if (_existing >= 0) then {
    [_existing] call CBA_fnc_removePerFrameHandler;
};

uiNamespace setVariable [QGVAR(supportPFH), [{
    params ["", "_handle"];

    if (isNull (uiNamespace getVariable [QGVAR(supportDlg), displayNull])) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        uiNamespace setVariable [QGVAR(supportPFH), -1];

        // ONLY IF SUPPORT IS STILL THE OPEN APP. This branch fires up to two
        // seconds after the dialog closed - time enough for the player to
        // have opened another app. Restoring the panels then put them back
        // ON TOP of the new app and cleared its current-app marker, which
        // un-hid the reader over DRONES' close button and killed its loop:
        // "could not close", again, by friendly fire.
        if ((uiNamespace getVariable [QEGVAR(tacpad,appCurrent), ""]) isEqualTo "support") then {
            uiNamespace setVariable [QEGVAR(tacpad,appCurrent), ""];
            {
                (_x param [0, controlNull]) ctrlShow true;
            } forEach values (missionNamespace getVariable [QEGVAR(tacpad,open), createHashMap]);
        };
    };

    // THE POLL ONLY REDRAWS WHEN THE DATA CHANGED. A full teardown every two
    // seconds is the flicker the user reported; the asset list changes
    // rarely, and every press redraws on its own. Idle screen, still screen.
    private _now = str (call ghost_adapter_alive_fnc_supportAssets);
    if (_now isEqualTo (uiNamespace getVariable [QGVAR(supportSeen), ""])) exitWith {};

    // Defer - NOT skip - while a mouse button is held, so a redraw never
    // eats a release. The old guard was the cursor being anywhere over the
    // dialog, which it always is, and it recorded the state BEFORE bailing:
    // every status flip was seen once, swallowed, and never rendered. That
    // was the silent half of "no feedback".
    if (uiNamespace getVariable [QGVAR(supportMouseHeld), false]) exitWith {};
    uiNamespace setVariable [QGVAR(supportSeen), _now];

    ["support"] call EFUNC(tacpad,openApp);
}, 2, []] call CBA_fnc_addPerFrameHandler];
