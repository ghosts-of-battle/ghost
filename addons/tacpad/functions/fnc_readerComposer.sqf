#include "script_component.hpp"
/*
 * Author: Ghost
 * The composer under a NET conversation: quick phrases, and the way into the
 * full card.
 *
 * DELIBERATELY NOT THE THREAD COMPOSER. That one answers a thread - its quick
 * replies are the ones the thread's own template says are legal, and its buttons
 * carry the thread id. This one addresses a NET, so there is no thread to be
 * legal within and every phrase is free text. Sharing one function would have
 * meant a parameter deciding which half of it applied, which is two composers
 * wearing one name.
 *
 * Arguments:
 * 0: Pane geometry [x, w] <ARRAY>
 * 1: Y the composer starts at <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_geom", [0, 0], [[]], 2], ["_cy", 0, [0]]];

_geom params ["_dx", "_dw"];

// The same root the thread view uses - the reader's own content group, not a
// uiNamespace variable that nothing writes.
private _display = uiNamespace getVariable [QGVAR(reader), displayNull];
if (isNull _display) exitWith {};

private _root = (_display displayCtrl IDC_RD_ROOT) controlsGroupCtrl IDC_RD_CONTENT;
if (isNull _root) exitWith {};

([] call FUNC(theme)) params ["_ground", "_ink", "_accent", "_line"];

private _rowH = ROW_H * GVAR(textScale) * GVAR(uiScale) * safeZoneH;
private _pad = PAD * safeZoneW;
private _padY = PAD * safeZoneH;
private _btnH = ([0.8] call FUNC(textH)) + 2 * _padY;
private _mute = [_ink # 0, _ink # 1, _ink # 2, 0.62];
private _dim = [_ink # 0, _ink # 1, _ink # 2, 0.42];

// WHICH BOX THIS TALKS TO. ALL is a view rather than a net, so it falls back to
// the first mailbox the mission named - the same rule the compose pane uses, so
// a message sent from either lands in the same place.
private _net = GVAR(readerNet);
if (_net isEqualTo "ALL") then {
    private _boxes = ((EGVAR(messaging,namedBoxes) splitString ",") apply {trim _x}) select {_x isNotEqualTo ""};
    _net = _boxes param [0, "HQ"];
};

[_root, [_dx + _pad, _cy - _padY, _dw - 2 * _pad, RULE_THICK * pixelH], _ink] call FUNC(drawFill);

[
    _root, [_dx + _pad, _cy, _dw - 2 * _pad, _rowH],
    format ["SEND TO %1", toUpper _net], _mute, 0.62, true, "left", true
] call FUNC(drawText);
_cy = _cy + _rowH;

// The player's own phrases - see the quickReplies setting. Free text on a net,
// because there is no thread here for a reply template to move the state of.
// OUR OWN setting - the EGVAR(tacpad_apps,...) read was the wrong-component
// classic: nothing defines it, nil split threw, and everything from the
// quick-reply row down never drew under a net conversation.
private _quick = ((GVAR(quickReplies) splitString ",") apply {trim _x}) select {_x isNotEqualTo ""};
private _perRow = 5;

if (_quick isEqualTo []) then {
    [_root, [_dx + _pad, _cy, _dw - 2 * _pad, _btnH], "NO QUICK REPLIES SET", _dim, 0.7, true] call FUNC(drawText);
} else {
    if (count _quick > _perRow) then {_quick = _quick select [0, _perRow]};
    private _qw = (_dw - 2 * _pad) / (count _quick);

    {
        private _qx = _dx + _pad + _forEachIndex * _qw;

        [_root, [_qx, _cy, _qw - _pad, _btnH], _ink, RULE_THICK] call FUNC(drawFrame);
        [_root, [_qx + _pad, _cy, _qw - 3 * _pad, _btnH], toUpper _x, _ink, 0.68, true, "center"] call FUNC(drawText);

        private _hit = [_root, [_qx, _cy, _qw - _pad, _btnH], {
            params ["_ctrl"];
            private _text = _ctrl getVariable [QGVAR(quickText), ""];
            if (_text isEqualTo "") exitWith {};

            private _key = ((["freetext"] call EFUNC(messaging,template)) getOrDefault ["order", []]) param [0, "Text.A"];
            ["freetext", [[_key, _text]], [_ctrl getVariable [QGVAR(quickBox), ""]], ""] call EFUNC(messaging,submit);
        }] call FUNC(drawHit);
        _hit setVariable [QGVAR(quickText), _x];
        _hit setVariable [QGVAR(quickBox), format ["B:%1", _net]];
    } forEach _quick;
};

_cy = _cy + _btnH + _padY;

// The full card, addressed to this net. Composing is a state of this pane - see
// FUNC(composePane) - so the conversation stays on screen behind it.
private _actW = _dw * 0.24;
[_root, [_dx + _pad, _cy, _actW, _btnH], _ink, RULE_THIN] call FUNC(drawFrame);
[_root, [_dx + _pad * 2, _cy, _actW - 3 * _pad, _btnH], "+ TEMPLATE", _ink, 0.68, true, "center"] call FUNC(drawText);

private _tmpl = [_root, [_dx + _pad, _cy, _actW, _btnH], {
    params ["_ctrl"];
    GVAR(composeTo) = _ctrl getVariable [QGVAR(quickBox), ""];
    ["", "", true] call FUNC(composeOpen);
}] call FUNC(drawHit);
_tmpl setVariable [QGVAR(quickBox), format ["B:%1", _net]];

// And the plain message, which is what most traffic on a net actually is.
private _msgX = _dx + _pad * 2 + _actW;
[_root, [_msgX, _cy, _actW, _btnH], _accent, RULE_THICK] call FUNC(drawFrame);
[_root, [_msgX + _pad, _cy, _actW - 3 * _pad, _btnH], "+ MESSAGE", _accent, 0.68, true, "center"] call FUNC(drawText);

private _new = [_root, [_msgX, _cy, _actW, _btnH], {
    params ["_ctrl"];
    GVAR(composeTo) = _ctrl getVariable [QGVAR(quickBox), ""];
    ["", "", false] call FUNC(composeOpen);
}] call FUNC(drawHit);
_new setVariable [QGVAR(quickBox), format ["B:%1", _net]];
