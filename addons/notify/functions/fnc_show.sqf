#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_notify_fnc_show

Description:
    Fills the first free slot and fades it in. Internal - callers use
    FUNC(notify), which handles the enabled setting, the display and the queue.

Parameters:
    _display : DISPLAY - the notification layer.
    _title   : STRING
    _text    : STRING
    _colour  : ARRAY - RGBA

Returns:
    NUMBER - slot index used, -1 if the stack was full.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_display", "_title", "_text", "_colour"];

private _used = GVAR(slots) apply { _x select 0 };
private _slot = -1;
for "_i" from 0 to (SLOT_COUNT - 1) do {
    if !(_i in _used) exitWith { _slot = _i };
};
if (_slot < 0) exitWith { -1 };

private _row = count GVAR(slots);
private _ctrls = [_display, _slot, _row] call FUNC(place);
_ctrls params ["_panel", "_bar", "_txt"];

_bar ctrlSetBackgroundColor _colour;

private _hex = format ["#%1%2%3",
    [255 * (_colour select 0), 2] call CBA_fnc_formatNumber,
    [255 * (_colour select 1), 2] call CBA_fnc_formatNumber,
    [255 * (_colour select 2), 2] call CBA_fnc_formatNumber];

// Structured text takes its face from the markup, not from ctrlSetFont, so the
// font setting is baked in here. Sizes stay as multipliers of the control's own
// height, which FUNC(place) has already set from the setting.
_txt ctrlSetStructuredText parseText format [
    "<t font='%1' size='1.0' color='%2'>%3</t>%4<t font='%1' size='0.9'>%5</t>",
    GVAR(font), _hex, _title, ["<br/>", ""] select (_text isEqualTo ""), _text];

{
    _x ctrlSetFade 1;
    _x ctrlCommit 0;
    _x ctrlShow true;
    _x ctrlSetFade 0;
    _x ctrlCommit 0.25;
} forEach _ctrls;

GVAR(slots) pushBack [_slot, CBA_missionTime + GVAR(duration)];

if (GVAR(pfh) < 0) then {
    GVAR(pfh) = [FUNC(tick), TICK_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
};

_slot
