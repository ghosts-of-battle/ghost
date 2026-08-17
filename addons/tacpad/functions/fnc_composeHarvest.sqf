#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads everything typed on the compose pane into the answer map.
 *
 * IT IS CALLED BEFORE EVERY REDRAW, and that is the whole point of it. The pane
 * is thrown away and rebuilt on every press - picking a choice, opening a marker
 * list, inserting a template - and a rebuilt pane has new edits with nothing in
 * them. Without this, ticking a box halfway down a 9-line wiped the eight lines
 * above it, which the old compose form did on every single press.
 *
 * THE ADDRESS IS NOT HARVESTED. TO is pressed rather than typed - on the reader's
 * left rail, or in the picker behind CHANGE - so there is no control to read it
 * off, and the branch that used to try was left over from a typed TO field that
 * nothing has created for a long time. The CC line beside it IS typed, and is.
 *
 * A GRID THE PLAYER DID NOT TYPE IS A POSITION. CURRENT LOC and the marker list
 * store a real position so the thread anchors somewhere the map can pin, and the
 * text they were shown as is kept beside it - if the edit still reads as it was
 * shown, the position stands; if it has been typed over, the typing wins.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ghost_tacpad_fnc_composeHarvest
 *
 * Public: No
 */

private _display = uiNamespace getVariable [QGVAR(reader), displayNull];
if (isNull _display) exitWith {};

{
    private _ctrl = _x;

    if (_ctrl getVariable [QGVAR(tagField), false]) then {
        GVAR(composeTags) = ctrlText _ctrl;
        continue;
    };

    // THE CC LINE, AND NOT INTO composeTo. It is kept as the player typed it -
    // "@HQ, @REAPER" - and resolved to mailbox ids at the send; writing it into
    // the addressee would replace who the message is FOR with who is copied on
    // it. See FUNC(composeCcIds).
    if (_ctrl getVariable [QGVAR(ccField), false]) then {
        GVAR(composeCc) = ctrlText _ctrl;
        continue;
    };

    private _key = _ctrl getVariable [QGVAR(fieldKey), ""];
    if (_key isEqualTo "") then {continue};

    private _text = trim (ctrlText _ctrl);

    // An emptied box is an unanswered field, not an empty string - otherwise a
    // cleared required field still passes validation.
    if (_text isEqualTo "") then {
        GVAR(composeValues) deleteAt _key;
        GVAR(composeGridText) deleteAt _key;
        continue;
    };

    if (_text isEqualTo (GVAR(composeGridText) getOrDefault [_key, ""])) then {continue};

    GVAR(composeGridText) deleteAt _key;
    GVAR(composeValues) set [_key, _text];
} forEach (allControls _display);
