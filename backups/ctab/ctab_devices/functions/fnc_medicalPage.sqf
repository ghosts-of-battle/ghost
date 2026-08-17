#include "script_component.hpp"
/*
 * Author: YonV
 * Draws the MEDICAL app: one double-width card per squad member, carrying the
 * status icons and every vital sign.
 *
 * The cards are ctrlCreate'd rather than config-declared, the same way the
 * intrusion page is built - a squad is any size, and three devices' worth of
 * config classes for a roster that changes at runtime would be dead weight.
 * They are display-only, so none of the catcher machinery applies.
 *
 * Called every tick while the medical page is up, and once on entry. Builds
 * on the first call for a display and refills after that.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_medicalPage
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _page = _display displayCtrl IDC_S7_INFOPAGE;
if (isNull _page) exitWith {};
(ctrlPosition _page) params ["_px", "_py", "_pw", "_ph"];

// The info pages share one text control, laid out as a tall centred column -
// right where the cards go. It still carries this page's title, so rather than
// hide it, it is squeezed to a title bar across the top. Its real rect is
// remembered on the display the first time, and FUNC(infoEnter) puts it back
// when any other app is opened.
private _body = _display displayCtrl IDC_S7_INFOTEXT;
if (!isNull _body) then {
    if (isNil {_display getVariable QGVAR(infoTextRect)}) then {
        _display setVariable [QGVAR(infoTextRect), ctrlPosition _body];
    };
    _body ctrlSetPosition [_px + _pw * 0.04, _py + _ph * 0.02, _pw * 0.92, _ph * 0.10];
    _body ctrlCommit 0;
};

private _roster = call FUNC(medicalRoster);
// SpO2 only means something when the mission simulates oxygen
private _spo2Sim = missionNamespace getVariable ["ace_medical_vitals_simulateSpO2", false];
private _icons = MED_ICONS;
private _font = S7_FONTS select ((profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT]) min (count S7_FONTS - 1));

// Two columns, eight rows: SIXTEEN slots, a full platoon, and the grid is laid
// out for all sixteen however many people are actually on it. Sizing the rows
// to the roster - which is what the old "4 max (rows needed)" did - meant a
// four-man squad got quarter-height cards and the seventeenth man had nowhere
// to go; it also changed every card's shape as people joined or died.
#define MED_COLS 2
#define MED_ROWS 8
private _rows = MED_ROWS;
// x and y gaps take their own numbers - an x unit and a y unit are not the
// same size on screen, and one figure for both ate a third of the height once
// there were seven gaps down the page rather than three.
private _pad = _pw * 0.015;
private _padY = _ph * 0.012;
private _top = _py + _ph * 0.14;
private _cw = (_pw - _pad * (MED_COLS + 1)) / MED_COLS;
private _chh = ((_py + _ph * 0.97) - _top - _padY * (_rows - 1)) / _rows;

private _built = _display getVariable [QGVAR(medCards), []];

// --- the NOTES key and the card it holds up ------------------------------
// Both are made here rather than declared in config because they belong to
// this page alone, and this page builds itself. The key gets a catcher
// appended to the display's own list, so the dispatcher that was installed at
// open time picks it up without knowing anything about medical.
private _notes = _display getVariable [QGVAR(medNotes), []];
if (_notes isEqualTo []) then {
    private _key = _display ctrlCreate [QGVAR(hackButton), -1];
    _key ctrlSetText "NOTES";
    _key ctrlSetTooltip "Hold for the ACE medical reference";

    private _bg = _display ctrlCreate ["RscText", -1];
    _bg ctrlSetBackgroundColor [0.04, 0.05, 0.06, 0.97];
    // Two columns, as the sheet has them: this much text in one column is a
    // wall, and these screens are wider than they are tall.
    private _txt = _display ctrlCreate ["RscStructuredText", -1];
    _txt ctrlSetBackgroundColor [0, 0, 0, 0];
    _txt ctrlSetStructuredText ([0] call FUNC(medicalNotes));
    private _txt2 = _display ctrlCreate ["RscStructuredText", -1];
    _txt2 ctrlSetBackgroundColor [0, 0, 0, 0];
    _txt2 ctrlSetStructuredText ([1] call FUNC(medicalNotes));

    // hidden until the key is held
    {_x ctrlShow false} forEach [_bg, _txt, _txt2];

    private _catcher = _display ctrlCreate [QGVAR(catcher), -1];
    _catcher setVariable [QGVAR(click), ["medNotes", nil]];
    _catcher setVariable [QGVAR(source), _key];
    _display setVariable [QGVAR(catchers),
        (_display getVariable [QGVAR(catchers), []]) + [[_catcher, _key]]];

    _notes = [_key, _bg, _txt, _txt2, _catcher];
    _display setVariable [QGVAR(medNotes), _notes];
};
_notes params ["_nKey", "_nBg", "_nTxt", "_nTxt2", "_nCatcher"];

// Centred along the top of the page: hard right it sat under the device's own
// menu key and the two fought over the same corner.
private _nw = _pw * 0.16;
private _nh = _ph * 0.075;
private _nx = _px + (_pw - _nw) / 2;
private _ny = _py + _ph * 0.015;
{
    _x ctrlSetPosition [_nx, _ny, _nw, _nh];
    _x ctrlCommit 0;
} forEach [_nKey, _nCatcher];
_nKey ctrlShow true;

// The reference covers the WHOLE GLASS, header and all - over the page only,
// it was competing with the roster behind it and hard to read.
(_display getVariable [QGVAR(glass), [_px, _py, _pw, _ph]]) params ["_gx", "_gy", "_gw", "_gh"];
_nBg ctrlSetPosition [_gx, _gy, _gw, _gh];
_nBg ctrlCommit 0;
private _colW = (_gw - _gw * 0.06) / 2;
{
    _x ctrlSetPosition [_gx + _gw * 0.02 + _forEachIndex * (_colW + _gw * 0.02),
        _gy + _gh * 0.02, _colW, _gh * 0.96];
    _x ctrlSetFontHeight (_gh * 0.026);
    _x ctrlCommit 0;
} forEach [_nTxt, _nTxt2];

{
    // The grid holds this many and no more; the seventeenth man would be drawn
    // off the bottom of the glass rather than not at all, which reads as a
    // rendering fault instead of a full roster.
    if (_forEachIndex >= MED_COLS * MED_ROWS) exitWith {};

    _x params ["_rankTxt", "_nameTxt", "_statuses", "_vitals", "_counts"];
    _vitals params ["_hr", "_bpLow", "_bpHigh", "_bloodPct", "_painPct", "_spo2"];
    _counts params ["_open", "_bandaged", "_tqs", "_fx"];

    private _col = _forEachIndex % MED_COLS;
    private _row = floor (_forEachIndex / MED_COLS);
    private _cx = _px + _pad + _col * (_cw + _pad);
    private _cy = _top + _row * (_chh + _padY);

    // card backing and its text, made once and kept on the display. The
    // backing is three slices, not one stretched picture - see FUNC(cardFit).
    private _card = _built param [_forEachIndex, []];
    if (_card isEqualTo []) then {
        _card = ([_display, [], [0, 0, 0, 0]] call FUNC(cardFit)) + [_display ctrlCreate ["RscStructuredText", -1]];
        (_card select 3) ctrlSetBackgroundColor [0, 0, 0, 0];
        _built pushBack _card;
    };
    private _txt = _card select 3;

    // deviceTick puts these away whenever another screen is up, so every pass
    // has to bring them back
    {_x ctrlShow true} forEach _card;

    [_display, _card select [0, 3], [_cx, _cy, _cw, _chh]] call FUNC(cardFit);
    _txt ctrlSetPosition [_cx + _cw * 0.04, _cy + _chh * 0.08, _cw * 0.92, _chh * 0.86];
    _txt ctrlSetFontHeight (_chh * 0.20);
    _txt ctrlCommit 0;

    // the icons, worst first - all of them here, the app has the room
    private _iconLine = "";
    {
        private _key = _x;
        private _row2 = _icons select ((_icons findIf {(_x select 0) == _key}) max 0);
        _iconLine = _iconLine + format ["<img image='%1' size='1.15'/> ", _row2 select 1];
    } forEach _statuses;
    if (_statuses isEqualTo []) then {
        _iconLine = format ["<img image='%1' size='1.15'/>", MED_ICON_OK];
    };

    private _bloodCol = switch (true) do {
        case (_bloodPct < 60): {"#D04539"};
        case (_bloodPct < 85): {"#E9A63C"};
        default {"#B8BABC"};
    };
    // the same bands FUNC(medicalRead) flags on, and the notes card prints
    private _hrCol = ["#B8BABC", "#E9A63C"] select (_hr < 46 || {_hr > 119});
    private _bpCol = ["#B8BABC", "#E9A63C"] select (_bpHigh > 0 && {_bpHigh < 100});

    _txt ctrlSetStructuredText parseText format [
        "<t font='%1' size='1.15' color='#E5E5E5'>%2 %3</t>  %4<br/>"
        + "<t font='%1' size='0.95' color='%5'>HR %6</t>"
        + "<t font='%1' size='0.95' color='%7'>   BP %8/%9</t>"
        + "<t font='%1' size='0.95' color='%10'>   BLOOD %11%12</t>"
        + "<t font='%1' size='0.95' color='%18'>   SPO2 %19</t><br/>"
        + "<t font='%1' size='0.9' color='#7A8C7E'>PAIN %13%12   WOUNDS %14   BANDAGED %15   TQ %16   FRACTURES %17</t>",
        _font, _rankTxt, _nameTxt, _iconLine,
        _hrCol, round _hr,
        _bpCol, _bpHigh, _bpLow,
        _bloodCol, round _bloodPct, "%",
        round _painPct, _open, _bandaged, _tqs, _fx,
        ["#7A8C7E", ["#B8BABC", "#E9A63C"] select (_spo2 < 90)] select _spo2Sim,
        ["--", format ["%1%2", round _spo2, "%"]] select _spo2Sim
    ];
} forEach _roster;

// a squad that shrank leaves spare cards behind
for "_i" from (count _roster) to (count _built - 1) do {
    {_x ctrlShow false} forEach (_built select _i);
};

_display setVariable [QGVAR(medCards), _built];
