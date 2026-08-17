#include "script_component.hpp"
/*
 * Author: Ghost
 * Puts the OSD icons back to the shape FUNC(osdCapture) saved.
 *
 * Height is kept from wherever the remap left them - that part of the scaling
 * is right - and the width is re-derived from the saved ratio. The battery
 * keeps its LEFT edge and the two right-enders keep their RIGHT edge, so the
 * strip's ends stay where the layout put them and nothing shifts sideways.
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

private _aspect = _display getVariable [QGVAR(osdAspect), []];
if (_aspect isEqualTo []) exitWith {};

{
    private _osd = _display displayCtrl _x;
    if (isNull _osd) then {continue};

    (ctrlPosition _osd) params ["_ox", "_oy", "_ow", "_oh"];
    private _nw = _oh * (_aspect param [_forEachIndex, 2]);
    // idc 2 is the battery, at the left end; 3 and 4 finish at the right
    private _nx = if (_forEachIndex == 0) then {_ox} else {_ox + _ow - _nw};

    _osd ctrlSetPosition [_nx, _oy, _nw, _oh];
    _osd ctrlCommit 0;
} forEach OSD_IDCS;
