#include "script_component.hpp"
/*
 * Author: YonV
 * Draws one card - the panel behind a row on the MEDICAL and CONVOY pages - as
 * three slices, and fits them to a rectangle.
 *
 * A card used to be a single stretched texture, and that is why its corners
 * never looked right. A rounded rectangle stretched to an aspect it was not
 * authored at gives ELLIPTICAL corners, and a card has no one aspect to author
 * for: it is a different shape on each of the three devices, and changes again
 * with the number of rows the page lays out.
 *
 *     [ card_l ][=== card_m ===][ card_r ]
 *
 * The caps are drawn square - the card's height, and three quarters of that in
 * x units, which is what square means in Arma's UI grid - so their arcs stay
 * circular at any width. Only the middle is stretched, and it is a flat fill
 * with no corners in it to distort. See data/gen_cards.py.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 * 1: The card's three slices, [] to make them <ARRAY>
 * 2: Rectangle - x, y, w, h <ARRAY>
 *
 * Return Value:
 * The three slices, left to right <ARRAY>
 *
 * Example:
 * [_display, _parts, [_cx, _cy, _cw, _ch]] call ghost_ctab_devices_fnc_cardFit
 */

params [["_display", displayNull, [displayNull]], ["_parts", [], [[]]], ["_rect", [], [[]]]];
if (isNull _display) exitWith {_parts};

if (count _parts < 3) then {
    _parts = [
        QPATHTOF(data\card_l_ca.paa),
        QPATHTOF(data\card_m_ca.paa),
        QPATHTOF(data\card_r_ca.paa)
    ] apply {
        private _slice = _display ctrlCreate ["RscPicture", -1];
        _slice ctrlSetText _x;
        _slice
    };
};

_rect params ["_rx", "_ry", "_rw", "_rh"];
_parts params ["_left", "_mid", "_right"];

// square caps, and never more than half the card each - a card narrower than
// two caps would otherwise have them overlap and cross over
private _cap = (_rh * 3/4) min (_rw / 2);

_left ctrlSetPosition [_rx, _ry, _cap, _rh];
_mid ctrlSetPosition [_rx + _cap, _ry, (_rw - _cap * 2) max 0, _rh];
_right ctrlSetPosition [_rx + _rw - _cap, _ry, _cap, _rh];
{_x ctrlCommit 0} forEach _parts;

_parts
