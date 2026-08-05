#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_productSigintHint

Description:
    Product 1b. One circle over the densest enemy cluster in coverage - no count,
    no icons, no label. You learn where the weight is, not what it is.

    Grid-bin clustering (D3): bin group positions into 500 m cells, take the
    fullest cell, then gather everything within 750 m of that cell's centroid.

Parameters:
    _pos  : ARRAY - centre of coverage.
    _side : SIDE  - the side that earned it.

Returns:
    BOOL - true if a cluster was found and rendered.

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_pos", [0,0,0], [[]]], ["_side", west, [west]]];

private _radius = [QGVAR(cfg_local_picture_radius)] call FUNC(hackSetting);
private _points = [];
{
    private _leader = leader _x;
    if (isNull _leader || {!alive _leader}) then { continue };
    if (side _x isEqualTo _side || {side _x isEqualTo civilian}) then { continue };
    if ((getPosASL _leader) distance2D _pos > _radius) then { continue };
    if (({alive _x} count units _x) == 0) then { continue };
    _points pushBack (getPosASL _leader);
} forEach allGroups;

if (!isNil "ALIVE_fnc_getNearProfiles") then {
    private _sideStr = switch (_side) do {
        case west: {"EAST"}; case east: {"WEST"}; default {"GUER"};
    };
    private _profiles = [_pos, _radius, [_sideStr]] call ALIVE_fnc_getNearProfiles;
    if (_profiles isEqualType []) then {
        {
            private _ppos = _x param [1, []];
            if (_ppos isEqualType [] && {count _ppos >= 2}) then { _points pushBack _ppos };
        } forEach _profiles;
    };
};

if (_points isEqualTo []) exitWith { false };

// --- bin into a 500 m grid, take the fullest bin --------------------------
private _bins = createHashMap;
{
    private _k = format ["%1_%2", floor ((_x select 0) / SIGINT_BIN), floor ((_x select 1) / SIGINT_BIN)];
    private _cur = _bins getOrDefault [_k, []];
    _cur pushBack _x;
    _bins set [_k, _cur];
} forEach _points;

private _bestKey = "";
private _bestN = 0;
{
    if (count _y > _bestN) then { _bestN = count _y; _bestKey = _x };
} forEach _bins;

private _bin = _bins get _bestKey;
private _cx = 0; private _cy = 0;
{ _cx = _cx + (_x select 0); _cy = _cy + (_x select 1) } forEach _bin;
private _centre = [_cx / (count _bin), _cy / (count _bin), 0];

// --- everything near that centroid is the cluster -------------------------
private _cluster = _points select { (_centre distance2D _x) <= SIGINT_CLUSTER };
private _spread = 0;
{ _spread = _spread max (_centre distance2D _x) } forEach _cluster;

[QGVAR(render), [
    "circle",
    ["sig"] call FUNC(intelId),
    _centre,
    (_spread + SIGINT_PAD) max SIGINT_MIN_R,
    "ColorRed",
    "", "",
    _side
]] call CBA_fnc_globalEvent;

true
