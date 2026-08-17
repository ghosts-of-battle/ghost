#include "script_component.hpp"
/*
 * Author: YonV
 * Moves every control cTab authored for its own device art into a new case's
 * glass, proportionally. cTab laid its OSD row, map-tools box, menus and
 * loading text out for one rectangle of its art; a new case has a different
 * one, and chasing each control by IDC missed some every time - this sweeps
 * the lot.
 *
 * Only top-level controls move. A control inside a controls group is
 * positioned relative to the group, so it rides along when its group moves -
 * remapping it too would double the shift.
 *
 * Resizing a controls group does NOT resize its children, though: they keep the
 * offsets they were authored with. cTab builds its message, compose and menu
 * screens as groups, so stretching the group into a wider glass left the
 * content sitting at its old size in the corner with dead screen beside it -
 * "should fit the full screen". Every group this sweep resizes therefore has
 * its children scaled by the same factors afterwards.
 *
 * Runs against config positions, so it must run once, before anything else
 * moves controls; deviceOpen's once-per-display guard is what ensures that.
 *
 * Arguments:
 * 0: The device display <DISPLAY>
 * 1: The bezel rect the config positions were authored against <ARRAY>
 * 2: The bezel rect as it stands now <ARRAY>
 * 3: cTab's content rectangle on its own art, canvas px of 2048 <ARRAY>
 * 4: The new case's glass rectangle, canvas px of 2048 <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display, _bOld, _bNew, [452,713,1134,624], [232,661,1538,725]]
 *     call ghost_ctab_devices_fnc_remapControls
 */

params ["_display", "_bOld", "_bNew", "_oldArt", "_newArt"];

_bOld params ["_box", "_boy", "_bow", "_boh"];
_bNew params ["_bnx", "_bny", "_bnw", "_bnh"];
_oldArt params ["_ox", "_oy", "_ow", "_oh"];
_newArt params ["_nx", "_ny", "_nw", "_nh"];

// [group control, x factor, y factor] for every controls group that moves
private _groups = [];

{
    if (!isNull ctrlParentControlsGroup _x) then {continue};
    if (ctrlIDC _x == S7_IDC_BEZEL) then {continue};

    (ctrlPosition _x) params ["_px", "_py", "_pw", "_ph"];

    // the control's config position, as canvas px of the old bezel rect
    private _ax = (_px - _box) / _bow * 2048;
    private _ay = (_py - _boy) / _boh * 2048;
    private _aw = _pw / _bow * 2048;
    private _ah = _ph / _boh * 2048;

    // only what cTab put inside its content rectangle - bezel-key hotspots
    // and templates parked at the origin stay where they are
    private _cx = _ax + _aw / 2;
    private _cy = _ay + _ah / 2;
    if (_cx < _ox || {_cx > _ox + _ow} || {_cy < _oy} || {_cy > _oy + _oh}) then {continue};

    // old content rect -> new glass rect, linearly
    private _rx = _nx + (_ax - _ox) * _nw / _ow;
    private _ry = _ny + (_ay - _oy) * _nh / _oh;
    private _rw = _aw * _nw / _ow;
    private _rh = _ah * _nh / _oh;

    private _nwid = _rw / 2048 * _bnw;
    private _nhgt = _rh / 2048 * _bnh;

    // CT_CONTROLS_GROUP - remember how far it stretched, its children need the
    // same treatment once the sweep is done
    if (ctrlType _x == 15 && {_pw > 0} && {_ph > 0}) then {
        _groups pushBack [_x, _nwid / _pw, _nhgt / _ph];
    };

    _x ctrlSetPosition [
        _bnx + _rx / 2048 * _bnw,
        _bny + _ry / 2048 * _bnh,
        _nwid,
        _nhgt
    ];
    _x ctrlCommit 0;
} forEach allControls _display;

if (_groups isEqualTo []) exitWith {};

// second pass: the children, scaled by whatever their group did. Group-relative
// positions, so the offsets scale exactly like the sizes do.
private _parents = _groups apply {_x select 0};
{
    private _grp = ctrlParentControlsGroup _x;
    if (isNull _grp) then {continue};
    private _i = _parents findIf {_x isEqualTo _grp};
    if (_i < 0) then {continue};

    (_groups select _i) params ["", "_fx", "_fy"];
    (ctrlPosition _x) params ["_px", "_py", "_pw", "_ph"];
    _x ctrlSetPosition [_px * _fx, _py * _fy, _pw * _fx, _ph * _fy];
    _x ctrlCommit 0;
} forEach allControls _display;
