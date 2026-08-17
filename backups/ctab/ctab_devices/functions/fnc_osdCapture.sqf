#include "script_component.hpp"
/*
 * Author: Ghost
 * Remembers the shape cTab drew its OSD icons at, BEFORE the remap moves them.
 *
 * FUNC(remapControls) scales x and y by different factors - the case's glass is
 * not the same aspect as the display cTab authored against - and a picture
 * control scaled that way comes out stretched. Everything else on the glass is
 * a box or text and does not care; the battery, signal and satellite icons are
 * pictures, and a battery twice as wide as it should be is the first thing the
 * eye lands on.
 *
 * So the ratio is taken here and restored afterwards by FUNC(osdRestore). Must
 * be called before the remap, or it saves the stretched shape as the truth.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

_display setVariable [QGVAR(osdAspect), OSD_IDCS apply {
    (ctrlPosition (_display displayCtrl _x)) params ["", "", "_w0", "_h0"];
    if (_h0 > 0) then {_w0 / _h0} else {2}
}];
